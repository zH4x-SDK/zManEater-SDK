#pragma once

// Name: ManEater, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Maneater.EEvolutionSlot
enum class Maneater_EEvolutionSlot : uint8_t
{
	EEvolutionSlot__SLOT_UNDEFINED = 0,
	EEvolutionSlot__SLOT_JAW       = 1,
	EEvolutionSlot__SLOT_HEAD      = 2,
	EEvolutionSlot__SLOT_BODY      = 3,
	EEvolutionSlot__SLOT_TAIL      = 4,
	EEvolutionSlot__SLOT_FINS      = 5,
	EEvolutionSlot__SLOT_ORGAN1    = 6,
	EEvolutionSlot__SLOT_ORGAN2    = 7,
	EEvolutionSlot__SLOT_ORGAN3    = 8,
	EEvolutionSlot__SLOT_ALL       = 9,
	EEvolutionSlot__SLOT_MAX       = 10,

};

// Enum Maneater.EAIThreatAlertState
enum class Maneater_EAIThreatAlertState : uint8_t
{
	AS_Undefined                   = 0,
	AS_Ease                        = 1,
	AS_Suspicious                  = 2,
	AS_Alert                       = 3,
	AS_Scared                      = 4,
	AS_Max                         = 5,

};

// Enum Maneater.EObjectiveType
enum class Maneater_EObjectiveType : uint8_t
{
	EObjectiveType__INVALID        = 0,
	EObjectiveType__DISCOVER       = 1,
	EObjectiveType__TERRORIZE      = 2,
	EObjectiveType__NUTRIENT_CACHE = 3,
	EObjectiveType__POPULATION_CONTROL = 4,
	EObjectiveType__APEX_PREDATOR  = 5,
	EObjectiveType__HUNT           = 6,
	EObjectiveType__HIGH_VALUE_TARGET = 7,
	EObjectiveType__COLLECTABLE    = 8,
	EObjectiveType__CUSTOM         = 9,
	EObjectiveType__GRATES         = 10,
	EObjectiveType__GATES          = 11,
	EObjectiveType__BREACHES       = 12,
	EObjectiveType__GROTTO         = 13,
	EObjectiveType__CUTSCENE       = 14,
	EObjectiveType__BOSS           = 15,
	EObjectiveType__DESTROY        = 16,
	EObjectiveType__EObjectiveType_MAX = 17,

};

// Enum Maneater.EPlayerGrowthStage
enum class Maneater_EPlayerGrowthStage : uint8_t
{
	PGS_UNDEFINED                  = 0,
	PGS_PUP                        = 1,
	PGS_TEEN                       = 2,
	PGS_ADULT                      = 3,
	PGS_ELDER                      = 4,
	PGS_MEGA                       = 5,
	PGS_MOTHER                     = 6,
	PGS_MAX                        = 7,

};

// Enum Maneater.ENutrientType
enum class Maneater_ENutrientType : uint8_t
{
	NT_PROTEINS                    = 0,
	NT_FATS                        = 1,
	NT_MINERALS                    = 2,
	NT_MUTAGEN                     = 3,
	NT_MAX                         = 4,

};

// Enum Maneater.EPersistentStatType
enum class Maneater_EPersistentStatType : uint8_t
{
	STAT_UNDEFINED                 = 0,
	STAT_KILLS_HUMAN               = 1,
	STAT_KILLS_ANIMAL              = 2,
	STAT_KILLS_BOATS               = 3,
	STAT_KILLS_BOSSES              = 4,
	STAT_PLAYERDEATHS              = 5,
	STAT_NUTRIENTSGAINED           = 6,
	STAT_WORLDEXPLORED             = 7,
	STAT_MAX                       = 8,

};

// Enum Maneater.ETutorialEventId
enum class Maneater_ETutorialEventId : uint8_t
{
	TUT_EVENT_LOOK                 = 0,
	TUT_EVENT_MOVE                 = 1,
	TUT_EVENT_CONSUME              = 2,
	TUT_EVENT_TAILWHIP             = 3,
	TUT_EVENT_KNIFE                = 4,
	TUT_EVENT_KNIFING_JUMP         = 5,
	TUT_EVENT_SUBMERGE             = 6,
	TUT_EVENT_LUNGE                = 7,
	TUT_EVENT_BREACH               = 8,
	TUT_EVENT_WHIPSHOT             = 9,
	TUT_EVENT_WAITING_FOR_EVOLUTION = 10,
	TUT_EVENT_OPEN_EVOLUTION_PANEL = 11,
	TUT_EVENT_EVOLUTION_PURCHASE   = 12,
	TUT_EVENT_FINISHED             = 13,
	TUT_EVENT_MAX                  = 14,

};

// Enum Maneater.EME_CharacterAbility
enum class Maneater_EME_CharacterAbility : uint8_t
{
	EME_CharacterAbility__CA_None  = 0,
	EME_CharacterAbility__CA_Combo = 1,
	EME_CharacterAbility__CA_Evolution = 2,
	EME_CharacterAbility__CA_Max   = 3,

};

// Enum Maneater.ECharacterActionMode
enum class Maneater_ECharacterActionMode : uint8_t
{
	ACT_UNDERWATER                 = 0,
	ACT_KNIFING                    = 1,
	ACT_BREACHING                  = 2,
	ACT_ONLAND                     = 3,
	ACT_MAX                        = 4,

};

// Enum Maneater.EWorldRegion
enum class Maneater_EWorldRegion : uint8_t
{
	EWorldRegion__UNDEFINED        = 0,
	EWorldRegion__CRAWFISH_BAY     = 1,
	EWorldRegion__FAWTICK_BAYOU    = 2,
	EWorldRegion__DEAD_HORSE_LAKE  = 3,
	EWorldRegion__GOLDEN_SHORES    = 4,
	EWorldRegion__SAPPHIRE_BAY     = 5,
	EWorldRegion__PROSPERITY_SANDS = 6,
	EWorldRegion__CAVIAR_KEY       = 7,
	EWorldRegion__THE_GULF         = 8,
	EWorldRegion__EWorldRegion_MAX = 9,

};

// Enum Maneater.EObjectiveState
enum class Maneater_EObjectiveState : uint8_t
{
	EObjectiveState__UNAVAILABLE   = 0,
	EObjectiveState__AVAILABLE     = 1,
	EObjectiveState__INPROGRESS    = 2,
	EObjectiveState__COMPLETED     = 3,
	EObjectiveState__EObjectiveState_MAX = 4,

};

// Enum Maneater.EBossBattleEvent
enum class Maneater_EBossBattleEvent : uint8_t
{
	BOE_INTRO                      = 0,
	BOE_FIGHTSTART                 = 1,
	BOE_FIGHTSTOPPED               = 2,
	BOE_BOSSSPAWNED                = 3,
	BOE_BOSSREMOVED                = 4,
	BOE_FIGHTEND                   = 5,
	BOE_MAX                        = 6,

};

// Enum Maneater.EVehicleType
enum class Maneater_EVehicleType : uint8_t
{
	EVehicleType__EVT_UNDEFINED    = 0,
	EVehicleType__EVT_JETSKI       = 1,
	EVehicleType__EVT_MAX          = 2,

};

// Enum Maneater.EWeaponType
enum class Maneater_EWeaponType : uint8_t
{
	EWeaponType__EWT_UNDEFINED     = 0,
	EWeaponType__EWT_DART_GUN      = 1,
	EWeaponType__EWT_DEPTH_CHARGE  = 2,
	EWeaponType__EWT_DYNAMITE      = 3,
	EWeaponType__EWT_MACHINE_GUN   = 4,
	EWeaponType__EWT_POISON        = 5,
	EWeaponType__EWT_RIFLE         = 6,
	EWeaponType__EWT_SHIELD        = 7,
	EWeaponType__EWT_SHOTGUN       = 8,
	EWeaponType__EWT_SPEARGUN      = 9,
	EWeaponType__EWT_TORPEDO       = 10,
	EWeaponType__EWT_MAX           = 11,

};

// Enum Maneater.EThreeStateSwitch
enum class Maneater_EThreeStateSwitch : uint8_t
{
	EThreeStateSwitch__ETS_False   = 0,
	EThreeStateSwitch__ETS_True    = 1,
	EThreeStateSwitch__ETS_None    = 2,
	EThreeStateSwitch__ETS_MAX     = 3,

};

// Enum Maneater.EDirOctant
enum class Maneater_EDirOctant : uint8_t
{
	EDirOctant__DIR_Forward        = 0,
	EDirOctant__DIR_Backward       = 1,
	EDirOctant__DIR_Left           = 2,
	EDirOctant__DIR_Right          = 3,
	EDirOctant__DIR_ForwardLeft    = 4,
	EDirOctant__DIR_ForwardRight   = 5,
	EDirOctant__DIR_BackwardLeft   = 6,
	EDirOctant__DIR_BackwardRight  = 7,
	EDirOctant__DIR_None           = 8,
	EDirOctant__DIR_MAX            = 9,

};

// Enum Maneater.ETutorialDisplayType
enum class Maneater_ETutorialDisplayType : uint8_t
{
	TDT_POPUP                      = 0,
	TDT_BOOKLET                    = 1,
	TDT_MAX                        = 2,

};

// Enum Maneater.ERichTextPreset
enum class Maneater_ERichTextPreset : uint8_t
{
	RTP_NONE                       = 0,
	RTP_INPUTBIND                  = 1,
	RTP_VOCABTERM                  = 2,
	RTP_EVOLUTIONBUFF              = 3,
	RTP_EVOLUTIONNERF              = 4,
	RTP_MAX                        = 5,

};

// Enum Maneater.EPlayerAttributeType
enum class Maneater_EPlayerAttributeType : uint8_t
{
	ATT_FEROCITY                   = 0,
	ATT_ENDURANCE                  = 1,
	ATT_AGILITY                    = 2,
	ATT_VITALITY                   = 3,
	ATT_MAX                        = 4,

};

// Enum Maneater.ECombatEventType
enum class Maneater_ECombatEventType : uint8_t
{
	CE_DAMAGE                      = 0,
	CE_HEAL                        = 1,
	CE_EVADE                       = 2,
	CE_MAX                         = 3,

};

// Enum Maneater.EMECustomMovementMode
enum class Maneater_EMECustomMovementMode : uint8_t
{
	MEMOVE_None                    = 0,
	MEMOVE_WhipShotBallistic       = 1,
	MEMOVE_WhipShotLinear          = 2,
	MEMOVE_MAX                     = 3,

};

// Enum Maneater.ENutrientSource
enum class Maneater_ENutrientSource : uint8_t
{
	NS_OBJECTIVES                  = 0,
	NS_BOUNTIES                    = 1,
	NS_EATING                      = 2,
	NS_LANDMARKS                   = 3,
	NS_CACHES                      = 4,
	NS_COLLECTABLES                = 5,
	NS_CHEATS                      = 6,
	NS_OTHER                       = 7,
	NS_MAX                         = 8,

};

// Enum Maneater.EThrashAttackType
enum class Maneater_EThrashAttackType : uint8_t
{
	TAT_NONE                       = 0,
	TAT_LATCHED                    = 1,
	TAT_DRAGGED                    = 2,
	TAT_MAX                        = 3,

};

