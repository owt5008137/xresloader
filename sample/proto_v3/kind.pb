
L
dep_level2.proto"0
dep2_cfg
id (Rid
level (	Rlevelbproto3
�
dependency.protoxresloader.protodep_level2.proto"L
dep_cfg
id (Rid
name (	Rname
dep2 (2	.dep2_cfgRdep2*�
game_const_config
EN_GCC_UNKNOWN 
EN_GCC_PERCENT_BASE�N
EN_GCC_RANDOM_RANGE_UNIT
 
EN_GCC_RESOURCE_MAX_LIMIT���
EN_GCC_LEVEL_LIMIT�
EN_GCC_SOLDIER_TYPE_MASKd
EN_GCC_ACTIVITY_TYPE_MASK�
EN_GCC_FORMULAR_TYPE_MASK

EN_GCC_SCREEN_WIDTH�
EN_GCC_SCREEN_HEIGHT�
EN_GCC_CAMERA_OFFSET�*Z
	cost_type
EN_CT_UNKNOWN 
EN_CT_MONEY�N	�>金币
EN_CT_DIAMOND�N	�>钻石bproto3
�)

kind.protoxresloader.protoxresloader_ue.protodependency.protodep_level2.protogoogle/protobuf/duration.protogoogle/protobuf/timestamp.proto"�
role_cfg
id (Rid!
unlock_level (RunlockLevel
	cost_type (RcostType

cost_value (R	costValue
name (	Rname#
dep_test
 (2.dep_cfgRdepTest

test_array (	R	testArray"
int_as_string (	RintAsString=
test_plain_enum_array (2
.cost_typeRtestPlainEnumArrayg
convert_timepoint_one (2.google.protobuf.TimestampB�?origin_timepoint_oneRconvertTimepointOne0
origin_timepoint_one (	RoriginTimepointOnec
convert_duration_one (2.google.protobuf.DurationB�?origin_duration_oneRconvertDurationOne.
origin_duration_one (	RoriginDurationOneg
convert_timepoint_arr (2.google.protobuf.TimestampB�?origin_timepoint_arrRconvertTimepointArr0
origin_timepoint_arr (	RoriginTimepointArrc
convert_duration_arr (2.google.protobuf.DurationB�?origin_duration_arrRconvertDurationArr.
origin_duration_arr (	RoriginDurationArr"�
role_upgrade_cfg#
Id (B�>custom_rule3�D�RId
Level (B�DRLevel@
CostType (B$�>custom_rule1�?Refer to cost_typeRCostType
	CostValue (R	CostValue
ScoreAdd (RScoreAdd:1�>%Test role_upgrade_cfg with multi keys�Dhelper"�

arr_in_arr3
name (	B�?This is a test name in arrayRnameC
int_arr (B*�?�? game_const_config.EN_GCC_UNKNOWN�?3RintArr
str_arr (	RstrArr1
test_info_role (2	.role_cfgH RtestInfoRoleF
test_role_upgrade_cfg (2.role_upgrade_cfgH RtestRoleUpgradeCfg�
test_nested_messageM
test_nested_message_info_role (2	.role_cfgH RtestNestedMessageInfoRoleb
$test_nested_message_role_upgrade_cfg (2.role_upgrade_cfgH RtestNestedMessageRoleUpgradeCfg"`
test_nested_enum%
!EN_TEST_NESTED_MESSAGE_ENUM_VAL_1 %
!EN_TEST_NESTED_MESSAGE_ENUM_VAL_2{B
	test_onof"P
test_nested_enum
EN_TEST_NESTED_ENUM_VAL_1 
EN_TEST_NESTED_ENUM_VAL_2{:*�Dhelper�D�EEngine/CompositeDataTable.hB
	test_onof"�
test_msg_verifier
	test_id_1�N (RtestId1=
	test_id_2�N (B �?测试ID别名2�?server_onlyRtestId2 
	test_id_3�N (B�?RtestId3:�?-^"�
arr_in_arr_cfg#
id (B�?This is a Key�DRid-
arr (2.arr_in_arrB�?server_onlyRarrC
test_plain_int_arr (B�?1�?3�?server_onlyRtestPlainIntArr9
test_plain_enum_arr (2
.cost_typeRtestPlainEnumArr>
test_plain_msg (2.test_msg_verifierB�?&RtestPlainMsg?
test_plain_msg_arr (2.test_msg_verifierRtestPlainMsgArr>
test_map_is (2.arr_in_arr_cfg.TestMapIsEntryR	testMapIsD
test_map_sm (2.arr_in_arr_cfg.TestMapSmEntryB�?|R	testMapSm<
TestMapIsEntry
key (Rkey
value (	Rvalue:8G
TestMapSmEntry
key (	Rkey
value (2	.dep2_cfgRvalue:8:�>Test arr_in_arr_cfg�Dhelper"�
event_reward_item
item_id (RitemId

item_count (R	itemCount2
nested_note (	B�?描述文本H R
nestedNoteG
nested_enum_type (2
.cost_typeB�?货币类型H RnestedEnumTypeB
nested"�
event_rule_item
rule_id (RruleId

rule_param (R	ruleParam2
nested_note (	B�?描述文本H R
nestedNoteG
nested_enum_type (2
.cost_typeB�?货币类型H RnestedEnumTypeB
nested"�
	event_cfg2
id (B"�>custom_rule4�>
unique_tag�>�DdRid-
process (B�>
unique_tag�>�DRprocess$
rule (2.event_rule_itemRruleE
specify_field (2.event_rule_itemB�?server_onlyRspecifyField9
item (2.event_reward_itemB�?奖励道具H Ritem,
user_exp (B�?奖励经验H RuserExp%
note (	B�?描述文本H Rnote:
	enum_type (2
.cost_typeB�?货币类型H RenumType0

user_level3 (B�?玩家等级HR	userLevel1
test_arr[ (2.event_rule_itemB�?;RtestArr<
test_empty_arr\ (2.event_rule_itemB�?;RtestEmptyArr:,�> Test event_cfg with oneof fields�DhelperB
reward�>�>server_onlyB
unlock_type"�
keep_or_strip_empty_list_cfg#
id (B�?This is a Key�DRid&
	array_msg (2	.dep2_cfgRarrayMsg1
array_plain_msg (2	.dep2_cfgRarrayPlainMsg
array_int32 (R
arrayInt32
array_int64 (R
arrayInt64:	�Dhelper"@

combine_id
prefix (Rprefix
id (B
�>0-99999Rid"�
process_by_script
id (RidJ
map_u32_string (2$.process_by_script.MapU32StringEntryRmapU32String.
human_readable_date (	RhumanReadableDate.
date (2.google.protobuf.TimestampRdateA
test_map_is (2!.process_by_script.TestMapIsEntryR	testMapIsG
test_map_sm (2!.process_by_script.TestMapSmEntryB�?|R	testMapSm!
id_id� (2.combine_idRidId?
MapU32StringEntry
key (Rkey
value (	Rvalue:8<
TestMapIsEntry
key (Rkey
value (	Rvalue:8G
TestMapSmEntry
key (	Rkey
value (2	.dep2_cfgRvalue:8"�
large_file_test
id (Rid
i32value (Ri32value
u64value (Ru64value
f64value (Rf64value
f32value (Rf32value
szvalue (	Rszvalue 
id_id (2.combine_idRidId"`
inner_alias_message
iType (B�?TypeRiType*
	paramList (B�?Param�?2R	paramList"�
outer_alias_message
iId (B�?IDRiId:
inners (2.inner_alias_messageB�?	ConditionRinners&
nest_int (B�?Nest�?2RnestIntbproto3