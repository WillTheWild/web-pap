/**
 * PAP Server Engine ( https://github.com/viticm/web-pap )
 * $Id SMULogicManager.h
 * @link https://github.com/viticm/web-pap/tree/master/server for the canonical source repository
 * @copyright Copyright (c) 2013-2013 viticm( viticm@126.com )
 * @license
 * @user viticm<viticm@126.com>
 * @date 2013-8-15 14:39:05
 * @uses share memory used data logic manager for share memory
 */
#ifndef _SMU_LOGIC_MANAGER_H_
#define _SMU_LOGIC_MANAGER_H_
#include "Type.h"
#include "SMUManager.h"
#include "Log.h"
#include "TimeManager.h"
#include "CommandThread.h"

#define MAX_SERVER_IDLE_TIME    30*1000  //服务器停止响应时间(毫秒)

extern GLOBAL_CONFIG    g_SMConfig ;


template< typename T >
class SMULogicManager
{
public:
    SMULogicManager():
      m_PoolSharePtr( 0 ),
      m_pSMU( 0 ),
      m_FinalSaveTime( 0 )
    {}
    ~SMULogicManager(){}

public:
    BOOL            Init( SMUPool< T >* pPool )
    {
        if ( !pPool )
            return FALSE ;
        m_PoolSharePtr = pPool ;
        m_PoolSharePtr->SetHeadVer( 0 ) ;
        m_OldCheckTime = g_pTimeManager->RunTime() ;
        m_OldVer = 0 ;

        return DoPostInit() ; 
    }

public:

    BOOL            HeartBeat()
    {
        
        UINT uTime = g_pTimeManager->RunTime() ;
        
        if ( MAX_SERVER_IDLE_TIME < ( uTime - m_OldCheckTime ) )
        {
            m_OldCheckTime = uTime ;
            UINT ver = m_PoolSharePtr->GetHeadVer() ;
            if ( ( ver == m_OldVer ) && 0 < m_OldVer )
            {
                m_OldVer = 0 ;   
                Log::SaveLog("ShareMemory", "Receive Server Crash command.." ) ;
                BOOL bRet =  DoSaveAll() ;

                //清理对应的数据标志
                DoClear() ;        

                m_PoolSharePtr->SetHeadVer( 0 ) ;
                return bRet ;
            }
            m_OldVer = ver ;
        }   

        switch ( g_SMConfig.Commands.cmdType ) 
        {
            case CMD_SAVE_ALL:
            {
                return DoSaveAll() ;
                break ;
            }
            case CMD_CLEAR_ALL:
            {
                return DoClear() ;
                break ;
            }
            case CMD_UNKNOW:
            {
                return DoNormalSave() ;
                break ;
            }
            default:
            {
                return FALSE ;
            }
        }   
    }
    BOOL             DoSaveAll() ;
    BOOL             DoNormalSave() ;
    BOOL             DoClear() ;
    BOOL             DoPostInit() ;
private:

    SMUPool<T>*      m_PoolSharePtr ;
    T*               m_pSMU ;
    UINT             m_FinalSaveTime ;
    BOOL             m_bReady ;
    UINT             m_OldVer ;
    UINT             m_OldCheckTime ;

} ;

#endif
