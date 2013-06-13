
#ifndef __GAMEDEFINE_ITEM_H__
#define __GAMEDEFINE_ITEM_H__

enum HUMAN_EQUIP
{
    HEQUIP_WEAPON        =0,        //武器    WEAPON
    HEQUIP_CAP            =1,        //帽子    DEFENCE
    HEQUIP_ARMOR        =2,        //盔甲    DEFENCE
    HEQUIP_CUFF            =3,        //护腕    DEFENCE
    HEQUIP_BOOT            =4,        //鞋    DEFENCE
    HEQUIP_SASH            =5,        //腰带    ADORN
    HEQUIP_RING            =6,        //戒子    ADORN
    HEQUIP_NECKLACE        =7,        //项链    ADORN
    HEQUIP_RIDER        =8,        //骑乘    ADORN
    HEQUIP_UNKNOW1        =9,
    HEQUIP_UNKNOW2        =10,
    HEQUIP_UNKNOW3        =11,
    HEQUIP_UNKNOW4        =12,
    HEQUIP_UNKNOW5        =13,
    HEQUIP_UNKNOW6        =14,
    HEQUIP_UNKNOW7        =15,
    HEQUIP_UNKNOW8        =16,
    HEQUIP_UNKNOW9        =17,
    HEQUIP_UNKNOW10        =18,
    HEQUIP_UNKNOW11        =19,
    HEQUIP_TOTAL        =20,
    HEQUIP_NUMBER        =9,        //主角装备点总数
};

enum ITEM_ATTRIBUTE
{
    IATTRIBUTE_POINT_MAXHP        =0,        //按点数增加HP的上限
    IATTRIBUTE_RATE_MAXHP        =1,        //按百分比增加HP的上限
    IATTRIBUTE_RESTORE_HP        =2,        //加快HP的回复速度

    IATTRIBUTE_POINT_MAXMP        =3,        //按点数增加MP的上限
    IATTRIBUTE_RATE_MAXMP        =4,        //按百分比增加MP的上限
    IATTRIBUTE_RESTORE_MP        =5,        //加快MP的回复速度
    
    IATTRIBUTE_COLD_ATTACK        =6,        //冰攻击
    IATTRIBUTE_COLD_RESIST        =7,        //冰抵抗
    IATTRIBUTE_COLD_TIME        =8,        //减少冰冻迟缓时间
    IATTRIBUTE_FIRE_ATTACK        =9,        //火攻击
    IATTRIBUTE_FIRE_RESIST        =10,    //火抵抗
    IATTRIBUTE_FIRE_TIME        =11,    //减少火烧持续时间
    IATTRIBUTE_LIGHT_ATTACK        =12,    //电攻击
    IATTRIBUTE_LIGHT_RESIST        =13,    //电抵抗
    IATTRIBUTE_LIGHT_TIME        =14,    //减少电击眩晕时间
    IATTRIBUTE_POISON_ATTACK    =15,    //毒攻击
    IATTRIBUTE_POISON_RESIST    =16,    //毒抵抗
    IATTRIBUTE_POISON_TIME        =17,    //减少中毒时间
    IATTRIBUTE_RESIST_ALL        =18,    //按百分比抵消所有属性攻击
    
    IATTRIBUTE_ATTACK_P            =19,    //物理攻击
    IATTRIBUTE_RATE_ATTACK_P    =20,    //按百分比增加物理攻击
    IATTRIBUTE_RATE_ATTACK_EP    =21,    //对装备基础物理攻击百分比加成
    IATTRIBUTE_DEFENCE_P        =22,    //物理防御
    IATTRIBUTE_RATE_DEFENCE_P    =23,    //按百分比增加物理防御
    IATTRIBUTE_RATE_DEFENCE_EP    =24,    //对装备基础物理防御百分比加成
    IATTRIBUTE_IMMUNITY_P        =25,    //按百分比抵消物理伤害
    
    IATTRIBUTE_ATTACK_M            =26,    //魔法攻击
    IATTRIBUTE_RATE_ATTACK_M    =27,    //按百分比增加魔法攻击
    IATTRIBUTE_RATE_ATTACK_EM    =28,    //对装备基础魔法攻击百分比加成
    IATTRIBUTE_DEFENCE_M        =29,    //魔法防御
    IATTRIBUTE_RATE_DEFENCE_M    =30,    //按百分比增加魔法防御
    IATTRIBUTE_RATE_DEFENCE_EM    =31,    //对装备基础魔法防御百分比加成
    IATTRIBUTE_IMMUNITY_M        =32,    //按百分比抵消魔法伤害
    