// Enum Maneater.EPawnSpeciesType
enum class Maneater_EPawnSpeciesType : uint8_t
{
	SPECIES_UNDEFINED              = 0,
	SPECIES_TIGERSHARK             = 1,
	SPECIES_BULLSHARK              = 2,
	SPECIES_MAKOSHARK              = 3,
	SPECIES_HAMMERHEADSHARK        = 4,
	SPECIES_GREATWHITESHARK        = 5,
	SPECIES_THRESHERSHARK          = 6,
	SPECIES_PLAYABLE_MAX           = 7,
	SPECIES_HUMAN                  = 8,
	SPECIES_VEHICLE                = 9,
	SPECIES_BARRACUDA              = 10,
	SPECIES_ALLIGATOR              = 11,
	SPECIES_FISH                   = 12,
	SPECIES_TURTLE                 = 13,
	SPECIES_GORE                   = 14,
	SPECIES_SEAL                   = 15,
	SPECIES_KILLERWHALE            = 16,
	SPECIES_SPERMWHALE             = 17,
	SPECIES_SWORDFISH              = 18,
	SPECIES_MAX                    = 19,

};

// Enum Maneater.EPawnAge
enum class Maneater_EPawnAge : uint8_t
{
	AGE_ADULT                      = 0,
	AGE_ELDERLY                    = 1,
	AGE_CHILD                      = 2,
	AGE_MAX                        = 3,

};

// Enum Maneater.EPawnBodyType
enum class Maneater_EPawnBodyType : uint8_t
{
	BT_UNDEFINED                   = 0,
	BT_FIT                         = 1,
	BT_PLUS                        = 2,
	BT_MAX                         = 3,

};

// Enum Maneater.EPawnGender
enum class Maneater_EPawnGender : uint8_t
{
	GENDER_UNDEFINED               = 0,
	GENDER_MALE                    = 1,
	GENDER_FEMALE                  = 2,
	GENDER_MAX                     = 3,

};

// Enum Maneater.EOutlineColor
enum class Maneater_EOutlineColor : uint8_t
{
	EOutlineColor__OUTLINECOLOR_NONE = 0,
	EOutlineColor__OUTLINECOLOR_BLUE = 1,
	EOutlineColor__OUTLINECOLOR_GREEN = 2,
	EOutlineColor__OUTLINECOLOR_ORANGE = 3,
	EOutlineColor__OUTLINECOLOR_RED = 4,
	EOutlineColor__OUTLINECOLOR_YELLOW = 5,
	EOutlineColor__OUTLINECOLOR_WHITE = 6,
	EOutlineColor__OUTLINECOLOR_NUM = 7,
	EOutlineColor__OUTLINECOLOR_MAX = 8,

};

// Enum Maneater.ETwEquippabilityType
enum class Maneater_ETwEquippabilityType : uint8_t
{
	ETwEquippabilityType__EquippabilityType_None = 0,
	ETwEquippabilityType__EquippabilityType1 = 1,
	ETwEquippabilityType__EquippabilityType2 = 2,
	ETwEquippabilityType__EquippabilityType3 = 3,
	ETwEquippabilityType__EquippabilityType4 = 4,
	ETwEquippabilityType__EquippabilityType5 = 5,
	ETwEquippabilityType__EquippabilityType6 = 6,
	ETwEquippabilityType__EquippabilityType7 = 7,
	ETwEquippabilityType__EquippabilityType8 = 8,
	ETwEquippabilityType__EquippabilityType9 = 9,
	ETwEquippabilityType__EquippabilityType10 = 10,
	ETwEquippabilityType__EquippabilityType11 = 11,
	ETwEquippabilityType__EquippabilityType12 = 12,
	ETwEquippabilityType__EquippabilityType13 = 13,
	ETwEquippabilityType__EquippabilityType14 = 14,
	ETwEquippabilityType__EquippabilityType_Max = 15,
	ETwEquippabilityType__ETwEquippabilityType_MAX = 16,

};

// Enum Maneater.EItemRarityType
enum class Maneater_EItemRarityType : uint8_t
{
	EItemRarityType__ItemRarityType_Common = 0,
	EItemRarityType__ItemRarityType_UnCommon = 1,
	EItemRarityType__ItemRarityType_Rare = 2,
	EItemRarityType__ItemRarityType_Epic = 3,
	EItemRarityType__ItemRarityType_Legendary = 4,
	EItemRarityType__ItemRarityType_Max = 5,

};

// Enum Maneater.ETeamID
enum class Maneater_ETeamID : uint8_t
{
	ETeamID__TID_Player1           = 0,
	ETeamID__TID_Player2           = 1,
	ETeamID__TID_AgressiveAI1      = 2,
	ETeamID__TID_AgressiveAI2      = 3,
	ETeamID__TID_FriendlyAI        = 4,
	ETeamID__TID_NeutralAI         = 5,
	ETeamID__TID_NoTeam            = 6,
	ETeamID__TID_MAX               = 7,

};

// Enum Maneater.ECombatStatus
enum class Maneater_ECombatStatus : uint8_t
{
	ECombatStatus__NONE            = 0,
	ECombatStatus__STANDBY         = 1,
	ECombatStatus__ON_DECK         = 2,
	ECombatStatus__ENGAGED         = 3,
	ECombatStatus__COOLDOWN        = 4,
	ECombatStatus__ECombatStatus_MAX = 5,

};

// Enum Maneater.EHunterRank
enum class Maneater_EHunterRank : uint8_t
{
	EHunterRank__NONE              = 0,
	EHunterRank__RANK              = 1,
	EHunterRank__RANK01            = 2,
	EHunterRank__RANK02            = 3,
	EHunterRank__MAX               = 4,

};

// Enum Maneater.EVisionType
enum class Maneater_EVisionType : uint8_t
{
	EVisionType__VT_None           = 0,
	EVisionType__VT_Air            = 1,
	EVisionType__VT_Surface        = 2,
	EVisionType__VT_Underwater     = 3,
	EVisionType__VT_MAX            = 4,

};

// Enum Maneater.EMercunaAreaType
enum class Maneater_EMercunaAreaType : uint8_t
{
	EMercunaAreaType__Underwater   = 0,
	EMercunaAreaType__Air          = 1,
	EMercunaAreaType__Land         = 2,
	EMercunaAreaType__WildlifeBlocker = 3,
	EMercunaAreaType__EMercunaAreaType_MAX = 4,

};

// Enum Maneater.EAdjacencyExtentSize
enum class Maneater_EAdjacencyExtentSize : uint8_t
{
	AES_VERYNARROW                 = 0,
	AES_NARROW                     = 1,
	AES_WIDE                       = 2,
	AES_VERYWIDE                   = 3,
	AES_WIDEST                     = 4,
	AES_MAX                        = 5,

};

// Enum Maneater.ENavmeshAreaType
enum class Maneater_ENavmeshAreaType : uint8_t
{
	ENavmeshAreaType__Default      = 0,
	ENavmeshAreaType__Escape       = 1,
	ENavmeshAreaType__ENavmeshAreaType_MAX = 2,

};

// Enum Maneater.EAlertEventDuration
enum class Maneater_EAlertEventDuration : uint8_t
{
	EAlertEventDuration__Instant   = 0,
	EAlertEventDuration__Infinite  = 1,
	EAlertEventDuration__HasDuration = 2,
	EAlertEventDuration__EAlertEventDuration_MAX = 3,

};

// Enum Maneater.EPropDetachPhase
enum class Maneater_EPropDetachPhase : uint8_t
{
	PDP_UNDEFINED                  = 0,
	PDP_INTRO_BEGIN                = 1,
	PDP_OUTRO_BEGIN                = 2,
	PDP_ACTIVITY_STOP              = 3,
	PDP_ACTIVITY_ABORT             = 4,
	PDP_MAX                        = 5,

};

// Enum Maneater.EEvolutionSelection
enum class Maneater_EEvolutionSelection : uint8_t
{
	EEvolutionSelection__EES_NOSELECTION = 0,
	EEvolutionSelection__EES_JAW   = 1,
	EEvolutionSelection__EES_FINS  = 2,
	EEvolutionSelection__EES_HEAD  = 3,
	EEvolutionSelection__EES_TAIL  = 4,
	EEvolutionSelection__EES_BODY  = 5,
	EEvolutionSelection__EES_MAX   = 6,

};

// Enum Maneater.EPlayerSharkTailDirection
enum class Maneater_EPlayerSharkTailDirection : uint8_t
{
	EPlayerSharkTailDirection__PSTD_MidGoingLeft = 0,
	EPlayerSharkTailDirection__PSTD_ExtremeLeft = 1,
	EPlayerSharkTailDirection__PSTD_MidGoingRight = 2,
	EPlayerSharkTailDirection__PSTD_ExtremeRight = 3,
	EPlayerSharkTailDirection__PSTD_MAX = 4,

};

// Enum Maneater.EWildlifeSpecies
enum class Maneater_EWildlifeSpecies : uint8_t
{
	EWildlifeSpecies__WLS_UNDEFINED = 0,
	EWildlifeSpecies__WLS_Alligator = 1,
	EWildlifeSpecies__WLS_Barricuda = 2,
	EWildlifeSpecies__WLS_BullShark = 3,
	EWildlifeSpecies__WLS_Catfish  = 4,
	EWildlifeSpecies__WLS_GreatWhite = 5,
	EWildlifeSpecies__WLS_Grouper  = 6,
	EWildlifeSpecies__WLS_HammerHead = 7,
	EWildlifeSpecies__WLS_KillerWhale = 8,
	EWildlifeSpecies__WLS_Mackerel = 9,
	EWildlifeSpecies__WLS_Mako     = 10,
	EWildlifeSpecies__WLS_Seal     = 11,
	EWildlifeSpecies__WLS_SpermWhale = 12,
	EWildlifeSpecies__WLS_SwordFish = 13,
	EWildlifeSpecies__WLS_MAX      = 14,

};

// Enum Maneater.ELimbBoneName
enum class Maneater_ELimbBoneName : uint8_t
{
	LBN_UNDFINED                   = 0,
	LBN_BODYMAIN                   = 1,
	LBN_HEAD                       = 2,
	LBN_DORSALFIN                  = 3,
	LBN_LEFTVENTRAL                = 4,
	LBN_RIGHTVENTRAL               = 5,
	LBN_TAILBASE                   = 6,
	LBN_UPPERTAILTIP               = 7,
	LBN_LOWERTAILTIP               = 8,
	LBN_BODY01                     = 9,
	LBN_BODY02                     = 10,
	LBN_BODY03                     = 11,
	LBN_BODY04                     = 12,
	LBN_BODY05                     = 13,
	LBN_BODY06                     = 14,
	LBN_BODY07                     = 15,
	LBN_BODY08                     = 16,
	LBN_GATORLEFTLEG               = 17,
	LBN_GATORRIGHTLEG              = 18,
	LBN_GATORLEFTARM               = 19,
	LBN_GATORRIGHTARM              = 20,
	LBN_MAX                        = 21,

};

// Enum Maneater.ESkeletonGrabDirection
enum class Maneater_ESkeletonGrabDirection : uint8_t
{
	ESkeletonGrabDirection__EGP_UNDEFINED = 0,
	ESkeletonGrabDirection__EGP_DOWNTHROAT_TORSOFACINGDOWN = 1,
	ESkeletonGrabDirection__EGP_DOWNTHROAT_TORSOFACINGUP = 2,
	ESkeletonGrabDirection__EGP_ALONGBONE_TORSOFAINGUP = 3,
	ESkeletonGrabDirection__EGP_ALONGBONE_TORSOFAINGDOWN = 4,
	ESkeletonGrabDirection__EGP_ALONGBONE_TORSOFAINGFORWARD = 5,
	ESkeletonGrabDirection__EGP_ALONGBONE_TORSOFAINGBACKWARD = 6,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGRIGHT_STOMACHDOWN = 7,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGRIGHT_STOMACHUP = 8,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGLEFT_STOMACHDOWN = 9,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGLEFT_STOMACHUP = 10,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGFORWARD_STOMACHDOWN = 11,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGFORWARD_STOMACHUP = 12,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGBACK_STOMACHDOWN = 13,
	ESkeletonGrabDirection__EGP_ALONGBONE_FACINGBACK_STOMACHUP = 14,
	ESkeletonGrabDirection__EGP_MAX = 15,

};

