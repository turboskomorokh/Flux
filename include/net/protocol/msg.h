#pragma once

#include <string>

namespace flux::net::protocol {
const std::string ID_KEY = "ID";
const std::string PING_KEY = "p";
const std::string SYNC_TIME_KEY = "ST";
const std::string VERSION_CHECK_KEY = "VChk";
const std::string OPERATING_SYSTEM_KEY = "OS";
const std::string OPERATING_SYSTEM_TYPE_KEY = "OSt";
const std::string VERSION_NUMBER_KEY = "VN";
const std::string TIME_KEY = "T";
const std::string SYNC_TIME_FIELD_KEY = "STime";
const std::string SYNC_TIME_SERVER_SLEEP_KEY = "SSlp";
const std::string GET_PLAYER_DATA_KEY = "GPd";
const std::string TOKEN_KEY = "Tk";
const std::string COGNITO_ID_KEY = "CoID";
const std::string PLAYER_ID_KEY = "U";
const std::string PLAYER_USERNAME_KEY = "UN";
const std::string PLAYER_DATA_KEY = "pD";
const std::string EMAIL_KEY = "Email";
const std::string EMAIL_VERIFIED_KEY = "EmailVerified";
const std::string RENAME_PLAYER_KEY = "RenamePlayer";
const std::string SUCCESS_KEY = "S";
const std::string ERROR_KEY = "ER";
const std::string MENU_WORLD_LOAD_INFO_KEY = "MWli";
const std::string WORLD_NAME_KEY = "WN";
const std::string COUNT_KEY = "Ct";
const std::string LOGIN_TOKEN_UPDATE_KEY = "LoginTokenUpdate";
const std::string GET_LIVE_STREAM_INFO_KEY = "gLSI";
const std::string UPDATE_LOCATION_STATUS_KEY = "ULS";
const std::string INSTRUCTION_EVENT_COMPLETED_KEY = "iEC";
const std::string TRY_TO_JOIN_WORLD_KEY = "TTjW";
const std::string WORLD_KEY = "W";
const std::string AMOUNT_KEY = "Amt";
const std::string REAL_USERNAME_KEY = "rUN";
const std::string BAN_PLAYER_KEY = "BPl";
const std::string NEWS_VERSION_KEY = "NV";
const std::string WOTW_KEY = "Wo";
const std::string WOTW_VERSION_KEY = "WV";
const std::string WORLD_BIOME_KEY = "WB";
const std::string JOIN_RESULT_KEY = "JR";
const std::string GET_WORLD_KEY = "Gw";
const std::string GET_WORLD_COMPRESSED_KEY = "GWC";
const std::string ENTRANCE_PORTAL_ID_KEY = "eID";
const std::string ACHIEVEMENT_KEY = "A";
const std::string CAMERA_ZOOM_LEVEL_UPDATE_KEY = "cZL";
const std::string CAMERA_ZOOM_LEVEL_UPDATE_FIELD_KEY = "CZL";
const std::string CAMERA_ZOOM_VALUE_UPDATE_KEY = "cZva";
const std::string REQUEST_OTHER_PLAYER_KEY = "rOP";
const std::string REQUEST_AI_ENEMY_KEY = "rAI";
const std::string REQUEST_AI_PETS_KEY = "rAIp";
const std::string GET_FRIEND_LIST_KEY = "GFLi";
const std::string GET_SCOREBOARD_DATA_KEY = "GSb";
const std::string WORLD_RANDOM_EVENT_UPDATE_KEY = "WREU";
const std::string WORLD_RANDOM_EVENT_GET_ALL_ACTIVE_KEY = "WREgA";
const std::string ADD_NETWORK_PLAYER_KEY = "AnP";
const std::string TIMESTAMP_KEY = "t";
const std::string POSITION_X_KEY = "x";
const std::string POSITION_Y_KEY = "y";
const std::string POSITION_X_FLOAT_KEY = "PosX";
const std::string POSITION_Y_FLOAT_KEY = "PosY";
const std::string ANIMATION_KEY = "a";
const std::string DIRECTION_KEY = "d";
const std::string TELEPORT_KEY = "tp";
const std::string MY_POSITION_KEY = "mP";
const std::string READY_TO_PLAY_KEY = "RtP";
const std::string FIRST_MESSAGE_KEY = "m0";
const std::string TUTORIAL_STATE_UPDATE_KEY = "TState";
const std::string TUTORIAL_STATE_UPDATE_FIELD_KEY = "Tstate";
const std::string CHARACTER_CREATED_KEY = "CharC";
const std::string GENDER_KEY = "Gnd";
const std::string COUNTRY_KEY = "Ctry";
const std::string SKIN_COLOR_INDEX_KEY = "SCI";
const std::string BLOCK_TYPE_KEY = "BlockType";
const std::string SET_SEED_KEY = "SS";
const std::string SET_BLOCK_KEY = "SB";
const std::string SET_BLOCK_BACKGROUND_KEY = "SBB";
const std::string HIT_BLOCK_KEY = "HB";
const std::string HIT_BLOCK_BACKGROUND_KEY = "HBB";
const std::string DESTROY_BLOCK_KEY = "DB";
const std::string DESTROYED_BLOCK_TYPE_KEY = "DBBT";
const std::string DESTROYED_SEED_TYPE_KEY = "DSBT";
const std::string GROWTH_DURATION_KEY = "GrowthDuration";
const std::string GROWTH_END_TIME_KEY = "GrowthEndTime";
const std::string IS_MIXED_KEY = "Mixed";
const std::string HARVEST_SEEDS_KEY = "HarvestSeeds";
const std::string HARVEST_BLOCKS_KEY = "HarvestBlocks";
const std::string HARVEST_GEMS_KEY = "HarvestGems";
const std::string HARVEST_EXTRA_BLOCKS_KEY = "HarvestExtraBlocks";
const std::string SET_FERTILIZER_KEY = "SFe";
const std::string COLLECT_KEY = "C";
const std::string REMOVE_COLLECT_KEY = "RC";
const std::string COLLECTABLE_ID_KEY = "CollectableID";
const std::string COLLECT_AMOUNT_KEY = "Amount";
const std::string INVENTORY_TYPE_KEY = "InventoryType";
const std::string INVENTORY_DATA_KEY = "InventoryData";
const std::string IS_GEM_KEY = "IsGem";
const std::string GEM_TYPE_KEY = "GemType";
const std::string NEW_COLLECTABLE_KEY = "nCo";
const std::string BUY_ITEM_PACK_KEY = "BIPack";
const std::string ITEM_PACK_ID_KEY = "IPId";
const std::string ITEM_PACK_ROLLS_KEY = "IPRs";
const std::string ITEM_PACK_ROLLS2_KEY = "IPRs2";
const std::string LEAVE_WORLD_KEY = "LW";
const std::string TUTORIAL_STATE_FIELD_KEY = "tutorialState";
const std::string CAMERA_ZOOM_LEVEL_FIELD_KEY = "cameraZoomLevel";
const std::string CAMERA_ZOOM_UPDATE_FIELD_KEY = "cZv";
const std::string CAMERA_ZOOM_VALUE_FIELD_KEY = "cZv";
const std::string GEMS_FIELD_KEY = "gems";
const std::string GEMS_AMOUNT_FIELD_KEY = "GAmt";
const std::string BYTE_COINS_FIELD_KEY = "bcs";
const std::string SLOTS_FIELD_KEY = "slots";
const std::string INVENTORY_FIELD_KEY = "inv";
const std::string INVENTORY_DATA_FIELD_KEY = "invData";
const std::string BELT1_FIELD_KEY = "belt1";
const std::string SPOTS_FIELD_KEY = "spots";
const std::string FAMILIAR_BLOCK_TYPE_FIELD_KEY = "fam";
const std::string FAMILIAR_BLOCK_TYPE_PLAYER_KEY = "familiar";
const std::string PLAYER_COSTUME_FIELD_KEY = "pCosT";
const std::string PLAYER_COSTUME_END_TIME_FIELD_KEY = "pCosET";
const std::string FAMILIAR_NAME_FIELD_KEY = "famName";
const std::string FAMILIAR_NAME_PLAYER_KEY = "familiarName";
const std::string IS_FAMILIAR_MAX_LVL_FIELD_KEY = "isFamMaxLvl";
const std::string IS_FAMILIAR_MAX_LVL_PLAYER_KEY = "isFamiliarMaxLevel";
const std::string FACE_ANIM_FIELD_KEY = "faceAnim";
const std::string SKIN_INDEX_FIELD_KEY = "skin";
const std::string GENDER_FIELD_KEY = "gender";
const std::string NORMAL_CLAIM_TIME_FIELD_KEY = "normalClaimTime";
const std::string VIP_CLAIM_TIME_FIELD_KEY = "vipClaimTime";
const std::string HAS_CLAIMED_ADDITIONAL_FIELD_KEY = "hasClaimedAdditional";
const std::string STATISTICS_FIELD_KEY = "statistics";
const std::string AGE_FIELD_KEY = "Age";
const std::string LEVEL_FIELD_KEY = "LvL";
const std::string XP_LEVEL_FIELD_KEY = "xpLvL";
const std::string ACCOUNT_AGE_FIELD_KEY = "accountAge";
const std::string COUNTRY_CODE_FIELD_KEY = "countryCode";
const std::string VIP_END_TIME_FIELD_KEY = "VIPendTime";
const std::string VIP_END_TIME_AGE_FIELD_KEY = "VIPEndTimeAge";
const std::string NAME_CHANGE_COUNTER_FIELD_KEY = "nameChangeCounter";
const std::string EXPERIENCE_AMOUNT_FIELD_KEY = "experienceAmount";
const std::string XP_AMOUNT_FIELD_KEY = "xpAmount";
const std::string NEXT_DAILY_BONUS_GIVEAWAY_FIELD_KEY =
    "nextdailyBonusGiveAwayKey";
const std::string NEXT_NORMAL_DAILY_BONUS_CLAIM_FIELD_KEY =
    "nextNormalDailyBonusClaimKey";
const std::string NEXT_VIP_DAILY_BONUS_CLAIM_FIELD_KEY =
    "nextVIPDailyBonusClaimKey";
const std::string NEXT_DAILY_ADS_REFRESH_TIME_FIELD_KEY =
    "nextDailyAdsRefreshTimeKey";
const std::string NEXT_DAILY_PVP_REWARDS_REFRESH_TIME_FIELD_KEY =
    "nextDailyPvpRewardsRefreshTimeKey";
const std::string LAST_FREE_PRIZE_CLAIM_TIME_FIELD_KEY = "FPCKey";
const std::string NEXT_WELCOME_GIFT_CLAIM_TIME_FIELD_KEY = "WGtKey";
const std::string WELCOME_GIFT_INDEX_FIELD_KEY = "WGiKey";
const std::string PLAYER_ADMIN_STATUS_FIELD_KEY = "playerAdminStatusKey";
const std::string SHOW_LOCATION_FIELD_KEY = "showLocation";
const std::string SHOW_ONLINE_STATUS_FIELD_KEY = "showOnlineStatus";
const std::string GENERIC_VERSIONING_FIELD_KEY = "gV";
const std::string PASSIVE_EFFECTS_FIELD_KEY = "pEffs";
const std::string INSTRUCTION_STATES_AMOUNTS_FIELD_KEY = "playerAmounts";
const std::string INSTRUCTION_STATES_FIELD_KEY = "instructionStates";
const std::string ACHIEVEMENT_CURRENT_VALUES_FIELD_KEY =
    "achievementCurrentValues";
const std::string ACHIEVEMENT_COMPLETED_STATES_FIELD_KEY =
    "achievementsCompletedStates";
const std::string ACHIEVEMENT_REWARDS_CLAIMED_FIELD_KEY =
    "achievementRewardsClaimed";
const std::string QUEST_LIST_COUNT_FIELD_KEY = "questListCountKey";
const std::string QUEST_CURRENT_ID_FIELD_KEY = "questCurrentIDKey";
const std::string QUEST_CURRENT_PHASE_FIELD_KEY = "questCurrentPhaseKey";
const std::string FACE_EXPRESSION_LIST_ID_FIELD_KEY = "faceExpressionListIDKey";
const std::string BOUGHT_EXPRESSIONS_LIST_FIELD_KEY =
    "boughtExpressionsListKey";
const std::string ALREADY_BOUGHT_ONE_TIME_ITEMS_FIELD_KEY =
    "alreadyBoughtOneTimeItems";
const std::string DAILY_QUEST_NEXT_AVAILABLE_LIST_FIELD_KEY =
    "dailyQuestNextAvailListKey";
const std::string PREVIOUS_THREE_DAILY_QUEST_IDS_FIELD_KEY =
    "previousThreeDailyQuestIdsKey";
const std::string TUTORIAL_1_CURRENT_STEP_FIELD_KEY = "Tutorial1currentStep";
const std::string TUTORIAL_1_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial1trackQuestStepProgress";
const std::string TUTORIAL_2_CURRENT_STEP_FIELD_KEY = "Tutorial2currentStep";
const std::string TUTORIAL_2_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial2trackQuestStepProgress";
const std::string TUTORIAL_3_CURRENT_STEP_FIELD_KEY = "Tutorial3currentStep";
const std::string TUTORIAL_3_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial3trackQuestStepProgress";
const std::string TUTORIAL_4_CURRENT_STEP_FIELD_KEY = "Tutorial4currentStep";
const std::string TUTORIAL_4_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial4trackQuestStepProgress";
const std::string TUTORIAL_5_CURRENT_STEP_FIELD_KEY = "Tutorial5currentStep";
const std::string TUTORIAL_5_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial5trackQuestStepProgress";
const std::string TUTORIAL_5_INVENTORY_SIZE_KEY = "Tutorial5InventorySizeKey";
const std::string TUTORIAL_6_CURRENT_STEP_FIELD_KEY = "Tutorial6currentStep";
const std::string TUTORIAL_6_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial6trackQuestStepProgress";
const std::string TUTORIAL_7_CURRENT_STEP_FIELD_KEY = "Tutorial7currentStep";
const std::string TUTORIAL_7_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial7trackQuestStepProgress";
const std::string TUTORIAL_8_CURRENT_STEP_FIELD_KEY = "Tutorial8currentStep";
const std::string TUTORIAL_8_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial8trackQuestStepProgress";
const std::string TUTORIAL_8_QUEST_VISITED_WORLDS_LIST_FIELD_KEY =
    "Tutorial8questVisitedWorldsListKey";
const std::string TUTORIAL_9_CURRENT_STEP_FIELD_KEY = "Tutorial9currentStep";
const std::string TUTORIAL_9_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial9trackQuestStepProgress";
const std::string TUTORIAL_9_QUEST_VISITED_WORLDS_LIST_FIELD_KEY =
    "Tutorial9questVisitedWorldsListKey";
const std::string TUTORIAL_10_CURRENT_STEP_FIELD_KEY = "Tutorial10currentStep";
const std::string TUTORIAL_10_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial10trackQuestStepProgress";
const std::string TUTORIAL_11_CURRENT_STEP_FIELD_KEY = "Tutorial11currentStep";
const std::string TUTORIAL_11_TRACK_QUEST_STEP_PROGRESS_FIELD_KEY =
    "Tutorial11trackQuestStepProgress";
const std::string TUTORIAL_ID_LIST_FIELD_KEY = "tutorialIDListKey";
const std::string TUTORIAL_QUEST_COMPLETE_STATE_FIELD_KEY =
    "tutorialQuestCompleteState";
const std::string LIMITED_OFFERS_FIELD_KEY = "limitedOffersKey";
const std::string LIMITED_OFFERS_USED_FIELD_KEY = "limitedOffersUsedKey";
const std::string IS_STARTER_FIELD_KEY = "starter";
const std::string CARD_GAME_FACE_EXPRESSIONS_ENABLED_FIELD_KEY = "cGFee";
const std::string CARD_GAME_BODY_EXPRESSIONS_ENABLED_FIELD_KEY = "cGBee";
const std::string FTUE_SOLD_ITEM_IDS_FIELD_KEY = "ftueSoldItemIDsKey";
const std::string SKIN_COLOR_INDEX_BEFORE_OVERRIDE_FIELD_KEY = "skinBO";
const std::string IS_VIP_FIELD_KEY = "IsVIP";
const std::string IN_PORTAL_FIELD_KEY = "inPortal";
const std::string STATUS_ICON_FIELD_KEY = "SIc";
const std::string WEARABLE_OR_WEAPON_CHANGE_KEY = "WeOwC";
const std::string WEARABLE_OR_WEAPON_UNDRESS_KEY = "WeOwU";
const std::string HOTSPOT_BLOCK_TYPE_KEY = "hBlock";
const std::string TOP_ARM_BLOCK_TYPE_KEY = "TT";
const std::string PLAYER_STATUS_ICON_UPDATE = "PSicU";
const std::string PLAYER_LEFT_KEY = "PL";
const std::string WORLD_CHAT_MESSAGE_KEY = "WCM";
const std::string MESSAGE_KEY = "msg";
const std::string NICK_KEY = "nick";
const std::string CHAT_MESSAGE_BINARY = "CmB";
const std::string USER_ID_KEY = "userID";
const std::string CHANNEL_KEY = "channel";
const std::string CHANNEL_INDEX_KEY = "channelIndex";
const std::string MESSAGE_CHAT_KEY = "message";
const std::string CHAT_TIME_KEY = "time";
}