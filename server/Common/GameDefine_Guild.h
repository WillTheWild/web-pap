#ifndef __GAMEDEFINE_GUILD_H__
#define __GAMEDEFINE_GUILD_H__

#define MAX_NUM_PER_POSITION        20

enum GUILD_STATUS
{
    GUILD_STATUS_INVALID            = 0,
    GUILD_STATUS_NORMAL,
};

enum GUILD_POSITION
{
    GUILD_POSITION_INVALID            = 0,

    GUILD_POSITION_TRAINEE,                    // 预备帮众，待批准
    GUILD_POSITION_MEMBER,                    // 普通帮众

    GUILD_POSITION_ELITE_MEMBER,            // 精英帮众
    GUILD_POSITION_COM,                        // 商业官员
    GUILD_POSITION_AGRI,                    // 农业官员
    GUILD_POSITION_INDUSTRY,                // 工业官员
    GUILD_POSITION_HR,                        // 人事官员

    GUILD_POSITION_ASS_CHIEFTAIN,            // 副帮主
    GUILD_POSITION_CHIEFTAIN,                // 帮主

    GUILD_POSITION_SIZE,                    // 职位级别数
};



enum GUILD_AUTHORITY
{
    GUILD_AUTHORITY_INVALID            = 0,

    GUILD_AUTHORITY_ASSIGN            = 0x1,        // 职务调动权
    GUILD_AUTHORITY_AUTHORIZE        = 0x2,        // 权限调整权
    GUILD_AUTHORITY_RECRUIT            = 0x4,        // 接收帮众权
    GUILD_AUTHORITY_EXPEL            = 0x8,        // 开除帮众权
    GUILD_AUTHORITY_DEMISE            = 0x10,        // 禅让权
    GUILD_AUTHORITY_WITHDRAW        = 0x20,        // 支取帮资权
    GUILD_AUTHORITY_DEPOSIT            = 0x40,        // 存入金额权
    GUILD_AUTHORITY_LEAVE            = 0x80,        // 离开帮会权（这个权限有点多余）
    GUILD_AUTHORITY_DIMISS            = 0x100,    // 解散帮会权


    GUILD_AUTHORITY_NUMBER            = 8,    // 权限数量

    // 帮众的通用权限
    GUILD_AUTHORITY_MEMBER            = GUILD_AUTHORITY_DEPOSIT | GUILD_AUTHORITY_LEAVE,
    GUILD_AUTHORITY_ASSCHIEFTAIN    = GUILD_AUTHORITY_ASSIGN | GUILD_AUTHORITY_RECRUIT | GUILD_AUTHORITY_EXPEL | GUILD_AUTHORITY_LEAVE,
    GUILD_AUTHORITY_CHIEFTAIN        = 0x17F,    // 没有离开帮会的权限
};

enum GUILD_RETURN_TYPE
{
    GUILD_RETURN_INVALID            = -1,

    // 创建部分
    GUILD_RETURN_CREATE,                    // 创建成功
    GUILD_RETURN_RESPONSE,                    // 响应成功

    // 加入部分
    GUILD_RETURN_JOIN,                        // 加入申请列表等待批准

    // 权限操作
    GUILD_RETURN_PROMOTE,                    // 0001，任免职务，升职
    GUILD_RETURN_DEMOTE,                    // 0001，任免职务，降职
    GUILD_RETURN_AUTHORIZE,                    // 0002，调整权限，授权
    GUILD_RETURN_DEPRIVE_AUTHORITY,            // 0002，调整权限，解除权限
    GUILD_RETURN_RECRUIT,                    // 0003，接收帮众
    GUILD_RETURN_EXPEL,                        // 0004，开除帮众
    GUILD_RETURN_DEMISE,                    // 0005，禅让
    GUILD_RETURN_WITHDRAW,                    // 0006，支取金额
    GUILD_RETURN_DEPOSIT,                    // 0007，存入金额
    GUILD_RETURN_LEAVE,                        // 0008，离开帮会
    GUILD_RETURN_REJECT,                    // 0009，拒绝申请
    
    GUILD_RETURN_FOUND,                        // 正式成立（人数达到）
    GUILD_RETURN_DISMISS,                    // 解散帮会
    GUILD_RETURN_CHANGEDESC,                // 修改帮会宗旨

    GUILD_RETURN_NAME,                        // 刷新帮会名

    GUILD_RETURN_SIZE,
};

enum GUILD_ERROR_TYPE
{
    // 创建部分
    GUILD_ERROR_NOTHING                = 0,    // 没什么错误……
    GUILD_ERROR_WANTING                = -1,    // 不符合创建条件，只给出错误符，具体的错误描述由脚本发送
    GUILD_ERROR_INVALID_NAME        = -2,    // 名字非法
    GUILD_ERROR_DUPLICATED_NAME        = -3,    // 重名
    GUILD_ERROR_GUILD_FULL            = -4,    // 不能创建更多帮会