    IATTRIBUTE_ATTACK_SPEED        =33,    //攻击速度
    IATTRIBUTE_SKILL_TIME        =34,    //魔法冷却速度
    
    IATTRIBUTE_HIT                =35,    //命中
    IATTRIBUTE_MISS                =36,    //闪避
    IATTRIBUTE_2ATTACK_RATE        =37,    //会心一击（双倍攻击）的百分比
    IATTRIBUTE_NO_DEFENCE_RATE    =38,    //无视对方防御的概率

    IATTRIBUTE_SPEED_RATE        =39,    //移动速度百分比

    IATTRIBUTE_DAMAGE_RET        =40,    //伤害反射
    IATTRIBUTE_DAMAGE2MANA        =41,    //伤害由内力抵消
    
    IATTRIBUTE_STR                =42,    //增加力量
    IATTRIBUTE_SPR                =43,    //增加灵气
    IATTRIBUTE_CON                =44,    //增加体制
    IATTRIBUTE_INT                =45,    //增加定力
    IATTRIBUTE_DEX                =46,    //增加身法
    IATTRIBUTE_LUK                =47,    //增加悟性
    IATTRIBUTE_ALL                =48,    //增加所有的人物一级属性
    
    IATTRIBUTE_HP_THIEVE        =49,    //生命偷取(从伤害里)
    IATTRIBUTE_MP_THIEVE        =50,    //内力偷取(从伤害里)

    IATTRIBUTE_USESKILL            =51,    //增加某个使用技能
    IATTRIBUTE_RAND_SKILL        =52,    //增加某个随机技能
    IATTRIBUTE_SKILL_RATE        =53,    //随机技能发动概率

    IATTRIBUTE_BASE_ATTACK_P    =54,    //基础物理攻击
    IATTRIBUTE_BASE_ATTACK_M    =55,    //基础魔法攻击
    IATTRIBUTE_BASE_ATTACK_TIME =56,    //基础攻击速度（只对普通攻击）
    IATTRIBUTE_BASE_DEFENCE_P    =57,    //基础物理防御
    IATTRIBUTE_BASE_DEFENCE_M    =58,    //基础魔法防御
    IATTRIBUTE_BASE_MISS        =59,    //基础闪避



    IATTRIBUTE_NUMBER, //物品属性类型总数
};

enum ITEM_CLASS
{
    ICLASS_EQUIP        =1,    //武器WEAPON、防具DEFENCE、饰物ADORN
    ICLASS_MATERIAL        =2,    //原料
    ICLASS_COMITEM        =3,    //药品
    ICLASS_TASKITEM        =4,    //任务物品
    ICLASS_GEM            =5, //宝石
    ICLASS_STOREMAP        =6,    //藏宝图
    ICLASS_TALISMAN        =7,    //法宝---???
    ICLASS_GUILDITEM    =8,    //帮会物品
    ICLASS_NUMBER, //物品的类别数量
};

// ICLASS_COMITEM
enum COMMON_ITEM_TYPE
{
    COMMON_ITEM_TYPE    =0,
    COMMON_ITEM_1,            // 暂时未定义 由策划定
    COMMON_ITEM_2,            // 暂时未定义
    COMMON_ITEM_3,            // 暂时未定义
    COMITEM_PRESCR        =4, // 配方
    COMITEM_WPIDENT        =6,    // 武器鉴定卷轴
    COMITEM_ARIDENT        =7,    // 防具鉴定卷轴
    COMITEM_NCIDENT        =8,    // 项链鉴定卷轴
};

enum COMMON_ITEM_QUAL
{
    COMITEM_QUAL_MIS    =5,    //杂物
};

enum EQUIP_QUALITY
{
    EQUIP_QUALITY        =0,
    EQUALITY_NORMAL        =1,    //普通百色装备
    EQUALITY_BLUE        =2,    //蓝色装备
    EQUALITY_YELLOW        =3,    //黄色装备
    EQUALITY_GREEN        =4,    //绿色套装

    EQUALITY_NUMBER, //装备品质数量
};

enum WEAPON_TYPE
{
    WTYPE_DAO            =0,    //大刀
    WTYPE_QIANG            =1,    //长枪
    WTYPE_1DUAN            =2,    //单短
    WTYPE_2DUAN            =3,    //双短
    WTYPE_SHAN            =4,    //扇
    WTYPE_HUAN            =5,    //环

    WTYPE_NUMBER, //武器种类总数 WEAPON
};

enum DEFENCE_TYPE
{
    DTYPE_CAP            =0,    //帽子
    DTYPE_ARMOR            =1,    //铠甲
    DTYPE_CUFF            =2,    //护腕
    DTYPE_BOOT            =3,    //鞋