// Enum Maneater.ESkeletonGrabbableJoints
enum class Maneater_ESkeletonGrabbableJoints : uint8_t
{
	ESkeletonGrabbableJoints__EGP_UNDEFINED = 0,
	ESkeletonGrabbableJoints__EGP_SNOUT = 1,
	ESkeletonGrabbableJoints__EGP_HEAD = 2,
	ESkeletonGrabbableJoints__EGP_UPPERTORSO = 3,
	ESkeletonGrabbableJoints__EGP_LOWERTORSO = 4,
	ESkeletonGrabbableJoints__EGP_LEFTARM = 5,
	ESkeletonGrabbableJoints__EGP_LEFTFOREARM = 6,
	ESkeletonGrabbableJoints__EGP_LEFTHAND = 7,
	ESkeletonGrabbableJoints__EGP_RIGHTARM = 8,
	ESkeletonGrabbableJoints__EGP_RIGHTFOREARM = 9,
	ESkeletonGrabbableJoints__EGP_RIGHTHAND = 10,
	ESkeletonGrabbableJoints__EGP_LEFTUPLEG = 11,
	ESkeletonGrabbableJoints__EGP_LEFTLEG = 12,
	ESkeletonGrabbableJoints__EGP_RIGHTUPLEG = 13,
	ESkeletonGrabbableJoints__EGP_RIGHTLEG = 14,
	ESkeletonGrabbableJoints__EGP_BODYMAIN = 15,
	ESkeletonGrabbableJoints__EGP_BODY01 = 16,
	ESkeletonGrabbableJoints__EGP_BODY02 = 17,
	ESkeletonGrabbableJoints__EGP_BODY03 = 18,
	ESkeletonGrabbableJoints__EGP_BODY04 = 19,
	ESkeletonGrabbableJoints__EGP_BODY05 = 20,
	ESkeletonGrabbableJoints__EGP_BODY06 = 21,
	ESkeletonGrabbableJoints__EGP_BODY07 = 22,
	ESkeletonGrabbableJoints__EGP_BODY08 = 23,
	ESkeletonGrabbableJoints__EGP_TURTLESHELL = 24,
	ESkeletonGrabbableJoints__EGP_DORSALFINBASE = 25,
	ESkeletonGrabbableJoints__EGP_DORSALFINEND = 26,
	ESkeletonGrabbableJoints__EGP_LEFTVENTRALBASE = 27,
	ESkeletonGrabbableJoints__EGP_LEFTVENTRALMID = 28,
	ESkeletonGrabbableJoints__EGP_LEFTVENTRALTIP = 29,
	ESkeletonGrabbableJoints__EGP_RIGHTVENTRALBASE = 30,
	ESkeletonGrabbableJoints__EGP_RIGHTVENTRALMID = 31,
	ESkeletonGrabbableJoints__EGP_RIGHTVENTRALTIP = 32,
	ESkeletonGrabbableJoints__EGP_TAILUPPERBASE = 33,
	ESkeletonGrabbableJoints__EGP_TAILUPPERMID = 34,
	ESkeletonGrabbableJoints__EGP_TAILUPPERTIP = 35,
	ESkeletonGrabbableJoints__EGP_TAILLOWERBASE = 36,
	ESkeletonGrabbableJoints__EGP_TAILLOWERMID = 37,
	ESkeletonGrabbableJoints__EGP_TAILLOWERTIP = 38,
	ESkeletonGrabbableJoints__EGP_RPECTORALFIN = 39,
	ESkeletonGrabbableJoints__EGP_LPECTORALFIN = 40,
	ESkeletonGrabbableJoints__EGP_FRONTLEFTVENTRALBASE = 41,
	ESkeletonGrabbableJoints__EGP_FRONTLEFTVENTRALMID = 42,
	ESkeletonGrabbableJoints__EGP_FRONTLEFTVENTRALTIP = 43,
	ESkeletonGrabbableJoints__EGP_FRONTRIGHTVENTRALBASE = 44,
	ESkeletonGrabbableJoints__EGP_FRONTRIGHTVENTRALMID = 45,
	ESkeletonGrabbableJoints__EGP_FRONTRIGHTVENTRALTIP = 46,
	ESkeletonGrabbableJoints__EGP_LEFTGATORLEG = 47,
	ESkeletonGrabbableJoints__EGP_RIGHTGATORLEG = 48,
	ESkeletonGrabbableJoints__EGP_LEFTGATORARM = 49,
	ESkeletonGrabbableJoints__EGP_RIGHTGATORARM = 50,
	ESkeletonGrabbableJoints__EGP_LARGEFINTOP = 51,
	ESkeletonGrabbableJoints__EGP_LARGEFINBOTTOM = 52,
	ESkeletonGrabbableJoints__EGP_MAX = 53,

};

// Enum Maneater.EEffectTarget
enum class Maneater_EEffectTarget : uint8_t
{
	EEffectTarget__Self            = 0,
	EEffectTarget__GrabPrey        = 1,
	EEffectTarget__CombatTarget    = 2,
	EEffectTarget__EEffectTarget_MAX = 3,

};

// Enum Maneater.EAIFocus
enum class Maneater_EAIFocus : uint8_t
{
	EAIFocus__Default              = 0,
	EAIFocus__Move                 = 1,
	EAIFocus__Gameplay             = 2,
	EAIFocus__EAIFocus_MAX         = 3,

};

// Enum Maneater.EAttackShape
enum class Maneater_EAttackShape : uint8_t
{
	EAttackShape__CS_Sphere        = 0,
	EAttackShape__CS_Box           = 1,
	EAttackShape__CS_MAX           = 2,

};

// Enum Maneater.ESkeletonAttachJoints
enum class Maneater_ESkeletonAttachJoints : uint8_t
{
	ESkeletonAttachJoints__ESAJ_UNDEFINED = 0,
	ESkeletonAttachJoints__ESAJ_RWWEAPON = 1,
	ESkeletonAttachJoints__ESAJ_LWWEAPON = 2,
	ESkeletonAttachJoints__ESAJ_MAX = 3,

};

// Enum Maneater.EGameplayEffectTargetType
enum class Maneater_EGameplayEffectTargetType : uint8_t
{
	EGameplayEffectTargetType__TargetType_ANY = 0,
	EGameplayEffectTargetType__TargetType_ANIMAL = 1,
	EGameplayEffectTargetType__TargetType_HUMAN = 2,
	EGameplayEffectTargetType__TargetType_VEHICLE = 3,
	EGameplayEffectTargetType__TargetType_MAX = 4,

};

// Enum Maneater.EGameplayEffectTargetActor
enum class Maneater_EGameplayEffectTargetActor : uint8_t
{
	EGameplayEffectTargetActor__TargetActor_INSTIGATOR = 0,
	EGameplayEffectTargetActor__TargetActor_TARGET = 1,
	EGameplayEffectTargetActor__TargetActor_INSTIGATOROWNER = 2,
	EGameplayEffectTargetActor__TargetActor_MAX = 3,

};

// Enum Maneater.EPropulsionType
enum class Maneater_EPropulsionType : uint8_t
{
	EPT_Propeller                  = 0,
	EPT_Airboat                    = 1,
	EPT_Sailboat                   = 2,
	EPT_Jet                        = 3,
	EPT_MAX                        = 4,

};

// Enum Maneater.EBossBattleState
enum class Maneater_EBossBattleState : uint8_t
{
	BBS_INACTIVE                   = 0,
	BBS_ACTIVE                     = 1,
	BBS_ENGAGED                    = 2,
	BBS_MAX                        = 3,

};

// Enum Maneater.EBountyState
enum class Maneater_EBountyState : uint8_t
{
	EBountyState__DISABLED         = 0,
	EBountyState__IDLE             = 1,
	EBountyState__ACTIVETHREAT     = 2,
	EBountyState__SEARCHING        = 3,
	EBountyState__ATTACKING        = 4,
	EBountyState__INCOMING         = 5,
	EBountyState__RETREATING       = 6,
	EBountyState__EBountyState_MAX = 7,

};

// Enum Maneater.ESizeDiff
enum class Maneater_ESizeDiff : uint8_t
{
	ESizeDiff__SD_Smaller          = 0,
	ESizeDiff__SD_Equivelent       = 1,
	ESizeDiff__SD_Larger           = 2,
	ESizeDiff__SD_MAX              = 3,

};

// Enum Maneater.EComboDirection
enum class Maneater_EComboDirection : uint8_t
{
	CD_DeadZone                    = 0,
	CD_Right                       = 1,
	CD_Left                        = 2,
	CD_Up                          = 3,
	CD_Down                        = 4,
	CD_None                        = 5,
	CD_MAX                         = 6,

};

// Enum Maneater.ECharacterInjuryState
enum class Maneater_ECharacterInjuryState : uint8_t
{
	CIS_UNDEFINED                  = 0,
	CIS_HEALTHY                    = 1,
	CIS_INJURED                    = 2,
	CIS_MAIMED                     = 3,
	CIS_DEAD                       = 4,
	CIS_MAX                        = 5,

};

// Enum Maneater.ECharacterVoiceEventType
enum class Maneater_ECharacterVoiceEventType : uint8_t
{
	CVET_BUMPEDBYANIMAL            = 0,
	CVET_GRABBEDBYANIMAL           = 1,
	CVET_BUMPEDONBOAT              = 2,
	CVET_MINORPAIN                 = 3,
	CVET_MAJORPAIN                 = 4,
	CVET_LOSTARM                   = 5,
	CVET_LOSTLEG                   = 6,
	CVET_DROWNING                  = 7,
	CVET_GASP                      = 8,
	CVET_AMBIENTNOALERT            = 9,
	CVET_AMBIENTSUSPICIOUS         = 10,
	CVET_AMBIENTALERTED            = 11,
	CVET_SUSPICIONGENERIC          = 12,
	CVET_STANDDOWNGENERIC          = 13,
	CVET_SUSPECTSSHARK             = 14,
	CVET_ALERTEDSHARK              = 15,
	CVET_ALERTEDNOTORIOUSSHARK     = 16,
	CVET_STANDDOWNSHARK            = 17,
	CVET_SUSPECTSCORPSE            = 18,
	CVET_ALERTEDCORPSE             = 19,
	CVET_ALERTEDMAULEDCORPSE       = 20,
	CVET_STANDDOWNCORPSE           = 21,
	CVET_MAX                       = 22,

};

// Enum Maneater.ESizeState
enum class Maneater_ESizeState : uint8_t
{
	ESS_Static                     = 0,
	ESS_Grow                       = 1,
	ESS_Shrink                     = 2,
	ESS_Alert                      = 3,
	ESS_Cautious                   = 4,
	ESS_MAX                        = 5,

};

// Enum Maneater.EUpdateOctreeType
enum class Maneater_EUpdateOctreeType : uint8_t
{
	EUpdateOctreeType__RebuildOctree = 0,
	EUpdateOctreeType__UpdateModifierVolume = 1,
	EUpdateOctreeType__EUpdateOctreeType_MAX = 2,

};

