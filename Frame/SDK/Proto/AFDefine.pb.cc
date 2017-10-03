// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AFDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AFDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace AFMsg {

namespace {

const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EItemType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameCardSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameTokenSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EBattleType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EShopType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ERankType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ENPCType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_AFDefine_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_AFDefine_2eproto() {
  protobuf_AddDesc_AFDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AFDefine.proto");
  GOOGLE_CHECK(file != NULL);
  EGameEventCode_descriptor_ = file->enum_type(0);
  EGameMsgID_descriptor_ = file->enum_type(1);
  EItemType_descriptor_ = file->enum_type(2);
  EGameEquipSubType_descriptor_ = file->enum_type(3);
  EGameGemSubType_descriptor_ = file->enum_type(4);
  EGameItemSubType_descriptor_ = file->enum_type(5);
  EGameCardSubType_descriptor_ = file->enum_type(6);
  EGameTokenSubType_descriptor_ = file->enum_type(7);
  EGameItemExpiredType_descriptor_ = file->enum_type(8);
  EDrawDropItemState_descriptor_ = file->enum_type(9);
  EGuildPowerType_descriptor_ = file->enum_type(10);
  ETaskState_descriptor_ = file->enum_type(11);
  ETaskType_descriptor_ = file->enum_type(12);
  EBattleType_descriptor_ = file->enum_type(13);
  EShopType_descriptor_ = file->enum_type(14);
  ERankType_descriptor_ = file->enum_type(15);
  ENPCType_descriptor_ = file->enum_type(16);
  EPropertyType_descriptor_ = file->enum_type(17);
  EGameElementType_descriptor_ = file->enum_type(18);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AFDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_AFDefine_2eproto() {
}

void protobuf_AddDesc_AFDefine_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_AFDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016AFDefine.proto\022\005AFMsg*\266\n\n\016EGameEventCo"
    "de\022\020\n\014EGEC_SUCCESS\020\000\022\025\n\021EGEC_UNKOWN_ERRO"
    "R\020\001\022\026\n\022EGEC_ACCOUNT_EXIST\020\002\022\033\n\027EGEC_ACCO"
    "UNTPWD_INVALID\020\003\022\026\n\022EGEC_ACCOUNT_USING\020\004"
    "\022\027\n\023EGEC_ACCOUNT_LOCKED\020\005\022\030\n\024EGEC_ACCOUN"
    "T_SUCCESS\020\006\022\033\n\027EGEC_VERIFY_KEY_SUCCESS\020\007"
    "\022\030\n\024EGEC_VERIFY_KEY_FAIL\020\010\022\035\n\031EGEC_SELEC"
    "TSERVER_SUCCESS\020\t\022\032\n\026EGEC_SELECTSERVER_F"
    "AIL\020\n\022\030\n\024EGEC_CHARACTER_EXIST\020n\022\032\n\026EGEC_"
    "SVRZONEID_INVALID\020o\022\031\n\025EGEC_CHARACTER_NU"
    "MOUT\020p\022\032\n\026EGEC_CHARACTER_INVALID\020q\022\033\n\027EG"
    "EC_CHARACTER_NOTEXIST\020r\022\030\n\024EGEC_CHARACTE"
    "R_USING\020s\022\031\n\025EGEC_CHARACTER_LOCKED\020t\022\026\n\022"
    "EGEC_ZONE_OVERLOAD\020u\022\023\n\017EGEC_NOT_ONLINE\020"
    "v\022\027\n\023EGEC_ALREAY_IN_TEAM\020w\022\034\n\030EGEC_INVAL"
    "ID_TEAM_INVITE\020x\022\022\n\016EGEC_TEAM_FULL\020y\022\032\n\026"
    "EGEC_MAIL_UPDATE_ERROR\020z\022\034\n\030EGEC_MAIL_TO"
    "NAME_INVALID\020{\022\032\n\026EGEC_MAIL_DELETE_ERROR"
    "\020|\022\033\n\027EGEC_MAIL_TOWNAME_EQUAL\020}\022\023\n\017EGEC_"
    "LACK_MONEY\020~\022\025\n\021EGEC_FULL_PACKAGE\020\177\022\026\n\021E"
    "GEC_INVALID_ITEM\020\200\001\022\035\n\030EGEC_INVALID_CONS"
    "IGNMENT\020\201\001\022\030\n\023EGEC_NOT_ENOUGH_VIP\020\202\001\022\024\n\017"
    "EGEC_NEED_LEVEL\020\203\001\022\031\n\024EGEC_MAX_FRIEND_LI"
    "ST\020\204\001\022\030\n\023EGEC_MAX_ENEMY_LIST\020\205\001\022\030\n\023EGEC_"
    "MAX_GANGS_LSIT\020\206\001\022\032\n\025EGEC_LIMITS_TO_RIGH"
    "TS\020\207\001\022\034\n\027EGEC_INVALID_GANGS_NAME\020\210\001\022\034\n\027E"
    "GEC_REPEAT_ENTER_GANGS\020\211\001\022\035\n\030EGEC_INVALI"
    "D_GANGSMEMBER\020\212\001\022\034\n\027EGEC_MASTER_LEAVE_GA"
    "NGS\020\213\001\022\033\n\026EGEC_GANGS_TITLE_OUTOF\020\214\001\022\035\n\030E"
    "GEC_ENTER_GATEWAY_FAILD\020\215\001\022\030\n\023EGEC_NO_SE"
    "RVER4ZONE\020\216\001\022\027\n\022EGEC_INVALID_SKILL\020\217\001\022\034\n"
    "\027EGEC_ENTER_GAME_SUCCESS\020\220\001\022\036\n\031EGEC_CREA"
    "TE_GUILD_SUCCESS\020\310\001\022\034\n\027EGEC_JOIN_GUILD_S"
    "UCCESS\020\311\001\022\035\n\030EGEC_LEAVE_GUILD_SUCCESS\020\312\001"
    "*\342,\n\nEGameMsgID\022\017\n\013EGMI_UNKNOW\020\000\022\025\n\021EGMI"
    "_EVENT_RESULT\020\001\022\030\n\024EGMI_EVENT_TRANSPOND\020"
    "\002\022\025\n\021EGMI_CLOSE_SOCKET\020\003\022\035\n\031EGMI_MTL_WOR"
    "LD_REGISTERED\020\n\022\037\n\033EGMI_MTL_WORLD_UNREGI"
    "STERED\020\013\022\032\n\026EGMI_MTL_WORLD_REFRESH\020\014\022\035\n\031"
    "EGMI_LTM_LOGIN_REGISTERED\020\024\022\037\n\033EGMI_LTM_"
    "LOGIN_UNREGISTERED\020\025\022\032\n\026EGMI_LTM_LOGIN_R"
    "EFRESH\020\026\022\036\n\032EGMI_PTWG_PROXY_REGISTERED\020\036"
    "\022 \n\034EGMI_PTWG_PROXY_UNREGISTERED\020\037\022\033\n\027EG"
    "MI_PTWG_PROXY_REFRESH\020 \022\034\n\030EGMI_GTW_GAME"
    "_REGISTERED\020(\022\036\n\032EGMI_GTW_GAME_UNREGISTE"
    "RED\020)\022\031\n\025EGMI_GTW_GAME_REFRESH\020*\022\027\n\023EGMI"
    "_GTG_BROCASTMSG\020+\022\025\n\021EGMI_STS_NET_INFO\0202"
    "\022\027\n\023EGMI_STS_HEART_BEAT\020d\022\022\n\016EGMI_REQ_LO"
    "GIN\020e\022\022\n\016EGMI_ACK_LOGIN\020f\022\023\n\017EGMI_REQ_LO"
    "GOUT\020g\022\027\n\023EGMI_REQ_WORLD_LIST\020n\022\027\n\023EGMI_"
    "ACK_WORLD_LIST\020o\022\032\n\026EGMI_REQ_CONNECT_WOR"
    "LD\020p\022\032\n\026EGMI_ACK_CONNECT_WORLD\020q\022 \n\034EGMI"
    "_REQ_KICK_CLIENT_INWORLD\020r\022\030\n\024EGMI_REQ_C"
    "ONNECT_KEY\020x\022\030\n\024EGMI_ACK_CONNECT_KEY\020z\022\033"
    "\n\026EGMI_REQ_SELECT_SERVER\020\202\001\022\033\n\026EGMI_ACK_"
    "SELECT_SERVER\020\203\001\022\027\n\022EGMI_REQ_ROLE_LIST\020\204"
    "\001\022\027\n\022EGMI_ACK_ROLE_LIST\020\205\001\022\031\n\024EGMI_REQ_C"
    "REATE_ROLE\020\206\001\022\031\n\024EGMI_REQ_DELETE_ROLE\020\207\001"
    "\022\032\n\025EGMI_REQ_RECOVER_ROLE\020\210\001\022\030\n\023EGMI_REQ"
    "_ENTER_GAME\020\226\001\022\030\n\023EGMI_ACK_ENTER_GAME\020\227\001"
    "\022\030\n\023EGMI_REQ_LEAVE_GAME\020\230\001\022\030\n\023EGMI_ACK_L"
    "EAVE_GAME\020\231\001\022\027\n\022EGMI_REQ_SWAP_GAME\020\232\001\022\030\n"
    "\023EGMI_REQ_SWAP_SCENE\020\233\001\022\030\n\023EGMI_ACK_SWAP"
    "_SCENE\020\234\001\022\030\n\023EGMI_REQ_END_BATTLE\020\235\001\022\030\n\023E"
    "GMI_ACK_END_BATTLE\020\236\001\022\032\n\025EGMI_ACK_OBJECT"
    "_ENTRY\020\310\001\022\032\n\025EGMI_ACK_OBJECT_LEAVE\020\311\001\022#\n"
    "\036EGMI_ACK_OBJECT_PROPERTY_ENTRY\020\312\001\022!\n\034EG"
    "MI_ACK_OBJECT_RECORD_ENTRY\020\313\001\022\033\n\026EGMI_AC"
    "K_PROPERTY_DATA\020\322\001\022\025\n\020EGMI_ACK_ADD_ROW\020\334"
    "\001\022\030\n\023EGMI_ACK_REMOVE_ROW\020\335\001\022\026\n\021EGMI_ACK_"
    "SWAP_ROW\020\336\001\022\031\n\024EGMI_ACK_RECORD_DATA\020\337\001\022\032"
    "\n\025EGMI_ACK_RECORD_CLEAR\020\345\001\022\031\n\024EGMI_ACK_R"
    "ECORD_SORT\020\346\001\022\022\n\rEGMI_REQ_MOVE\020\353\001\022\022\n\rEGM"
    "I_ACK_MOVE\020\354\001\022\031\n\024EGMI_REQ_MOVE_IMMUNE\020\355\001"
    "\022\031\n\024EGMI_ACK_MOVE_IMMUNE\020\356\001\022\033\n\026EGMI_REQ_"
    "SKILL_OBJECTX\020\360\001\022\033\n\026EGMI_ACK_SKILL_OBJEC"
    "TX\020\361\001\022\027\n\022EGMI_REQ_SKILL_POS\020\362\001\022\027\n\022EGMI_A"
    "CK_SKILL_POS\020\363\001\022\031\n\024EGMI_REQ_ITEM_OBJECT\020"
    "\364\001\022\031\n\024EGMI_ACK_ITEM_OBJECT\020\365\001\022\026\n\021EGMI_RE"
    "Q_ITEM_POS\020\366\001\022\026\n\021EGMI_ACK_ITEM_POS\020\367\001\022\022\n"
    "\rEGMI_REQ_CHAT\020\372\001\022\022\n\rEGMI_ACK_CHAT\020\373\001\022\027\n"
    "\022EGMI_REQ_SALE_ITEM\020\374\001\022\030\n\023EGMI_REQ_SPLIT"
    "_ITEM\020\375\001\022\032\n\025EGMI_REQ_PRODUCE_ITEM\020\376\001\022\027\n\022"
    "EGMI_REQ_PICK_ITEM\020\377\001\022\031\n\024EGMI_REQ_ACCEPT"
    "_TASK\020\200\002\022\034\n\027EGMI_REQ_COMPELETE_TASK\020\201\002\022\026"
    "\n\021EGMI_REQ_JOIN_PVP\020\204\002\022\026\n\021EGMI_REQ_EXIT_"
    "PVP\020\205\002\022\027\n\022EGMT_ACK_START_PVP\020\206\002\022\034\n\027EGMI_"
    "REQ_SEARCH_OPPNENT\020\230\002\022\034\n\027EGMI_ACK_SEARCH"
    "_OPPNENT\020\231\002\022\033\n\026EGMT_REQ_START_OPPNENT\020\232\002"
    "\022\033\n\026EGMT_ACK_START_OPPNENT\020\233\002\022\033\n\026EGMI_AC"
    "K_ONLINE_NOTIFY\020\242\002\022\034\n\027EGMI_ACK_OFFLINE_N"
    "OTIFY\020\243\002\022\032\n\025EGMI_REQ_CREATE_GUILD\020\254\002\022\032\n\025"
    "EGMI_ACK_CREATE_GUILD\020\255\002\022\030\n\023EGMI_REQ_JOI"
    "N_GUILD\020\256\002\022\030\n\023EGMI_ACK_JOIN_GUILD\020\257\002\022\031\n\024"
    "EGMI_REQ_LEAVE_GUILD\020\260\002\022\031\n\024EGMI_ACK_LEAV"
    "E_GUILD\020\261\002\022\027\n\022EGMI_REQ_OPR_GUILD\020\262\002\022\027\n\022E"
    "GMI_ACK_OPR_GUILD\020\263\002\022\032\n\025EGMI_REQ_SEARCH_"
    "GUILD\020\264\002\022\032\n\025EGMI_ACK_SEARCH_GUILD\020\265\002\022\033\n\026"
    "EGMI_REQ_OPR_GUILDINFO\020\266\002\022\033\n\026EGMI_ACK_OP"
    "R_GUILDINFO\020\267\002\022\035\n\030EGMI_REQ_GUILDECTYPEIN"
    "FO\020\270\002\022\035\n\030EGMI_ACK_GUILDECTYPEINFO\020\271\002\022\035\n\030"
    "EGMI_SET_GUILDECTYPEINFO\020\272\002\022\035\n\030EGMI_ReqE"
    "nterGuildEctype\020\273\002\022\036\n\031EGEC_REQ_CREATE_CH"
    "ATGROUP\020\220\003\022\036\n\031EGEC_ACK_CREATE_CHATGROUP\020"
    "\221\003\022\034\n\027EGEC_REQ_JOIN_CHATGROUP\020\222\003\022\034\n\027EGEC"
    "_ACK_JOIN_CHATGROUP\020\223\003\022\035\n\030EGEC_REQ_LEAVE"
    "_CHATGROUP\020\224\003\022\035\n\030EGEC_ACK_LEAVE_CHATGROU"
    "P\020\225\003\022$\n\037EGEC_REQ_SUBSCRIPTION_CHATGROUP\020"
    "\226\003\022*\n%EGEC_REQ_CANCELSUBSCRIPTION_CHATGR"
    "OUP\020\227\003\022\036\n\031EGEC_REQ_INVITE_CHATGROUP\020\230\003\022\036"
    "\n\031EGEC_ACK_INVITE_CHATGROUP\020\231\003\022\034\n\027EGEC_R"
    "EQ_KICK_CHATGROUP\020\232\003\022\034\n\027EGEC_ACK_KICK_CH"
    "ATGROUP\020\233\003\022\037\n\032EGEC_REQ_CHATGROUP_TO_TEAM"
    "\020\302\003\022\037\n\032EGEC_ACK_CHATGROUP_TO_TEAM\020\303\003\022%\n "
    "EGEC_REQ_INTENSIFYLEVEL_TO_EQUIP\020\364\003\022%\n E"
    "GEC_ACK_INTENSIFYLEVEL_TO_EQUIP\020\365\003\022\033\n\026EG"
    "EC_REQ_HOLE_TO_EQUIP\020\366\003\022\033\n\026EGEC_ACK_HOLE"
    "_TO_EQUIP\020\367\003\022!\n\034EGEC_REQ_INLAYSTONE_TO_E"
    "QUIP\020\370\003\022!\n\034EGEC_ACK_INLAYSTONE_TO_EQUIP\020"
    "\371\003\022#\n\036EGEC_REQ_ELEMENTLEVEL_TO_EQUIP\020\372\003\022"
    "#\n\036EGEC_ACK_ELEMENTLEVEL_TO_EQUIP\020\373\003\022\034\n\027"
    "EGEC_REQ_SET_FIGHT_HERO\020\374\003\022\024\n\017EGEC_WEAR_"
    "EQUIP\020\375\003\022\027\n\022EGEC_TAKEOFF_EQUIP\020\376\003\022\032\n\025EGE"
    "C_REQ_MINING_TITLE\020\330\004\022\027\n\022EGEC_REQ_SEND_M"
    "AIL\020\274\005\022\027\n\022EGEC_REQ_DRAW_MAIL\020\275\005\022\031\n\024EGEC_"
    "REQ_DELETE_MAIL\020\276\005\022 \n\033EGMI_ACK_CLONE_OBJ"
    "ECT_ENTRY\020\240\006\022 \n\033EGMI_ACK_CLONE_OBJECT_LE"
    "AVE\020\241\006\022)\n$EGMI_ACK_CLONE_OBJECT_PROPERTY"
    "_ENTRY\020\242\006\022\'\n\"EGMI_ACK_CLONE_OBJECT_RECOR"
    "D_ENTRY\020\243\006\022 \n\033EGMI_ACK_CLONE_PROPERTY_IN"
    "T\020\252\006\022\"\n\035EGMI_ACK_CLONE_PROPERTY_FLOAT\020\253\006"
    "\022#\n\036EGMI_ACK_CLONE_PROPERTY_STRING\020\254\006\022#\n"
    "\036EGMI_ACK_CLONE_PROPERTY_DOUBLE\020\255\006\022#\n\036EG"
    "MI_ACK_CLONE_PROPERTY_OBJECT\020\256\006\022\033\n\026EGMI_"
    "ACK_CLONE_ADD_ROW\020\264\006\022\036\n\031EGMI_ACK_CLONE_R"
    "EMOVE_ROW\020\265\006\022\034\n\027EGMI_ACK_CLONE_SWAP_ROW\020"
    "\266\006\022\036\n\031EGMI_ACK_CLONE_RECORD_INT\020\267\006\022 \n\033EG"
    "MI_ACK_CLONE_RECORD_FLOAT\020\270\006\022!\n\034EGMI_ACK"
    "_CLONE_RECORD_DOUBLE\020\271\006\022!\n\034EGMI_ACK_CLON"
    "E_RECORD_STRING\020\272\006\022!\n\034EGMI_ACK_CLONE_REC"
    "ORD_OBJECT\020\273\006\022 \n\033EGMI_ACK_CLONE_RECORD_C"
    "LEAR\020\274\006\022\037\n\032EGMI_ACK_CLONE_RECORD_SORT\020\275\006"
    "\022\030\n\023EGMI_REQSWICHSERVER\020\310\006\022\030\n\023EGMI_ACKSW"
    "ICHSERVER\020\311\006\022\031\n\024EGMI_REQ_CREATE_TEAM\020\334\006\022"
    "\031\n\024EGMI_ACK_CREATE_TEAM\020\335\006\022\027\n\022EGMI_REQ_J"
    "OIN_TEAM\020\336\006\022\027\n\022EGMI_ACK_JOIN_TEAM\020\337\006\022\030\n\023"
    "EGMI_REQ_LEAVE_TEAM\020\340\006\022\030\n\023EGMI_ACK_LEAVE"
    "_TEAM\020\341\006\022\031\n\024EGMI_REQ_INVITE_TEAM\020\342\006\022\034\n\027E"
    "GMI_REQ_OPRMEMBER_TEAM\020\343\006\022\034\n\027EGMI_ACK_OP"
    "RMEMBER_TEAM\020\344\006\022\037\n\032EGMI_REQ_TEAM_ENTER_E"
    "CTYPE\020\345\006\022\037\n\032EGMI_ACK_TEAM_ENTER_ECTYPE\020\346"
    "\006\022\033\n\026EGMI_REQ_MAP_GRID_INFO\020\204\007\022\033\n\026EGMI_A"
    "CK_MAP_GRID_INFO\020\205\007\022\032\n\025EGMI_REQ_BIG_MAP_"
    "INFO\020\206\007\022\032\n\025EGMI_ACK_BIG_MAP_INFO\020\207\007\022\033\n\026E"
    "GMI_REQ_HOLD_MAP_GRID\020\216\007\022\033\n\026EGMI_ACK_HOL"
    "D_MAP_GRID\020\217\007\022 \n\033EGMI_REQ_LEAVE_MSG_MAP_"
    "GRID\020\220\007\022 \n\033EGMI_ACK_LEAVE_MSG_MAP_GRID\020\221"
    "\007\022 \n\033EGMI_REQ_GET_MAP_GRID_AWARD\020\222\007\022 \n\033E"
    "GMI_ACK_GET_MAP_GRID_AWARD\020\223\007\022\036\n\031EGMI_RE"
    "Q_MAP_GRID_HUNTING\020\224\007\022\036\n\031EGMI_ACK_MAP_GR"
    "ID_HUNTING\020\225\007\022\037\n\032EGMI_REQ_MAP_GRID_KING_"
    "WAR\020\226\007\022\037\n\032EGMI_ACK_MAP_GRID_KING_WAR\020\227\007\022"
    "\036\n\031EGMI_REQ_CMD_PROPERTY_INT\020\350\007\022\036\n\031EGMI_"
    "REQ_CMD_PROPERTY_STR\020\351\007\022!\n\034EGMI_REQ_CMD_"
    "PROPERTY_OBJECT\020\352\007\022 \n\033EGMI_REQ_CMD_PROPE"
    "RTY_FLOAT\020\353\007\022\034\n\027EGMI_REQ_CMD_RECORD_INT\020"
    "\354\007\022\034\n\027EGMI_REQ_CMD_RECORD_STR\020\355\007\022\037\n\032EGMI"
    "_REQ_CMD_RECORD_OBJECT\020\356\007\022\036\n\031EGMI_REQ_CM"
    "D_RECORD_FLOAT\020\357\007\022\030\n\023EGMI_REQ_CMD_NORMAL"
    "\020\360\007\022\034\n\027EGMI_REQ_PVPAPPLYMACTCH\020\314\010\022\034\n\027EGM"
    "I_ACK_PVPAPPLYMACTCH\020\315\010\022\035\n\030EGMI_REQ_CREA"
    "TEPVPECTYPE\020\316\010\022\035\n\030EGMI_ACK_CREATEPVPECTY"
    "PE\020\317\010\022\033\n\026EGMI_REQ_BUY_FORM_SHOP\020\220N\022\033\n\026EG"
    "MI_ACK_BUY_FORM_SHOP\020\221N\022\037\n\032EGMI_REQ_MOVE"
    "_BUILD_OBJECT\020\222N\022\037\n\032EGMI_ACK_MOVE_BUILD_"
    "OBJECT\020\223N\022\032\n\025EGMI_REQ_UP_BUILD_LVL\020\365N\022\031\n"
    "\024EGMI_REQ_CREATE_ITEM\020\366N\022\033\n\026EGMI_REQ_BUI"
    "LD_OPERATE\020\367N*R\n\tEItemType\022\r\n\tEIT_EQUIP\020"
    "\000\022\013\n\007EIT_GEM\020\001\022\014\n\010EIT_ITEM\020\002\022\014\n\010EIT_CARD"
    "\020\003\022\r\n\tEIT_TOKEN\020\004*\221\001\n\021EGameEquipSubType\022"
    "\024\n\020EQUIPTYPE_WEAPON\020\000\022\024\n\020EQUIPTYPE_HELME"
    "T\020\001\022\023\n\017EQUIPTYPE_ARMOR\020\002\022\023\n\017EQUIPTYPE_WR"
    "IST\020\003\022\022\n\016EQUIPTYPE_PANT\020\004\022\022\n\016EQUIPTYPE_B"
    "OOT\020\005*\262\001\n\017EGameGemSubType\022\024\n\020EGGSTYPE_GE"
    "M_ATK\020\000\022\024\n\020EGGSTYPE_GEM_DEF\020\001\022\025\n\021EGGSTYP"
    "E_GEM_FIRE\020\003\022\026\n\022EGGSTYPE_GEM_LIGHT\020\004\022\025\n\021"
    "EGGSTYPE_GEM_WIND\020\005\022\024\n\020EGGSTYPE_GEM_ICE\020"
    "\006\022\027\n\023EGGSTYPE_GEM_POISON\020\007*\263\001\n\020EGameItem"
    "SubType\022\023\n\017EGIT_ITEM_WATER\020\000\022\025\n\021EGIT_ITE"
    "M_DIAMOND\020\001\022\026\n\022EGIT_ITEM_CURRENCY\020\002\022\021\n\rE"
    "GIT_ITEM_EXP\020\003\022\020\n\014EGIT_ITEM_HP\020\004\022\020\n\014EGIT"
    "_ITEM_MP\020\005\022\020\n\014EGIT_ITEM_SP\020\006\022\022\n\016EGIT_ITE"
    "M_PACK\020\007*Q\n\020EGameCardSubType\022\022\n\016EGCST_ST"
    "RENGTH\020\001\022\021\n\rEGCST_AGILITY\020\002\022\026\n\022EGCST_INT"
    "ELLIGENCE\020\003*w\n\021EGameTokenSubType\022\026\n\022EGTS"
    "T_TOKEN_REBORN\020\000\022\030\n\024EGTST_TOKEN_POSITION"
    "\020\001\022\026\n\022EGTST_TOKEN_BOUNTY\020\002\022\030\n\024EGTST_TOKE"
    "N_ACTIVITY\020\003*e\n\024EGameItemExpiredType\022\016\n\n"
    "EGIET_NONE\020\000\022\023\n\017EGIET_USE_TIMES\020\001\022\023\n\017EGI"
    "ET_REAL_TIME\020\002\022\023\n\017EGIET_END_INDEX\020\003*Y\n\022E"
    "DrawDropItemState\022\025\n\021E_DRAW_STATE_NONE\020\000"
    "\022\025\n\021E_DRAW_STATE_GAIN\020\001\022\025\n\021E_DRAW_STATE_"
    "RECV\020\002*s\n\017EGuildPowerType\022\033\n\027GUILD_POWER"
    "_TYPE_NORMAL\020\000\022#\n\037GUILD_POWER_TYPE_VICE_"
    "PRESIDENT\020\001\022\036\n\032GUILD_POWER_TYPE_PRESIDEN"
    "T\020\002*V\n\nETaskState\022\023\n\017TASK_IN_PROCESS\020\000\022\r"
    "\n\tTASK_DONE\020\001\022\023\n\017TASK_DRAW_AWARD\020\002\022\017\n\013TA"
    "SK_FINISH\020\003*\251\002\n\tETaskType\022 \n\034TASK_LEVEL_"
    "UPDATE_SOME_LEVEL\020\000\022\024\n\020TASK_PASS_ECTYPE\020"
    "\001\022\032\n\026TASK_PASS_ECTYPE_COUNT\020\002\022$\n TASK_PA"
    "SS_SOME_TYPE_ECTYPE_COUNT\020\003\022\033\n\027TASK_UPDA"
    "TE_SKILL_COUNT\020\004\022\026\n\022TASK_CONSUME_MONEY\020\005"
    "\022\030\n\024TASK_CONSUME_DIAMOND\020\006\022\024\n\020TASK_ARENA"
    "_COUNT\020\007\022\033\n\027TASK_KILL_MONSTER_COUNT\020\010\022 \n"
    "\034TASK_KILL_SOME_MONSTER_COUNT\020\t*5\n\013EBatt"
    "leType\022\021\n\rBATTLE_SINGLE\020\000\022\023\n\017BATTLE_PVE_"
    "TEAM\020\001*\201\001\n\tEShopType\022\020\n\014EST_BUILDING\020\001\022\014"
    "\n\010EST_GOLD\020\002\022\017\n\013EST_DIAMOND\020\003\022\n\n\006EST_SP\020"
    "\004\022\r\n\tEST_EQUIP\020\005\022\013\n\007EST_GEM\020\006\022\014\n\010EST_Her"
    "o\020\007\022\r\n\tEST_Other\020\010*{\n\tERankType\022\024\n\020ERT_P"
    "LAYER_LEVEL\020\001\022\023\n\017ERT_FIGHT_VALUE\020\002\022\024\n\020ER"
    "T_PLAYER_MONEY\020\003\022\023\n\017ERT_GUILD_LEVEL\020\004\022\030\n"
    "\024ERT_GUILD_KINGSOURCE\020\005*G\n\010ENPCType\022\023\n\017E"
    "NPCTYPE_NORMAL\020\000\022\021\n\rENPCTYPE_HERO\020\001\022\023\n\017E"
    "NPCTYPE_TURRET\020\002*H\n\rEPropertyType\022\020\n\014EPT"
    "_STRENGTH\020\001\022\017\n\013EPT_AGILITY\020\002\022\024\n\020EPT_INTE"
    "LLIGENCE\020\003*\207\001\n\020EGameElementType\022\025\n\021EELEM"
    "ENTTYPE_FIRE\020\000\022\026\n\022EELEMENTTYPE_LIGHT\020\001\022\025"
    "\n\021EELEMENTTYPE_WIND\020\002\022\024\n\020EELEMENTTYPE_IC"
    "E\020\003\022\027\n\023EELEMENTTYPE_POISON\020\004", 9188);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AFDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AFDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AFDefine_2eproto {
  StaticDescriptorInitializer_AFDefine_2eproto() {
    protobuf_AddDesc_AFDefine_2eproto();
  }
} static_descriptor_initializer_AFDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEventCode_descriptor_;
}
bool EGameEventCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 200:
    case 201:
    case 202:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameMsgID_descriptor_;
}
bool EGameMsgID_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 20:
    case 21:
    case 22:
    case 30:
    case 31:
    case 32:
    case 40:
    case 41:
    case 42:
    case 43:
    case 50:
    case 100:
    case 101:
    case 102:
    case 103:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 120:
    case 122:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 200:
    case 201:
    case 202:
    case 203:
    case 210:
    case 220:
    case 221:
    case 222:
    case 223:
    case 229:
    case 230:
    case 235:
    case 236:
    case 237:
    case 238:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
    case 257:
    case 260:
    case 261:
    case 262:
    case 280:
    case 281:
    case 282:
    case 283:
    case 290:
    case 291:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 400:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 407:
    case 408:
    case 409:
    case 410:
    case 411:
    case 450:
    case 451:
    case 500:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 507:
    case 508:
    case 509:
    case 510:
    case 600:
    case 700:
    case 701:
    case 702:
    case 800:
    case 801:
    case 802:
    case 803:
    case 810:
    case 811:
    case 812:
    case 813:
    case 814:
    case 820:
    case 821:
    case 822:
    case 823:
    case 824:
    case 825:
    case 826:
    case 827:
    case 828:
    case 829:
    case 840:
    case 841:
    case 860:
    case 861:
    case 862:
    case 863:
    case 864:
    case 865:
    case 866:
    case 867:
    case 868:
    case 869:
    case 870:
    case 900:
    case 901:
    case 902:
    case 903:
    case 910:
    case 911:
    case 912:
    case 913:
    case 914:
    case 915:
    case 916:
    case 917:
    case 918:
    case 919:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1100:
    case 1101:
    case 1102:
    case 1103:
    case 10000:
    case 10001:
    case 10002:
    case 10003:
    case 10101:
    case 10102:
    case 10103:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EItemType_descriptor_;
}
bool EItemType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEquipSubType_descriptor_;
}
bool EGameEquipSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameGemSubType_descriptor_;
}
bool EGameGemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemSubType_descriptor_;
}
bool EGameItemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameCardSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameCardSubType_descriptor_;
}
bool EGameCardSubType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameTokenSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameTokenSubType_descriptor_;
}
bool EGameTokenSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemExpiredType_descriptor_;
}
bool EGameItemExpiredType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EDrawDropItemState_descriptor_;
}
bool EDrawDropItemState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGuildPowerType_descriptor_;
}
bool EGuildPowerType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskState_descriptor_;
}
bool ETaskState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskType_descriptor_;
}
bool ETaskType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBattleType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EBattleType_descriptor_;
}
bool EBattleType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EShopType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EShopType_descriptor_;
}
bool EShopType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ERankType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ERankType_descriptor_;
}
bool ERankType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ENPCType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ENPCType_descriptor_;
}
bool ENPCType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EPropertyType_descriptor_;
}
bool EPropertyType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameElementType_descriptor_;
}
bool EGameElementType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace AFMsg

// @@protoc_insertion_point(global_scope)
