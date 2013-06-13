

#ifndef __PLAYERPOOL_H__
#define __PLAYERPOOL_H__

#include "Type.h"
#include "ServerPlayer.h"

#define MAX_POOL_SIZE 1280

//分配玩家数据的数据池
//
class PlayerPool
{
public :
    PlayerPool( ) ;
    ~PlayerPool( ) ;

    //初始化数据池
    BOOL                Init( UINT PlayerPoolMaxCount = MAX_POOL_SIZE ) ;

    //根据玩家的PlayerID取得数据指针
    ServerPlayer*        GetPlayer( PlayerID_t PlayerID )
    {
        if( PlayerID==INVALID_ID || PlayerID>=(PlayerID_t)m_PlayerPoolMaxCount || PlayerID<0 )
            return NULL ;
        return &(m_pPlayer[PlayerID]) ;
    };

    //从空闲数据池里分配一个玩家数据
    ServerPlayer*        NewPlayer( ) ;
    //将一个玩家数据清空回收
    void                DelPlayer( PlayerID_t PlayerID ) ;

    void                Lock( ){ m_Lock.Lock() ; } ;
    void                Unlock( ){ m_Lock.Unlock() ; } ;

private :
    ServerPlayer*        m_pPlayer ;
    UINT                m_Position ;

    MyLock                m_Lock ;
    UINT                m_PlayerCount ;

    UINT                m_PlayerPoolMaxCount;

};


extern PlayerPool* g_pPlayerPool ;


#endif