// Enum Maneater.EME_DialogueEventType
enum class Maneater_EME_DialogueEventType : uint8_t
{
	EME_DialogueEventType__Dialogue_2D = 0,
	EME_DialogueEventType__Dialogue_3D_Near = 1,
	EME_DialogueEventType__Dialogue_3D_Med = 2,
	EME_DialogueEventType__Dialogue_3D_Far = 3,
	EME_DialogueEventType__Dialogue_MAX = 4,

};

// Enum Maneater.EEvolutionSetType
enum class Maneater_EEvolutionSetType : uint8_t
{
	EEvolutionSetType__TYPE_UNDEFINED = 0,
	EEvolutionSetType__TYPE_BONE   = 1,
	EEvolutionSetType__TYPE_SPIKE  = 2,
	EEvolutionSetType__TYPE_LIGHTNING = 3,
	EEvolutionSetType__TYPE_TOXIC  = 4,
	EEvolutionSetType__TYPE_SHADOW = 5,
	EEvolutionSetType__TYPE_TIGER  = 6,
	EEvolutionSetType__TYPE_MAX    = 7,

};

// Enum Maneater.EEvolutionRarity
enum class Maneater_EEvolutionRarity : uint8_t
{
	EEvolutionRarity__RARITY_UNDEFINED = 0,
	EEvolutionRarity__RARITY_COMMON = 1,
	EEvolutionRarity__RARITY_UNCOMMON = 2,
	EEvolutionRarity__RARITY_RARE  = 3,
	EEvolutionRarity__RARITY_EPIC  = 4,
	EEvolutionRarity__RARITY_LEGENDARY = 5,
	EEvolutionRarity__RARITY_MAX   = 6,

};

// Enum Maneater.EBeachGoerState
enum class Maneater_EBeachGoerState : uint8_t
{
	STATE_ALERTED                  = 0,
	STATE_SCARED                   = 1,
	STATE_STUBMLE                  = 2,
	STATE_MAX                      = 3,

};

// Enum Maneater.EOceanMeshVisibility
enum class Maneater_EOceanMeshVisibility : uint8_t
{
	EOceanMeshVisibility__OMV_Always = 0,
	EOceanMeshVisibility__OMV_CameraAbove = 1,
	EOceanMeshVisibility__OMV_CameraBelow = 2,
	EOceanMeshVisibility__OMV_MAX  = 3,

};

// Enum Maneater.EFluidEffectType
enum class Maneater_EFluidEffectType : uint8_t
{
	EFluidEffectType__FET_RIPPLES  = 0,
	EFluidEffectType__FET_BLOOD    = 1,
	EFluidEffectType__FET_MAX      = 2,

};

// Enum Maneater.EPassengerStance
enum class Maneater_EPassengerStance : uint8_t
{
	PS_UNDEFINED                   = 0,
	PS_STANDING                    = 1,
	PS_SITTING                     = 2,
	PS_CROUCHING                   = 3,
	PS_MAX                         = 4,

};

// Enum Maneater.EPassengerIK
enum class Maneater_EPassengerIK : uint8_t
{
	EPassengerIK__PIK_NoIK         = 0,
	EPassengerIK__PIK_SpineOnly    = 1,
	EPassengerIK__PIK_HeadOnly     = 2,
	EPassengerIK__PIK_Max          = 3,

};

// Enum Maneater.EEvolutionProcType
enum class Maneater_EEvolutionProcType : uint8_t
{
	EEvolutionProcType__PASSIVE    = 0,
	EEvolutionProcType__EVADE      = 1,
	EEvolutionProcType__BITE       = 2,
	EEvolutionProcType__TAILWHIP   = 3,
	EEvolutionProcType__EVOABILITY_ACTIVE = 4,
	EEvolutionProcType__EVOABILITY_LUNGE = 5,
	EEvolutionProcType__SLAM       = 6,
	EEvolutionProcType__SMASH      = 7,
	EEvolutionProcType__LUNGE      = 8,
	EEvolutionProcType__LOWHEALTH  = 9,
	EEvolutionProcType__NUM_PROC_TYPES = 10,
	EEvolutionProcType__EEvolutionProcType_MAX = 11,

};

// Enum Maneater.EBossFightSequence
enum class Maneater_EBossFightSequence : uint8_t
{
	EBossFightSequence__INVALID_FIGHT = 0,
	EBossFightSequence__FIRST_FIGHT = 1,
	EBossFightSequence__SECOND_FIGHT = 2,
	EBossFightSequence__FINAL_FIGHT = 3,
	EBossFightSequence__EBossFightSequence_MAX = 4,

};

// Enum Maneater.EBreakableStrength
enum class Maneater_EBreakableStrength : uint8_t
{
	EBS_FLIMSY                     = 0,
	EBS_WEAK                       = 1,
	EBS_STURDY                     = 2,
	EBS_STRONG                     = 3,
	EBS_VERYSTRONG                 = 4,
	EBS_STRONGEST                  = 5,
	EBS_MAX                        = 6,

};

// Enum Maneater.EObjectiveProgressState
enum class Maneater_EObjectiveProgressState : uint8_t
{
	EObjectiveProgressState__HIDDEN = 0,
	EObjectiveProgressState__FOUND = 1,
	EObjectiveProgressState__DISCOVERED = 2,
	EObjectiveProgressState__COMPLETED = 3,
	EObjectiveProgressState__EObjectiveProgressState_MAX = 4,

};

// Enum Maneater.EActivityAction
enum class Maneater_EActivityAction : uint8_t
{
	EActivityAction__START         = 0,
	EActivityAction__END           = 1,
	EActivityAction__EActivityAction_MAX = 2,

};

// Enum Maneater.EFastTravelReturn
enum class Maneater_EFastTravelReturn : uint8_t
{
	FTR_Success                    = 0,
	FTR_Dead                       = 1,
	FTR_AlreadyThere               = 2,
	FTR_InCombat                   = 3,
	FTR_MAX                        = 4,

};

// Enum Maneater.ESpawnProjectionType
enum class Maneater_ESpawnProjectionType : uint8_t
{
	ESPT_None                      = 0,
	ESPT_Geometric                 = 1,
	ESPT_NavmeshProjection         = 2,
	ESPT_MercunaProjection         = 3,
	ESPT_MAX                       = 4,

};

// Enum Maneater.ESpawnGenerationType
enum class Maneater_ESpawnGenerationType : uint8_t
{
	ESGT_SingleSpawn               = 0,
	ESGT_Grid                      = 1,
	ESGT_Sphere                    = 2,
	ESGT_Ring                      = 3,
	ESGT_RandomSample              = 4,
	ESGT_MAX                       = 5,

};

// Enum Maneater.ESpawnRotationType
enum class Maneater_ESpawnRotationType : uint8_t
{
	ESRT_ActorRotation             = 0,
	ESRT_Random                    = 1,
	ESRT_FaceTowardsActor          = 2,
	ESRT_FaceAwayFromActor         = 3,
	ESRT_MAX                       = 4,

};

// Enum Maneater.EVolumeSpacingType
enum class Maneater_EVolumeSpacingType : uint8_t
{
	EVST_CubeGrid                  = 0,
	EVST_OffsetCubeGrid            = 1,
	EVST_GroundLayer               = 2,
	EVST_FirstBlockingHit          = 3,
	EVST_NavMeshProjection         = 4,
	EVST_MAX                       = 5,

};

// Enum Maneater.EAmbienceColorChannel
enum class Maneater_EAmbienceColorChannel : uint8_t
{
	EAC_R                          = 0,
	EAC_G                          = 1,
	EAC_B                          = 2,
	EAC_A                          = 3,
	EAC_MAX                        = 4,

};

// Enum Maneater.EGrabPointPhysicsMethod
enum class Maneater_EGrabPointPhysicsMethod : uint8_t
{
	GPM_BOTH                       = 0,
	GPM_KINEMATIC                  = 1,
	GPM_SIMULATED                  = 2,
	GPM_MAX                        = 3,

};

// Enum Maneater.ETimeOfDayPhase
enum class Maneater_ETimeOfDayPhase : uint8_t
{
	TOD_UNDEFINED                  = 0,
	TOD_DAWN                       = 1,
	TOD_DAY                        = 2,
	TOD_DUSK                       = 3,
	TOD_NIGHT                      = 4,
	TOD_MAX                        = 5,

};

// Enum Maneater.EFogState
enum class Maneater_EFogState : uint8_t
{
	EFS_None                       = 0,
	EFS_AboveWater                 = 1,
	EFS_BelowWater                 = 2,
	EFS_InCave                     = 3,
	EFS_InSewers                   = 4,
	EFS_MAX                        = 5,

};

// Enum Maneater.ETutorialPopupID
enum class Maneater_ETutorialPopupID : uint8_t
{
	TUT_POPUP_INVALID              = 0,
	TUT_POPUP_POPULATION_CONTROL   = 1,
	TUT_POPUP_NUTRIENT_CACHE       = 2,
	TUT_POPUP_TERRORIZE            = 3,
	TUT_POPUP_LANDMARK             = 4,
	TUT_POPUP_GROTTO               = 5,
	TUT_POPUP_MUTAGENX             = 6,
	TUT_POPUP_NUTRIENT             = 7,
	TUT_POPUP_EVOLUTION            = 8,
	TUT_POPUP_APEX_PREDATOR        = 9,
	TUT_POPUP_HUNT                 = 10,
	TUT_POPUP_COLLECTIBLE          = 11,
	TUT_POPUP_ON_YOUR_OWN          = 12,
	TUT_POPUP_ERROR                = 13,
	TUT_POPUP_SONAR                = 14,
	TUT_POPUP_THREAT               = 15,
	TUT_POPUP_BOUNTY               = 16,
	TUT_POPUP_WILDLIFE             = 17,
	TUT_POPUP_BOATS                = 18,
	TUT_POPUP_PETE                 = 19,
	TUT_POPUP_PETE01               = 20,
	TUT_POPUP_GATES                = 21,
	TUT_POPUP_SHARK_SHIELD         = 22,
	TUT_POPUP_EVOLUTION_CHARGED    = 23,
	TUT_POPUP_SIDE_QUEST           = 24,
	TUT_POPUP_EVOLUTION_BODY       = 25,
	TUT_POPUP_TARGETING_LASER      = 26,
	TUT_POPUP_THRASH               = 27,
	TUT_POPUP_EVOLUTION_ELECTRIC   = 28,
	TUT_POPUP_EVOLUTION_SHADOW     = 29,
	TUT_POPUP_EVOLUTION_BONE       = 30,
	TUT_POPUP_ANIMAL_LUNGE         = 31,
	TUT_POPUP_APEX_LUNGE           = 32,
	TUT_POPUP_MAX                  = 33,

};

// Enum Maneater.EHudTipEvent
enum class Maneater_EHudTipEvent : uint8_t
{
	HUD_TIP_EVADE                  = 0,
	HUD_TIP_AIRLUNGE               = 1,
	HUD_TIP_EVOLUTIONMENU          = 2,
	HUD_TIP_POISONED               = 3,
	HUD_TIP_DROWNING               = 4,
	HUD_TIP_MAX                    = 5,

};

// Enum Maneater.ETutorialPopupType
enum class Maneater_ETutorialPopupType : uint8_t
{
	ETutorialPopupType__CENTER_POPUP = 0,
	ETutorialPopupType__HUD_TIP    = 1,
	ETutorialPopupType__ETutorialPopupType_MAX = 2,

};