    DTYPE_NUMBER, //防具种类数量 DEFENCE
};

enum ADORN_TYPE
{
    ATYPE_NECKLACE        =0,    //项链
    ATYPE_SASH            =1,    //腰带
    ATYPE_RING            =2,    //戒子

    ATYPE_NUMBER, //饰物种类数量 ADORN
};

enum ENUM_UPDATE_EQIPMENT
{
    UPDATE_EQIPMENT_WEAPON_ID    = 0,    // 武器
    UPDATE_EQIPMENT_CAP_ID,                // 帽子
    UPDATE_EQIPMENT_ARMOUR_ID,            // 衣服
    UPDATE_EQIPMENT_WRIST_ID,            // 护腕
    UPDATE_EQIPMENT_FOOT_ID,            // 靴子
    UPDATE_EQIPMENT_NUMBERS
};

enum ITEMBOX_TYPE
{
    ITYPE_DROPBOX    =    -1,
    ITYPE_GROWPOINT

};

//拾取规则
enum    PICK_RULER
{
    IPR_FREE_PICK,    //自由拾取
    IPR_BET_PICK,    //投塞子拾取
    IPR_TURN_PICK,    //轮流拾取

};

//分配规则
enum    BOX_DISTRIBUTE_RULER
{
    BDR_COMMON    =     0,
    BDR_BOSS    =     1,
    BDR_UNKNOW    =     0xFFFF
};

//物品分配规则
enum    ITEM_DISTRIBUTE_RULER
{
    ITEMDR_RANDOM,
    ITEMDR_ALLGET
};

//ItemContainer 类型
enum    ITEM_CONTAINER_TYPE
{
    ICT_UNKNOW_CONTAINER,
    ICT_BASE_CONTAINER,
    //ICT_TASK_CONTAINER,
    //ICT_MAT_CONTAINER,
    ICT_EQUIP_CONTAINER,
    ICT_BANK_CONTAINER,
    ICT_ITEMBOX_CONTAINER,
    ICT_EXCHANGEBOX_CONTAINER,
    ICT_HUMAN_PET_CONTAINER,
};

// 目标类型
enum ENUM_ITEM_TARGET_TYPE
{
    ITEM_TARGET_TYPE_INVALID    = -1,
    ITEM_TARGET_TYPE_NONE,                // 无需目标        :    无
    ITEM_TARGET_TYPE_POS,                // 位置            :    TargetPos
    ITEM_TARGET_TYPE_DIR,                // 方向            :    TargetDir
    ITEM_TARGET_TYPE_ITEM,                // 道具            :    TargetItemIndex
    ITEM_TARGET_TYPE_SELF,                // 自已            :    TargetObj
    ITEM_TARGET_TYPE_SELF_PET,            // 自已的宠物    :    TargetObj,TargetPetGUID
    ITEM_TARGET_TYPE_FRIEND,            // 友好目标        :    TargetObj
    ITEM_TARGET_TYPE_FRIEND_PLAYER,        // 友好玩家        :    TargetObj
    ITEM_TARGET_TYPE_FRIEND_MONSTER,    // 友好怪物        :    TargetObj
    ITEM_TARGET_TYPE_FRIEND_PET,        // 友好宠物        :    TargetObj
    ITEM_TARGET_TYPE_ENEMY,                // 敌对目标        :    TargetObj
    ITEM_TARGET_TYPE_ENEMY_PLAYER,        // 敌对玩家        :    TargetObj
    ITEM_TARGET_TYPE_ENEMY_MONSTER,        // 敌对怪物        :    TargetObj
    ITEM_TARGET_TYPE_ENEMY_PET,            // 敌对宠物        :    TargetObj
    ITEM_TARGET_TYPE_ALL_CHARACTER,        // 所有角色        :    TargetObj

    ITEM_TARGET_TYPE_NUMBERS
};

// 道具分类编号
#define ITEM_PET_SKILL_STUDY_BEGIN        30402000    //宠物技能书最小编号
#define ITEM_PET_SKILL_STUDY_END        30403000    //宠物技能书最大编号

#define ITEM_PET_RETURN_BABAY_BEGIN        30503011    //宠物还童丹最小编号（注意30503011本身也是合法的还童丹编号）
#define ITEM_PET_RETURN_BABAY_END        30503020    //宠物还童丹最大编号（注意30503020本身也是合法的还童丹编号）

#define    ITEM_DOME_MEDICINE                30601000    //驯养道具 
#define    ITEM_MEAT_MEDICINE                30602000    //肉食宠粮 
#define    ITEM_GRASS_MEDICINE                30603000    //草类宠粮 
#define    ITEM_WORM_MEDICINE                30604000    //虫类宠粮 
#define    ITEM_PADDY_MEDICINE                30605000    //谷类宠粮

