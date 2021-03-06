#ifndef _CONSUME_H_
#define _CONSUME_H_

class CPlayer;

enum eConsumeType
{
    ConsumeNumerical = 0
};

enum eConsumeGoodsType
{
    ConsumeGold = 0,
    ConsumeEmpirical
};

class CConsume
{
    public:
        CConsume(int Number, int ConsumeType, int ConsumeGoodsType, CPlayer& player):Number(Number), ConsumeType(ConsumeType), ConsumeGoodsType(ConsumeGoodsType), player(player){}
        ~CConsume(){}
        bool CheckConsume();
        int ConsumeReduce();
    private:
        bool AlreadyCheck = false;
        bool CheckResult = false;
        int Number;
        int ConsumeType;
        int ConsumeGoodsType;
        CPlayer& player;
};

#endif