// Enum Maneater.EAIBountyState
enum class Maneater_EAIBountyState : uint8_t
{
	EAIBountyState__E_DONTCARE     = 0,
	EAIBountyState__E_ACTIVE       = 1,
	EAIBountyState__E_INACTIVE     = 2,
	EAIBountyState__E_FORCE_DESPAWN = 3,
	EAIBountyState__E_MAX          = 4,

};

// Enum Maneater.EAttachmentBone
enum class Maneater_EAttachmentBone : uint8_t
{
	EAttachmentBone__AB_UNDEFINED  = 0,
	EAttachmentBone__AB_ROOT       = 1,
	EAttachmentBone__AB_RWWEAPON   = 2,
	EAttachmentBone__AB_LWWEAPON   = 3,
	EAttachmentBone__AB_MAX        = 4,

};

// Enum Maneater.ELandmarkType
enum class Maneater_ELandmarkType : uint8_t
{
	ELT_UNDEFINED                  = 0,
	ELT_BEACH                      = 1,
	ELT_GROTTO                     = 2,
	ELT_WHALECARCASS               = 3,
	ELTS_MAX                       = 4,
	ELandmarkType_MAX              = 5,

};

// Enum Maneater.ELandmarkDiscoveryState
enum class Maneater_ELandmarkDiscoveryState : uint8_t
{
	EDS_UNREVEALED                 = 0,
	EDS_REVEALED                   = 1,
	EDS_DISCOVERED                 = 2,
	EDS_MAX                        = 3,

};