#define ITEM_PET_FEED_MEDICINE_MAX        ITEM_PADDY_MEDICINE+1000

#define ITEM_PET_ADD_LIFE_BEGIN            ITEM_PET_FEED_MEDICINE_MAX    //宠物延长寿命最小编号
#define ITEM_PET_ADD_LIFE_END            30607000    //宠物延长寿命最大编号

//跑商
//最大官票金额
#define    MAX_TICKET_VALUE    10000000    

//跑商官票索引(此种物品是一种特殊的任务物品)
#define TICKET_ITEM_INDEX     40002000

//漕运官票索引(此种物品是一种特殊的任务物品)
#define TICKET_RIVER_TRANSPORTATION_INDEX     30001000

//跑商商品索引开始
#define TICKET_MERCHANDISE_INDEX_BEGIN     20400001

//跑商商品索引结尾
#define TICKET_MERCHANDISE_INDEX_END     20400200

//索引是否属于跑商商品索引区间
#define IS_TICKET_MERCHANDISE_INDEX(idx)    ((idx>=TICKET_MERCHANDISE_INDEX_BEGIN && idx<TICKET_MERCHANDISE_INDEX_END)? TRUE : FALSE)

//此物品是否是跑商官票
#define ITEM_IS_TICKET(pitem)    ((pitem != NULL) ? ((pitem->GetItemTableIndex() == TICKET_ITEM_INDEX) ? TRUE:FALSE):FALSE)

//身上的官票数量是否合法
#define    TICKET_NUM_IS_IN_LAW(phuman) ((HumanItemLogic::CalcBagItemCount(phuman,TICKET_ITEM_INDEX) == 1)? TRUE:FALSE)

//存在跑商货物上的价格数据的start
#define    TICKET_MERCHANDISE_ITEM_PARAM_BUY_PRICE_START    0        

//存在跑商货物上的价格数据的类型
#define    TICKET_MERCHANDISE_ITEM_PARAM_BUY_PRICE_TYPE    IPV_INT

//存在跑商货物上的出售价格的start
#define    TICKET_MERCHANDISE_ITEM_PARAM_SALE_PRICE_START    4        

//存在跑商货物上的出售价格的类型
#define    TICKET_MERCHANDISE_ITEM_PARAM_SALE_PRICE_TYPE    IPV_INT    

//存在跑商货物上的场景ID数据的start
#define    TICKET_MERCHANDISE_ITEM_PARAM_SCENE_START    8        

//存在跑商货物上的价格数据的类型
#define    TICKET_MERCHANDISE_ITEM_PARAM_SCENE_TYPE    IPV_SHORT

//存在跑商银票上的当前现金数据的start
#define    TICKET_ITEM_PARAM_CUR_MONEY_START    0        

//存在跑商银票上的当前现金数据的type
#define    TICKET_ITEM_PARAM_CUR_MONEY_TYPE    IPV_INT

//存在跑商银票上的当前现金上限的start
#define    TICKET_ITEM_PARAM_MAX_MONEY_START    4        

//存在跑商银票上的当前现金上限的type
#define    TICKET_ITEM_PARAM_MAX_MONEY_TYPE    IPV_INT


//此物品是否是官票商品
#define    ITEM_IS_TICKET_MERCHANDISE(pitem)    ((pitem != NULL) ? ((pitem->GetItemTableIndex() >= TICKET_MERCHANDISE_INDEX_BEGIN && pitem->GetItemTableIndex() < TICKET_MERCHANDISE_INDEX_END) ? TRUE:FALSE):FALSE)    

//此物品索引是否是官票商品
#define    ITEM_IDX_IS_TICKET_MERCHANDISE(itemidx)    ( (itemidx >= TICKET_MERCHANDISE_INDEX_BEGIN && itemidx < TICKET_MERCHANDISE_INDEX_END) ? TRUE:FALSE)    

enum    REFRESH_ITEM_TYPE
{
    REFRESH_TICKET_MERCHANDISE = 0,
    REFRESH_MAX,
};

//物品信息位定义
enum ITEM_EXT_INFO
{
    IEI_BIND_INFO        =    0x00000001,    //绑定信息
    IEI_IDEN_INFO        =    0x00000002, //鉴定信息
    IEI_PLOCK_INFO        =    0x00000004, //二级密码已经处理
    IEI_BLUE_ATTR        =    0x00000008, //是否有蓝属性
    IEL_CREATOR            =    0x00000010,    //是否有创造者
};


#endif