    // 加入部分
    GUILD_ERROR_MEMBER_FULL            = -5,    // 帮会满员了
    GUILD_ERROR_PROPOSER_FULL        = -6,    // 申请人已满
    GUILD_ERROR_IN_GUILD            = -7,    // 玩家已加入帮会
    GUILD_ERROR_NOT_EXIST            = -8,    // 帮会不存在

    // 权限操作
    GUILD_ERROR_UNAUTHORIZED        = -9,    // 没有权限
    GUILD_ERROR_NO_VACANCY            = -10,    // 0001，任免职务，没有职位空缺
    GUILD_ERROR_NO_QUALIFICATION    = -11,    // 0002，调整权限，被调整人员（职位）不够资格
    GUILD_ERROR_CASHBOX_FULL        = -12,    // 0007，存入金额，帮会金库已满

    GUILD_ERROR_ALREADY_MEMBER        = -13,    // 此人已经是帮会成员
    GUILD_ERROR_MEMBER_NOT_EXIST    = -14,    // 此人不在帮会中

    //禅让
    GUILD_ERROR_NO_ASS_CHIEF        = -15,    // 没有副帮主
    GUILD_ERROR_GUILD_ALREADY_EXIST = -16,    //    帮会已存在

    //这个职位人数已满，不能任命
    GUILD_ERROR_POS_FULL            = -17,    //这个职位人数已满，不能任命

    GUILD_ERROR_ALREADY_IN_PROPOSER_LIST = -18,        //申请人已经在申请列表中了

    GUILD_ERROR_INVALID_CAMP            = -19,        //申请人的阵营非法



    // 解散部分

    GUILD_ERROR                        = -64,    // 不明错误
};

enum GUILD_PACKET_TYPE
{
    GUILD_PACKET_INVALID            = -1,
    GUILD_PACKET_CG_ASKLIST,                // 询问帮会列表(UCHAR)
    GUILD_PACKET_CG_CREATE,                    // 创建帮会
    GUILD_PACKET_CG_JOIN,                    // 加入帮会
    GUILD_PACKET_CG_ASKINFO,                // 询问帮会信息
    GUILD_PACKET_CG_APPOINT,                // 帮会任免
    GUILD_PACKET_CG_ADJUSTAUTHORITY,        // 调整帮会权限
    GUILD_PACKET_CG_RECRUIT,                // 帮会收人
    GUILD_PACKET_CG_EXPEL,                    // 帮会踢人
    GUILD_PACKET_CG_WITHDRAW,                // 提取帮资
    GUILD_PACKET_CG_DEPOSIT,                // 存入帮资
    GUILD_PACKET_CG_LEAVE,                    // 离开帮会
    GUILD_PACKET_CG_DISMISS,                // 解散帮会
    GUILD_PACKET_CG_DEMISE,                    // 解散帮会

    GUILD_PACKET_CG_CHANGEDESC,                // 更改帮会宗旨

    GUILD_PACKET_CG_GW_SEPARATOR,            // 分隔符

    GUILD_PACKET_GW_ASKLIST,                // 询问帮会列表(GUID_t, UCHAR)
    GUILD_PACKET_GW_CREATE,                    // 创建帮会
    GUILD_PACKET_GW_JOIN,                    // 加入帮会
    GUILD_PACKET_GW_ASKINFO,                // 询问帮会信息
    GUILD_PACKET_GW_APPOINT,                // 帮会任免
    GUILD_PACKET_GW_ADJUSTAUTHORITY,        // 调整帮会权限
    GUILD_PACKET_GW_RECRUIT,                // 帮会收人
    GUILD_PACKET_GW_EXPEL,                    // 帮会踢人
    GUILD_PACKET_GW_WITHDRAW,                // 提取帮资
    GUILD_PACKET_GW_DEPOSIT,                // 存入帮资
    GUILD_PACKET_GW_LEAVE,                    // 离开帮会
    GUILD_PACKET_GW_DISMISS,                // 解散帮会
    GUILD_PACKET_GW_DEMISE,                    // 禅让
    GUILD_PACKET_GW_ASKMEMBERLIST,            // 帮会成员信息列表
    GUILD_PACKET_GW_CHANGEDESC,                // 更改帮会宗旨
    
    GUILD_PACKET_GW_WG_SEPARATOR,            // 分隔符

    GUILD_PACKET_WG_LIST,                    // 帮会列表
    GUILD_PACKET_WG_MEMBER_LIST,            // 帮众列表
    GUILD_PACKET_WG_GUILD_INFO,                // 帮会信息
    GUILD_PACKET_WG_APPOINT_INFO,            // 帮会可任命信息
    GUILD_PACKET_WG_SELF_GUILD_INFO,        // 个人帮派信息

    GUILD_PACKET_WG_GC_SEPARATOR,            // 分隔符

    GUILD_PACKET_GC_LIST,                    // 帮会列表
    GUILD_PACKET_GC_MEMBER_LIST,            // 帮众列表
    GUILD_PACKET_GC_GUILD_INFO,                // 帮会信息
    GUILD_PACKET_GC_APPOINT_INFO,            // 帮会可任命信息
    GUILD_PACKET_GC_SELF_GUILD_INFO,        // 个人帮派信息
};


#endif // __GAMEDEFINE_GUILD_H__
