--�ű���
x892003_g_scriptId = 892003

--**********************************
-- 
--**********************************
function x892003_StudyProperty(sceneId, selfId, lwIndex)		
	local itemIndex = LuaFnGetItemTableIndexByIndex( sceneId, selfId, 30 )
	local lw = LuaFnGetItemTableIndexByIndex( sceneId, selfId, lwIndex )
	if itemIndex~=20310181 and itemIndex~=20310182 and itemIndex~=20310183 then
		x892003_NotifyTip( sceneId, selfId, "���ϲ���" )
		return
	end
	if LuaFnGetAvailableItemCount(sceneId, selfId, itemIndex)<10 then
		x892003_NotifyTip( sceneId, selfId, "���ϲ���" )
		return
	end
	if lw~= 10157001 then
		x892003_NotifyTip( sceneId, selfId, "��װ���޷�ѧϰ����" )
		return
	end
	local longwen1 = GetMissionData( sceneId, selfId, MY_LONGWEN1 )
	local longwen2 = GetMissionData( sceneId, selfId, MY_LONGWEN2 )
	local longwen3 = GetMissionData( sceneId, selfId, MY_LONGWEN3 )
	if itemIndex==20310181 and longwen1>0 then
		x892003_NotifyTip( sceneId, selfId, "����ѧϰ���˼��ܣ��˴��޷������ȼ���" )
		return
	elseif itemIndex==20310182 and longwen2>0 then
		x892003_NotifyTip( sceneId, selfId, "����ѧϰ���˼��ܣ��˴��޷������ȼ���" )
		return
	elseif itemIndex==20310183 and longwen3>0 then
		x892003_NotifyTip( sceneId, selfId, "����ѧϰ���˼��ܣ��˴��޷������ȼ���" )
		return
	end
	local reply = CostMoney(sceneId,selfId,10000)
	if reply == -1 then
		x892003_NotifyTip( sceneId, selfId, "��Ǯ����" )
		return
	end
	if itemIndex==20310181 then
		LuaFnDelAvailableItem(sceneId,selfId,itemIndex,10)
		SetMissionData( sceneId, selfId, MY_LONGWEN1, 1 )
	elseif itemIndex==20310182 then
		LuaFnDelAvailableItem(sceneId,selfId,itemIndex,10)
		SetMissionData( sceneId, selfId, MY_LONGWEN2, 1 )
	elseif itemIndex==20310183 then
		LuaFnDelAvailableItem(sceneId,selfId,itemIndex,10)
		SetMissionData( sceneId, selfId, MY_LONGWEN3, 1 )
	end
	LuaFnSendSpecificImpactToUnit(sceneId, selfId, selfId, selfId, 152, 0)
	x892003_NotifyTip( sceneId, selfId, "��ϲ������ѧϰ�ɹ�" )
end

function x892003_UpdateProperty(sceneId, selfId, lwIndex)
	x892003_NotifyTip( sceneId, selfId, "123" )
end
--**********************************
--��Ŀ��ʾ
--**********************************
function x892003_NotifyTip( sceneId, selfId, Msg )
	BeginEvent( sceneId )
		AddText( sceneId, Msg )
	EndEvent( sceneId )
	DispatchMissionTips( sceneId, selfId )
end

--**********************************
--�Ի�������Ϣ��ʾ
--**********************************
function x892003_MsgBox( sceneId, selfId, msg )
	BeginEvent( sceneId )
		AddText( sceneId, msg )
	EndEvent( sceneId )
	DispatchEventList( sceneId, selfId, -1 )
end