// Enum Maneater.ETerrainType
enum class Maneater_ETerrainType : uint8_t
{
	ETerrainType__Land             = 0,
	ETerrainType__Sea              = 1,
	ETerrainType__ETerrainType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Maneater.ProjectedIconCache
// 0x0030
struct FProjectedIconCache
{
	bool                                               bWasOffscreen;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDY6[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   LastScreenPosition;                                        // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YN3S[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    IconMID;                                                   // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastDistanceScale;                                         // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasInterpolating;                                         // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQKR[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   LastDrawSize;                                              // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpAlpha;                                               // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNMA[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.SharkRamRotation
// 0x0010
struct FSharkRamRotation
{
	float                                              MaxAngle;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAngle;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                RotationCurve;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CurveVectorInfo
// 0x0014
struct FCurveVectorInfo
{
	float                                              ImpactThreshold;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationRollScale;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationPitchScale;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationTranslationScale;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.GameplayVocabulary
// 0x0020
struct FGameplayVocabulary
{
	struct FText                                       LocalizedText;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ERichTextPreset>              RichTextStyle;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBKY[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ExplosionDamageEffects
// 0x0028
struct FExplosionDamageEffects
{
	class UParticleSystem*                             ScreenParticle;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             LoopingParticleOnMesh;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               EffectSound;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   PostProcessWhileInsideExplosion;                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EffectPriority;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QC2G[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AbilityInitializationData
// 0x0010 (0x0018 - 0x0008)
struct FAbilityInitializationData : public FTableRowBase
{
	int                                                AbilityWeight;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QO4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AbilityClass;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PreDormantValues
// 0x0010
struct FPreDormantValues
{
	unsigned char                                      UnknownData_E592[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.CombatLocation
// 0x0030
struct FCombatLocation
{
	unsigned char                                      UnknownData_52B3[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.DirectMoveRequest
// 0x0020
struct FDirectMoveRequest
{
	unsigned char                                      UnknownData_BAFA[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      GoalActor;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CombatPriorityBuff
// 0x0008
struct FCombatPriorityBuff
{
	float                                              PriorityBuff;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.VisionType
// 0x0001
struct FVisionType
{
	unsigned char                                      bAir : 1;                                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSurface : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUnderwater : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisionType4 : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisionType5 : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisionType6 : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisionType7 : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisionType8 : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AITargetPoint
// 0x0010
struct FAITargetPoint
{
	struct FVector                                     TargetPoint;                                               // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPoint;                                                // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceTarget;                                              // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDistanceCheck;                                            // 0x000E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDotProductCheck;                                          // 0x000F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AttackTarget
// 0x0018
struct FAttackTarget
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TargetComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZROG[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.PropInstance
// 0x0018
struct FPropInstance
{
	unsigned char                                      UnknownData_Q5BA[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ActivityAlertStruct
// 0x0010
struct FActivityAlertStruct
{
	class UAnimSequence*                               AlertSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDropProp;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHGU[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PercentChance;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ActivityPropElement
// 0x0010
struct FActivityPropElement
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_ActivityProp*                            Type;                                                      // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PropRandomTextureParam
// 0x0010
struct FPropRandomTextureParam
{
	TArray<class UTexture2D*>                          Values;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PropRandomScalarParam
// 0x0010
struct FPropRandomScalarParam
{
	TArray<float>                                      Values;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PropRandomVectorParam
// 0x0010
struct FPropRandomVectorParam
{
	TArray<struct FLinearColor>                        Values;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionAnimations
// 0x0010
struct FEvolutionAnimations
{
	class UAnimMontage*                                IntroAnimation;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                OutroAnimation;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HitReactStruct
// 0x0010
struct FHitReactStruct
{
	class UAnimSequence*                               ChosenHitReact;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHitReactActive;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayHitReact;                                             // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L265[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AdditiveAnimStruct
// 0x0010
struct FAdditiveAnimStruct
{
	class UAnimSequence*                               ChosenAdditiveAnimation;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditiveActive;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayAdditive;                                             // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DWVW[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.BoneBaseBlendWeight
// 0x0008
struct FBoneBaseBlendWeight
{
	TEnumAsByte<Maneater_ELimbBoneName>                BoneName;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5WZJ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseWeight;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.GrabbedIKSetup
// 0x0018
struct FGrabbedIKSetup
{
	Maneater_ESkeletonGrabbableJoints                  GrabbedJoint;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7WNM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBoneBaseBlendWeight>                GrabbedIKArray;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AttackShapeRow
// 0x0038 (0x0040 - 0x0008)
struct FAttackShapeRow : public FTableRowBase
{
	Maneater_EAttackShape                              AttackCollisionShape;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S05C[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttackZOffset;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AttackLocalOffset;                                         // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AttackLocalRotation;                                       // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackLength;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackRadius;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoxCollisionShape;                                         // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3R25[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AttackerInfo
// 0x0020
struct FAttackerInfo
{
	TWeakObjectPtr<class USkeletalMeshComponent>       AttackingMesh;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>               HitActors;                                                 // 0x0008(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_Character>                ControlledCharacter;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.LoadedAssets
// 0x0028
struct FLoadedAssets
{
	class UAkAudioEvent*                               SavedAudioEvent;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             SavedParticleSystem;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SavedAnimMontage;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          SavedMaterial;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SavedMesh;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AssetLoadRow
// 0x00C8 (0x00D0 - 0x0008)
struct FAssetLoadRow : public FTableRowBase
{
	unsigned char                                      ParticleSystemAsset[0x28];                                 // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AudioEventAsset[0x28];                                     // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AnimMontageAsset[0x28];                                    // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      MaterialAsset[0x28];                                       // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SkeletalMeshAsset[0x28];                                   // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Maneater.FullPropAnimationSet
// 0x0180
struct FFullPropAnimationSet
{
	unsigned char                                      IdleAnimation[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SuspiciousAnimation[0x28];                                 // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AlertAimingBlendspace[0x28];                               // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AlertAnimation[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      MovingAnimation[0x28];                                     // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      TurnRightAnimation[0x28];                                  // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      TurnLeftAnimation[0x28];                                   // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      FiringAnimations[0x10];                                    // 0x0118(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      HitFromForwradsAnimations[0x10];                           // 0x0128(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      HitFromBehindAnimations[0x10];                             // 0x0138(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      HitFromLeftAnimations[0x10];                               // 0x0148(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      HitFromRightAnimations[0x10];                              // 0x0158(0x0010) UNKNOWN PROPERTY: ArrayProperty
	struct FVector                                     IKElbowOffset;                                             // 0x0168(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AimingElbowRotation;                                       // 0x0174(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AfflictionData
// 0x0010
struct FAfflictionData
{
	unsigned char                                      UnknownData_P27A[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                GameplayTagToApply;                                        // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.MEGameplayEffectMaterialEffect
// 0x0020
struct FMEGameplayEffectMaterialEffect
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ScalarParamCurve;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                VectorParamCuve;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMasterPostProcess;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSonarPostProcess;                                         // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VTI[0x5];                                     // 0x001B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MEGameplayEffectAudioEvent
// 0x000C
struct FMEGameplayEffectAudioEvent
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EGameplayEffectTargetActor                TargetActor;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S18I[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MEGameplayEffectParticleSystem
// 0x0070
struct FMEGameplayEffectParticleSystem
{
	struct FName                                       ParticleSystemName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystemTemplate;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseStackingEffects;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6CH[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnDelay;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequireTags;                                               // 0x0020(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IgnoreTags;                                                // 0x0040(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               UseActionMode;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBeam;                                                    // 0x0061(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EGameplayEffectTargetActor                TargetActor;                                               // 0x0062(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EGameplayEffectTargetType                 TargetType;                                                // 0x0063(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2KXM[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  TargetParams;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.MEAttributeMetaData
// 0x0008 (0x0038 - 0x0030)
struct FMEAttributeMetaData : public FAttributeMetaData
{
	bool                                               bClampOnSet;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KL07[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MEGameplayAttributeData
// 0x0010 (0x0020 - 0x0010)
struct FMEGameplayAttributeData : public FGameplayAttributeData
{
	float                                              MinValue;                                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ClampOnSet;                                                // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7XE8[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ME_AudioEvent
// 0x0030
struct FME_AudioEvent
{
	struct FName                                       Event;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WWiseEvent;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownSeconds;                                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OverrideGlobal;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NextFireTime;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StateTo;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IfState;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C768[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AuraStatus
// 0x0018
struct FAuraStatus
{
	unsigned char                                      UnknownData_4MWN[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveGameplayEffectHandle>         GameplayEffectHandles;                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SpawnEntry
// 0x0028
struct FSpawnEntry
{
	unsigned char                                      UnknownData_X889[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.BoatNameData
// 0x0050
struct FBoatNameData
{
	TArray<struct FString>                             Prefixes;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Adjectives;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Nouns;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFont*>                               Fonts;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        FontColors;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.BoatPropeller
// 0x0050
struct FBoatPropeller
{
	struct FName                                       AttachSocket;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PropellerRotation;                                         // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JBAT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PropellerMeshPtr[0x28];                                    // 0x0014(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TWeakObjectPtr<class UStaticMeshComponent>         PropellerMeshComponent;                                    // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UParticleSystemComponent>     PropellerPSC;                                              // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ThrashPointThickness
// 0x0008
struct FThrashPointThickness
{
	Maneater_ESkeletonGrabbableJoints                  GrabbedJoint;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PIF7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LimbThickness;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ME_BountySpawnRequest
// 0x0018
struct FME_BountySpawnRequest
{
	unsigned char                                      UnknownData_GPI7[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ME_BountyAI
// 0x0018
struct FME_BountyAI
{
	unsigned char                                      UnknownData_1Y84[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AME_AIController*                            ME_AIController;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ME_BountySpawnLocation
// 0x0018
struct FME_BountySpawnLocation
{
	unsigned char                                      UnknownData_2HNS[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.StructBoneOverride
// 0x0010
struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Density;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TestRadius;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CharacterDialogRow
// 0x0010 (0x0018 - 0x0008)
struct FCharacterDialogRow : public FTableRowBase
{
	bool                                               bShouldPulse;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YUCP[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PulseIntervalFloor;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PulseIntervalCeil;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AbilityInfoStruct
// 0x0018
struct FAbilityInfoStruct
{
	class UClass*                                      AbilityClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EME_CharacterAbility                      AbilityEnum;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3L4[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AbilityWeight;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5M06[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ComboAttack
// 0x0028
struct FComboAttack
{
	TArray<TEnumAsByte<Maneater_EComboDirection>>      ComboInput;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAbilityInfoStruct                          ComboAbility;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CharacterVoiceAge
// 0x0010
struct FCharacterVoiceAge
{
	class UAkAudioEvent*                               Child;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               Adult;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CharacterVoiceGender
// 0x0020
struct FCharacterVoiceGender
{
	struct FCharacterVoiceAge                          Male;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterVoiceAge                          Female;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CharacterVoiceBinding
// 0x0028
struct FCharacterVoiceBinding
{
	TEnumAsByte<Maneater_ECharacterVoiceEventType>     EventType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNFA[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterVoiceGender                       Voices;                                                    // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.WildlifeQueueEntry
// 0x000C
struct FWildlifeQueueEntry
{
	unsigned char                                      UnknownData_VOEO[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ActionBindingSaveData
// 0x0030
struct FActionBindingSaveData
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                Keys;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AxisBindingSaveData
// 0x0038
struct FAxisBindingSaveData
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VFY[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                Keys;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.MEControlScheme
// 0x0038
struct FMEControlScheme
{
	struct FText                                       ControlSchemeName;                                         // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FActionBindingSaveData>              ActionMappings;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAxisBindingSaveData>                AxisMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.MEControlSchemeSaveData
// 0x0010
struct FMEControlSchemeSaveData
{
	TArray<struct FMEControlScheme>                    ControlSchemes;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.BindableKeyEntry
// 0x0028
struct FBindableKeyEntry
{
	struct FName                                       BindingName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bKeyboardOnly;                                             // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAxis;                                                   // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8JN[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.StartingAttributes
// 0x0010
struct FStartingAttributes
{
	class UClass*                                      AbilityAttributeSetClass;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  AttributeDefaults;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HitDeformation
// 0x001C
struct FHitDeformation
{
	struct FVector                                     LocalPosition;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocalDirection;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeformRadius;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ChunkBreakEffect
// 0x0010
struct FChunkBreakEffect
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               Sound;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AudioDialogueMapping
// 0x0028
struct FAudioDialogueMapping
{
	int                                                PlayingID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q93R[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DialogueText;                                              // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	float                                              TimeSeconds;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubtitleId;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.Dialogue
// 0x0040 (0x0048 - 0x0008)
struct FDialogue : public FTableRowBase
{
	Maneater_EME_DialogueEventType                     EventType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PJV2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Speaker;                                                   // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3B5U[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AudioFile;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DialogueText;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               ShowSubtitle;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CMP0[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.FullDiverAnimationSet
// 0x0038
struct FFullDiverAnimationSet
{
	class UAnimSequence*                               IdleAnimation;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               SuspiciousAnimation;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AlertAnimation;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               MovingAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 MovingAlertAnimation;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        FiringAnimations;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionData
// 0x0010
struct FEvolutionData
{
	Maneater_EEvolutionRarity                          EvolutionRarity;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionSlot                            CurrentSlot;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EvolutionEquipped;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNewEvolution;                                           // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z9SE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UME_PlayerEvolution*                         EvolutionDefinition;                                       // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.DisplayStatRow
// 0x0020 (0x0028 - 0x0008)
struct FDisplayStatRow : public FTableRowBase
{
	struct FText                                       DisplayText;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               DisplayAsPercentage;                                       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMultiplier;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W120[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.EvolutionVisualEffect
// 0x0010
struct FEvolutionVisualEffect
{
	TArray<struct FName>                               AttachMeshes;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.GameplayEffectItem
// 0x0010
struct FGameplayEffectItem
{
	class UClass*                                      GameplayEffectClass;                                       // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StackCount;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_933H[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ReconcileAchievementParams
// 0x0020
struct FReconcileAchievementParams
{
	unsigned char                                      UnknownData_19Y4[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UME_SaveGameObject*>                  SaveGames;                                                 // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.StoryCinematicDataRow
// 0x0088 (0x0090 - 0x0008)
struct FStoryCinematicDataRow : public FTableRowBase
{
	struct FName                                       CinematicSubLevelName;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LevelSequenceActorName;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeOfDay;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4TDT[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               StateEvent;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NarratorOutroEventName;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RespawnLocation;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CinematicStreamLocation;                                   // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6711[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PostCinematicTravelLocation;                               // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAdvanceToNextStoryEvent;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartPlayingAfterCinematic;                               // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoNotAutoFadeInSequence;                                  // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayCinematicPauseAllEvent;                               // 0x0083(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HH1O[0xC];                                     // 0x0084(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.DirectionalAnimData
// 0x0018
struct FDirectionalAnimData
{
	class UAnimMontage*                                MontageToPlay;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SectionName;                                               // 0x000C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6HZL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.SpeciesKillSequence
// 0x0010
struct FSpeciesKillSequence
{
	TArray<struct FName>                               KillAnimations;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SizeDifferenceKillSequence
// 0x0020
struct FSizeDifferenceKillSequence
{
	TArray<struct FName>                               LargerOrEqualVictimAnims;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SmallerVictimAnims;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.GrowthStageSequences
// 0x0070
struct FGrowthStageSequences
{
	TMap<TEnumAsByte<Maneater_EPawnSpeciesType>, struct FSpeciesKillSequence> SpeciesOverrideInfo;                                       // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSizeDifferenceKillSequence                 SizeDifferenceInfo;                                        // 0x0050(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CustomGrowthStage
// 0x0010
struct FCustomGrowthStage
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OverrideStage;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WIEZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CustomZHeight;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomForwardsForce;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomDuration;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.StageSpecificCamera
// 0x0018
struct FStageSpecificCamera
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           GrowthStage;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VM9B[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraAnim*                                 CamAnim;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fCameraScale;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TTCJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.GrowthStageAnimData
// 0x0068
struct FGrowthStageAnimData
{
	struct FName                                       MontageEventName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CachedMontage;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DefaultAnimation;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OOV[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimWeight;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SectionName;                                               // 0x001C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4UG[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequiredGameplayTags;                                      // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IgnoreGameplayTags;                                        // 0x0048(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.GrowthStageContainer
// 0x0018
struct FGrowthStageContainer
{
	TArray<struct FGrowthStageAnimData>                StageArray;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7XZO[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MontageEntry
// 0x0010
struct FMontageEntry
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimWeight;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GKJY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AttachedAudioEvent
// 0x0010
struct FAttachedAudioEvent
{
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HumanNPCAppearanceConfig
// 0x0060 (0x0068 - 0x0008)
struct FHumanNPCAppearanceConfig : public FTableRowBase
{
	TEnumAsByte<Maneater_EPawnGender>                  Gender;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFMQ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               Mesh;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AnimBP;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Body;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Hair;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Clothing;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Region1_Config_Override;                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Region2_Config_Override;                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Region3_Config_Override;                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomizeNumberOfRegions;                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShuffleRegions;                                            // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GTNS[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DynamicDialogue;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.BodyRegionColorSet
// 0x0018
struct FBodyRegionColorSet
{
	TArray<struct FLinearColor>                        RegionColors;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowShuffle;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2VI[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MinMaxRange
// 0x0008
struct FMinMaxRange
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HumanNPCRegionConfig
// 0x0038 (0x0040 - 0x0008)
struct FHumanNPCRegionConfig : public FTableRowBase
{
	TArray<class UTexture2D*>                          RegionTilingMask;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBodyRegionColorSet>                 ColorSets;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxRange                                Scale;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   RandomOffset;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShuffleColors;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZMT[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.HumanNPCTextureSet
// 0x0020 (0x0028 - 0x0008)
struct FHumanNPCTextureSet : public FTableRowBase
{
	class UTexture2D*                                  Albedo;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Normal;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RAM;                                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Masks;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HumanNPCHairColor
// 0x0020
struct FHumanNPCHairColor
{
	struct FLinearColor                                HairRootColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HairTipColor;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HumanNPCTextureSet_Hair
// 0x0010 (0x0038 - 0x0028)
struct FHumanNPCTextureSet_Hair : public FHumanNPCTextureSet
{
	TArray<struct FHumanNPCHairColor>                  HairColors;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HumanNPCTextureSet_Clothing
// 0x0018 (0x0040 - 0x0028)
struct FHumanNPCTextureSet_Clothing : public FHumanNPCTextureSet
{
	class UDataTable*                                  Region1_Config;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Region2_Config;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Region3_Config;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.HumanNPCTextureSet_Body
// 0x0008 (0x0030 - 0x0028)
struct FHumanNPCTextureSet_Body : public FHumanNPCTextureSet
{
	struct FMinMaxRange                                SkinRange;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.DirectionalLunges
// 0x0040
struct FDirectionalLunges
{
	class UAnimMontage*                                LungeRightMontage;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                LungeLeftMontage;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                LungeForwardMontage;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                LungeBackwardsMontage;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                LungeUpMontage;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                LungeDownMontage;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForwardDotThreshold;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpDotThreshold;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertLunge;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJJ0[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MontageInstanceEntry
// 0x0010
struct FMontageInstanceEntry
{
	class UMontageInstance*                            MontageInstance;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimWeight;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UW78[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.NarratorTableEntry
// 0x0050 (0x0058 - 0x0008)
struct FNarratorTableEntry : public FTableRowBase
{
	bool                                               PlayOnlyOnce;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCBH[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFirstTime;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlaySubsequentTimes;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SubsequentPlayChancePercent;                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9KC[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GroupName;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GroupCooldown;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayBeforePlayFirstTime;                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayBeforePlaySubsequentTime;                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDuringBounty;                                        // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDuringBoss;                                          // 0x0055(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V02H[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.WaveParameter
// 0x0014
struct FWaveParameter
{
	float                                              Rotation;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amplitude;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Steepness;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.WaveSetParameters
// 0x00A0
struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                    // 0x0000(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave02;                                                    // 0x0014(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave03;                                                    // 0x0028(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave04;                                                    // 0x003C(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave05;                                                    // 0x0050(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave06;                                                    // 0x0064(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave07;                                                    // 0x0078(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave08;                                                    // 0x008C(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.FluidDisturbanceEffect
// 0x0018
struct FFluidDisturbanceEffect
{
	Maneater_EFluidEffectType                          EffectType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L7JA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     DisturbanceOrigin;                                         // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisturbanceRadius;                                         // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisturbanceIntensity;                                      // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ParticleSystemParams
// 0x0000 (0x0008 - 0x0008)
struct FParticleSystemParams : public FTableRowBase
{

};

// ScriptStruct Maneater.ShadowEffectParams
// 0x0010 (0x0018 - 0x0008)
struct FShadowEffectParams : public FParticleSystemParams
{
	float                                              Length;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Offset;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ElectrifiedEffectParams
// 0x0010 (0x0018 - 0x0008)
struct FElectrifiedEffectParams : public FParticleSystemParams
{
	float                                              Length;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Offset;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PassengerHitReactionStruct
// 0x0040
struct FPassengerHitReactionStruct
{
	TArray<class UAnimMontage*>                        HitReactionMovingForward;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        HitReactionMovingRight;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        HitReactionMovingLeft;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        HitReactionMovingBackward;                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.DiverPropSetup
// 0x0010
struct FDiverPropSetup
{
	TEnumAsByte<Maneater_EPawnGender>                  GenderSpecific;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPawnBodyType>                BodySpecific;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZS31[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UME_DiverAttachmentAnimSet*                  AnimationSet;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PathQueueEntry
// 0x0038
struct FPathQueueEntry
{
	unsigned char                                      UnknownData_CE12[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.PathRequest
// 0x0030
struct FPathRequest
{
	unsigned char                                      UnknownData_HVPI[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ImpactEffectResult
// 0x0078
struct FImpactEffectResult
{
	unsigned char                                      ImpactParticleComponent[0x28];                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ImpactAudioComponent[0x28];                                // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ImpactDecalComponent[0x28];                                // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Maneater.ImpactResponseInstance
// 0x0098
struct FImpactResponseInstance
{
	struct FImpactEffectResult                         Effects;                                                   // 0x0000(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Instigator;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Recipient;                                                 // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               RecipientSurface;                                          // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WKL5[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CreationTime;                                              // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ImpactDecal
// 0x0028
struct FImpactDecal
{
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DecalSize;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalLifespan;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbsoluteRotation;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SH83[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    DecalRotation;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ImpactEffect
// 0x0040
struct FImpactEffect
{
	class UParticleSystem*                             ImpactParticleEffect;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ImpactSoundEffect;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactDecal                                ImpactDecal;                                               // 0x0010(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ImpactCameraShake;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionSetGameplayEffects
// 0x0010
struct FEvolutionSetGameplayEffects
{
	TArray<class UClass*>                              SetGameplayEffects;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionSetStatRow
// 0x0040 (0x0048 - 0x0008)
struct FEvolutionSetStatRow : public FTableRowBase
{
	Maneater_EEvolutionSetType                         SetType;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJCR[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEvolutionSetGameplayEffects>        GameplayEffectsPerNumberEquipped;                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_PlayerEvolution*>                 EvolutionsInSet;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       EvolutionSetName;                                          // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionEffects
// 0x0020
struct FEvolutionEffects
{
	TArray<class UClass*>                              GameplayEffectsOnEquip;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ConditionalGameplayEffects;                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionDisplayStat
// 0x0030
struct FEvolutionDisplayStat
{
	struct FString                                     AttributeName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              StatValue;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionProcType                        ProcType;                                                  // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UINK[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.EvolutionUpgradeCost
// 0x0008
struct FEvolutionUpgradeCost
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFLP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NutrientCost;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionUpgradePrice
// 0x0010
struct FEvolutionUpgradePrice
{
	struct FEvolutionUpgradeCost                       PrimaryCost;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEvolutionUpgradeCost                       SecondaryCost;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.LandmarkSubObject
// 0x0048
struct FLandmarkSubObject
{
	unsigned char                                      Actor[0x28];                                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       Description;                                               // 0x0028(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               Found;                                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIU1[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ConditionStatus
// 0x0020
struct FConditionStatus
{
	struct FText                                       ConditionText;                                             // 0x0000(0x0018) (SaveGame, NativeAccessSpecifierPublic)
	bool                                               Completed;                                                 // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3L9H[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.LerpParams
// 0x0008
struct FLerpParams
{
	unsigned char                                      UnknownData_3813[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AttachedParticleSystem
// 0x000C
struct FAttachedParticleSystem
{
	struct FName                                       ParticleToSpawn;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ELimbBoneName>                BoneName;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TN5L[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.GrowthStageVFX
// 0x0098
struct FGrowthStageVFX
{
	struct FName                                       PerfectEntrySplash;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PerfectTrailBubbles;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SmallEntrySplash;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SmallTrailBubbles;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MediumEntrySplash;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MediumTrailBubbles;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LargeEntrySplash;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LargeTrailBubbles;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExitWaterSplash;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExitWaterSplashSound;                                      // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExitWaterTrail;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FloppingTakeoffFromWater;                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FloppingLandInWater;                                       // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedParticleSystem>             EnterKnifingFromUnderwaterTrail;                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedParticleSystem>             EnterKnifingFromBreachTrail;                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachedParticleSystem>             ExitKnifingUnderwaterTrail;                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.GrowthStageSettings
// 0x00F0
struct FGrowthStageSettings
{
	class USkeletalMesh*                               SharkMesh;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SoftSharkAnimBP[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UClass*                                      SharkAnimBP;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                               SharkPhysAsset;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartingPlayerLevel;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndingPlayerLevel;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartingScalePercent;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndingScalePercent;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseCapsuleRadius;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseCapsuleHalfHeight;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGrowthStageVFX                             StageVFX;                                                  // 0x0058(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ActionModeAbilitySet
// 0x0018
struct FActionModeAbilitySet
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BD66[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAbilityInfoStruct>                  MappedAbilities;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.InputAbilitySet
// 0x0018
struct FInputAbilitySet
{
	TEnumAsByte<Maneater_EComboDirection>              PrimaryInput;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EComboDirection>              SecondaryInput;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BBRL[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActionModeAbilitySet>               ActionModeAbilitySets;                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.AIProximityCache
// 0x0028
struct FAIProximityCache
{
	class UClass*                                      AISearchType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AISearchLimit;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSearchDist;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4R3P[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AME_AIController*>                    ProximityList;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.EvolutionClassRow
// 0x0008 (0x0010 - 0x0008)
struct FEvolutionClassRow : public FTableRowBase
{
	class UME_PlayerEvolution*                         EvolutionClass;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PlayerPersistentStat
// 0x0008
struct FPlayerPersistentStat
{
	TEnumAsByte<Maneater_EPersistentStatType>          StatType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZCOU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StatValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SpeciesStatBinding
// 0x0010
struct FSpeciesStatBinding
{
	TArray<struct FPlayerPersistentStat>               SpeciesStats;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SharkEvolutionSettings
// 0x0008
struct FSharkEvolutionSettings
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           EvoName;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8GF[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GrowthLevelChange;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ME_DotProductToDistance
// 0x000C
struct FME_DotProductToDistance
{
	float                                              OrderedDistance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DotProduct;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PriorityPenalty;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ME_TargetableActorData
// 0x001C
struct FME_TargetableActorData
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentDotProduct;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentDistance;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PriorityPenalty;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereBoundsRadius;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnScreen;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyWhipshotTarget;                                       // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1GEO[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.SonarData
// 0x000C
struct FSonarData
{
	unsigned char                                      UnknownData_KHK9[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.SpawnListConditionProperty
// 0x000C
struct FSpawnListConditionProperty
{
	struct FName                                       PropertyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PropertyValue;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SpawnListCondition
// 0x0020
struct FSpawnListCondition
{
	class UClass*                                      ConditionClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SpawnlistCondition*                      ConditionObj;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSpawnListConditionProperty>         ConditionProperties;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SpawnListEntry
// 0x0028
struct FSpawnListEntry
{
	class UME_SpawnData*                               SpawnList;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnChanceMod;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinSpawnCount;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSpawnCount;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N2LC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpawnListCondition>                 SpawnConditions;                                           // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SpawnObjectiveInfo
// 0x0068
struct FSpawnObjectiveInfo
{
	TArray<struct FSpawnListEntry>                     SpawnLists;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ObjectiveSpawnVolumes[0x10];                               // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
	int                                                SpawnCount;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDX4[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UME_SpawnVolumeCollection*>           SpawnVolumeCollections;                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpawnLocation[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              SpawnDistance;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DespawnDistance;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.MESpawnerInfo
// 0x0020
struct FMESpawnerInfo
{
	class UME_SpawnVolumeCollection*                   VolumeCollection;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_SpawnPointActor>          SpawnPoint;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Significance;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnweightedSignificance;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastSpawnTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnCooldownCounter;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.SpawnDataEntry
// 0x0010
struct FSpawnDataEntry
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnChanceMod;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJ06[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.EvolutionLoot
// 0x0010
struct FEvolutionLoot
{
	float                                              DropChance;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_54MN[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UME_PlayerEvolution*                         EvolutionClass;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.NutritionalValue
// 0x0048 (0x0050 - 0x0008)
struct FNutritionalValue : public FTableRowBase
{
	float                                              ProteinDropChance;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProteinMinAmount;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProteinMaxAmount;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FatDropChance;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FatMinAmount;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FatMaxAmount;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MineralDropChance;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MineralMinAmount;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MineralMaxAmount;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MutagenDropChance;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MutagenMinAmount;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MutagenMaxAmount;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEvolutionLoot>                      EvolutionRewards;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealingValue;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YHQR[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.NutrientChunkInfo
// 0x0068
struct FNutrientChunkInfo
{
	struct FName                                       SpawnLocationBone;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ChunkToSpawn;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChunkScale;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LS14[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNutritionalValue                           NutritionInfo;                                             // 0x0018(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.NutrientChunkList
// 0x0018 (0x0020 - 0x0008)
struct FNutrientChunkList : public FTableRowBase
{
	TArray<struct FNutrientChunkInfo>                  GoreChunkList;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Z8B[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.TimedWeatherEvent
// 0x0010
struct FTimedWeatherEvent
{
	float                                              Intensity;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.TimeOfDayPhaseSettings
// 0x0014
struct FTimeOfDayPhaseSettings
{
	TEnumAsByte<Maneater_ETimeOfDayPhase>              Phase;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBLY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatInterval                              PhaseHours;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhaseSpeedScale;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhaseTimeElapsed;                                          // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.TimeOfDayCubemap
// 0x0010
struct FTimeOfDayCubemap
{
	class UTextureCube*                                Cubemap;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActiveTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R3LW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ME_TutorialPopupEvent
// 0x000C
struct FME_TutorialPopupEvent
{
	Maneater_ETutorialPopupType                        PopupType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F765[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PopupIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageCount;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.CanSpawnDiverMemory
// 0x0018
struct FCanSpawnDiverMemory
{
	TWeakObjectPtr<class AME_BoatAIController>         CachedAIC;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICVJ[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.CanUseAbilityMemory
// 0x0010
struct FCanUseAbilityMemory
{
	TWeakObjectPtr<class AME_AIController>             CachedAIC;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NextUpdateTime;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLastResult : 1;                                           // 0x000C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6CG0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.PawnRelevantMemory
// 0x0008
struct FPawnRelevantMemory
{
	float                                              NextUpdateTime;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLastResult : 1;                                           // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEAN[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.TimeSinceLastSpawnMemory
// 0x0010
struct FTimeSinceLastSpawnMemory
{
	unsigned char                                      UnknownData_MINP[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.BaseAbilityMemory
// 0x0008
struct FBaseAbilityMemory
{
	unsigned char                                      UnknownData_3KW6[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.GameplayEffectParticleSystems
// 0x0010
struct FGameplayEffectParticleSystems
{
	unsigned char                                      UnknownData_VNZ4[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AbilityInfoListStruct
// 0x0010
struct FAbilityInfoListStruct
{
	TArray<struct FAbilityInfoStruct>                  InfoStructArray;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.LimbGoreParameters
// 0x0014
struct FLimbGoreParameters
{
	struct FName                                       GoreParamName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MaskParamName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaskCharacter;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFAM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.MomentumForce
// 0x0030
struct FMomentumForce
{
	unsigned char                                      bApplyDirectlyToVelocity : 1;                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClearAcceleration : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTargetable : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04ZL[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Force;                                                     // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZRV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bPlayerRelativeForce : 1;                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseInitialYaw : 1;                                        // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseInitialPitch : 1;                                      // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCameraRelativeForce : 1;                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyXWhenMoving : 1;                                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyYWhenMoving : 1;                                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyZWhenMoving : 1;                                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreForceAboveWater : 1;                                // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_024L[0x17];                                    // 0x0019(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.GrabPointEffects
// 0x0090
struct FGrabPointEffects
{
	class UParticleSystem*                             GrabPointDamagedParticle;                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GrabPointDamagedPersistentParticle;                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GrabPointDestroyedParticle;                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7B4P[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  GrabPointParticleOffset;                                   // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_17VO[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       GrabPointDestroyedParticleSocket;                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               GrabPointDestroyedSound;                                   // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GoreCapOverrideBone;                                       // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               AdditionalBonesToHide;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ET6H[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.StageSpecificOffset
// 0x0040
struct FStageSpecificOffset
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           PlayerStage;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFX2[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpecialTransform;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ThrashGrabPoint
// 0x0180
struct FThrashGrabPoint
{
	struct FName                                       GrabPointCollisionBone;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_ESkeletonGrabbableJoints                  GrabJoint;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZKHK[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LimbThickness;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsTorso : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bKillsOwner : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyDamageGrabPoint : 1;                                  // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIndestructibleUntilDead : 1;                              // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWR0[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GrabPointMaxHealth;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N2OB[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGrabPointEffects                           Effects;                                                   // 0x0020(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EGrabPointPhysicsMethod>      GrabPhysicsMethod;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GY1A[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                BreakAwayAnimation;                                        // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PlayerSharkOnlyBreakAwayAnimation;                         // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        GrabPointChainMap;                                         // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentConsumptionPoint;                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OFUK[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Maneater_ESkeletonGrabbableJoints>          HiddenJointsOnGrab;                                        // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  GrabbedTransformOffset;                                    // 0x00F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FStageSpecificOffset>                PlayerOffset;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0130(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W0ZC[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AME_AnimalCharacter*                         ThrashAttacker;                                            // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyed : 1;                                            // 0x0140(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQYS[0x3];                                     // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageModifier;                                            // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              SelfEffects;                                               // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ConsumerEffects;                                           // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneBaseBlendWeight>                GrabbedIKSetup;                                            // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5WEK[0x8];                                     // 0x0178(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.AlertEventParams
// 0x0010
struct FAlertEventParams
{
	class UClass*                                      AlertEvent;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttachToCharacter;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNG9[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.BeachActivityEntry
// 0x0020
struct FBeachActivityEntry
{
	class UME_AmbientActivityData*                     Activity;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ConfigTableOverride;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToActivate;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideDefaultRoamSettings;                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X1XK[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChanceToRoam;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RoamRadius;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PassengerPropInfo
// 0x0030
struct FPassengerPropInfo
{
	int                                                BossPhaseNum;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttachmentChance;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              PropAttachments;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondAttachmentChance;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FADZ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SecondPropAttachments;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PassengerData
// 0x0098
struct FPassengerData
{
	TArray<class UClass*>                              PassengerClasses;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPassengerPropInfo                          DefaultPropAttachments;                                    // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FPassengerPropInfo>                  BossPhasePropAttachments;                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeatIndex;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentChance;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinHitVelocityToEject;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPreventKnockOff : 1;                                      // 0x005C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHidePassenger : 1;                                        // 0x005C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisablePassengerABP : 1;                                  // 0x005C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXHE[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PassengerClass;                                            // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_HumanCharacter>           PassengerCharacter;                                        // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent>       PassengerMesh;                                             // 0x0070(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UME_AnimInstance_HumanNPC>    PassengerAnimBP;                                           // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UME_WeaponComponent>          PropAttachment;                                            // 0x0080(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UME_WeaponComponent>          SecondPropAttachment;                                      // 0x0088(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsAttacker : 1;                                           // 0x0090(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6MS5[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.PassengerPropSetup
// 0x0010
struct FPassengerPropSetup
{
	TEnumAsByte<Maneater_EPassengerStance>             PassengerStance;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPawnGender>                  GenderSpecific;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPawnBodyType>                BodySpecific;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P6U1[0x5];                                     // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UME_AttachmentAnimSet*                       AnimationSet;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PassengerAnimationStruct
// 0x0020
struct FPassengerAnimationStruct
{
	TArray<struct FPassengerPropSetup>                 AnimationSets;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               IntroCinematicAnimation;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               DefeatedPlayerCinematicAnimation;                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.VehicleSeat
// 0x00A8
struct FVehicleSeat
{
	unsigned char                                      bPilotSeat : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnclosed : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDeletePassengerIfEnclosed : 1;                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G7EO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachSocket;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseCustomEjection : 1;                                    // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GUX0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EjectionAngle;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EjectionImpulseXY;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EjectionImpulseZ;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3DO[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPassengerAnimationStruct                   SeatOverrideAniamtions;                                    // 0x0020(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bCanTrackTarget;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1ZI[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpace*                                 UnderStarboardBlendspace;                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    StarboardRotationOffset;                                   // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     StarboardLocationOffset;                                   // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 UnderPortBlendspace;                                       // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PortRotationOffset;                                        // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PortLocationOffset;                                        // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStand;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanCrouch;                                                // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSit;                                                   // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanKneel;                                                 // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanLayDown;                                               // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZK7[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AimOverEdgePitchAngle;                                     // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimOverEdgeWaterDepth;                                     // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOccupied : 1;                                             // 0x0098(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassengerIsLocked;                                        // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z4AF[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinAngle;                                                  // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAngle;                                                  // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H6FJ[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.VehicleDamageMaterialPoint
// 0x0020
struct FVehicleDamageMaterialPoint
{
	struct FName                                       MaterialParameterName;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DamageRadiusParameterName;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_API0[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.SeatEnclosureSetting
// 0x0008
struct FSeatEnclosureSetting
{
	int                                                SeatIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNewEnclosedSetting : 1;                                   // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WIOF[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.VehicleDestructionLocation
// 0x00B8
struct FVehicleDestructionLocation
{
	float                                              DestructionLocationHealth;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICPD[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 SwapoutMesh;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HitBoxSocket;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitBoxRadius;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U0RF[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ProtectedSeatIndices;                                      // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SeatIndicesToMarkAsDestroyed;                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SeatIndicesToEject;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SeatIndicesToEnableTracking;                               // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSeatEnclosureSetting>               SeatEnclosureSettings;                                     // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DestroyedParticle;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DestroyedParticleSocket;                                   // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               DestructionSound;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DamagedParticle;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               DamagedSound;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawDebug;                                                // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUXB[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AuraWhenActive;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AuraDamageActor*                         CurrentAura;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AuraAttachSocket;                                          // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.BossPhaseInfo
// 0x0040
struct FBossPhaseInfo
{
	float                                              HealthPctToTriggerNextPhase;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BattleTimeToTriggerNextPhase;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumDeadPassengersToTriggerNextPhase;                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestorePassengersOnNextPhase;                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7FKE[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ProtectedSeatIndices;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              PossibleHunterClasses;                                     // 0x0020(0x0010) (Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxHuntersInPlay;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HunterRespawnDelay;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinforcePartialHunterWaves;                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W3U9[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.BountyViewData
// 0x00C0
struct FBountyViewData
{
	struct FText                                       HunterFirstName;                                           // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       HunterLastName;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       HunterBio;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       HunterQuote;                                               // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              HunterSupportEntries;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HunterIcon[0x28];                                          // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HunterPortrait[0x28];                                      // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Maneater.RegionCol2DArray2
// 0x0010
struct FRegionCol2DArray2
{
	TArray<bool>                                       Array;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Maneater.RegionCol2DArray
// 0x0018
struct FRegionCol2DArray
{
	TArray<struct FRegionCol2DArray2>                  Array;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                _SizeX;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _SizeY;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Maneater.WorldRegion
// 0x0090
struct FWorldRegion
{
	Maneater_EWorldRegion                              Region;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ONZC[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  RegionIcon;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RegionOverheadTextureCollision;                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionCol2DArray                           RegionCollisionData;                                       // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      RegionBounds[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       RandomAmbientNarratorEventName;                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RegionGrotto[0x28];                                        // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bIsRegionPoisonable;                                       // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AH5B[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumBountySpawnDistance;                                // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.WorldRegionState
// 0x0120
struct FWorldRegionState
{
	class AME_WorldRegionVolume*                       Bounds;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>              Landmarks;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>              Grottos;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_NutrientCache*>                   NutrientCaches;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>              WhalesCarcasses;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_WorldLandmarkActor*>              Beaches;                                                   // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_SpawnVolumeCollection*>           SpawnVolumeCollections;                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_SpawnPointActor*>                 SpawnPointActors;                                          // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_DestructibleActor*>               Breakables;                                                // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldRegion                                RegionData;                                                // 0x0088(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	int                                                RegionIndex;                                               // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisited;                                                  // 0x011C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RGIN[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.RichTextActionMapping
// 0x0010
struct FRichTextActionMapping
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ERichTextPreset>              RichTextStyle;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A1XX[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.TutorialPopupPage
// 0x0048
struct FTutorialPopupPage
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRichTextActionMapping>              ActionBinds;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.PlayerTutorialPopup
// 0x0020
struct FPlayerTutorialPopup
{
	int                                                MaxDisplays;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImmediateDisplay;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ETutorialDisplayType>         DisplayType;                                               // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZEU[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVQC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTutorialPopupPage>                  TutorialPages;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.ME_TutorialEvent
// 0x00C0
struct FME_TutorialEvent
{
	struct FText                                       PlayerTooltipText;                                         // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       TutorialName;                                              // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       InputText;                                                 // 0x0030(0x0018) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FName>                               InputActionNames;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoHideTimer;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7899[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      WaypointLocation[0x28];                                    // 0x005C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       StartNarratorEventName;                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InitialProgressNarratorEventName;                          // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FinishNarratorEventName;                                   // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SaveGameAtStep;                                            // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3MW3[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoCompleteTimer;                                         // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayBeforeShowingUI;                                      // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumRepeatTimesToComplete;                                  // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6GCI[0x4];                                     // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeActivityNeededToCompleteStep;                          // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisableTooltipUI;                                          // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLIB[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.ME_TutorialTipEvent
// 0x0058
struct FME_TutorialTipEvent
{
	struct FText                                       HeaderText;                                                // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       BodyText;                                                  // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       InputText;                                                 // 0x0030(0x0018) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FName>                               InputActionNames;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.MovementTarget
// 0x0018
struct FMovementTarget
{
	class USceneComponent*                             MovementTargetComponent;                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MovementLocation;                                          // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_11CK[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Maneater.FloatIntervalBP
// 0x0008
struct FFloatIntervalBP
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Maneater.StoryObjective
// 0x00A8
struct FStoryObjective
{
	float                                              CompletionPct;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRenderProjectedIcons;                                     // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W2NB[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ObjectiveHint;                                             // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ObjectiveIcon;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ObjectiveIconTint;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ObjectiveTargetTypes;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ObjectiveTargets[0x10];                                    // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      UnknownData_JLOJ[0x50];                                    // 0x0058(0x0050) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
