#ifndef _SINGLETON_OBJECT_H_
#define _SINGLETON_OBJECT_H_

#include "Singleton.hpp"

template<class T>
class CSingletonObject;
template<class T>
class CSingletonObjectDeleter;

template<class T>
class CSingletonObjectDeleter
{
    public:
        CSingletonObjectDeleter(){}
        ~CSingletonObjectDeleter(){};
        void operator() (CSingletonObject<T> *t)const
        {
           if (t != nullptr)
           {
               delete t;
           }
        }
};

template<class T>
class CSingletonObject: public CSingleton<CSingletonObject<T>, CSingletonObjectDeleter<T> >, public T
{
    friend class CSingletonObjectDeleter<T>;
    friend class CSingleton<CSingletonObject<T>, CSingletonObjectDeleter<T> >;
    protected:

		CSingletonObject(const CSingletonObject&) = delete;
		CSingletonObject(CSingletonObject &&) = delete;
		CSingletonObject &operator = (const CSingletonObject &) = delete;
		CSingletonObject &operator = (CSingletonObject &&) = delete;

        CSingletonObject(){}
        virtual ~CSingletonObject(){}
};


#endif
