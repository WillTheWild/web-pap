/* 2007-05-30 */
/* ��������ͳ�������˲��������ݵ����ݿ⣬�Լ����ɱ� */
/* Create Database tlbbdb_stat and several tables */
drop database if exists tlbbdb_stat;
create database if not exists tlbbdb_stat;
use tlbbdb_stat;

/* [tables create] tlbbdb_stat. */
CREATE TABLE if not exists tlbb_charcount (
  man int default 0,
	female int default 0,
	shaolin int default 0,
	mingjiao int default 0,
	gaibang int default 0,
	wudang int default 0,
	emei int default 0,
	xingxiu int default 0,
	dali int default 0,
	tianshan int default 0,
	xiaoyao int default 0,
	wumenpai int default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_moneycount (
	totalmoney bigint default 0,
	createmoney bigint default 0,
	costmoney bigint default 0,
	gmcreatemoney bigint default 0,
	totalyuanbao bigint default 0,
	createyuanbao bigint default 0,
	costyuanbao bigint default 0,
	gmcreateyuanbao bigint default 0,
	createzengdian bigint default 0,
	costzengdian bigint default 0,
	gmcreatezengdian bigint default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_gemcount (
	itemname char(30) not null,
	itemcount int default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_geminfo (
	itemcode int default 0,
	itemname char(30) not null
);

CREATE TABLE if not exists tlbb_moneylist (
	accname varchar(50) binary not null,
	charname varchar(50) binary not null,
	level int default 1,
	vmoney int default 0,
	bankmoney int default 0,
	totalmoney int default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_get50levellist (
	accname varchar(50) binary not null,
	charguid int default 0,
	charname varchar(50) binary not null,
	menpai varchar(10) binary not null,
	level int default 1,
	exp int default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_get50xinfalist (
	accname varchar(50) binary not null,
	charguid int default 0,
	charname varchar(50) binary not null,
	menpai varchar(10) binary not null,
	exp int default 0,
	totalexp bigint default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_get50moneylist (
	accname varchar(50) binary not null,
	charguid int default 0,
	charname varchar(50) binary not null,
	menpai varchar(10) binary not null,
	totalmoney bigint default 0,
	counttime timestamp default now() not null
);

CREATE TABLE if not exists tlbb_menpaiinfo (
	menpai smallint default 9,
	menpainame varchar(10) binary not null
);

alter table tlbb_charcount   engine=innodb;
alter table tlbb_gemcount   engine=innodb;
alter table tlbb_geminfo   engine=innodb;
alter table tlbb_moneylist   engine=innodb;
alter table tlbb_get50levellist   engine=innodb;
alter table tlbb_get50xinfalist   engine=innodb;
alter table tlbb_get50moneylist   engine=innodb;
alter table tlbb_menpaiinfo   engine=innodb;

insert into tlbb_geminfo(itemcode, itemname)
values (50101001,"è��ʯ��1����"),
(50101002,"����ʯ��1����"),
(50102001,"�ƾ�ʯ��1����"),
(50102002,"����ʯ��1����"),
(50102003,"�쾧ʯ��1����"),
(50102004,"�̾�ʯ��1����"),
(50103001,"����1����"),
(50104002,"��ʯ��1����"),
(50111001,"ʯ��ʯ��1����"),
(50111002,"�⾧ʯ��1����"),
(50112001,"����1����"),
(50112002,"�ʯ��1����"),
(50112003,"�¹�ʯ��1����"),
(50112004,"������1����"),
(50113001,"�Ʊ�ʯ��1����"),
(50113002,"����ʯ��1����"),
(50113003,"�̱�ʯ��1����"),
(50113004,"�챦ʯ��1����"),
(50113005,"�ڱ�ʯ��1����"),
(50114001,"��ĸ�̣�1����"),
(50201001,"è��ʯ��2����"),
(50201002,"����ʯ��2����"),
(50202001,"�ƾ�ʯ��2����"),
(50202002,"����ʯ��2����"),
(50202003,"�쾧ʯ��2����"),
(50202004,"�̾�ʯ��2����"),
(50203001,"����2����"),
(50204002,"��ʯ��2����"),
(50211001,"ʯ��ʯ��2����"),
(50211002,"�⾧ʯ��2����"),
(50212001,"����2����"),
(50212002,"�ʯ��2����"),
(50212003,"�¹�ʯ��2����"),
(50212004,"������2����"),
(50213001,"�Ʊ�ʯ��2����"),
(50213002,"����ʯ��2����"),
(50213003,"�̱�ʯ��2����"),
(50213004,"�챦ʯ��2����"),
(50213005,"�ڱ�ʯ��2����"),
(50214001,"��ĸ�̣�2����"),
(50301001,"è��ʯ��3����"),
(50301002,"����ʯ��3����"),
(50302001,"�ƾ�ʯ��3����"),
(50302002,"����ʯ��3����"),
(50302003,"�쾧ʯ��3����"),
(50302004,"�̾�ʯ��3����"),
(50303001,"����3����"),
(50304002,"��ʯ��3����"),
(50311001,"ʯ��ʯ��3����"),
(50311002,"�⾧ʯ��3����"),
(50312001,"����3����"),
(50312002,"�ʯ��3����"),
(50312003,"�¹�ʯ��3����"),
(50312004,"������3����"),
(50313001,"�Ʊ�ʯ��3����"),
(50313002,"����ʯ��3����"),
(50313003,"�̱�ʯ��3����"),
(50313004,"�챦ʯ��3����"),
(50313005,"�ڱ�ʯ��3����"),
(50314001,"��ĸ�̣�3����"),
(50401001,"è��ʯ��4����"),
(50401002,"����ʯ��4����"),
(50402001,"�ƾ�ʯ��4����"),
(50402002,"����ʯ��4����"),
(50402003,"�쾧ʯ��4����"),
(50402004,"�̾�ʯ��4����"),
(50403001,"����4����"),
(50404002,"��ʯ��4����"),
(50411001,"ʯ��ʯ��4����"),
(50411002,"�⾧ʯ��4����"),
(50412001,"����4����"),
(50412002,"�ʯ��4����"),
(50412003,"�¹�ʯ��4����"),
(50412004,"������4����"),
(50413001,"�Ʊ�ʯ��4����"),
(50413002,"����ʯ��4����"),
(50413003,"�̱�ʯ��4����"),
(50413004,"�챦ʯ��4����"),
(50413005,"�ڱ�ʯ��4����"),
(50414001,"��ĸ�̣�4����"),
(50501001,"è��ʯ��5����"),
(50501002,"����ʯ��5����"),
(50502001,"�ƾ�ʯ��5����"),
(50502002,"����ʯ��5����"),
(50502003,"�쾧ʯ��5����"),
(50502004,"�̾�ʯ��5����"),
(50503001,"����5����"),
(50504002,"��ʯ��5����"),
(50511001,"ʯ��ʯ��5����"),
(50511002,"�⾧ʯ��5����"),
(50512001,"����5����"),
(50512002,"�ʯ��5����"),
(50512003,"�¹�ʯ��5����"),
(50512004,"������5����"),
(50513001,"�Ʊ�ʯ��5����"),
(50513002,"����ʯ��5����"),
(50513003,"�̱�ʯ��5����"),
(50513004,"�챦ʯ��5����"),
(50513005,"�ڱ�ʯ��5����"),
(50514001,"��ĸ�̣�5����"),
(50601001,"è��ʯ��6����"),
(50601002,"����ʯ��6����"),
(50602001,"�ƾ�ʯ��6����"),
(50602002,"����ʯ��6����"),
(50602003,"�쾧ʯ��6����"),
(50602004,"�̾�ʯ��6����"),
(50603001,"����6����"),
(50604002,"��ʯ��6����"),
(50611001,"ʯ��ʯ��6����"),
(50611002,"�⾧ʯ��6����"),
(50612001,"����6����"),
(50612002,"�ʯ��6����"),
(50612003,"�¹�ʯ��6����"),
(50612004,"������6����"),
(50613001,"�Ʊ�ʯ��6����"),
(50613002,"����ʯ��6����"),
(50613003,"�̱�ʯ��6����"),
(50613004,"�챦ʯ��6����"),
(50613005,"�ڱ�ʯ��6����"),
(50614001,"��ĸ�̣�6����"),
(50701001,"è��ʯ��7����"),
(50701002,"����ʯ��7����"),
(50702001,"�ƾ�ʯ��7����"),
(50702002,"����ʯ��7����"),
(50702003,"�쾧ʯ��7����"),
(50702004,"�̾�ʯ��7����"),
(50703001,"����7����"),
(50704002,"��ʯ��7����"),
(50711001,"ʯ��ʯ��7����"),
(50711002,"�⾧ʯ��7����"),
(50712001,"����7����"),
(50712002,"�ʯ��7����"),
(50712003,"�¹�ʯ��7����"),
(50712004,"������7����"),
(50713001,"�Ʊ�ʯ��7����"),
(50713002,"����ʯ��7����"),
(50713003,"�̱�ʯ��7����"),
(50713004,"�챦ʯ��7����"),
(50713005,"�ڱ�ʯ��7����"),
(50714001,"��ĸ�̣�7����"),
(50801001,"è��ʯ��8����"),
(50801002,"����ʯ��8����"),
(50802001,"�ƾ�ʯ��8����"),
(50802002,"����ʯ��8����"),
(50802003,"�쾧ʯ��8����"),
(50802004,"�̾�ʯ��8����"),
(50803001,"����8����"),
(50804002,"��ʯ��8����"),
(50811001,"ʯ��ʯ��8����"),
(50811002,"�⾧ʯ��8����"),
(50812001,"����8����"),
(50812002,"�ʯ��8����"),
(50812003,"�¹�ʯ��8����"),
(50812004,"������8����"),
(50813001,"�Ʊ�ʯ��8����"),
(50813002,"����ʯ��8����"),
(50813003,"�̱�ʯ��8����"),
(50813004,"�챦ʯ��8����"),
(50813005,"�ڱ�ʯ��8����"),
(50814001,"��ĸ�̣�8����"),
(50901001,"è��ʯ��9����"),
(50901002,"����ʯ��9����"),
(50902001,"�ƾ�ʯ��9����"),
(50902002,"����ʯ��9����"),
(50902003,"�쾧ʯ��9����"),
(50902004,"�̾�ʯ��9����"),
(50903001,"����9����"),
(50904002,"��ʯ��9����"),
(50911001,"ʯ��ʯ��9����"),
(50911002,"�⾧ʯ��9����"),
(50912001,"����9����"),
(50912002,"�ʯ��9����"),
(50912003,"�¹�ʯ��9����"),
(50912004,"������9����"),
(50913001,"�Ʊ�ʯ��9����"),
(50913002,"����ʯ��9����"),
(50913003,"�̱�ʯ��9����"),
(50913004,"�챦ʯ��9����"),
(50913005,"�ڱ�ʯ��9����"),
(50914001,"��ĸ�̣�9����");

insert into tlbb_menpaiinfo(menpai, menpainame)
values (0,"����"),
(1,"����"),
(2,"ؤ��"),
(3,"�䵱"),
(4,"����"),
(5,"����"),
(6,"����"),
(7,"��ɽ"),
(8,"��ң"),
(9,"������");

/* 2007-05-30 */
/* ������������Խ�ɫ��Ů�Խ�ɫ�������������Լ������ɽ�ɫ���������ȼ���ɫ����ͳ����� */
/* [proc] tlbbdb_stat.tlbb_charcount_pro */
use tlbbdb_stat;
DELIMITER //

DROP PROCEDURE IF EXISTS `tlbbdb_stat`.`tlbb_charcount_pro` //

CREATE PROCEDURE tlbb_charcount_pro()
BEGIN
  declare man int default 0;
  declare female int default 0;
  declare dali int default 0;
  declare shaolin int default 0;
  declare wudang int default 0;
  declare emei int default 0;
  declare mingjiao int default 0;
  declare gaibang int default 0;
  declare xingxiu int default 0;
  declare xiaoyao int default 0;
  declare tianshan int default 0;
  declare wumenpai int default 0;
	declare lowvalue int default 0;
  declare highvalue int default 0;

  /* truncate table tlbb_charcount; */

  select count(sex) into man from tlbbdb.t_char where sex = 1 and isvalid = 1;
  select count(sex) into female from tlbbdb.t_char where sex = 0 and isvalid = 1;
  select count(menpai) into shaolin from tlbbdb.t_char where menpai = 0 and isvalid = 1;
  select count(menpai) into mingjiao from tlbbdb.t_char where menpai = 1 and isvalid = 1;
  select count(menpai) into gaibang from tlbbdb.t_char where menpai = 2 and isvalid = 1;
  select count(menpai) into wudang from tlbbdb.t_char where menpai = 3 and isvalid = 1;
  select count(menpai) into emei from tlbbdb.t_char where menpai = 4 and isvalid = 1;
  select count(menpai) into xingxiu from tlbbdb.t_char where menpai = 5 and isvalid = 1;
  select count(menpai) into dali from tlbbdb.t_char where menpai = 6 and isvalid = 1;
  select count(menpai) into tianshan from tlbbdb.t_char where menpai = 7 and isvalid = 1;
  select count(menpai) into xiaoyao from tlbbdb.t_char where menpai = 8 and isvalid = 1;
  select count(menpai) into wumenpai from tlbbdb.t_char where menpai = 9 and isvalid = 1;

  /* start transaction; */

  insert into tlbb_charcount(man,female,shaolin,mingjiao,gaibang,wudang,emei,xingxiu,dali,tianshan,xiaoyao,wumenpai)
  values (man,female,shaolin,mingjiao,gaibang,wudang,emei,xingxiu,dali,tianshan,xiaoyao,wumenpai);

  /* commit; */

END //

DELIMITER ;

/* 2007-06-03 */
/* �����������Ǯ���������ɵĽ�Ǯ���������ĵĽ�Ǯ������GM�����Ľ�Ǯ������Ԫ�����������ɵ�Ԫ�����������ĵ�Ԫ��������
   GM������Ԫ�����������ɵ��������������ĵ�����������GM��������������ͳ����� */
/* [proc] tlbbdb_stat.tlbb_moneycount_pro */
use tlbbdb_stat;
DELIMITER //

DROP PROCEDURE IF EXISTS `tlbbdb_stat`.`tlbb_moneycount_pro` //

CREATE PROCEDURE tlbb_moneycount_pro()
BEGIN
  declare vtotalmoney bigint default 0;
  declare vcountprofit int default 0;
	declare vcreatemoney bigint default 0;
	declare vcostmoney bigint default 0;
	declare vgmcreatemoney bigint default 0;
	declare vlowvalue int default 0;
  declare vhighvalue int default 0;

  /* truncate table tlbb_moneycount; */

  select (sum(vmoney*0.0001) + sum(bankmoney*0.0001)) into vtotalmoney from tlbbdb.t_char where isvalid = 1;
  select count(profit) into vcountprofit from tlbbdb.t_pshop;
  if vcountprofit > 0 then
    select (sum(profit*0.0001) + vtotalmoney) into vtotalmoney from tlbbdb.t_pshop where profit > 0;
  end if;
  select data1 into vlowvalue from tlbbdb.t_global where poolid=28;
  select data1 into vhighvalue from tlbbdb.t_global where poolid=29;
  select sum(vhighvalue*200000+vlowvalue*0.0001) into vcreatemoney;
  set vlowvalue = 0;
  set vhighvalue = 0;
  select data1 into vlowvalue from tlbbdb.t_global where poolid=30;
  select data1 into vhighvalue from tlbbdb.t_global where poolid=31;
  select sum(vhighvalue*200000+vlowvalue*0.0001) into vcostmoney;
  set vlowvalue = 0;
  set vhighvalue = 0;
  select data1 into vlowvalue from tlbbdb.t_global where poolid=32;
  select data1 into vhighvalue from tlbbdb.t_global where poolid=33;
  select sum(vhighvalue*200000+vlowvalue*0.0001) into vgmcreatemoney;

  /* start transaction; */

  update tlbb_moneycount set totalmoney=vtotalmoney,createmoney=vcreatemoney,costmoney=vcostmoney,gmcreatemoney=vgmcreatemoney
  where datediff(curdate(),counttime) = 0; 
  /* commit; */

END //

DELIMITER ;


/* 2007-06-13 */
/* ���������Ԫ�����������ɵ�Ԫ�����������ĵ�Ԫ��������GM������Ԫ�����������ɵ��������������ĵ�����������GM��������������ͳ����� */
/* [proc] tlbbdb_stat.tlbb_yuanbaocount_pro */
use tlbbdb_stat;
DELIMITER //

DROP PROCEDURE IF EXISTS `tlbbdb_stat`.`tlbb_yuanbaocount_pro` //

CREATE PROCEDURE tlbb_yuanbaocount_pro()
BEGIN
	declare totalyuanbao bigint default 0;
	declare createyuanbao bigint default 0;
	declare costyuanbao bigint default 0;
	declare gmcreateyuanbao bigint default 0;
	declare createzengdian bigint default 0;
	declare costzengdian bigint default 0;
	declare gmcreatezengdian bigint default 0;
	declare lowvalue int default 0;
  declare highvalue int default 0;
  declare yuanbaopoint bigint default 0;
  declare yuanbaoticket bigint default 0;

  /* truncate table tlbb_moneycount; */

  select sum(yuanbao) into yuanbaopoint from tlbbdb.t_char where isvalid = 1;
  select sum(p8) into yuanbaoticket from tlbbdb.t_iteminfo where itemtype = 30501036 and isvalid = 1;
  select sum(yuanbaopoint + yuanbaoticket) into totalyuanbao;  
  set lowvalue = 0;
  set highvalue = 0;
  select data1 into lowvalue from tlbbdb.t_global where poolid=22;
  select data1 into highvalue from tlbbdb.t_global where poolid=23;
  select sum(highvalue*2000000000+lowvalue) into createyuanbao;
  set lowvalue = 0;
  set highvalue = 0;
  select data1 into lowvalue from tlbbdb.t_global where poolid=24;
  select data1 into highvalue from tlbbdb.t_global where poolid=25;
  select sum(highvalue*2000000000+lowvalue) into costyuanbao;
  set lowvalue = 0;
  set highvalue = 0;
  select data1 into lowvalue from tlbbdb.t_global where poolid=26;
  select data1 into highvalue from tlbbdb.t_global where poolid=27;
  select sum(highvalue*2000000000+lowvalue) into gmcreateyuanbao;
  set lowvalue = 0;
  set highvalue = 0;
  select data1 into lowvalue from tlbbdb.t_global where poolid=34;
  select data1 into highvalue from tlbbdb.t_global where poolid=35;
  select sum(highvalue*2000000000+lowvalue) into createzengdian;
  set lowvalue = 0;
  set highvalue = 0;
  select data1 into lowvalue from tlbbdb.t_global where poolid=36;
  select data1 into highvalue from tlbbdb.t_global where poolid=37;
  select sum(highvalue*2000000000+lowvalue) into costzengdian;
  set lowvalue = 0;
  set highvalue = 0;
  select data1 into lowvalue from tlbbdb.t_global where poolid=38;
  select data1 into highvalue from tlbbdb.t_global where poolid=39;
  select sum(highvalue*2000000000+lowvalue) into gmcreatezengdian;

  /* start transaction; */

  insert into tlbb_moneycount(totalyuanbao,createyuanbao,costyuanbao,gmcreateyuanbao,createzengdian,costzengdian,gmcreatezengdian)
  values (totalyuanbao,createyuanbao,costyuanbao,gmcreateyuanbao,createzengdian,costzengdian,gmcreatezengdian);

  /* commit; */

END //

DELIMITER ;


/* 2007-03-17 */
/* δ����Ƕ�ĸ��ֱ�ʯ����ͳ����� */
/* [proc] tlbbdb_stat.tlbb_gemcount_pro */
use tlbbdb_stat;
delimiter //

DROP PROCEDURE IF EXISTS `tlbbdb_stat`.`tlbb_gemcount_pro` //

CREATE PROCEDURE tlbb_gemcount_pro()
BEGIN
  declare itemname_s varchar(30);
  declare itemcode_i int default 0;
  declare itemcount_i int default 0;
  declare cursor_temp int default 0;

  declare itemcode_cursor cursor for
    select itemcode,itemname from tlbb_geminfo order by itemcode;
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET cursor_temp = 1;

  set itemname_s = NULL;

  /* truncate table tlbb_gemcount; */

  /* start transaction; */

    open itemcode_cursor;
    REPEAT
      fetch itemcode_cursor into itemcode_i,itemname_s;
        select count(itemtype) into itemcount_i from tlbbdb.t_iteminfo where itemtype = itemcode_i;
        insert into tlbb_gemcount(itemname,itemcount) values(itemname_s,itemcount_i);
    UNTIL cursor_temp = 1 END REPEAT;
    close itemcode_cursor;

  /* commit; */

END //

delimiter ;

/* 2007-03-17 */
/* ����������ȼ�ǰ50����ɫ��ͳ����� */
/* The top 50 level character */
use tlbbdb_stat;
delimiter //
drop procedure IF EXISTS `tlbbdb_stat`.`tlbb_get50levellist_pro` //
create procedure tlbb_get50levellist_pro()
begin
 truncate table tlbb_get50levellist;

 insert into tlbb_get50levellist(accname,charguid,charname,menpai,level,exp)
 select accname,charguid,charname,menpai,level,exp
 from tlbbdb.t_char
 where isvalid = 1
 order by level desc, exp desc
 limit 50;

 update tlbb_get50levellist a, tlbb_menpaiinfo b set a.menpai=b.menpainame where a.menpai=b.menpai;

end//
delimiter ;


/* 2007-03-17 */
/* �����������Ǯǰ50����ɫ��ͳ����� */
/* The top 50 money character */
use tlbbdb_stat;
delimiter //
drop procedure if exists `tlbbdb_stat`.`tlbb_get50moneylist_pro` //
create procedure tlbb_get50moneylist_pro()
begin
 truncate table tlbb_get50moneylist;

 insert into tlbb_get50moneylist(accname,charguid,charname,menpai,totalmoney)
 select a.accname,a.charguid,a.charname,a.menpai,
  (a.vmoney+a.bankmoney+sum(if(isnull(b.profit),0,b.profit))) as totalmoney
 from tlbbdb.t_char as a left join tlbbdb.t_pshop as b
  on a.charguid=b.ownerguid
 where a.isvalid = 1
 group by a.charguid
 order by totalmoney desc
 limit 50;

 update tlbb_get50moneylist a, tlbb_menpaiinfo b set a.menpai=b.menpainame where a.menpai=b.menpai;

end//
delimiter ;

/* 2007-03-17 */
/* ����������ķ�ǰ50����ɫ��ͳ����� */
/* The top 50 xinfa character */
use tlbbdb_stat;
delimiter //
drop procedure if exists `tlbbdb_stat`.`tlbb_get50xinfalist_pro` //
create procedure tlbb_get50xinfalist_pro()
begin
 truncate table tlbb_get50xinfalist;

 drop table if exists tmp_xinfa;
 create temporary table tmp_xinfa
 (charguid int not null,
  totalexp bigint not null
 )engine=innodb;

 insert into tmp_xinfa
 select a.charguid,sum(
  case mod(a.xinfaid,6)
   when 1 then b.id1all
   when 2 then b.id2all
   when 3 then b.id3all
   when 4 then b.id4all
   when 5 then b.id5all
   when 0 then b.id6all
   else b.id7all
  end
  ) as totalexp
 from tlbbdb.t_xinfa as a left join tlbbdb.t_xfallexp as b
  on a.xinfalvl=b.xflv
 where a.charguid in(
 select charguid from tlbbdb.t_char where isvalid = 1
 )
 group by a.charguid
 order by totalexp desc
 limit 50;

 insert into tlbb_get50xinfalist(accname,charguid,charname,menpai,exp,totalexp)
 select a.accname,b.charguid,a.charname,a.menpai,a.exp,b.totalexp
 from tlbbdb.t_char as a,tmp_xinfa as b
 where b.charguid=a.charguid
 order by b.totalexp desc, a.exp desc;

 drop table if exists tmp_xinfa;

 update tlbb_get50xinfalist a, tlbb_menpaiinfo b set a.menpai=b.menpainame where a.menpai=b.menpai;

end//
delimiter ;


/* 2007-03-17 */
/* �����н�ɫӵ�еģ������������10���ʺš��ʺ��еȼ���ߵĽ�ɫ�ģ���ɫ���ơ��ȼ����Ա����ɣ�ͳ����� */
/* [proc] tlbbdb_stat.tlbb_moneylist_pro */
use tlbbdb_stat;
DELIMITER //

DROP PROCEDURE IF EXISTS `tlbbdb_stat`.`tlbb_moneylist_pro` //

CREATE PROCEDURE tlbb_moneylist_pro()
BEGIN
  declare accname_s varchar(30);
  declare maxlevel_i int default 0;
  declare charname_s varchar(50);
  declare vmoney_i int default 0;
  declare bankmoney_i int default 0;
  declare shopmoney_i int default 0;
  declare totalmoney_i int default 0;
  declare cursor_temp int default 0;

  declare accname_cursor cursor for
    select distinct accname from tlbbdb.t_char where isvalid = 1;
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET cursor_temp = 1;

  set accname_s = NULL;
  set charname_s = NULL;

  /* truncate table tlbb_moneylist; */

  /* start transaction; */

    open accname_cursor;
    REPEAT
      fetch accname_cursor into accname_s;
      select max(level) into maxlevel_i from tlbbdb.t_char where accname = accname_s and isvalid = 1;
      select charname into charname_s from tlbbdb.t_char where accname = accname_s and level = maxlevel_i limit 1;
      select sum(vmoney) into vmoney_i from tlbbdb.t_char where accname = accname_s and isvalid = 1;
      select sum(bankmoney) into bankmoney_i from tlbbdb.t_char where accname = accname_s and isvalid = 1;
      select sum(profit) into shopmoney_i from tlbbdb.t_pshop where ownerguid in (select charguid from tlbbdb.t_char where accname = accname_s and isvalid = 1) and isvalid = 1;
      select (vmoney_i + bankmoney_i + shopmoney_i) into totalmoney_i;
      if totalmoney_i  >= 100000 then
        insert into tlbb_moneylist(accname,charname,level,vmoney,bankmoney,totalmoney) values(accname_s,charname_s,maxlevel_i,vmoney_i,bankmoney_i,totalmoney_i);
      end if;
    UNTIL cursor_temp = 1 END REPEAT;
    close accname_cursor;

  /* commit; */

END //

delimiter ;
