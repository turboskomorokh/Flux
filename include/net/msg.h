#pragma once

namespace flux::net::key {

// I wish they'll make enum capable of dealing with string values one day
constexpr const char *ID = "ID";
constexpr const char *PING = "p";
constexpr const char *SYNC_TIME = "ST";
constexpr const char *VERSION_CHECK = "VChk";
constexpr const char *OPERATING_SYSTEM = "OS";
constexpr const char *OPERATING_SYSTEM_TYPE = "OSt";
constexpr const char *VERSION_NUMBER = "VN";
constexpr const char *TIME = "T";
constexpr const char *SYNC_TIME_FIELD = "STime";
constexpr const char *SYNC_TIME_SERVER_SLEEP = "SSlp";
constexpr const char *GET_PLAYER_DATA = "GPd";
constexpr const char *TOKEN = "Tk";
constexpr const char *COGNITO_ID = "CoID";
constexpr const char *PLAYER_ID = "U";
constexpr const char *PLAYER_USERNAME = "UN";
constexpr const char *PLAYER_DATA = "pD";
constexpr const char *EMAIL = "Email";
constexpr const char *EMAIL_VERIFIED = "EmailVerified";
constexpr const char *RENAME_PLAYER = "RenamePlayer";
constexpr const char *SUCCESS = "S";
constexpr const char *ERROR = "ER";
constexpr const char *MENU_WORLD_LOAD_INFO = "MWli";
constexpr const char *WORLD_NAME = "WN";
constexpr const char *COUNT = "Ct";
constexpr const char *LOGIN_TOKEN_UPDATE = "LoginTokenUpdate";
constexpr const char *GET_LIVE_STREAM_INFO = "gLSI";
constexpr const char *UPDATE_LOCATION_STATUS = "ULS";
constexpr const char *INSTRUCTION_EVENT_COMPLETED = "iEC";
constexpr const char *TRY_TO_JOIN_WORLD = "TTjW";
constexpr const char *WORLD = "W";
constexpr const char *AMOUNT = "Amt";
constexpr const char *REAL_USERNAME = "rUN";
constexpr const char *BAN_PLAYER = "BPl";
constexpr const char *NEWS_VERSION = "NV";
constexpr const char *WOTW = "Wo";
constexpr const char *WOTW_VERSION = "WV";
constexpr const char *WORLD_BIOME = "WB";
constexpr const char *JOIN_RESULT = "JR";
constexpr const char *GET_WORLD = "Gw";
constexpr const char *GET_WORLD_COMPRESSED = "GWC";
constexpr const char *ENTRANCE_PORTAL_ID = "eID";
constexpr const char *ACHIEVEMENT = "A";
constexpr const char *CAMERA_ZOOM_LEVEL_UPDATE = "cZL";
constexpr const char *CAMERA_ZOOM_LEVEL_UPDATE_FIELD = "CZL";
constexpr const char *CAMERA_ZOOM_VALUE_UPDATE = "cZva";
constexpr const char *REQUEST_OTHER_PLAYER = "rOP";
constexpr const char *REQUEST_AI_ENEMY = "rAI";
constexpr const char *REQUEST_AI_PETS = "rAIp";
constexpr const char *GET_FRIEND_LIST = "GFLi";
constexpr const char *GET_SCOREBOARD_DATA = "GSb";
constexpr const char *WORLD_RANDOM_EVENT_UPDATE = "WREU";
constexpr const char *WORLD_RANDOM_EVENT_GET_ALL_ACTIVE = "WREgA";
constexpr const char *ADD_NETWORK_PLAYER = "AnP";
constexpr const char *TIMESTAMP = "t";
constexpr const char *POSITION_X = "x";
constexpr const char *POSITION_Y = "y";
constexpr const char *POSITION_X_FLOAT = "PosX";
constexpr const char *POSITION_Y_FLOAT = "PosY";
constexpr const char *ANIMATION = "a";
constexpr const char *DIRECTION = "d";
constexpr const char *TELEPORT = "tp";
constexpr const char *MY_POSITION = "mP";
constexpr const char *READY_TO_PLAY = "RtP";
constexpr const char *FIRST_MESSAGE = "m0";
constexpr const char *TUTORIAL_STATE_UPDATE = "TState";
constexpr const char *TUTORIAL_STATE_UPDATE_FIELD = "Tstate";
constexpr const char *CHARACTER_CREATED = "CharC";
constexpr const char *GENDER = "Gnd";
constexpr const char *COUNTRY = "Ctry";
constexpr const char *SKIN_COLOR_INDEX = "SCI";
constexpr const char *BLOCK_TYPE = "BlockType";
constexpr const char *SET_SEED = "SS";
constexpr const char *SET_BLOCK = "SB";
constexpr const char *SET_BLOCK_BACKGROUND = "SBB";
constexpr const char *HIT_BLOCK = "HB";
constexpr const char *HIT_BLOCK_BACKGROUND = "HBB";
constexpr const char *DESTROY_BLOCK = "DB";
constexpr const char *DESTROYED_BLOCK_TYPE = "DBBT";
constexpr const char *DESTROYED_SEED_TYPE = "DSBT";
constexpr const char *GROWTH_DURATION = "GrowthDuration";
constexpr const char *GROWTH_END_TIME = "GrowthEndTime";
constexpr const char *IS_MIXED = "Mixed";
constexpr const char *HARVEST_SEEDS = "HarvestSeeds";
constexpr const char *HARVEST_BLOCKS = "HarvestBlocks";
constexpr const char *HARVEST_GEMS = "HarvestGems";
constexpr const char *HARVEST_EXTRA_BLOCKS = "HarvestExtraBlocks";
constexpr const char *SET_FERTILIZER = "SFe";
constexpr const char *COLLECT = "C";
constexpr const char *REMOVE_COLLECT = "RC";
constexpr const char *COLLECTABLE_ID = "CollectableID";
constexpr const char *COLLECT_AMOUNT = "Amount";
constexpr const char *INVENTORY_TYPE = "InventoryType";
constexpr const char *INVENTORY_DATA = "InventoryData";
constexpr const char *IS_GEM = "IsGem";
constexpr const char *GEM_TYPE = "GemType";
constexpr const char *NEW_COLLECTABLE = "nCo";
constexpr const char *BUY_ITEM_PACK = "BIPack";
constexpr const char *ITEM_PACK_ID = "IPId";
constexpr const char *ITEM_PACK_ROLLS = "IPRs";
constexpr const char *ITEM_PACK_ROLLS2 = "IPRs2";
constexpr const char *LEAVE_WORLD = "LW";
constexpr const char *TUTORIAL_STATE_FIELD = "tutorialState";
constexpr const char *CAMERA_ZOOM_LEVEL_FIELD = "cameraZoomLevel";
constexpr const char *CAMERA_ZOOM_UPDATE_FIELD = "cZv";
constexpr const char *CAMERA_ZOOM_VALUE_FIELD = "cZv";
constexpr const char *GEMS_FIELD = "gems";
constexpr const char *GEMS_AMOUNT_FIELD = "GAmt";
constexpr const char *BYTE_COINS_FIELD = "bcs";
constexpr const char *SLOTS_FIELD = "slots";
constexpr const char *INVENTORY_FIELD = "inv";
constexpr const char *INVENTORY_DATA_FIELD = "invData";
constexpr const char *BELT1_FIELD = "belt1";
constexpr const char *SPOTS_FIELD = "spots";
constexpr const char *FAMILIAR_BLOCK_TYPE_FIELD = "fam";
constexpr const char *FAMILIAR_BLOCK_TYPE_PLAYER = "familiar";
constexpr const char *PLAYER_COSTUME_FIELD = "pCosT";
constexpr const char *PLAYER_COSTUME_END_TIME_FIELD = "pCosET";
constexpr const char *FAMILIAR_NAME_FIELD = "famName";
constexpr const char *FAMILIAR_NAME_PLAYER = "familiarName";
constexpr const char *IS_FAMILIAR_MAX_LVL_FIELD = "isFamMaxLvl";
constexpr const char *IS_FAMILIAR_MAX_LVL_PLAYER = "isFamiliarMaxLevel";
constexpr const char *FACE_ANIM_FIELD = "faceAnim";
constexpr const char *SKIN_INDEX_FIELD = "skin";
constexpr const char *GENDER_FIELD = "gender";
constexpr const char *NORMAL_CLAIM_TIME_FIELD = "normalClaimTime";
constexpr const char *VIP_CLAIM_TIME_FIELD = "vipClaimTime";
constexpr const char *HAS_CLAIMED_ADDITIONAL_FIELD = "hasClaimedAdditional";
constexpr const char *STATISTICS_FIELD = "statistics";
constexpr const char *AGE_FIELD = "Age";
constexpr const char *LEVEL_FIELD = "LvL";
constexpr const char *XP_LEVEL_FIELD = "xpLvL";
constexpr const char *ACCOUNT_AGE_FIELD = "accountAge";
constexpr const char *COUNTRY_CODE_FIELD = "countryCode";
constexpr const char *VIP_END_TIME_FIELD = "VIPendTime";
constexpr const char *VIP_END_TIME_AGE_FIELD = "VIPEndTimeAge";
constexpr const char *NAME_CHANGE_COUNTER_FIELD = "nameChangeCounter";
constexpr const char *EXPERIENCE_AMOUNT_FIELD = "experienceAmount";
constexpr const char *XP_AMOUNT_FIELD = "xpAmount";
constexpr const char *NEXT_DAILY_BONUS_GIVEAWAY_FIELD =
    "nextdailyBonusGiveAwayKey";
constexpr const char *NEXT_NORMAL_DAILY_BONUS_CLAIM_FIELD =
    "nextNormalDailyBonusClaimKey";
constexpr const char *NEXT_VIP_DAILY_BONUS_CLAIM_FIELD =
    "nextVIPDailyBonusClaimKey";
constexpr const char *NEXT_DAILY_ADS_REFRESH_TIME_FIELD =
    "nextDailyAdsRefreshTimeKey";
constexpr const char *NEXT_DAILY_PVP_REWARDS_REFRESH_TIME_FIELD =
    "nextDailyPvpRewardsRefreshTimeKey";
constexpr const char *LAST_FREE_PRIZE_CLAIM_TIME_FIELD = "FPCKey";
constexpr const char *NEXT_WELCOME_GIFT_CLAIM_TIME_FIELD = "WGtKey";
constexpr const char *WELCOME_GIFT_INDEX_FIELD = "WGiKey";
constexpr const char *PLAYER_ADMIN_STATUS_FIELD = "playerAdminStatusKey";
constexpr const char *SHOW_LOCATION_FIELD = "showLocation";
constexpr const char *SHOW_ONLINE_STATUS_FIELD = "showOnlineStatus";
constexpr const char *GENERIC_VERSIONING_FIELD = "gV";
constexpr const char *PASSIVE_EFFECTS_FIELD = "pEffs";
constexpr const char *INSTRUCTION_STATES_AMOUNTS_FIELD = "playerAmounts";
constexpr const char *INSTRUCTION_STATES_FIELD = "instructionStates";
constexpr const char *ACHIEVEMENT_CURRENT_VALUES_FIELD =
    "achievementCurrentValues";
constexpr const char *ACHIEVEMENT_COMPLETED_STATES_FIELD =
    "achievementsCompletedStates";
constexpr const char *ACHIEVEMENT_REWARDS_CLAIMED_FIELD =
    "achievementRewardsClaimed";
constexpr const char *QUEST_LIST_COUNT_FIELD = "questListCountKey";
constexpr const char *QUEST_CURRENT_ID_FIELD = "questCurrentIDKey";
constexpr const char *QUEST_CURRENT_PHASE_FIELD = "questCurrentPhaseKey";
constexpr const char *FACE_EXPRESSION_LIST_ID_FIELD = "faceExpressionListIDKey";
constexpr const char *BOUGHT_EXPRESSIONS_LIST_FIELD =
    "boughtExpressionsListKey";
constexpr const char *ALREADY_BOUGHT_ONE_TIME_ITEMS_FIELD =
    "alreadyBoughtOneTimeItems";
constexpr const char *DAILY_QUEST_NEXT_AVAILABLE_LIST_FIELD =
    "dailyQuestNextAvailListKey";
constexpr const char *PREVIOUS_THREE_DAILY_QUEST_IDS_FIELD =
    "previousThreeDailyQuestIdsKey";
constexpr const char *TUTORIAL_1_CURRENT_STEP_FIELD = "Tutorial1currentStep";
constexpr const char *TUTORIAL_1_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial1trackQuestStepProgress";
constexpr const char *TUTORIAL_2_CURRENT_STEP_FIELD = "Tutorial2currentStep";
constexpr const char *TUTORIAL_2_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial2trackQuestStepProgress";
constexpr const char *TUTORIAL_3_CURRENT_STEP_FIELD = "Tutorial3currentStep";
constexpr const char *TUTORIAL_3_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial3trackQuestStepProgress";
constexpr const char *TUTORIAL_4_CURRENT_STEP_FIELD = "Tutorial4currentStep";
constexpr const char *TUTORIAL_4_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial4trackQuestStepProgress";
constexpr const char *TUTORIAL_5_CURRENT_STEP_FIELD = "Tutorial5currentStep";
constexpr const char *TUTORIAL_5_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial5trackQuestStepProgress";
constexpr const char *TUTORIAL_5_INVENTORY_SIZE = "Tutorial5InventorySizeKey";
constexpr const char *TUTORIAL_6_CURRENT_STEP_FIELD = "Tutorial6currentStep";
constexpr const char *TUTORIAL_6_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial6trackQuestStepProgress";
constexpr const char *TUTORIAL_7_CURRENT_STEP_FIELD = "Tutorial7currentStep";
constexpr const char *TUTORIAL_7_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial7trackQuestStepProgress";
constexpr const char *TUTORIAL_8_CURRENT_STEP_FIELD = "Tutorial8currentStep";
constexpr const char *TUTORIAL_8_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial8trackQuestStepProgress";
constexpr const char *TUTORIAL_8_QUEST_VISITED_WORLDS_LIST_FIELD =
    "Tutorial8questVisitedWorldsListKey";
constexpr const char *TUTORIAL_9_CURRENT_STEP_FIELD = "Tutorial9currentStep";
constexpr const char *TUTORIAL_9_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial9trackQuestStepProgress";
constexpr const char *TUTORIAL_9_QUEST_VISITED_WORLDS_LIST_FIELD =
    "Tutorial9questVisitedWorldsListKey";
constexpr const char *TUTORIAL_10_CURRENT_STEP_FIELD = "Tutorial10currentStep";
constexpr const char *TUTORIAL_10_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial10trackQuestStepProgress";
constexpr const char *TUTORIAL_11_CURRENT_STEP_FIELD = "Tutorial11currentStep";
constexpr const char *TUTORIAL_11_TRACK_QUEST_STEP_PROGRESS_FIELD =
    "Tutorial11trackQuestStepProgress";
constexpr const char *TUTORIAL_ID_LIST_FIELD = "tutorialIDListKey";
constexpr const char *TUTORIAL_QUEST_COMPLETE_STATE_FIELD =
    "tutorialQuestCompleteState";
constexpr const char *LIMITED_OFFERS_FIELD = "limitedOffersKey";
constexpr const char *LIMITED_OFFERS_USED_FIELD = "limitedOffersUsedKey";
constexpr const char *IS_STARTER_FIELD = "starter";
constexpr const char *CARD_GAME_FACE_EXPRESSIONS_ENABLED_FIELD = "cGFee";
constexpr const char *CARD_GAME_BODY_EXPRESSIONS_ENABLED_FIELD = "cGBee";
constexpr const char *FTUE_SOLD_ITEM_IDS_FIELD = "ftueSoldItemIDsKey";
constexpr const char *SKIN_COLOR_INDEX_BEFORE_OVERRIDE_FIELD = "skinBO";
constexpr const char *IS_VIP_FIELD = "IsVIP";
constexpr const char *IN_PORTAL_FIELD = "inPortal";
constexpr const char *STATUS_ICON_FIELD = "SIc";
constexpr const char *WEARABLE_OR_WEAPON_CHANGE = "WeOwC";
constexpr const char *WEARABLE_OR_WEAPON_UNDRESS = "WeOwU";
constexpr const char *HOTSPOT_BLOCK_TYPE = "hBlock";
constexpr const char *TOP_ARM_BLOCK_TYPE = "TTBlock";
constexpr const char *BOTTOM_ARM_BLOCK_TYPE = "BTBlock";
constexpr const char *LEFT_ARM_BLOCK_TYPE = "LATBlock";
constexpr const char *RIGHT_ARM_BLOCK_TYPE = "RATBlock";
constexpr const char *HELMET_BLOCK_TYPE = "HB";
constexpr const char *SKIN_BLOCK_TYPE = "SkinBlock";
constexpr const char *MAKE_LOOKUP_BLOCK_TYPES_LIST_FIELD =
    "makeLookupBlockTypesListField";

} // namespace flux::net::key