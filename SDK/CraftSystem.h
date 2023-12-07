
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CraftSystem.

/// Struct /Game/CraftSystem/S_NeedItems.S_NeedItems
/// Size: 0x0020 (0x000000 - 0x000020)
struct FS_NeedItems
{ 
	FString                                            ItemName_11_6C57248C47344E545B556CA8C0CD94C2;               // 0x0000   (0x0010)  
	UPaperSprite*                                      ResourceItemIcon_9_64D6BEF4416095CABC4B8CB7066ACFBA;        // 0x0010   (0x0008)  
	UPaperSprite*                                      HasNoItemIcon_14_DDFF16874F2E11C8DCEB10B5AD707054;          // 0x0018   (0x0008)  
};

/// Struct /Game/CraftSystem/S_ItemsToCraft.S_ItemsToCraft
/// Size: 0x0150 (0x000000 - 0x000150)
struct FS_ItemsToCraft
{ 
	int32_t                                            Level_44_49E792FB4F021382BE4AC8B8316BF938;                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UPaperSprite*                                      CraftedItemIcon_60_D790C16C4C8449963F0FCCAB788C675F;        // 0x0008   (0x0008)  
	TMap<TEnumAsByte, int32_t>                         CraftResources_100_C6BBB2E64B05694A27B5D99E0286629E;        // 0x0010   (0x0050)  
	double                                             XP_63_BDADE38E44810FD6EF5DD18E8BEF3679;                     // 0x0060   (0x0008)  
	int32_t                                            Count_73_17205592448F61C533D6B69FD516A6E0;                  // 0x0068   (0x0004)  
	TEnumAsByte<CraftItemCategories>                   CategoryIs_76_969B1C194B9376B5A2C6FFA2BA05AFF5;             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	UPaperSprite*                                      BlackAndWhiteIcon_79_2EB79F4F41BD96F628035FA538DE9F8A;      // 0x0070   (0x0008)  
	UPaperSprite*                                      CantCraftIcon_82_A9B37B7D4E254E603BEE62B373690EEF;          // 0x0078   (0x0008)  
	FSlateBrush                                        ImageRender_89_3ED2E6904AE9951D605536BCFA2A1CCC;            // 0x0080   (0x00D0)  
};

/// Enum /Game/CraftSystem/CraftItemCategories.CraftItemCategories
/// Size: 0x09
enum CraftItemCategories : uint8_t
{
	CraftItemCategories__NewEnumerator00                                             = 0,
	CraftItemCategories__NewEnumerator11                                             = 1,
	CraftItemCategories__NewEnumerator22                                             = 2,
	CraftItemCategories__NewEnumerator33                                             = 3,
	CraftItemCategories__NewEnumerator54                                             = 4,
	CraftItemCategories__NewEnumerator65                                             = 5,
	CraftItemCategories__NewEnumerator76                                             = 6,
	CraftItemCategories__NewEnumerator47                                             = 7,
	CraftItemCategories__CraftItemCategories_MAX8                                    = 8
};

