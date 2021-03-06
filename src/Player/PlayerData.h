#ifndef _PLAYERDATA_H_
#define _PLAYERDATA_H_

#include <memory>
#include <unordered_map>
#include <string>

#include "../Hero/Hero.h"
#include "../protobuf/ClientMessage.pb.h"
#include "../ObjectPool/SingletonObject.hpp"
#include "../ObjectPool/ObjectPool.hpp"

class CTCPClientSocket;

class CPlayer;
class CPlayerManager; 

typedef CObjectPool<CPlayer> PlayerPool;
typedef CSingletonObject<CPlayerManager> PlayerManager;


class CPlayer
{
    public:
        CPlayer(int PlayerID = 0, const std::weak_ptr<CTCPClientSocket>& socketPtr = std::weak_ptr<CTCPClientSocket>()):PlayerID(PlayerID), socketPtr(socketPtr){};
        ~CPlayer(){}

        std::weak_ptr<CTCPClientSocket> GetSocket();
        void SetSocket(const std::weak_ptr<CTCPClientSocket>& Socket);

        int PlayerInfo2PB(PBPlayerInfo &PlayerInfo);
        CHeroData& GetHeroData();
        int GetPlayerID();
        int GetGold();
        int ConsumeGold(int ConsumeNum);
        int AddGold(int AddNum);

        int GetEmpirical();
        int ConsumeEmpirical(int ConsumeNum);
        int AddEmpirical(int AddNum);
        
        std::string GetUsername();

        int Player2DB(DBPlayer &db);
        int DB2Player(const DBPlayer &db);
    private:
        CHeroData HeroData;
        std::weak_ptr<CTCPClientSocket> socketPtr;
        std::string Username;
        int Gold;
        int Empirical;
        int PlayerID;
};

class CPlayerManager
{
    public:
        std::weak_ptr<CPlayer> CreatePlayer(int PlayerID,const std::weak_ptr<CTCPClientSocket>& socketPtr = std::weak_ptr<CTCPClientSocket>());
        std::weak_ptr<CPlayer> GetPlayer(int PlayerID);
        void RemovePlayer(int PlayerID);
        int PlayerList2PB(PBS2CGetPlayerListRes& res);
    protected:
        typedef std::unordered_map<int, PlayerPool::Ptr> PlayerList;
        PlayerList list;
        CPlayerManager(){}
        ~CPlayerManager(){}
};

#endif
