
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AInew.

/// Struct /Game/AInew/NPC/S_Quest.S_Quest
/// Size: 0x0020 (0x000000 - 0x000020)
struct FS_Quest
{ 
	FString                                            QuestName_2_5AC68AB742A6716AD1072293206E9017;               // 0x0000   (0x0010)  
	int32_t                                            QuestItemID_5_8098E5E84C57F96DE2AD28B3E28961DB;             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	ABP_QuestItemOld_C*                                QuestItem_10_B3A0D72C4AED93DF277060A5603F449E;              // 0x0018   (0x0008)  
};

/// Struct /Game/AInew/NPC/ShopItemList/S_CategoryData.S_CategoryData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FS_CategoryData
{ 
	FName                                              CategoryName_6_41F11EA4427988A49ACAC0B6F7534D23;            // 0x0000   (0x0008)  
	FText                                              CategoryDisplayName_7_7ED884F3462CD6EC5F453A93D481BEB4;     // 0x0008   (0x0018)  
	TArray<TEnumAsByte>                                ItemTypes_9_B39C73334CEC6D450EF570A36B91CE75;               // 0x0020   (0x0010)  
	TArray<FName>                                      ItemNames_12_67724F74447CFFC8395909BB2FCDC8CD;              // 0x0030   (0x0010)  
	UPaperSprite*                                      CategoryIcon_15_E7F754C849EC4B8AB83121BA9EABD356;           // 0x0040   (0x0008)  
};

/// Struct /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x02DF (0x000001 - 0x0002E0)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0008)  
	FName                                              __NameProperty;                                             // 0x000C   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0014   (0x0008)  
	FName                                              __NameProperty;                                             // 0x001C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0024   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0028   (0x0004)  
	FName                                              __NameProperty;                                             // 0x002C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0034   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0038   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0040   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0044   (0x0008)  
	FName                                              __NameProperty;                                             // 0x004C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0054   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0058   (0x0004)  
	FName                                              __NameProperty;                                             // 0x005C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0064   (0x0004)  
	TArray<float>                                      __ArrayProperty;                                            // 0x0068   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0078   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0080   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0084   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x008C   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0090   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0098   (0x0008)  
	FName                                              __NameProperty;                                             // 0x00A0   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x00B0   (0x0010)  
	FName                                              __NameProperty;                                             // 0x00C0   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x00D0   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x00E0   (0x0010)  
	FName                                              __NameProperty;                                             // 0x00F0   (0x0008)  
	TArray<float>                                      __ArrayProperty;                                            // 0x00F8   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0108   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0110   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0118   (0x0008)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0120   (0x0010)  
	float                                              __FloatProperty;                                            // 0x0130   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0134   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x013C   (0x0004)  
	FInputScaleBiasClampConstants                      __StructProperty;                                           // 0x0140   (0x002C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0170   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0180   (0x0010)  
	float                                              __FloatProperty;                                            // 0x0190   (0x0004)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x0194   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0195   (0x0003)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0198   (0x0010)  
	TArray<float>                                      __ArrayProperty;                                            // 0x01A8   (0x0010)  
	TArray<float>                                      __ArrayProperty;                                            // 0x01B8   (0x0010)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x01C8   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x01C9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x01CA   (0x0002)  MISSED
	float                                              __FloatProperty;                                            // 0x01CC   (0x0004)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x01D0   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x01D2   (0x0002)  MISSED
	FName                                              __NameProperty;                                             // 0x01D4   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x01DC   (0x0004)  
	FName                                              __NameProperty;                                             // 0x01E0   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x01EC   (0x0004)  MISSED
	UBlendProfile*                                     __BlendProfile;                                             // 0x01F0   (0x0008)  
	UCurveFloat*                                       __CurveFloat;                                               // 0x01F8   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x0200   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0201   (0x0001)  
	EBlendListTransitionType                           __EnumProperty;                                             // 0x0202   (0x0001)  
	unsigned char                                      UnknownData08_5[0x5];                                       // 0x0203   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0208   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0218   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0220   (0x0008)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0228   (0x0020)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0248   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x02C8   (0x0018)  
};

/// Struct /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0208 (0x000001 - 0x000209)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0004   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0008   (0x0004)  
	float                                              __FloatProperty;                                            // 0x000C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0010   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0014   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0018   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              __FloatProperty;                                            // 0x001C   (0x0004)  
	char                                               __ByteProperty;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0024   (0x0004)  
	char                                               __ByteProperty;                                             // 0x0028   (0x0001)  
	char                                               __ByteProperty;                                             // 0x0029   (0x0001)  
	char                                               __ByteProperty;                                             // 0x002A   (0x0001)  
	char                                               __ByteProperty;                                             // 0x002B   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x002C   (0x0001)  
	char                                               __ByteProperty;                                             // 0x002D   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x002E   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x002F   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x0030   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x0031   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              __FloatProperty;                                            // 0x0034   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0038   (0x0004)  
	float                                              __FloatProperty;                                            // 0x003C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0040   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0044   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0048   (0x0004)  
	float                                              __FloatProperty;                                            // 0x004C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0050   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0054   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0058   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x005C   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x005D   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x005E   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x005F   (0x0001)  
	float                                              __FloatProperty;                                            // 0x0060   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0064   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0068   (0x0004)  
	float                                              __FloatProperty;                                            // 0x006C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0070   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0074   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0078   (0x0004)  
	float                                              __FloatProperty;                                            // 0x007C   (0x0004)  
	char                                               __ByteProperty;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0084   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0088   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0090   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0094   (0x0004)  
	char                                               __ByteProperty;                                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x009C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00A0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00A4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00A8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00AC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00B0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00B4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00B8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00BC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00C0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00C4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00C8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00CC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00D0   (0x0004)  
	char                                               __ByteProperty;                                             // 0x00D4   (0x0001)  
	char                                               __ByteProperty;                                             // 0x00D5   (0x0001)  
	char                                               __ByteProperty;                                             // 0x00D6   (0x0001)  
	unsigned char                                      UnknownData07_5[0x1];                                       // 0x00D7   (0x0001)  MISSED
	float                                              __FloatProperty;                                            // 0x00D8   (0x0004)  
	char                                               __ByteProperty;                                             // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x00E0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00E4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00E8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00EC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00F0   (0x0004)  
	char                                               __ByteProperty;                                             // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x00F8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00FC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0100   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0104   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0108   (0x0004)  
	float                                              __FloatProperty;                                            // 0x010C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0110   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0114   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0118   (0x0004)  
	float                                              __FloatProperty;                                            // 0x011C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0120   (0x0004)  
	char                                               __ByteProperty;                                             // 0x0124   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0128   (0x0004)  
	float                                              __FloatProperty;                                            // 0x012C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0130   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0134   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0138   (0x0004)  
	float                                              __FloatProperty;                                            // 0x013C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0140   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0144   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0148   (0x0004)  
	float                                              __FloatProperty;                                            // 0x014C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0150   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0154   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0158   (0x0004)  
	char                                               __ByteProperty;                                             // 0x015C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x015D   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0160   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0164   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0168   (0x0004)  
	float                                              __FloatProperty;                                            // 0x016C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0170   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0174   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0178   (0x0004)  
	float                                              __FloatProperty;                                            // 0x017C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0180   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0184   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0188   (0x0004)  
	float                                              __FloatProperty;                                            // 0x018C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0190   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0194   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0198   (0x0004)  
	char                                               __ByteProperty;                                             // 0x019C   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x019D   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x01A0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01A4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01A8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01AC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01B0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01B4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01B8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01BC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01C0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01C4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01C8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01CC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01D0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01D4   (0x0004)  
	char                                               __ByteProperty;                                             // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x01D9   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x01DC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01E0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01E4   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01E8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01EC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01F0   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x01F4   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x01F5   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x01F6   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x01F7   (0x0001)  
	float                                              __FloatProperty;                                            // 0x01F8   (0x0004)  
	float                                              __FloatProperty;                                            // 0x01FC   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0200   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0204   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0208   (0x0001)  
};

/// Struct /Game/AInew/NPC/ShopItemList/S_ShopItemList.S_ShopItemList
/// Size: 0x002D (0x000000 - 0x00002D)
struct FS_ShopItemList
{ 
	int32_t                                            ItemID_2_6A3DEFFC446DF7041E2D12AF7F28E9BF;                  // 0x0000   (0x0004)  
	int32_t                                            Count_5_6EBADC044273A8C80A28EC8CB0A8DCC3;                   // 0x0004   (0x0004)  
	TArray<int32_t>                                    CountInStack_9_CA77619E46E0250EC65A7797A8126861;            // 0x0008   (0x0010)  
	FName                                              CategoryName_27_03479D654DF2F51AE60B9591AD400CE8;           // 0x0018   (0x0008)  
	UClass*                                            ItemBP_30_25FDB7974F0DBF0E54B406912060F5CB;                 // 0x0020   (0x0008)  
	int32_t                                            RP_Point_33_792267A148F44564640EDEA7C912060C;               // 0x0028   (0x0004)  
	bool                                               IsAliases_35_484DFD5D40C39194F4104D89FA051BDB;              // 0x002C   (0x0001)  
};

/// Struct /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01E7 (0x000001 - 0x0001E8)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0008)  
	FName                                              __NameProperty;                                             // 0x000C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0014   (0x0004)  
	TArray<float>                                      __ArrayProperty;                                            // 0x0018   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0028   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0038   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0048   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0058   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0068   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0078   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0088   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0098   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00A0   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x00A8   (0x0004)  
	FInputScaleBiasClampConstants                      __StructProperty;                                           // 0x00AC   (0x002C)  
	float                                              __FloatProperty;                                            // 0x00D8   (0x0004)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x00DC   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00DE   (0x0002)  MISSED
	UBlendProfile*                                     __BlendProfile;                                             // 0x00E0   (0x0008)  
	UCurveFloat*                                       __CurveFloat;                                               // 0x00E8   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x00F0   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x00F1   (0x0001)  
	EBlendListTransitionType                           __EnumProperty;                                             // 0x00F2   (0x0001)  
	unsigned char                                      UnknownData05_5[0x5];                                       // 0x00F3   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x00F8   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0108   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0118   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0120   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0128   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0130   (0x0020)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0150   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x01D0   (0x0018)  
};

/// Struct /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0004 (0x000001 - 0x000005)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{ 
	char                                               __ByteProperty;                                             // 0x0001   (0x0001)  
	char                                               __ByteProperty;                                             // 0x0002   (0x0001)  
	char                                               __ByteProperty;                                             // 0x0003   (0x0001)  
	char                                               __ByteProperty;                                             // 0x0004   (0x0001)  
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/OpenStash.OpenStash_C
/// Size: 0x0009 (0x000030 - 0x000039)
class UOpenStash_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	bool                                               Tutorial;                                                   // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenStash.OpenStash_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenStash.OpenStash_C.ExecuteUbergraph_OpenStash
	void ExecuteUbergraph_OpenStash(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsTalkToStashAfterRaid.IsTalkToStashAfterRaid_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UIsTalkToStashAfterRaid_C : public UAGSCondition : UAGSCondition
{ 
public:
	bool                                               __o;                                                        // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsTalkToStashAfterRaid.IsTalkToStashAfterRaid_C.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/HidePlayerPhrases.HidePlayerPhrases_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UHidePlayerPhrases_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/HidePlayerPhrases.HidePlayerPhrases_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/HidePlayerPhrases.HidePlayerPhrases_C.ExecuteUbergraph_HidePlayerPhrases
	void ExecuteUbergraph_HidePlayerPhrases(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/MedicQuest/StashClose.StashClose_C
/// Size: 0x0020 (0x000030 - 0x000050)
class UStashClose_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	FGameplayTag                                       QuestGameplay_Tag;                                          // 0x0038   (0x0008)  
	FString                                            StageName;                                                  // 0x0040   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/MedicQuest/StashClose.StashClose_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MedicQuest/StashClose.StashClose_C.ExecuteUbergraph_StashClose
	void ExecuteUbergraph_StashClose(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/Interface/I_NPCAnimInterface.I_NPCAnimInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_NPCAnimInterface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/AInew/NPC/Shops/ADSComponentWeaponTrader.ADSComponentWeaponTrader_C
/// Size: 0x0000 (0x000300 - 0x000300)
class UADSComponentWeaponTrader_C : public UADSDialoguePartecipantComponent : UADSDialoguePartecipantComponent
{ 
public:
};

/// Class /Game/AInew/NPC/Shops/ADSComponentStasher.ADSComponentStasher_C
/// Size: 0x0000 (0x000300 - 0x000300)
class UADSComponentStasher_C : public UADSDialoguePartecipantComponent : UADSDialoguePartecipantComponent
{ 
public:
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/SendQuestMessage.SendQuestMessage_C
/// Size: 0x0010 (0x000030 - 0x000040)
class USendQuestMessage_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	FGameplayTag                                       Message_Tag;                                                // 0x0038   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/SendQuestMessage.SendQuestMessage_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/SendQuestMessage.SendQuestMessage_C.CompletetQuest_Serv
	void CompletetQuest_Serv(UObject* SurvPC);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/SendQuestMessage.SendQuestMessage_C.ExecuteUbergraph_SendQuestMessage
	void ExecuteUbergraph_SendQuestMessage(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/MedicQuest/MSetQuestCompleted.MSetQuestCompleted_C
/// Size: 0x0010 (0x000030 - 0x000040)
class UMSetQuestCompleted_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	int32_t                                            QuestIndex;                                                 // 0x0038   (0x0004)  
	int32_t                                            ObjectiveIndex;                                             // 0x003C   (0x0004)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/MedicQuest/MSetQuestCompleted.MSetQuestCompleted_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MedicQuest/MSetQuestCompleted.MSetQuestCompleted_C.ExecuteUbergraph_MSetQuestCompleted
	void ExecuteUbergraph_MSetQuestCompleted(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/MedicQuest/MSetQuestActive.MSetQuestActive_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UMSetQuestActive_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/MedicQuest/MSetQuestActive.MSetQuestActive_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MedicQuest/MSetQuestActive.MSetQuestActive_C.ExecuteUbergraph_MSetQuestActive
	void ExecuteUbergraph_MSetQuestActive(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/MedicQuest/CloseShop.CloseShop_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UCloseShop_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/MedicQuest/CloseShop.CloseShop_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MedicQuest/CloseShop.CloseShop_C.ExecuteUbergraph_CloseShop
	void ExecuteUbergraph_CloseShop(int32_t EntryPoint);                                                                     // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/OpenWorkRP.OpenWorkRP_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UOpenWorkRP_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenWorkRP.OpenWorkRP_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenWorkRP.OpenWorkRP_C.ExecuteUbergraph_OpenWorkRP
	void ExecuteUbergraph_OpenWorkRP(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/CloseWorkRP.CloseWorkRP_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UCloseWorkRP_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/CloseWorkRP.CloseWorkRP_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/CloseWorkRP.CloseWorkRP_C.ExecuteUbergraph_CloseWorkRP
	void ExecuteUbergraph_CloseWorkRP(int32_t EntryPoint);                                                                   // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/isTrailer.isTrailer_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UisTrailer_C : public UAGSCondition : UAGSCondition
{ 
public:
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsCurrentQuestStage.IsCurrentQuestStage_C
/// Size: 0x0030 (0x000038 - 0x000068)
class UIsCurrentQuestStage_C : public UAGSCondition : UAGSCondition
{ 
public:
	bool                                               DontCurrentStage;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            StageName;                                                  // 0x0040   (0x0010)  
	bool                                               isArrayStage;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FString>                                    ArrayStage;                                                 // 0x0058   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsCurrentQuestStage.IsCurrentQuestStage_C.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/Posobie.Posobie_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UPosobie_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/Posobie.Posobie_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/Posobie.Posobie_C.ExecuteUbergraph_Posobie
	void ExecuteUbergraph_Posobie(int32_t EntryPoint);                                                                       // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/FamiliarityAction.FamiliarityAction_C
/// Size: 0x0018 (0x000030 - 0x000048)
class UFamiliarityAction_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	FString                                            NPCName;                                                    // 0x0038   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/FamiliarityAction.FamiliarityAction_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/FamiliarityAction.FamiliarityAction_C.ExecuteUbergraph_FamiliarityAction
	void ExecuteUbergraph_FamiliarityAction(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/ActivateCompASS.ActivateCompASS_C
/// Size: 0x0009 (0x000030 - 0x000039)
class UActivateCompASS_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	bool                                               Gps;                                                        // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/ActivateCompASS.ActivateCompASS_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/ActivateCompASS.ActivateCompASS_C.CompletetQuest_Serv
	void CompletetQuest_Serv(UObject* SurvPC);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/ActivateCompASS.ActivateCompASS_C.ExecuteUbergraph_ActivateCompASS
	void ExecuteUbergraph_ActivateCompASS(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/BPI_Shops.BPI_Shops_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_Shops_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/OpenShopBarmen.OpenShopBarmen_C
/// Size: 0x0009 (0x000030 - 0x000039)
class UOpenShopBarmen_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	TEnumAsByte<E_Shops>                               ShopType;                                                   // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenShopBarmen.OpenShopBarmen_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenShopBarmen.OpenShopBarmen_C.ExecuteUbergraph_OpenShopBarmen
	void ExecuteUbergraph_OpenShopBarmen(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/OpenShop.OpenShop_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UOpenShop_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenShop.OpenShop_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/OpenShop.OpenShop_C.ExecuteUbergraph_OpenShop
	void ExecuteUbergraph_OpenShop(int32_t EntryPoint);                                                                      // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/CloseInGameShop.CloseInGameShop_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UCloseInGameShop_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/CloseInGameShop.CloseInGameShop_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/CloseInGameShop.CloseInGameShop_C.ExecuteUbergraph_CloseInGameShop
	void ExecuteUbergraph_CloseInGameShop(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/CloseBarmen.CloseBarmen_C
/// Size: 0x0030 (0x000030 - 0x000060)
class UCloseBarmen_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	FGameplayTag                                       QuestGameplay_Tag;                                          // 0x0038   (0x0008)  
	bool                                               ShowBigSlides;                                              // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FName                                              SlideName;                                                  // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            StageName;                                                  // 0x0050   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/CloseBarmen.CloseBarmen_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/CloseBarmen.CloseBarmen_C.ExecuteUbergraph_CloseBarmen
	void ExecuteUbergraph_CloseBarmen(int32_t EntryPoint);                                                                   // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/QuestConditions/QuestCanBePassed.QuestCanBePassed_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UQuestCanBePassed_C : public UAGSCondition : UAGSCondition
{ 
public:
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/isWelcome.isWelcome_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UisWelcome_C : public UAGSCondition : UAGSCondition
{ 
public:
	bool                                               isWelcome;                                                  // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/isWelcome.isWelcome_C.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsTutorialNPC.IsTutorialNPC_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UIsTutorialNPC_C : public UAGSCondition : UAGSCondition
{ 
public:
	bool                                               __o;                                                        // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsTutorialNPC.IsTutorialNPC_C.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0x2407bf0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsBeginnerAfterStage.IsBeginnerAfterStage_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UIsBeginnerAfterStage_C : public UAGSCondition : UAGSCondition
{ 
public:
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsBeginner.IsBeginner_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UIsBeginner_C : public UAGSCondition : UAGSCondition
{ 
public:
	bool                                               __o;                                                        // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/IsBeginner.IsBeginner_C.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/CheckPressedButton.CheckPressedButton_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UCheckPressedButton_C : public UAGSCondition : UAGSCondition
{ 
public:
	bool                                               Conversely;                                                 // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateCondition/CheckPressedButton.CheckPressedButton_C.VerifyCondition
	bool VerifyCondition(APlayerController* PlayerController);                                                               // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/WelcomeAction.WelcomeAction_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UWelcomeAction_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/WelcomeAction.WelcomeAction_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/WelcomeAction.WelcomeAction_C.ExecuteUbergraph_WelcomeAction
	void ExecuteUbergraph_WelcomeAction(int32_t EntryPoint);                                                                 // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/TakeItemTutorial.TakeItemTutorial_C
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UTakeItemTutorial_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	bool                                               ShowBigSlides;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              SlideName;                                                  // 0x003C   (0x0008)  
	FGameplayTag                                       QuestGameplay_Tag;                                          // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TMap<FName, int32_t>                               RowNames;                                                   // 0x0050   (0x0050)  
	FString                                            TutorStageNane;                                             // 0x00A0   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/TakeItemTutorial.TakeItemTutorial_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/TakeItemTutorial.TakeItemTutorial_C.CompletetQuest_Serv
	void CompletetQuest_Serv(APlayerController* PlayerController);                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/TakeItemTutorial.TakeItemTutorial_C.ExecuteUbergraph_TakeItemTutorial
	void ExecuteUbergraph_TakeItemTutorial(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/StartQuestAction.StartQuestAction_C
/// Size: 0x0018 (0x000030 - 0x000048)
class UStartQuestAction_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	UQuest*                                            Quest;                                                      // 0x0038   (0x0008)  
	FName                                              Questgiver;                                                 // 0x0040   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/StartQuestAction.StartQuestAction_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/StartQuestAction.StartQuestAction_C.StartEvent
	void StartEvent(UObject* Object);                                                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/StartQuestAction.StartQuestAction_C.ExecuteUbergraph_StartQuestAction
	void ExecuteUbergraph_StartQuestAction(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UCompleteQuestAction_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	bool                                               Success;                                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<int32_t>                                    ItemsCount;                                                 // 0x0040   (0x0010)  
	TArray<FString>                                    ItemsName;                                                  // 0x0050   (0x0010)  
	bool                                               ShopActive;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	UW_Dialogue_C*                                     wbp_Dialogue;                                               // 0x0068   (0x0008)  
	bool                                               FindQuest;                                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGameplayTag                                       Message_Tag;                                                // 0x0074   (0x0008)  
	int32_t                                            RPQuestCurrentProgress;                                     // 0x007C   (0x0004)  
	int32_t                                            RPQuestMaxProgress;                                         // 0x0080   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FTimerHandle                                       WarningMessageTimer;                                        // 0x0088   (0x0008)  
	ASurvPC_C*                                         As_Surv_PC;                                                 // 0x0090   (0x0008)  
	ASurvivalPlayer_C*                                 As_Survival_Player;                                         // 0x0098   (0x0008)  
	FMulticastInlineDelegate                           NewEventDispatcher;                                         // 0x00A0   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.CompleteBeginner
	void CompleteBeginner(ASurvPC_C* SurvPC, UQuestContext* Quest Context);                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.CompleateRaidQuest
	void CompleateRaidQuest(ASurvPC_C* PC, UQuestContext*& QuestContext);                                                    // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.ShowNotEnoughSpaceError
	void ShowNotEnoughSpaceError();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.CompleateRPQuest
	void CompleateRPQuest(ASurvPC_C* PC, UQuestContext*& QuestContext);                                                      // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.CheckFreeSpace
	void CheckFreeSpace(TMap<FString, int32_t> Reward, bool& bHaveFreeSpace);                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.GiveRewards
	void GiveRewards(UQuestData_C* QuestData, ASurvivalPlayer_C* SurvPlayer, bool& Success);                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.CompletetQuest_Serv
	void CompletetQuest_Serv(UObject* SurvPC);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.OnShowJournalHint
	void OnShowJournalHint();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.ExecuteUbergraph_CompleteQuestAction
	void ExecuteUbergraph_CompleteQuestAction(int32_t EntryPoint);                                                           // [0x2407bf0] Final|HasDefaults    
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/QuestsActions/CompleteQuestAction.CompleteQuestAction_C.NewEventDispatcher__DelegateSignature
	void NewEventDispatcher__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/CheckPressedButton.CheckPressedButton_C
/// Size: 0x000A (0x000030 - 0x00003A)
class UCheckPressedButton_C : public UAGSAction : UAGSAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	bool                                               Conversely;                                                 // 0x0038   (0x0001)  
	bool                                               isIHaveQuestions_;                                          // 0x0039   (0x0001)  


	/// Functions
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/CheckPressedButton.CheckPressedButton_C.ExecuteAction
	void ExecuteAction(APlayerController* PlayerController, UAGSGraphNode* nodeOwner);                                       // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/StaticNPC/Dialogue/ActivateAction/CheckPressedButton.CheckPressedButton_C.ExecuteUbergraph_CheckPressedButton
	void ExecuteUbergraph_CheckPressedButton(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C
/// Size: 0x0608 (0x000350 - 0x000958)
class USellerNPC_AnimBP_C : public UAnimInstance : UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0358   (0x0005)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x035D   (0x0003)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0360   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0368   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0370   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0408   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0430   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0458   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0480   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x04A0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x04E8   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0530   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0578   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0598   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x05E0   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0628   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0670   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0690   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x06D8   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0720   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0768   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0788   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x07D0   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0818   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0860   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0880   (0x00C8)  
	TEnumAsByte<E_NPCState>                            AnimState;                                                  // 0x0948   (0x0001)  
	TEnumAsByte<E_NPCIdle>                             Idle;                                                       // 0x0949   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x094A   (0x0006)  MISSED
	AInventoryStash_C*                                 NPC;                                                        // 0x0950   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_AD63E8B7493BFECF2DF9BABF71EB2E2C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_AD63E8B7493BFECF2DF9BABF71EB2E2C(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_275BC3DC4CFD48EC9E7B749329DA8C47
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_275BC3DC4CFD48EC9E7B749329DA8C47(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_DA46E6F8405CE96DF6A42DB16715B608
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_DA46E6F8405CE96DF6A42DB16715B608(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_DDEADEEA4EE017D448B970B81B1672FF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_DDEADEEA4EE017D448B970B81B1672FF(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_CB0F7E5C4A7D8BDB6F19E8A40C217A26
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_CB0F7E5C4A7D8BDB6F19E8A40C217A26(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_FF80A30944EB4384BCE193BA01CB98EE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_FF80A30944EB4384BCE193BA01CB98EE(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_CA822ECC44B679924F6C88BE3A4896A5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_CA822ECC44B679924F6C88BE3A4896A5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_234BCA674580D4E8931F778AFFCC24A2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_234BCA674580D4E8931F778AFFCC24A2(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_8BB11C8647C6CCD43EE40DA96C59C744
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_8BB11C8647C6CCD43EE40DA96C59C744(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/NPC/SellerNPC_AnimBP.SellerNPC_AnimBP_C.ExecuteUbergraph_SellerNPC_AnimBP
	void ExecuteUbergraph_SellerNPC_AnimBP(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/AInew/NPC/Shops/ADSComponentBarmen.ADSComponentBarmen_C
/// Size: 0x0000 (0x000300 - 0x000300)
class UADSComponentBarmen_C : public UADSDialoguePartecipantComponent : UADSDialoguePartecipantComponent
{ 
public:
};

/// Class /Game/AInew/NPC/Shops/ADSComponentLeader.ADSComponentLeader_C
/// Size: 0x0000 (0x000300 - 0x000300)
class UADSComponentLeader_C : public UADSDialoguePartecipantComponent : UADSDialoguePartecipantComponent
{ 
public:
};

/// Class /Game/AInew/NPC/Shops/ADSComponentMedicShop.ADSComponentMedicShop_C
/// Size: 0x0000 (0x000300 - 0x000300)
class UADSComponentMedicShop_C : public UADSDialoguePartecipantComponent : UADSDialoguePartecipantComponent
{ 
public:
};

/// Class /Game/AInew/NPC/Shops/ADSComponentMedicTutorial.ADSComponentMedicTutorial_C
/// Size: 0x0000 (0x000300 - 0x000300)
class UADSComponentMedicTutorial_C : public UADSDialoguePartecipantComponent : UADSDialoguePartecipantComponent
{ 
public:
};

/// Class /Game/AInew/Zombie/MainZombie/NavArea_TEST.NavArea_TEST_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_TEST_C : public UNavArea : UNavArea
{ 
public:
};

/// Class /Game/AInew/Zombie/NavQueryFilters.NavQueryFilters_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavQueryFilters_C : public UNavigationQueryFilter : UNavigationQueryFilter
{ 
public:
};

/// Class /Game/AInew/Spawner/aispawnmanager/AISpawnManager.AISpawnManager_C
/// Size: 0x0078 (0x000290 - 0x000308)
class AAISpawnManager_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	int32_t                                            TotalZombieLimit;                                           // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	TArray<AActor*>                                    AllAIs;                                                     // 0x02A8   (0x0010)  
	bool                                               CanSpawn_;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02B9   (0x0007)  MISSED
	TArray<bool>                                       _;                                                          // 0x02C0   (0x0010)  
	int32_t                                            BlueTypeZone;                                               // 0x02D0   (0x0004)  
	int32_t                                            GreenTypeZone;                                              // 0x02D4   (0x0004)  
	int32_t                                            YellowTypeZone;                                             // 0x02D8   (0x0004)  
	int32_t                                            RedTypeZone;                                                // 0x02DC   (0x0004)  
	int32_t                                            BlueZoneLimit;                                              // 0x02E0   (0x0004)  
	int32_t                                            GreenZoneLimit;                                             // 0x02E4   (0x0004)  
	int32_t                                            YellowZoneLimit;                                            // 0x02E8   (0x0004)  
	int32_t                                            RedZoneLimit;                                               // 0x02EC   (0x0004)  
	int32_t                                            BanditSpawnCount;                                           // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	TArray<int32_t>                                    SpawnZoneMap;                                               // 0x02F8   (0x0010)  


	/// Functions
	// Function /Game/AInew/Spawner/aispawnmanager/AISpawnManager.AISpawnManager_C.GetSpawnTypeZone
	TEnumAsByte<AISpawnZoneType> GetSpawnTypeZone(FVector WorldLocation);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Spawner/aispawnmanager/AISpawnManager.AISpawnManager_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Spawner/aispawnmanager/AISpawnManager.AISpawnManager_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/Spawner/aispawnmanager/AISpawnManager.AISpawnManager_C.ExecuteUbergraph_AISpawnManager
	void ExecuteUbergraph_AISpawnManager(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Bandit/mainBandit/EQS_VisibleHearedLocation.EQS_VisibleHearedLocation_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UEQS_VisibleHearedLocation_C : public UEnvQueryContext_BlueprintBase : UEnvQueryContext_BlueprintBase
{ 
public:
};

/// Class /Game/AInew/NavFilters/NavFilter_EQSPoints.NavFilter_EQSPoints_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_EQSPoints_C : public UNavigationQueryFilter : UNavigationQueryFilter
{ 
public:
};

/// Class /Game/AInew/Bandit/mainBandit/EQSQuery_Players.EQSQuery_Players_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UEQSQuery_Players_C : public UEnvQueryContext_BlueprintBase : UEnvQueryContext_BlueprintBase
{ 
public:
};

/// Class /Game/AInew/Bandit/mainBandit/EQSQuery_Bandits.EQSQuery_Bandits_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UEQSQuery_Bandits_C : public UEnvQueryContext_BlueprintBase : UEnvQueryContext_BlueprintBase
{ 
public:
};

/// Class /Game/AInew/Bandit/mainBandit/EQS_SensedLocation.EQS_SensedLocation_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UEQS_SensedLocation_C : public UEnvQueryContext_BlueprintBase : UEnvQueryContext_BlueprintBase
{ 
public:
};

/// Class /Game/AInew/Zombie/MainZombie/Task_All_SetRandomLocation.Task_All_SetRandomLocation_C
/// Size: 0x0070 (0x0000A8 - 0x000118)
class UTask_All_SetRandomLocation_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	bool                                               SelfLoc_;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FBlackboardKeySelector                             InputLocation_Origin_;                                      // 0x00B8   (0x0028)  
	double                                             PatrulRadius;                                               // 0x00E0   (0x0008)  
	FBlackboardKeySelector                             OutputLoc;                                                  // 0x00E8   (0x0028)  
	UClass*                                            FilterClass;                                                // 0x0110   (0x0008)  


	/// Functions
	// Function /Game/AInew/Zombie/MainZombie/Task_All_SetRandomLocation.Task_All_SetRandomLocation_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Zombie/MainZombie/Task_All_SetRandomLocation.Task_All_SetRandomLocation_C.ExecuteUbergraph_Task_All_SetRandomLocation
	void ExecuteUbergraph_Task_All_SetRandomLocation(int32_t EntryPoint);                                                    // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Task/Task_All_SetUseControllerRotationYaw.Task_All_SetUseControllerRotationYaw_C
/// Size: 0x0009 (0x0000A8 - 0x0000B1)
class UTask_All_SetUseControllerRotationYaw_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	bool                                               On_Off;                                                     // 0x00B0   (0x0001)  


	/// Functions
	// Function /Game/AInew/ParentBT/Task/Task_All_SetUseControllerRotationYaw.Task_All_SetUseControllerRotationYaw_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Task/Task_All_SetUseControllerRotationYaw.Task_All_SetUseControllerRotationYaw_C.ExecuteUbergraph_Task_All_SetUseControllerRotationYaw
	void ExecuteUbergraph_Task_All_SetUseControllerRotationYaw(int32_t EntryPoint);                                          // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Task/Task_All_SetOrientToMovement.Task_All_SetOrientToMovement_C
/// Size: 0x0009 (0x0000A8 - 0x0000B1)
class UTask_All_SetOrientToMovement_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	bool                                               On_Off;                                                     // 0x00B0   (0x0001)  


	/// Functions
	// Function /Game/AInew/ParentBT/Task/Task_All_SetOrientToMovement.Task_All_SetOrientToMovement_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Task/Task_All_SetOrientToMovement.Task_All_SetOrientToMovement_C.ExecuteUbergraph_Task_All_SetOrientToMovement
	void ExecuteUbergraph_Task_All_SetOrientToMovement(int32_t EntryPoint);                                                  // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Task/Task_All_SetFocus.Task_All_SetFocus_C
/// Size: 0x005A (0x0000A8 - 0x000102)
class UTask_All_SetFocus_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	FBlackboardKeySelector                             Target;                                                     // 0x00B0   (0x0028)  
	FBlackboardKeySelector                             Location;                                                   // 0x00D8   (0x0028)  
	bool                                               FocusTarget;                                                // 0x0100   (0x0001)  
	bool                                               FocusLocation;                                              // 0x0101   (0x0001)  


	/// Functions
	// Function /Game/AInew/ParentBT/Task/Task_All_SetFocus.Task_All_SetFocus_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Task/Task_All_SetFocus.Task_All_SetFocus_C.ExecuteUbergraph_Task_All_SetFocus
	void ExecuteUbergraph_Task_All_SetFocus(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Task/Task_All_SetEnemy.Task_All_SetEnemy_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTask_All_SetEnemy_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AInew/ParentBT/Task/Task_All_SetEnemy.Task_All_SetEnemy_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Task/Task_All_SetEnemy.Task_All_SetEnemy_C.ExecuteUbergraph_Task_All_SetEnemy
	void ExecuteUbergraph_Task_All_SetEnemy(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Task/Task_All_Init.Task_All_Init_C
/// Size: 0x0009 (0x0000A8 - 0x0000B1)
class UTask_All_Init_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	bool                                               Init_;                                                      // 0x00B0   (0x0001)  


	/// Functions
	// Function /Game/AInew/ParentBT/Task/Task_All_Init.Task_All_Init_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Task/Task_All_Init.Task_All_Init_C.ExecuteUbergraph_Task_All_Init
	void ExecuteUbergraph_Task_All_Init(int32_t EntryPoint);                                                                 // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Task/Task_All_ClearFocus.Task_All_ClearFocus_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTask_All_ClearFocus_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AInew/ParentBT/Task/Task_All_ClearFocus.Task_All_ClearFocus_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Task/Task_All_ClearFocus.Task_All_ClearFocus_C.ExecuteUbergraph_Task_All_ClearFocus
	void ExecuteUbergraph_Task_All_ClearFocus(int32_t EntryPoint);                                                           // [0x2407bf0] Final                
};

/// Class /Game/AInew/ParentBT/Service/Service_All_OrientToTarget.Service_All_OrientToTarget_C
/// Size: 0x0068 (0x000098 - 0x000100)
class UService_All_OrientToTarget_C : public UBTService_BlueprintBase : UBTService_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0098   (0x0008)  
	APawn*                                             Pawn;                                                       // 0x00A0   (0x0008)  
	TEnumAsByte<E_ActorOrVector>                       TargetLoc;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FBlackboardKeySelector                             Target;                                                     // 0x00B0   (0x0028)  
	bool                                               RotateWhenStand_;                                           // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	double                                             MinInterpSpeed;                                             // 0x00E0   (0x0008)  
	double                                             MaxInterpSpeed;                                             // 0x00E8   (0x0008)  
	double                                             ErrorTolerance;                                             // 0x00F0   (0x0008)  
	double                                             DeltaS;                                                     // 0x00F8   (0x0008)  


	/// Functions
	// Function /Game/AInew/ParentBT/Service/Service_All_OrientToTarget.Service_All_OrientToTarget_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentBT/Service/Service_All_OrientToTarget.Service_All_OrientToTarget_C.ExecuteUbergraph_Service_All_OrientToTarget
	void ExecuteUbergraph_Service_All_OrientToTarget(int32_t EntryPoint);                                                    // [0x2407bf0] Final                
};

/// Class /Game/AInew/NavFilters/NavFilter_Bandit_FreeMov.NavFilter_Bandit_FreeMov_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_Bandit_FreeMov_C : public UNavigationQueryFilter : UNavigationQueryFilter
{ 
public:
};

/// Class /Game/AInew/Bandit/mainBandit/Task_Bandit_OpenGate_Shoot.Task_Bandit_OpenGate_Shoot_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTask_Bandit_OpenGate_Shoot_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/Task_Bandit_OpenGate_Shoot.Task_Bandit_OpenGate_Shoot_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Task_Bandit_OpenGate_Shoot.Task_Bandit_OpenGate_Shoot_C.ExecuteUbergraph_Task_Bandit_OpenGate_Shoot
	void ExecuteUbergraph_Task_Bandit_OpenGate_Shoot(int32_t EntryPoint);                                                    // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/Service_Bandit_ShouldShoot.Service_Bandit_ShouldShoot_C
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UService_Bandit_ShouldShoot_C : public UBTService_BlueprintBase : UBTService_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0098   (0x0008)  
	FBlackboardKeySelector                             Loc;                                                        // 0x00A0   (0x0028)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/Service_Bandit_ShouldShoot.Service_Bandit_ShouldShoot_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Service_Bandit_ShouldShoot.Service_Bandit_ShouldShoot_C.ExecuteUbergraph_Service_Bandit_ShouldShoot
	void ExecuteUbergraph_Service_Bandit_ShouldShoot(int32_t EntryPoint);                                                    // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Bandit/mainBandit/DecoratorDistanceCheck.DecoratorDistanceCheck_C
/// Size: 0x0039 (0x0000A0 - 0x0000D9)
class UDecoratorDistanceCheck_C : public UBTDecorator_BlueprintBase : UBTDecorator_BlueprintBase
{ 
public:
	FBlackboardKeySelector                             BB_Key;                                                     // 0x00A0   (0x0028)  
	double                                             DistanceMax;                                                // 0x00C8   (0x0008)  
	double                                             DistanceMin;                                                // 0x00D0   (0x0008)  
	bool                                               Enemy;                                                      // 0x00D8   (0x0001)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/DecoratorDistanceCheck.DecoratorDistanceCheck_C.PerformConditionCheckAI
	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AInew/Bandit/mainBandit/BTService_BanditSpeak.BTService_BanditSpeak_C
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTService_BanditSpeak_C : public UBTService_BlueprintBase : UBTService_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0098   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BTService_BanditSpeak.BTService_BanditSpeak_C.ReceiveActivationAI
	void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                         // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BTService_BanditSpeak.BTService_BanditSpeak_C.PlaySound
	void PlaySound(USceneComponent* AttachToComponent);                                                                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BTService_BanditSpeak.BTService_BanditSpeak_C.ExecuteUbergraph_BTService_BanditSpeak
	void ExecuteUbergraph_BTService_BanditSpeak(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_UnsetPlayerHpIsLow.Task_UnsetPlayerHpIsLow_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTask_UnsetPlayerHpIsLow_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_UnsetPlayerHpIsLow.Task_UnsetPlayerHpIsLow_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_UnsetPlayerHpIsLow.Task_UnsetPlayerHpIsLow_C.ExecuteUbergraph_Task_UnsetPlayerHpIsLow
	void ExecuteUbergraph_Task_UnsetPlayerHpIsLow(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_SomeoneIsSee.Task_SomeoneIsSee_C
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UTask_SomeoneIsSee_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	double                                             ActivatorRadius;                                            // 0x00B0   (0x0008)  
	AmainBanditAI_C*                                   bandit;                                                     // 0x00B8   (0x0008)  
	UClass*                                            ActorClass;                                                 // 0x00C0   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_SomeoneIsSee.Task_SomeoneIsSee_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_SomeoneIsSee.Task_SomeoneIsSee_C.ExecuteUbergraph_Task_SomeoneIsSee
	void ExecuteUbergraph_Task_SomeoneIsSee(int32_t EntryPoint);                                                             // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_SetOnCover.Task_SetOnCover_C
/// Size: 0x0009 (0x0000A8 - 0x0000B1)
class UTask_SetOnCover_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	bool                                               Is;                                                         // 0x00B0   (0x0001)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_SetOnCover.Task_SetOnCover_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_SetOnCover.Task_SetOnCover_C.ExecuteUbergraph_Task_SetOnCover
	void ExecuteUbergraph_Task_SetOnCover(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UTask_RegenerateHealth_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	AmainBanditAI_C*                                   bandit;                                                     // 0x00B0   (0x0008)  
	double                                             HPPerSecond;                                                // 0x00B8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.OnNotifyEnd_6E66623F4EB6B666E4DAFA8B1E537348
	void OnNotifyEnd_6E66623F4EB6B666E4DAFA8B1E537348(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.OnNotifyBegin_6E66623F4EB6B666E4DAFA8B1E537348
	void OnNotifyBegin_6E66623F4EB6B666E4DAFA8B1E537348(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.OnInterrupted_6E66623F4EB6B666E4DAFA8B1E537348
	void OnInterrupted_6E66623F4EB6B666E4DAFA8B1E537348(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.OnBlendOut_6E66623F4EB6B666E4DAFA8B1E537348
	void OnBlendOut_6E66623F4EB6B666E4DAFA8B1E537348(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.OnCompleted_6E66623F4EB6B666E4DAFA8B1E537348
	void OnCompleted_6E66623F4EB6B666E4DAFA8B1E537348(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RegenerateHealth.Task_RegenerateHealth_C.ExecuteUbergraph_Task_RegenerateHealth
	void ExecuteUbergraph_Task_RegenerateHealth(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RandomAnim.Task_RandomAnim_C
/// Size: 0x0009 (0x0000A8 - 0x0000B1)
class UTask_RandomAnim_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	TEnumAsByte<E_Bandit_MovementMode>                 MovementMode;                                               // 0x00B0   (0x0001)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RandomAnim.Task_RandomAnim_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_RandomAnim.Task_RandomAnim_C.ExecuteUbergraph_Task_RandomAnim
	void ExecuteUbergraph_Task_RandomAnim(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_IfHealthLessThan.Task_IfHealthLessThan_C
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UTask_IfHealthLessThan_C : public UBTDecorator_BlueprintBase : UBTDecorator_BlueprintBase
{ 
public:
	double                                             ifHealthIs;                                                 // 0x00A0   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_IfHealthLessThan.Task_IfHealthLessThan_C.PerformConditionCheckAI
	bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_ClearSensed.Task_ClearSensed_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTask_ClearSensed_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_ClearSensed.Task_ClearSensed_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_ClearSensed.Task_ClearSensed_C.ExecuteUbergraph_Task_ClearSensed
	void ExecuteUbergraph_Task_ClearSensed(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C
/// Size: 0x00C8 (0x0000A8 - 0x000170)
class UTask_Bandit_SplineMoveTo_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	FBlackboardKeySelector                             BBKey;                                                      // 0x00B0   (0x0028)  
	bool                                               Enemy_;                                                     // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	double                                             AcceptableRadius;                                           // 0x00E0   (0x0008)  
	AAIController*                                     Controller;                                                 // 0x00E8   (0x0008)  
	APawn*                                             Pawn;                                                       // 0x00F0   (0x0008)  
	double                                             DeltaS;                                                     // 0x00F8   (0x0008)  
	UNavigationPath*                                   Path;                                                       // 0x0100   (0x0008)  
	FVector                                            PathLoc;                                                    // 0x0108   (0x0018)  
	FVector                                            PathPrevLoc;                                                // 0x0120   (0x0018)  
	double                                             NeedAngle;                                                  // 0x0138   (0x0008)  
	AActor*                                            TargetActor;                                                // 0x0140   (0x0008)  
	FVector                                            TargetVector;                                               // 0x0148   (0x0018)  
	UClass*                                            FilterClass;                                                // 0x0160   (0x0008)  
	double                                             DeltaDistanceToMove;                                        // 0x0168   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.CalculateAngle
	void CalculateAngle(double& angle, FRotator& rot);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.Debug
	void Debug();                                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnFail_5C538A7744043F743AD600858B7E3DDC
	void OnFail_5C538A7744043F743AD600858B7E3DDC(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnSuccess_5C538A7744043F743AD600858B7E3DDC
	void OnSuccess_5C538A7744043F743AD600858B7E3DDC(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnMoveFinished_69D377704ECBCE63938134B85B3B6FBC
	void OnMoveFinished_69D377704ECBCE63938134B85B3B6FBC(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnRequestFailed_69D377704ECBCE63938134B85B3B6FBC
	void OnRequestFailed_69D377704ECBCE63938134B85B3B6FBC();                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnFail_B5DD2B4C406AD22E329C328B5AFBAB97
	void OnFail_B5DD2B4C406AD22E329C328B5AFBAB97(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnSuccess_B5DD2B4C406AD22E329C328B5AFBAB97
	void OnSuccess_B5DD2B4C406AD22E329C328B5AFBAB97(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnMoveFinished_DF1103574AEC383895FE67B593AC26B0
	void OnMoveFinished_DF1103574AEC383895FE67B593AC26B0(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnRequestFailed_DF1103574AEC383895FE67B593AC26B0
	void OnRequestFailed_DF1103574AEC383895FE67B593AC26B0();                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnFail_EDCABC044790CF7C881E279AD76753E5
	void OnFail_EDCABC044790CF7C881E279AD76753E5(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnSuccess_EDCABC044790CF7C881E279AD76753E5
	void OnSuccess_EDCABC044790CF7C881E279AD76753E5(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnFail_454DFE0F4FE8221544021C9A98B42212
	void OnFail_454DFE0F4FE8221544021C9A98B42212(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.OnSuccess_454DFE0F4FE8221544021C9A98B42212
	void OnSuccess_454DFE0F4FE8221544021C9A98B42212(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SplineMoveTo.Task_Bandit_SplineMoveTo_C.ExecuteUbergraph_Task_Bandit_SplineMoveTo
	void ExecuteUbergraph_Task_Bandit_SplineMoveTo(int32_t EntryPoint);                                                      // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SetAnimState.Task_Bandit_SetAnimState_C
/// Size: 0x0019 (0x0000A8 - 0x0000C1)
class UTask_Bandit_SetAnimState_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	bool                                               IsAim___if_worried_;                                        // 0x00B0   (0x0001)  
	bool                                               IsSprint___if_worried_;                                     // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	AmainBanditAI_C*                                   bandit;                                                     // 0x00B8   (0x0008)  
	TEnumAsByte<E_Bandit_MovementMode>                 MovementMode;                                               // 0x00C0   (0x0001)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SetAnimState.Task_Bandit_SetAnimState_C.SetMoveSpeed_MULTI
	void SetMoveSpeed_MULTI(double Speed);                                                                                   // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SetAnimState.Task_Bandit_SetAnimState_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_SetAnimState.Task_Bandit_SetAnimState_C.ExecuteUbergraph_Task_Bandit_SetAnimState
	void ExecuteUbergraph_Task_Bandit_SetAnimState(int32_t EntryPoint);                                                      // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_Bandit_RunEQSWithValidLocation.Task_Bandit_RunEQSWithValidLocation_C
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UTask_Bandit_RunEQSWithValidLocation_C : public UBTTask_BlueprintBase_New_C : UBTTask_BlueprintBase_New_C
{ 
public:
	FBlackboardKeySelector                             BB_Key;                                                     // 0x00B0   (0x0028)  
	UEnvQuery*                                         QueryTemplate;                                              // 0x00D8   (0x0008)  
	TArray<double>                                     ItemScore;                                                  // 0x00E0   (0x0010)  
	TArray<int32_t>                                    ItemIndex;                                                  // 0x00F0   (0x0010)  
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Task_All_NewUnsetFocus.Task_All_NewUnsetFocus_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTask_All_NewUnsetFocus_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_All_NewUnsetFocus.Task_All_NewUnsetFocus_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Task_All_NewUnsetFocus.Task_All_NewUnsetFocus_C.ExecuteUbergraph_Task_All_NewUnsetFocus
	void ExecuteUbergraph_Task_All_NewUnsetFocus(int32_t EntryPoint);                                                        // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Shoot.Shoot_C
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UShoot_C : public UBTTask_BlueprintBase_New_C : UBTTask_BlueprintBase_New_C
{ 
public:
	FBlackboardKeySelector                             Target;                                                     // 0x00B0   (0x0028)  
	FBlackboardKeySelector                             Location;                                                   // 0x00D8   (0x0028)  
	AmainBanditAI_C*                                   bandit;                                                     // 0x0100   (0x0008)  
	bool                                               Location_;                                                  // 0x0108   (0x0001)  
	bool                                               Target_;                                                    // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x010A   (0x0006)  MISSED
	TArray<int32_t>                                    ItemIndex;                                                  // 0x0110   (0x0010)  
	TArray<double>                                     ItemScore;                                                  // 0x0120   (0x0010)  
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsPlayerHPLow.Service_IsPlayerHPLow_C
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UService_IsPlayerHPLow_C : public UBTService_BlueprintBase : UBTService_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0098   (0x0008)  
	ASurvivalPlayer_C*                                 Player;                                                     // 0x00A0   (0x0008)  
	double                                             PlayerHealthLessThan;                                       // 0x00A8   (0x0008)  
	ASurvivalPlayer_Test_C*                            Player_TEST;                                                // 0x00B0   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsPlayerHPLow.Service_IsPlayerHPLow_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsPlayerHPLow.Service_IsPlayerHPLow_C.ReceiveActivation
	void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsPlayerHPLow.Service_IsPlayerHPLow_C.ExecuteUbergraph_Service_IsPlayerHPLow
	void ExecuteUbergraph_Service_IsPlayerHPLow(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsEnemyClose.Service_IsEnemyClose_C
/// Size: 0x0038 (0x000098 - 0x0000D0)
class UService_IsEnemyClose_C : public UBTService_BlueprintBase : UBTService_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0098   (0x0008)  
	FBlackboardKeySelector                             BBKey;                                                      // 0x00A0   (0x0028)  
	double                                             DistanceToUncover;                                          // 0x00C8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsEnemyClose.Service_IsEnemyClose_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/BanditTasks/Service_IsEnemyClose.Service_IsEnemyClose_C.ExecuteUbergraph_Service_IsEnemyClose
	void ExecuteUbergraph_Service_IsEnemyClose(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/NavArea_BanditCity.NavArea_BanditCity_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_BanditCity_C : public UNavArea : UNavArea
{ 
public:
};

/// Class /Game/AInew/NavFilters/NavFilter_Bandit_LimitedMov.NavFilter_Bandit_LimitedMov_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_Bandit_LimitedMov_C : public UNavigationQueryFilter : UNavigationQueryFilter
{ 
public:
};

/// Class /Game/AInew/Spawner/ZombieTriggerSpawner.ZombieTriggerSpawner_C
/// Size: 0x00A0 (0x000290 - 0x000330)
class AZombieTriggerSpawner_C : public AActor : AActor
{ 
public:
	USphereComponent*                                  SpawnRadius;                                                // 0x0290   (0x0008)  
	UBoxComponent*                                     CleaningTrigger;                                            // 0x0298   (0x0008)  
	UBoxComponent*                                     SpawnTrigger;                                               // 0x02A0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A8   (0x0008)  
	double                                             SpawningRadius;                                             // 0x02B0   (0x0008)  
	double                                             DelayBetweenSpawn;                                          // 0x02B8   (0x0008)  
	double                                             BeginSpawnDelay;                                            // 0x02C0   (0x0008)  
	bool                                               SpawnOnce_;                                                 // 0x02C8   (0x0001)  
	bool                                               SpawnWithChance_;                                           // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02CA   (0x0006)  MISSED
	double                                             Chance;                                                     // 0x02D0   (0x0008)  
	TEnumAsByte<E_AIType>                              AIType;                                                     // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02D9   (0x0007)  MISSED
	TArray<AActor*>                                    SpawnedAIs;                                                 // 0x02E0   (0x0010)  
	int32_t                                            TypeIndex;                                                  // 0x02F0   (0x0004)  
	int32_t                                            CountIndex;                                                 // 0x02F4   (0x0004)  
	FVector                                            SpawnLoc;                                                   // 0x02F8   (0x0018)  
	FRotator                                           SpawnRot;                                                   // 0x0310   (0x0018)  
	int32_t                                            ZombieFullCount;                                            // 0x0328   (0x0004)  
	int32_t                                            ZombieCounter;                                              // 0x032C   (0x0004)  


	/// Functions
	// Function /Game/AInew/Spawner/ZombieTriggerSpawner.ZombieTriggerSpawner_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C
/// Size: 0x67D2 (0x000350 - 0x006B22)
class UBanditAnim_BP_C : public UAnimInstance : UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0358   (0x020C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0564   (0x0004)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0568   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0570   (0x0008)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0578   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x05A0   (0x0108)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x06A8   (0x00E0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0788   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x07D0   (0x0070)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0840   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0948   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0990   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0A70   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0AE0   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0BC0   (0x0070)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0C30   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0C58   (0x0108)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0D60   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0DA8   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0DD0   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E18   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E40   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E68   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E90   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0EB8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0EE0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0F08   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0F30   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0F78   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0F98   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0FE0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1000   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1048   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1068   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x10B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x10D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1100   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1128   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1150   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1178   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x11A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x11C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x11F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1218   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1240   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1268   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1290   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x12B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x12E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1308   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1330   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1358   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1380   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x13F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1420   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1448   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1470   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1498   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x14E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1510   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1538   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1560   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1588   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x15D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1600   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1628   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1650   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x1678   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x16A0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x16E8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1730   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1778   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x17C0   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x1830   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1878   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1898   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x18E0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1928   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1970   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x19B8   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x1A28   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1A70   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1A90   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1AD8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1B20   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1B68   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1BB0   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x1BF8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1C40   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1C60   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1CA8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1CF0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1D38   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1D80   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x1DC8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1E10   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1E30   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1E78   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1EC0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1F08   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1F50   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x1F98   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1FE0   (0x0020)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x2000   (0x00E0)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x20E0   (0x0078)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2158   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x21A0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x21E8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2230   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2250   (0x0028)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x2278   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x22C0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2308   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2350   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2398   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x23E0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2428   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2498   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2508   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2578   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x25E8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2658   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x26C8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2738   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x27A8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2818   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2888   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x28A8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x28F0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2938   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2980   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x29C8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2A38   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2AA8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2B18   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2B88   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2BF8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2C68   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2CD8   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x2D48   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2D90   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x2E00   (0x0070)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x2E70   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x2EB8   (0x0020)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2ED8   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x2F00   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2F48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2F70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2F98   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x2FC0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x2FE8   (0x0048)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3030   (0x0118)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3148   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3190   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x31D8   (0x0048)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3220   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3338   (0x0118)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3450   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3498   (0x0048)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x34E0   (0x0118)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x35F8   (0x0020)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3618   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3730   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3848   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x3960   (0x0118)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3A78   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3AC0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3B08   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3B50   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3B98   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x3BE0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3C28   (0x0020)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x3C48   (0x0078)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x3CC0   (0x0078)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x3D38   (0x0078)  
	FAnimNode_RandomPlayer                             AnimGraphNode_RandomPlayer;                                 // 0x3DB0   (0x0078)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x3E28   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x3E70   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3E90   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3ED8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3F20   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3F68   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x3FB0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x3FF8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4040   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4060   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x4080   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4148   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x4168   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x41B0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x41F8   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4240   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x42B0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x42F8   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x4368   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4388   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x43F8   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x44D8   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x4548   (0x00E0)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x4628   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4670   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x46E0   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4750   (0x0070)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x47C0   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x4808   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x48E8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4958   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x49C8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4A38   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x4AA8   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4AF0   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4B60   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4BD0   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4C40   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4CB0   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x4D20   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4D68   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4DD8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4E48   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x4EB8   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x4F28   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5008   (0x0070)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x5078   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x50C0   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5130   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5210   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5280   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x52F0   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5360   (0x00E0)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x5440   (0x0118)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x5558   (0x0118)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x5670   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x56B8   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5728   (0x0070)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5798   (0x0070)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x5808   (0x0118)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5920   (0x0070)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5990   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x59D8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5A20   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5A68   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5AB0   (0x0070)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5B20   (0x00E0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x5C00   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x5C70   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x5C90   (0x00C8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x5D58   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x5D78   (0x00C8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x5E40   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x5E88   (0x0048)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x5ED0   (0x0020)  
	FAnimNode_ApplyAdditive                            AnimGraphNode_ApplyAdditive;                                // 0x5EF0   (0x00C8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x5FB8   (0x00E0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6098   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x60C0   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x60E8   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x61F0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6218   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6240   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6268   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x6290   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6398   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x63C0   (0x00E0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x64A0   (0x0020)  
	FAnimNode_Fabrik                                   AnimGraphNode_Fabrik;                                       // 0x64C0   (0x01F0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x66B0   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x66D0   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x67D8   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x6800   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x6848   (0x00E0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6928   (0x0028)  
	double                                             WalkSpeed;                                                  // 0x6950   (0x0008)  
	double                                             RunSpeed;                                                   // 0x6958   (0x0008)  
	bool                                               IsInAir_;                                                   // 0x6960   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x6961   (0x0007)  MISSED
	double                                             Speed;                                                      // 0x6968   (0x0008)  
	TEnumAsByte<E_Bandit_MovementMode>                 MovementMode;                                               // 0x6970   (0x0001)  
	TEnumAsByte<BPE_Weapon_Type>                       WeaponType;                                                 // 0x6971   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x6972   (0x0006)  MISSED
	AmainBanditAI_C*                                   bandit;                                                     // 0x6978   (0x0008)  
	double                                             MoveDirection;                                              // 0x6980   (0x0008)  
	double                                             CurrentMoveDirection;                                       // 0x6988   (0x0008)  
	UAnimMontage*                                      LastTakeDamageMontage;                                      // 0x6990   (0x0008)  
	bool                                               IsPlayingTakeDamageMontage_;                                // 0x6998   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x6999   (0x0007)  MISSED
	double                                             FeetPos;                                                    // 0x69A0   (0x0008)  
	double                                             Yaw;                                                        // 0x69A8   (0x0008)  
	double                                             Pitch;                                                      // 0x69B0   (0x0008)  
	double                                             AimYawDelta;                                                // 0x69B8   (0x0008)  
	double                                             MoveStartPosition;                                          // 0x69C0   (0x0008)  
	FVector                                            Velocity;                                                   // 0x69C8   (0x0018)  
	double                                             LastMoveDirection;                                          // 0x69E0   (0x0008)  
	FRotator                                           DeltaRot;                                                   // 0x69E8   (0x0018)  
	double                                             PreviousDirection;                                          // 0x6A00   (0x0008)  
	FRotator                                           ControlRotation;                                            // 0x6A08   (0x0018)  
	FRotator                                           PreviousVelocityRotation;                                   // 0x6A20   (0x0018)  
	double                                             VelocityDiff;                                               // 0x6A38   (0x0008)  
	double                                             WalkingSpeed;                                               // 0x6A40   (0x0008)  
	double                                             RunningSpeed;                                               // 0x6A48   (0x0008)  
	double                                             AccelerationDiff;                                           // 0x6A50   (0x0008)  
	double                                             PreviousSpeed;                                              // 0x6A58   (0x0008)  
	double                                             LeanRotation;                                               // 0x6A60   (0x0008)  
	double                                             LeanAccel;                                                  // 0x6A68   (0x0008)  
	double                                             LeanPower;                                                  // 0x6A70   (0x0008)  
	FVector2D                                          LeanGrounded;                                               // 0x6A78   (0x0010)  
	FRotator                                           ActorRot;                                                   // 0x6A88   (0x0018)  
	FRotator                                           PreviousActorRot;                                           // 0x6AA0   (0x0018)  
	bool                                               Dead;                                                       // 0x6AB8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x6AB9   (0x0007)  MISSED
	FTransform                                         LeftHandEffector;                                           // 0x6AC0   (0x0060)  
	bool                                               HasLeftHandEffector;                                        // 0x6B20   (0x0001)  
	bool                                               IsFlatSurface;                                              // 0x6B21   (0x0001)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.CalculateGroundedLean
	void CalculateGroundedLean();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.CalculateDirection1
	void CalculateDirection1(double DeltaX);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.CalculateVariables
	void CalculateVariables(double DeltaX);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_16FC6614403F58BBCC7033B81E0651E5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_16FC6614403F58BBCC7033B81E0651E5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_F2C2776B476F05A6D3999FA228887C95
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_F2C2776B476F05A6D3999FA228887C95(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_Fabrik_1B0F27F043E98A28DC0B24A759348826
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_Fabrik_1B0F27F043E98A28DC0B24A759348826();  // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_CC2C22064EDAF9E5F943EB8CC93BB7D9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_CC2C22064EDAF9E5F943EB8CC93BB7D9(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_9BDD1A36466EBD87E781C4989A321A54
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_9BDD1A36466EBD87E781C4989A321A54(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_DA06D6A44AF8E72B8D08A0A3F1A86D0A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_DA06D6A44AF8E72B8D08A0A3F1A86D0A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_1A6D61074E26BEF2408BAB8B85AF0F96
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_1A6D61074E26BEF2408BAB8B85AF0F96(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_5AAECC71464B5143473FFD90BB8458E3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_5AAECC71464B5143473FFD90BB8458E3(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_A262FFCE4036F35E55DBE392978EBB71
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_A262FFCE4036F35E55DBE392978EBB71(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_52C4D7DA49BA466A91CED1A50A127D72
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_52C4D7DA49BA466A91CED1A50A127D72(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_E5CDB6F34501C2FED1730CBFFA1E6585
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_E5CDB6F34501C2FED1730CBFFA1E6585(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_B282E8014622AA841402D58EF30D3EEE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_B282E8014622AA841402D58EF30D3EEE(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_D32B3C8C41EBB16DFA8BDE9AED64134A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_D32B3C8C41EBB16DFA8BDE9AED64134A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_B861C85E401F099CC27983B49D431B7D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_B861C85E401F099CC27983B49D431B7D(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_7BBD5D2A41F6309A1B15D18C35E42BF2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_7BBD5D2A41F6309A1B15D18C35E42BF2(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_CF11FA6F471057BC52A908A2CABDA1F5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_CF11FA6F471057BC52A908A2CABDA1F5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_A8370FD04501E3E7F99F758641003202
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_A8370FD04501E3E7F99F758641003202(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_49EA38E8477D12EF404DB5AF5B97EA17
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_49EA38E8477D12EF404DB5AF5B97EA17(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_79B8795C40A6189862393891CDE1DCA3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_79B8795C40A6189862393891CDE1DCA3(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_0E9529D149C1DB4D62B4D2995539F709
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_0E9529D149C1DB4D62B4D2995539F709(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_CFA447D544D6428DAC079BA5768D7441
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_CFA447D544D6428DAC079BA5768D7441(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_D4B413F14799AA91A6CD68A6D26EC299
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_D4B413F14799AA91A6CD68A6D26EC299(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_871DBC3142DB0685452F37989FAE1EE9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_871DBC3142DB0685452F37989FAE1EE9(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_C481341C4C79E2DB778F8A8639B8BAF5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_C481341C4C79E2DB778F8A8639B8BAF5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_397032F64C328107A459C986AF006B0B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_397032F64C328107A459C986AF006B0B(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_3AC54CAC462A49B1AEC6E5B7C463DAAC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_3AC54CAC462A49B1AEC6E5B7C463DAAC(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_CF44E89345CB3C551D43C399EAE9B38F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_CF44E89345CB3C551D43C399EAE9B38F(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_636BED3644A76F1A92E06CB68E379ABB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_636BED3644A76F1A92E06CB68E379ABB(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_0B6281D441165730E618AAA76C2A1785
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_0B6281D441165730E618AAA76C2A1785(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_21078F1C41EB45A799F2A3A9B0B19858
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_21078F1C41EB45A799F2A3A9B0B19858(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_5921FCD44C9807E88D4EB0BC29587038
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_5921FCD44C9807E88D4EB0BC29587038(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_69402F81440598FDABD85A8E110B1C17
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_69402F81440598FDABD85A8E110B1C17(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_895057AB4F324B3D2F4AE3BFFA63BC5B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_895057AB4F324B3D2F4AE3BFFA63BC5B(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_2199803B469EA98688BC448D04B87119
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_2199803B469EA98688BC448D04B87119(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_47650BDB45398FAE3F3B8CADB8900DA3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_47650BDB45398FAE3F3B8CADB8900DA3(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_23AC857249E3C8B85E2AB3B85DC652DA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_23AC857249E3C8B85E2AB3B85DC652DA(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_993970404075A1511B35DF9B7FBD3A9A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_993970404075A1511B35DF9B7FBD3A9A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_0A486B6A497643A842A7D9ACB5BC5F75
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_0A486B6A497643A842A7D9ACB5BC5F75(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_FB14BF5048D544C2B1B0E49AD3F31D03
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_FB14BF5048D544C2B1B0E49AD3F31D03(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_46D813B84A6CDF215FD646B263F5595D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_46D813B84A6CDF215FD646B263F5595D(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_A68882DE4CEAA1C88C39AFAB19325BF6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_A68882DE4CEAA1C88C39AFAB19325BF6(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_BA3FAE7F46BC0983EF0F68AB683C666F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_BA3FAE7F46BC0983EF0F68AB683C666F(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_FA0A14834B22115A2E62EDAAE5EA78ED
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendSpacePlayer_FA0A14834B22115A2E62EDAAE5EA78ED(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_7BCA1E0C465F155F723208AC30C2B52E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_7BCA1E0C465F155F723208AC30C2B52E(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_DA4FDEF74596D11A298FB29356926503
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_DA4FDEF74596D11A298FB29356926503(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_6F007296466F25A1EFD6DAA4862AC5F2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_6F007296466F25A1EFD6DAA4862AC5F2(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_4F3902254720EB18A9124A857C20D99A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_4F3902254720EB18A9124A857C20D99A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_C931092548D1DF547FDFD1B6A95903AE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_C931092548D1DF547FDFD1B6A95903AE(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_4347BF4441DD7BCB7B139C87E30CAD9C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_4347BF4441DD7BCB7B139C87E30CAD9C(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_80CEC1D64495B1AFBBDB1EB05C2540D8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_80CEC1D64495B1AFBBDB1EB05C2540D8(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_BD08E1C24DF7E6149512F4AFCF29264A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_BD08E1C24DF7E6149512F4AFCF29264A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_F9F50A0E47940FE9BEDD1FBD18480AC0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_RotationOffsetBlendSpace_F9F50A0E47940FE9BEDD1FBD18480AC0(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_21BCF4B54B1CDEC9F428A2885D220627
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_21BCF4B54B1CDEC9F428A2885D220627(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_9CB5F5F7450A45D6BB839FB8124F65B3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_9CB5F5F7450A45D6BB839FB8124F65B3(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_3B9C19574576AEF01365B8BF9169FD64
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_3B9C19574576AEF01365B8BF9169FD64(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_2E3800B444A95F0DE673BD8EAA7AC4F4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_2E3800B444A95F0DE673BD8EAA7AC4F4(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_05930D60457878550FFF7697D719874A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_05930D60457878550FFF7697D719874A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_57AF0A7C44CC73AC29221A90EF38197A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_57AF0A7C44CC73AC29221A90EF38197A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_3ED88E35422A46F2F3333BA962211E40
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_3ED88E35422A46F2F3333BA962211E40(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_230D067A4FF003AE85426286160BED95
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_230D067A4FF003AE85426286160BED95(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_CFCDDD234EDAB7B50BD459A73538D054
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_CFCDDD234EDAB7B50BD459A73538D054(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_A8EF2F9D4FC1587633BC58B184AA4617
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_A8EF2F9D4FC1587633BC58B184AA4617(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_B6A199AD4B59A9D68C83E5B0AECEF8B4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_B6A199AD4B59A9D68C83E5B0AECEF8B4(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_69C978EC47EE20FEAFE4C8980D27E2CA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_69C978EC47EE20FEAFE4C8980D27E2CA(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_E6FE05824F4F03E62352939B0B38DDE6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_E6FE05824F4F03E62352939B0B38DDE6(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_A3127AE646434C015399458E7DD6C3D5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_A3127AE646434C015399458E7DD6C3D5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_C3DBCE66417F530B14B86CB6D6113CE2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_C3DBCE66417F530B14B86CB6D6113CE2(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_8679F4C543E3C316946988B88E05A752
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_8679F4C543E3C316946988B88E05A752(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_98A82FA24CAE79A793F1188340033EA4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_98A82FA24CAE79A793F1188340033EA4(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_735B9E65473526A031145AA8E4FB408A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_735B9E65473526A031145AA8E4FB408A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_DE49744F431546A435858EA97F937ED9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_DE49744F431546A435858EA97F937ED9(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_9308664040FADAC9E8026CB8119D6DFA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_9308664040FADAC9E8026CB8119D6DFA(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_35C71C804BB23606BF4A26A6B9DEE187
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_35C71C804BB23606BF4A26A6B9DEE187(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_EB29ABC649E83E4AF4FDB9A396710157
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_EB29ABC649E83E4AF4FDB9A396710157(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_DDF0038747725EF4F3149FB428A6A323
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_DDF0038747725EF4F3149FB428A6A323(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_3490DCB84F0C23ED3E17A8B8C7F38B3E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_3490DCB84F0C23ED3E17A8B8C7F38B3E(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_3AC67F27430284EEFF97A487914AE84B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_BlendListByBool_3AC67F27430284EEFF97A487914AE84B(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_1676E9DE46C29B2F8CD331A5FBE9FD46
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_1676E9DE46C29B2F8CD331A5FBE9FD46(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_5087B8C3494C685AF7C42FA658064033
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_5087B8C3494C685AF7C42FA658064033(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_F07AAF184C7DB48B7281069D4651F060
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_F07AAF184C7DB48B7281069D4651F060(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_42CB99F64481AE5E16DA538E47166857
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_42CB99F64481AE5E16DA538E47166857(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_7DA7BE86453314542AD787BA903AE42A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_7DA7BE86453314542AD787BA903AE42A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_9D7CEDFC481CD6F67B972EB2556B0D17
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_9D7CEDFC481CD6F67B972EB2556B0D17(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_6D0C002141DC8B0A3E4353BB9EAD2D9A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_6D0C002141DC8B0A3E4353BB9EAD2D9A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_21B4A2FA4DC0FD1F92820EA6F547133A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_21B4A2FA4DC0FD1F92820EA6F547133A(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_8414E4F54DC54886AF9844B1E301611E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_8414E4F54DC54886AF9844B1E301611E(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.BlueprintInitializeAnimation
	void BlueprintInitializeAnimation();                                                                                     // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_WalkStop
	void AnimNotify_Entered_WalkStop();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_C_to_S
	void AnimNotify_C_to_S();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.IdleTransition
	void IdleTransition(UAnimMontage* Anim, double PlayRate, double StartMontageAt);                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_S_to_C
	void AnimNotify_S_to_C();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_RunStartB
	void AnimNotify_Entered_RunStartB();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_RunStartF
	void AnimNotify_Entered_RunStartF();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_SprintStart
	void AnimNotify_Entered_SprintStart();                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_RunStopF
	void AnimNotify_Entered_RunStopF();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_RunStopB
	void AnimNotify_Entered_RunStopB();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_M_To_SS
	void AnimNotify_M_To_SS();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_CalculateLastDirection
	void AnimNotify_CalculateLastDirection();                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_FB_Moving
	void AnimNotify_FB_Moving();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_SprintStop
	void AnimNotify_Entered_SprintStop();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Entered_RunStopL/R
	void AnimNotify_Entered_RunStopL/R();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_71E0411F4D098CE6DF035AB22F18084F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BanditAnim_BP_AnimGraphNode_TransitionResult_71E0411F4D098CE6DF035AB22F18084F(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_R_to_A
	void AnimNotify_R_to_A();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_A_to_R
	void AnimNotify_A_to_R();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_StandAim(Entered)
	void AnimNotify_StandAim(Entered)();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_StandAim(Left)
	void AnimNotify_StandAim(Left)();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_CrouchAim(Entered)
	void AnimNotify_CrouchAim(Entered)();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_CrouchAim(Left)
	void AnimNotify_CrouchAim(Left)();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_MovingState(Entered)
	void AnimNotify_MovingState(Entered)();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Step_Sound
	void AnimNotify_Step_Sound();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Jump_End_Sound
	void AnimNotify_Jump_End_Sound();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Run_Sound
	void AnimNotify_Run_Sound();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Step_Soft_Sound
	void AnimNotify_Step_Soft_Sound();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Walk_Sound
	void AnimNotify_Walk_Sound();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Crouch_Step_Sound
	void AnimNotify_Crouch_Step_Sound();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Drop_Magazin_Pistol
	void AnimNotify_Drop_Magazin_Pistol();                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Equip_Pistol_Sound
	void AnimNotify_Equip_Pistol_Sound();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Equip_Rifle_Sound
	void AnimNotify_Equip_Rifle_Sound();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Jerked_Pistol
	void AnimNotify_Jerked_Pistol();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Jerket_Assault_Sound
	void AnimNotify_Jerket_Assault_Sound();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Load_Magazin_Pistol
	void AnimNotify_Load_Magazin_Pistol();                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Load_Shotgun_Sound
	void AnimNotify_Load_Shotgun_Sound();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Return_Equip_Assault
	void AnimNotify_Return_Equip_Assault();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Drop_Assault_Magazine_Sound
	void AnimNotify_Drop_Assault_Magazine_Sound();                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Load_Assault_Magazine_Sound
	void AnimNotify_Load_Assault_Magazine_Sound();                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_equip_melee
	void AnimNotify_equip_melee();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_ClothesLightMove
	void AnimNotify_ClothesLightMove();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_Eating_CanFood
	void AnimNotify_Eating_CanFood();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_eating_mre
	void AnimNotify_eating_mre();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_ChocolateEat
	void AnimNotify_ChocolateEat();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_BlueBerryEating
	void AnimNotify_BlueBerryEating();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_SodaDrinking
	void AnimNotify_SodaDrinking();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.AnimNotify_ClothesMovementRun
	void AnimNotify_ClothesMovementRun();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Animation/BanditAnim_BP.BanditAnim_BP_C.ExecuteUbergraph_BanditAnim_BP
	void ExecuteUbergraph_BanditAnim_BP(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/ParentAI.ParentAI_C
/// Size: 0x0118 (0x000630 - 0x000748)
class AParentAI_C : public ACharacter : ACharacter
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0630   (0x0008)  
	UGoreComponent*                                    GoreComponent;                                              // 0x0638   (0x0008)  
	USmoothSync*                                       SmoothSync;                                                 // 0x0640   (0x0008)  
	UWoundComponent_C*                                 WoundComponent;                                             // 0x0648   (0x0008)  
	UAIPerceptionStimuliSourceComponent*               AIPerceptionStimuliSource;                                  // 0x0650   (0x0008)  
	TEnumAsByte<ETimelineDirection>                    DestroyTimeline__Direction_DFB6075648181932ED4E64AC74E04BA6; // 0x0658   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0659   (0x0007)  MISSED
	UTimelineComponent*                                DestroyTimeline;                                            // 0x0660   (0x0008)  
	TEnumAsByte<ETimelineDirection>                    DeactivateTimeline__Direction_3AA518384EF92EFCA1C4C0BB72630232; // 0x0668   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0669   (0x0007)  MISSED
	UTimelineComponent*                                DeactivateTimeline;                                         // 0x0670   (0x0008)  
	float                                              Timeline_PhysBodyReact_NewTrack_0_2BB55C99413BE9C2E70DB795FDDA7ACA; // 0x0678   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_PhysBodyReact__Direction_2BB55C99413BE9C2E70DB795FDDA7ACA; // 0x067C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x067D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline_PhysBodyReact;                                     // 0x0680   (0x0008)  
	bool                                               IsActive__R;                                                // 0x0688   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0689   (0x0007)  MISSED
	UFMODEvent*                                        DeathSound;                                                 // 0x0690   (0x0008)  
	double                                             XP;                                                         // 0x0698   (0x0008)  
	FText                                              XPSender;                                                   // 0x06A0   (0x0018)  
	TArray<FName>                                      PhysicReactionBoneNames;                                    // 0x06B8   (0x0010)  
	bool                                               InHit;                                                      // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x06C9   (0x0007)  MISSED
	double                                             Health;                                                     // 0x06D0   (0x0008)  
	bool                                               Dead_R;                                                     // 0x06D8   (0x0001)  
	bool                                               RagdollDeath_;                                              // 0x06D9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x06DA   (0x0006)  MISSED
	double                                             DestroyActorDelay;                                          // 0x06E0   (0x0008)  
	double                                             MaxHealth;                                                  // 0x06E8   (0x0008)  
	double                                             RandomSpeed_R;                                              // 0x06F0   (0x0008)  
	FS_FloatMinMax                                     Damage_MinMax_;                                             // 0x06F8   (0x0008)  
	bool                                               DisableHearing_;                                            // 0x0700   (0x0001)  
	bool                                               DisableSight_;                                              // 0x0701   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x0702   (0x0006)  MISSED
	double                                             Yaw_R;                                                      // 0x0708   (0x0008)  
	double                                             Pitch_R;                                                    // 0x0710   (0x0008)  
	int32_t                                            RandomInteger_R;                                            // 0x0718   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x071C   (0x0004)  MISSED
	FTimerHandle                                       PitchYawTimer;                                              // 0x0720   (0x0008)  
	bool                                               IsRendered__R;                                              // 0x0728   (0x0001)  
	bool                                               RenderOptimize_;                                            // 0x0729   (0x0001)  
	bool                                               StartOptimize;                                              // 0x072A   (0x0001)  
	bool                                               DestroyAfterNotRender_;                                     // 0x072B   (0x0001)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x072C   (0x0004)  MISSED
	double                                             Yaw_Zombie__R;                                              // 0x0730   (0x0008)  
	UFMODAudioComponent*                               ZombieIdleSound;                                            // 0x0738   (0x0008)  
	UFMODAudioComponent*                               ZombieAggressiveSound;                                      // 0x0740   (0x0008)  


	/// Functions
	// Function /Game/AInew/ParentAI.ParentAI_C.GetXP
	void GetXP(double& XP);                                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.IsBandit?
	void IsBandit?(bool& IsBandit?);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.IsZombie?
	void IsZombie?(bool& IsZombie?, APawn*& Zombie);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.IsDead?
	void IsDead?(bool& IsDead?);                                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.ChangeNavFilterClass
	void ChangeNavFilterClass(UClass* DefaultNavigationFilterClass);                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetInstigatorLocation
	void SetInstigatorLocation(AController* InstigatedBy, double SphereRadius, TEnumAsByte<E_AIType> AIType);                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.InitWoundComponent
	void InitWoundComponent();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.Disable/EnableSight
	void Disable/EnableSight(bool bEnable);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.Disable/EnableHearing
	void Disable/EnableHearing(bool bEnable);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.RandomInteger(Server->Clients)
	void RandomInteger(Server->Clients)(int32_t Min, int32_t Max, int32_t& RandomInteger);                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.TurnOnSenses
	void TurnOnSenses();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.StopCurrentMontageWithBlend
	void StopCurrentMontageWithBlend(double InBlendOutTime);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.PlayersWeaponRandomWeight
	void PlayersWeaponRandomWeight(AActor* DamageCauser, bool& BoolWithWeight);                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/ParentAI.ParentAI_C.GetHitDistance
	void GetHitDistance(AController* InstigatedBy, double& HitDistance);                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/ParentAI.ParentAI_C.GetHitAngle
	void GetHitAngle(AController* InstigatedBy, double& HitAngle);                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/ParentAI.ParentAI_C.Timeline_PhysBodyReact__FinishedFunc
	void Timeline_PhysBodyReact__FinishedFunc();                                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/ParentAI.ParentAI_C.Timeline_PhysBodyReact__UpdateFunc
	void Timeline_PhysBodyReact__UpdateFunc();                                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/ParentAI.ParentAI_C.DeactivateTimeline__FinishedFunc
	void DeactivateTimeline__FinishedFunc();                                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/ParentAI.ParentAI_C.DeactivateTimeline__UpdateFunc
	void DeactivateTimeline__UpdateFunc();                                                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/ParentAI.ParentAI_C.DestroyTimeline__FinishedFunc
	void DestroyTimeline__FinishedFunc();                                                                                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/ParentAI.ParentAI_C.DestroyTimeline__UpdateFunc
	void DestroyTimeline__UpdateFunc();                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/ParentAI.ParentAI_C.OnNotifyEnd_A3C9FE0E4D8CDA515290469B112790D1
	void OnNotifyEnd_A3C9FE0E4D8CDA515290469B112790D1(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.OnNotifyBegin_A3C9FE0E4D8CDA515290469B112790D1
	void OnNotifyBegin_A3C9FE0E4D8CDA515290469B112790D1(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.OnInterrupted_A3C9FE0E4D8CDA515290469B112790D1
	void OnInterrupted_A3C9FE0E4D8CDA515290469B112790D1(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.OnBlendOut_A3C9FE0E4D8CDA515290469B112790D1
	void OnBlendOut_A3C9FE0E4D8CDA515290469B112790D1(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.OnCompleted_A3C9FE0E4D8CDA515290469B112790D1
	void OnCompleted_A3C9FE0E4D8CDA515290469B112790D1(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.AIInteract
	void AIInteract(ABP_Door_C* Door, UArrowComponent* Arrow);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.EndDoorAttack
	void EndDoorAttack();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.AvoidFire
	void AvoidFire();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.Death
	void Death(AController* InstigatedBy, double HitAngle, FVector HitLocation, FName BoneName);                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.PhysicBodyReaction
	void PhysicBodyReaction(FName BoneName, double HitAngle, FVector HitLocation);                                           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetMoveSpeed_SERV
	void SetMoveSpeed_SERV(double Speed);                                                                                    // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetMoveSpeed_MULTI
	void SetMoveSpeed_MULTI(double Speed);                                                                                   // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetRandomMoveSpeed_SERV
	void SetRandomMoveSpeed_SERV(double Speed);                                                                              // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetRandomMoveSpeed_MULTI
	void SetRandomMoveSpeed_MULTI(double Speed);                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetRotYaw_SERV
	void SetRotYaw_SERV(bool ?);                                                                                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SetOrToMov_SERV
	void SetOrToMov_SERV(bool ?);                                                                                            // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.PlayMontage_MULTI
	void PlayMontage_MULTI(USkeletalMeshComponent* Mesh, UAnimMontage* Montage, bool WithoutServer?);                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.PlaySound_MULTI
	void PlaySound_MULTI(UFMODEvent* FMODEvent, USceneComponent* AttachToComponent, bool Occlusion?);                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.SpawnEmitter_MULTI
	void SpawnEmitter_MULTI(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale);           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.StopCurrentMontage_MULTI
	void StopCurrentMontage_MULTI(double InBlendOutTime);                                                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.Timer_CalculatePitchYaw
	void Timer_CalculatePitchYaw();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.CalculateYaw/Pitch
	void CalculateYaw/Pitch();                                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.StartCalculatePitchYaw
	void StartCalculatePitchYaw(bool Stop?);                                                                                 // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.Activate(Render)_MULTI
	void Activate(Render)_MULTI(bool Activtae?);                                                                             // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.PlayDeathSound_MULTI
	void PlayDeathSound_MULTI(double Value);                                                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.PlayBodyFallSound_MULTI
	void PlayBodyFallSound_MULTI();                                                                                          // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/ParentAI.ParentAI_C.ExecuteUbergraph_ParentAI
	void ExecuteUbergraph_ParentAI(int32_t EntryPoint);                                                                      // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C
/// Size: 0x0561 (0x000748 - 0x000CA9)
class AParentZombieAI_C : public AParentAI_C : AParentAI_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0748   (0x0008)  
	UBP_TrailComponent_C*                              TrailPelvis;                                                // 0x0750   (0x0008)  
	UBP_TrailComponent_C*                              TrailRight;                                                 // 0x0758   (0x0008)  
	UBP_TrailComponent_C*                              TrailLeft;                                                  // 0x0760   (0x0008)  
	TArray<bool>                                       HitMontagesIsPlaying_;                                      // 0x0768   (0x0010)  
	UAnimMontage*                                      HeadshotFMontage;                                           // 0x0778   (0x0008)  
	bool                                               Stunned;                                                    // 0x0780   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0781   (0x0007)  MISSED
	FVector                                            MeshLocation;                                               // 0x0788   (0x0018)  
	FVector                                            CapsuleLocation;                                            // 0x07A0   (0x0018)  
	bool                                               IsFacingUp__R;                                              // 0x07B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x07B9   (0x0007)  MISSED
	UAnimMontage*                                      GetUpMontage;                                               // 0x07C0   (0x0008)  
	UAnimMontage*                                      DownMontage;                                                // 0x07C8   (0x0008)  
	UAnimMontage*                                      UpMontage;                                                  // 0x07D0   (0x0008)  
	UAnimMontage*                                      FastDownMontage;                                            // 0x07D8   (0x0008)  
	UAnimMontage*                                      FastUpMontage;                                              // 0x07E0   (0x0008)  
	int32_t                                            StunnedCount;                                               // 0x07E8   (0x0004)  
	int32_t                                            MaxStunnedCount;                                            // 0x07EC   (0x0004)  
	UFMODEvent*                                        VehicleImpactZombie;                                        // 0x07F0   (0x0008)  
	UFMODEvent*                                        VehicleZombieClimbing;                                      // 0x07F8   (0x0008)  
	ABP_Door_C*                                        door_R;                                                     // 0x0800   (0x0008)  
	UAnimMontage*                                      HeadshotBMontage;                                           // 0x0808   (0x0008)  
	UAnimMontage*                                      HeadshotLMontage;                                           // 0x0810   (0x0008)  
	UAnimMontage*                                      HeadshotRMontage;                                           // 0x0818   (0x0008)  
	UAnimMontage*                                      StunForwadMontage;                                          // 0x0820   (0x0008)  
	UAnimMontage*                                      StunBackwardMontage;                                        // 0x0828   (0x0008)  
	UAnimMontage*                                      StunRightMontage;                                           // 0x0830   (0x0008)  
	UAnimMontage*                                      StunLeftMontage;                                            // 0x0838   (0x0008)  
	TArray<UAnimMontage*>                              DefaultMontage_s;                                           // 0x0840   (0x0010)  
	TArray<UAnimMontage*>                              MeleeForwardMontage_ss;                                     // 0x0850   (0x0010)  
	UAnimMontage*                                      MeleeLeftMontage;                                           // 0x0860   (0x0008)  
	UAnimMontage*                                      MeleeRightMontage;                                          // 0x0868   (0x0008)  
	bool                                               FenceDesctuct_;                                             // 0x0870   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0871   (0x0003)  MISSED
	int32_t                                            VoiceSoundTrack;                                            // 0x0874   (0x0004)  
	bool                                               BlockFenceDetect;                                           // 0x0878   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0879   (0x0007)  MISSED
	TArray<UAnimMontage*>                              HitMontages;                                                // 0x0880   (0x0010)  
	bool                                               CanClimb_;                                                  // 0x0890   (0x0001)  
	bool                                               InClimb_;                                                   // 0x0891   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0892   (0x0006)  MISSED
	TArray<bool>                                       AttackMontagesIsPlaying_;                                   // 0x0898   (0x0010)  
	UAnimMontage*                                      DeathAnimMontage;                                           // 0x08A8   (0x0008)  
	UBehaviorTree*                                     BT;                                                         // 0x08B0   (0x0008)  
	FTimerHandle                                       BodyStiffnesTimer;                                          // 0x08B8   (0x0008)  
	FTimerHandle                                       CheckDoorTimer;                                             // 0x08C0   (0x0008)  
	bool                                               ClimbIn;                                                    // 0x08C8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x08C9   (0x0007)  MISSED
	FClimbParams                                       ClimbParams;                                                // 0x08D0   (0x00A8)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x0978   (0x0008)  MISSED
	FComponentAndTransform                             ClimbLedgeLS;                                               // 0x0980   (0x00C0)  
	FTransform                                         ClimbTarget;                                                // 0x0A40   (0x0060)  
	FTransform                                         ClimbActualStartOffset;                                     // 0x0AA0   (0x0060)  
	FTransform                                         ClimbAnimatedStartOffset;                                   // 0x0B00   (0x0060)  
	FTransform                                         ClimbStartTransform;                                        // 0x0B60   (0x0060)  
	UTimelineComponent*                                ClimbTimeline;                                              // 0x0BC0   (0x0008)  
	FRotator                                           TargetRotation;                                             // 0x0BC8   (0x0018)  
	int32_t                                            BreathTrack;                                                // 0x0BE0   (0x0004)  
	bool                                               InHouse;                                                    // 0x0BE4   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0BE5   (0x0003)  MISSED
	FRotator                                           DoorRot;                                                    // 0x0BE8   (0x0018)  
	FVector                                            DoorLoc;                                                    // 0x0C00   (0x0018)  
	TArray<UAnimMontage*>                              MeleeBackwardMontages;                                      // 0x0C18   (0x0010)  
	bool                                               IsSpline_;                                                  // 0x0C28   (0x0001)  
	bool                                               IsNavmeshWalking_;                                          // 0x0C29   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x0C2A   (0x0006)  MISSED
	UAnimMontage*                                      KnockedMontage;                                             // 0x0C30   (0x0008)  
	double                                             facingUpValue;                                              // 0x0C38   (0x0008)  
	bool                                               bool;                                                       // 0x0C40   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0C41   (0x0007)  MISSED
	FTimerHandle                                       ClimbTimer;                                                 // 0x0C48   (0x0008)  
	bool                                               NotSpawned;                                                 // 0x0C50   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0C51   (0x0007)  MISSED
	TMap<FName, int32_t>                               BonesToHide;                                                // 0x0C58   (0x0050)  
	TEnumAsByte<E_WalkType>                            WalkType;                                                   // 0x0CA8   (0x0001)  


	/// Functions
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.IsBandit?
	void IsBandit?(bool& IsBandit?);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.OnRep_WalkType
	void OnRep_WalkType();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.Hide Bone
	void Hide Bone(FName BoneName);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.IsZombie?
	void IsZombie?(bool& IsZombie?, APawn*& Zombie);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.KnockWithChanceFunc
	void KnockWithChanceFunc(TEnumAsByte<BPE_Weapon_Type> Selection, double HitAngle, FVector HitLocation, FName BoneName, int32_t RandomInteger); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.ChanceToKnock
	void ChanceToKnock(double HitAngle, FVector HitLocation, FName BoneName, double Weight, TEnumAsByte<BPE_Weapon_Type> Selection, int32_t RandomInteger); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.HeadStunFunc
	void HeadStunFunc(TEnumAsByte<BPE_Weapon_Type> Selection, double HitAngle, FName BoneName, int32_t RandomInteger);       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.ChanceToStun
	void ChanceToStun(double HitAngle, double Weight, FName BoneName, int32_t RandomInteger);                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.EndDoorAttack
	void EndDoorAttack();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.AIInteract
	void AIInteract(ABP_Door_C* Door, UArrowComponent* Arrow);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.ClimbUpdate_New
	void ClimbUpdate_New();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.ClimbStart_New
	void ClimbStart_New(double Height, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> Type, bool In, double Width, bool Move, FTransform ClimbStartTransform); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.ClimbCheck_New
	void ClimbCheck_New();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.GetClimbAsset
	void GetClimbAsset(TEnumAsByte<ClimbType> ClimbType, bool In);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.GetCapsuleBaseLocation
	void GetCapsuleBaseLocation(double ZOffset);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.CalcAccelDecel
	void CalcAccelDecel(bool Default?, double MaxAcceleration, double BrakingDecelerationWalking);                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.SetSmoothSyncSettings
	void SetSmoothSyncSettings(TEnumAsByte<E_SmoothSynsPrefab> SmoothSyncPrefab);                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.SetMesh
	void SetMesh();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.IsPlayingHitMontage?
	void IsPlayingHitMontage?();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.CalculateFacingDirection
	void CalculateFacingDirection();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.IsPlayingAttackMontage?
	void IsPlayingAttackMontage?(bool& IsPlaying?);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.HouseBoxEntered
	void HouseBoxEntered(AHouseBox_C* HouseBox);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.HouseBoxLeaved
	void HouseBoxLeaved(AHouseBox_C* HouseBox);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/ParentZombieAI.ParentZombieAI_C.ExecuteUbergraph_ParentZombieAI
	void ExecuteUbergraph_ParentZombieAI(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C
/// Size: 0x0838 (0x000748 - 0x000F80)
class ABanditParentAI_C : public AParentAI_C : AParentAI_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0748   (0x0008)  
	USkeletalMeshComponent*                            Helmet;                                                     // 0x0750   (0x0008)  
	UCapsuleComponent*                                 Fence_ClimbCollision;                                       // 0x0758   (0x0008)  
	USkeletalMeshComponent*                            Weapon;                                                     // 0x0760   (0x0008)  
	UWoundComponent_C*                                 WoundComponentHair;                                         // 0x0768   (0x0008)  
	UWoundComponent_C*                                 WoundComponentPants;                                        // 0x0770   (0x0008)  
	UWoundComponent_C*                                 WoundComponentBody;                                         // 0x0778   (0x0008)  
	USkeletalMeshComponent*                            Hair;                                                       // 0x0780   (0x0008)  
	USkeletalMeshComponent*                            Backpack;                                                   // 0x0788   (0x0008)  
	USkeletalMeshComponent*                            Pants;                                                      // 0x0790   (0x0008)  
	USkeletalMeshComponent*                            Body;                                                       // 0x0798   (0x0008)  
	float                                              ClimbTimeline_NewTrack_0_FE36250A4AE2B1C1EE5F388C73626A29;  // 0x07A0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ClimbTimeline__Direction_FE36250A4AE2B1C1EE5F388C73626A29;  // 0x07A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x07A5   (0x0003)  MISSED
	UTimelineComponent*                                ClimbTimeline;                                              // 0x07A8   (0x0008)  
	float                                              ToRagdollTimeline_NewTrack_0_F017CD4C4C6D3838FAE394B361DCB2AD; // 0x07B0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ToRagdollTimeline__Direction_F017CD4C4C6D3838FAE394B361DCB2AD; // 0x07B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x07B5   (0x0003)  MISSED
	UTimelineComponent*                                ToRagdollTimeline;                                          // 0x07B8   (0x0008)  
	TArray<bool>                                       HitMontagesIsPlaying_;                                      // 0x07C0   (0x0010)  
	UAnimMontage*                                      HeadshotMontage;                                            // 0x07D0   (0x0008)  
	TArray<UAnimMontage*>                              DefaultMontage_s;                                           // 0x07D8   (0x0010)  
	TArray<UAnimMontage*>                              HitMontages;                                                // 0x07E8   (0x0010)  
	UAnimMontage*                                      MeleeLeftMontage;                                           // 0x07F8   (0x0008)  
	UAnimMontage*                                      MeleeBackwardMontage;                                       // 0x0800   (0x0008)  
	UAnimMontage*                                      MeleeRightMontage;                                          // 0x0808   (0x0008)  
	TArray<UAnimMontage*>                              MeleeForwardMontages;                                       // 0x0810   (0x0010)  
	TEnumAsByte<E_Bandit_MovementMode>                 MovementMode_R;                                             // 0x0820   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0821   (0x0007)  MISSED
	ABP_Door_C*                                        door_R;                                                     // 0x0828   (0x0008)  
	UAnimMontage*                                      DeathAnimMontage;                                           // 0x0830   (0x0008)  
	bool                                               FenceDesctuct_;                                             // 0x0838   (0x0001)  
	bool                                               BlockFenceDetect;                                           // 0x0839   (0x0001)  
	TEnumAsByte<BPE_Weapon_Type>                       WeaponType;                                                 // 0x083A   (0x0001)  
	bool                                               Climbing_;                                                  // 0x083B   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x083C   (0x0004)  MISSED
	FVector                                            InitialTraceImpactPoint;                                    // 0x0840   (0x0018)  
	FVector                                            InitialTraceNormal;                                         // 0x0858   (0x0018)  
	bool                                               ClimbIn;                                                    // 0x0870   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0871   (0x0007)  MISSED
	FVector                                            DownTraceLocation;                                          // 0x0878   (0x0018)  
	FTransform                                         TargetTransform;                                            // 0x0890   (0x0060)  
	TEnumAsByte<ClimbType>                             ClimbType;                                                  // 0x08F0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x08F1   (0x0007)  MISSED
	double                                             MantleHeight;                                               // 0x08F8   (0x0008)  
	UPrimitiveComponent*                               HitComponent;                                               // 0x0900   (0x0008)  
	FClimbAsset                                        ClimbAsset;                                                 // 0x0908   (0x00F8)  
	double                                             ClimbHeight;                                                // 0x0A00   (0x0008)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x0A08   (0x0008)  MISSED
	FComponentAndTransform                             ClimbLedgeLS;                                               // 0x0A10   (0x00C0)  
	FTransform                                         ClimbActualStartOffset;                                     // 0x0AD0   (0x0060)  
	FTransform                                         ClimbTarget;                                                // 0x0B30   (0x0060)  
	FClimbParams                                       ClimbParams;                                                // 0x0B90   (0x00A8)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x0C38   (0x0008)  MISSED
	FTransform                                         ClimbAnimatedStartOffset;                                   // 0x0C40   (0x0060)  
	FTransform                                         ClimbStartTransform;                                        // 0x0CA0   (0x0060)  
	FTransform                                         OffsetToHandL;                                              // 0x0D00   (0x0060)  
	double                                             PositionAlpha;                                              // 0x0D60   (0x0008)  
	double                                             XYCorrectionAlpha;                                          // 0x0D68   (0x0008)  
	double                                             ZCorrectionAlpha;                                           // 0x0D70   (0x0008)  
	double                                             BlendIn;                                                    // 0x0D78   (0x0008)  
	FRotator                                           TargetRotation;                                             // 0x0D80   (0x0018)  
	unsigned char                                      UnknownData08_5[0x8];                                       // 0x0D98   (0x0008)  MISSED
	FTransform                                         LerpedTarget;                                               // 0x0DA0   (0x0060)  
	TWeakObjectPtr<USkeletalMesh*>                     BodyMesh_RN;                                                // 0x0E00   (0x0030)  
	TWeakObjectPtr<USkeletalMesh*>                     PantsMesh_RN;                                               // 0x0E30   (0x0030)  
	TWeakObjectPtr<USkeletalMesh*>                     BackpackMesh_RN;                                            // 0x0E60   (0x0030)  
	TWeakObjectPtr<USkeletalMesh*>                     HairMesh_RN;                                                // 0x0E90   (0x0030)  
	bool                                               TakedDamage;                                                // 0x0EC0   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0EC1   (0x0007)  MISSED
	FTimerHandle                                       BodyStiffnesTimer;                                          // 0x0EC8   (0x0008)  
	bool                                               NavFilChanged;                                              // 0x0ED0   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0ED1   (0x0007)  MISSED
	double                                             ObstacleWidth;                                              // 0x0ED8   (0x0008)  
	bool                                               IsReloading_R;                                              // 0x0EE0   (0x0001)  
	bool                                               Climbing__forShoot_;                                        // 0x0EE1   (0x0001)  
	bool                                               DontClimb_R;                                                // 0x0EE2   (0x0001)  
	unsigned char                                      UnknownData11_5[0x5];                                       // 0x0EE3   (0x0005)  MISSED
	USkeletalMesh*                                     HelmetMesh;                                                 // 0x0EE8   (0x0008)  
	bool                                               IsSpawned_;                                                 // 0x0EF0   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0EF1   (0x0007)  MISSED
	TArray<FName>                                      HairRowNames;                                               // 0x0EF8   (0x0010)  
	TArray<FName>                                      BodyRowNames;                                               // 0x0F08   (0x0010)  
	TArray<FName>                                      PantsRowNames;                                              // 0x0F18   (0x0010)  
	TArray<FName>                                      BackpackRowNames;                                           // 0x0F28   (0x0010)  
	FName                                              HairRowName;                                                // 0x0F38   (0x0008)  
	FName                                              BodyRowName;                                                // 0x0F40   (0x0008)  
	FName                                              PantsRowName;                                               // 0x0F48   (0x0008)  
	FName                                              BackPackRowName;                                            // 0x0F50   (0x0008)  
	TArray<USkeletalMeshComponent*>                    AllSkeletalMeshes;                                          // 0x0F58   (0x0010)  
	FVector                                            DeathLocation;                                              // 0x0F68   (0x0018)  


	/// Functions
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.TakeClothOff
	void TakeClothOff(FName Name);                                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.InitRandomMeshesNames
	void InitRandomMeshesNames();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.SpawnLootPoint
	void SpawnLootPoint();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnRep_HelmetMesh
	void OnRep_HelmetMesh();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbStart(new)
	void ClimbStart(new)(double ClimbHeight, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> ClimbType, bool In, double Width, FTransform ClimbStartTransform); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbUpdate(new)
	void ClimbUpdate(new)(double BlendIn, bool& Break);                                                                      // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbCheck(new)
	void ClimbCheck(new)(bool& CanClimb/Vault);                                                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnRep_HairMesh_RN
	void OnRep_HairMesh_RN();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnRep_BackpackMesh_RN
	void OnRep_BackpackMesh_RN();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnRep_PantsMesh_RN
	void OnRep_PantsMesh_RN();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnRep_BodyMesh_RN
	void OnRep_BodyMesh_RN();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.SetMesh
	void SetMesh();                                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbCheck
	void ClimbCheck(bool& CanClimb/Vault);                                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.IsBandit?
	void IsBandit?(bool& IsBandit?);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.CalcAccelDecel
	void CalcAccelDecel(bool Default?, double Accel, double Decel);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.IsPlayingHitMontage?
	void IsPlayingHitMontage?(bool& IsPlaying?);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ToRagdollTimeline__FinishedFunc
	void ToRagdollTimeline__FinishedFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ToRagdollTimeline__UpdateFunc
	void ToRagdollTimeline__UpdateFunc();                                                                                    // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbTimeline__FinishedFunc
	void ClimbTimeline__FinishedFunc();                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbTimeline__UpdateFunc
	void ClimbTimeline__UpdateFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_8A0A66BC49A01F7BE2AE70BE8005A202
	void OnNotifyEnd_8A0A66BC49A01F7BE2AE70BE8005A202(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_8A0A66BC49A01F7BE2AE70BE8005A202
	void OnNotifyBegin_8A0A66BC49A01F7BE2AE70BE8005A202(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_8A0A66BC49A01F7BE2AE70BE8005A202
	void OnInterrupted_8A0A66BC49A01F7BE2AE70BE8005A202(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_8A0A66BC49A01F7BE2AE70BE8005A202
	void OnBlendOut_8A0A66BC49A01F7BE2AE70BE8005A202(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_8A0A66BC49A01F7BE2AE70BE8005A202
	void OnCompleted_8A0A66BC49A01F7BE2AE70BE8005A202(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_820209FA444B29B4A01F32A551AC66C9
	void OnNotifyEnd_820209FA444B29B4A01F32A551AC66C9(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_820209FA444B29B4A01F32A551AC66C9
	void OnNotifyBegin_820209FA444B29B4A01F32A551AC66C9(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_820209FA444B29B4A01F32A551AC66C9
	void OnInterrupted_820209FA444B29B4A01F32A551AC66C9(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_820209FA444B29B4A01F32A551AC66C9
	void OnBlendOut_820209FA444B29B4A01F32A551AC66C9(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_820209FA444B29B4A01F32A551AC66C9
	void OnCompleted_820209FA444B29B4A01F32A551AC66C9(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_D720C85E46178DF2E7D374B61569783E
	void OnNotifyEnd_D720C85E46178DF2E7D374B61569783E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_D720C85E46178DF2E7D374B61569783E
	void OnNotifyBegin_D720C85E46178DF2E7D374B61569783E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_D720C85E46178DF2E7D374B61569783E
	void OnInterrupted_D720C85E46178DF2E7D374B61569783E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_D720C85E46178DF2E7D374B61569783E
	void OnBlendOut_D720C85E46178DF2E7D374B61569783E(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_D720C85E46178DF2E7D374B61569783E
	void OnCompleted_D720C85E46178DF2E7D374B61569783E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_6E43BD8641E9B2DCDC0E469CF46165D2
	void OnNotifyEnd_6E43BD8641E9B2DCDC0E469CF46165D2(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_6E43BD8641E9B2DCDC0E469CF46165D2
	void OnNotifyBegin_6E43BD8641E9B2DCDC0E469CF46165D2(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_6E43BD8641E9B2DCDC0E469CF46165D2
	void OnInterrupted_6E43BD8641E9B2DCDC0E469CF46165D2(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_6E43BD8641E9B2DCDC0E469CF46165D2
	void OnBlendOut_6E43BD8641E9B2DCDC0E469CF46165D2(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_6E43BD8641E9B2DCDC0E469CF46165D2
	void OnCompleted_6E43BD8641E9B2DCDC0E469CF46165D2(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_A6FD48404CC974EBA95EC9B525B77C66
	void OnNotifyEnd_A6FD48404CC974EBA95EC9B525B77C66(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_A6FD48404CC974EBA95EC9B525B77C66
	void OnNotifyBegin_A6FD48404CC974EBA95EC9B525B77C66(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_A6FD48404CC974EBA95EC9B525B77C66
	void OnInterrupted_A6FD48404CC974EBA95EC9B525B77C66(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_A6FD48404CC974EBA95EC9B525B77C66
	void OnBlendOut_A6FD48404CC974EBA95EC9B525B77C66(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_A6FD48404CC974EBA95EC9B525B77C66
	void OnCompleted_A6FD48404CC974EBA95EC9B525B77C66(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_02C308D94044E0C7094489B1C85EC366
	void OnNotifyEnd_02C308D94044E0C7094489B1C85EC366(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_02C308D94044E0C7094489B1C85EC366
	void OnNotifyBegin_02C308D94044E0C7094489B1C85EC366(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_02C308D94044E0C7094489B1C85EC366
	void OnInterrupted_02C308D94044E0C7094489B1C85EC366(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_02C308D94044E0C7094489B1C85EC366
	void OnBlendOut_02C308D94044E0C7094489B1C85EC366(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_02C308D94044E0C7094489B1C85EC366
	void OnCompleted_02C308D94044E0C7094489B1C85EC366(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_E4169A504B86167E59F052BA833127B8
	void OnNotifyEnd_E4169A504B86167E59F052BA833127B8(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_E4169A504B86167E59F052BA833127B8
	void OnNotifyBegin_E4169A504B86167E59F052BA833127B8(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_E4169A504B86167E59F052BA833127B8
	void OnInterrupted_E4169A504B86167E59F052BA833127B8(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_E4169A504B86167E59F052BA833127B8
	void OnBlendOut_E4169A504B86167E59F052BA833127B8(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_E4169A504B86167E59F052BA833127B8
	void OnCompleted_E4169A504B86167E59F052BA833127B8(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_AFE0936241AFFA0939F127B0F04F3D25
	void OnNotifyEnd_AFE0936241AFFA0939F127B0F04F3D25(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_AFE0936241AFFA0939F127B0F04F3D25
	void OnNotifyBegin_AFE0936241AFFA0939F127B0F04F3D25(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_AFE0936241AFFA0939F127B0F04F3D25
	void OnInterrupted_AFE0936241AFFA0939F127B0F04F3D25(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_AFE0936241AFFA0939F127B0F04F3D25
	void OnBlendOut_AFE0936241AFFA0939F127B0F04F3D25(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_AFE0936241AFFA0939F127B0F04F3D25
	void OnCompleted_AFE0936241AFFA0939F127B0F04F3D25(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_38E7BEEC429D74F5870BEA87AD8EA75F
	void OnNotifyEnd_38E7BEEC429D74F5870BEA87AD8EA75F(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_38E7BEEC429D74F5870BEA87AD8EA75F
	void OnNotifyBegin_38E7BEEC429D74F5870BEA87AD8EA75F(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_38E7BEEC429D74F5870BEA87AD8EA75F
	void OnInterrupted_38E7BEEC429D74F5870BEA87AD8EA75F(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_38E7BEEC429D74F5870BEA87AD8EA75F
	void OnBlendOut_38E7BEEC429D74F5870BEA87AD8EA75F(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_38E7BEEC429D74F5870BEA87AD8EA75F
	void OnCompleted_38E7BEEC429D74F5870BEA87AD8EA75F(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyEnd_4F8291294381750E70EF2A9FF5FEDE5B
	void OnNotifyEnd_4F8291294381750E70EF2A9FF5FEDE5B(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnNotifyBegin_4F8291294381750E70EF2A9FF5FEDE5B
	void OnNotifyBegin_4F8291294381750E70EF2A9FF5FEDE5B(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnInterrupted_4F8291294381750E70EF2A9FF5FEDE5B
	void OnInterrupted_4F8291294381750E70EF2A9FF5FEDE5B(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnBlendOut_4F8291294381750E70EF2A9FF5FEDE5B
	void OnBlendOut_4F8291294381750E70EF2A9FF5FEDE5B(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.OnCompleted_4F8291294381750E70EF2A9FF5FEDE5B
	void OnCompleted_4F8291294381750E70EF2A9FF5FEDE5B(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.HitMontageInterrupt
	void HitMontageInterrupt();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.HeadshotMontages
	void HeadshotMontages(double HitAngle, int32_t RandomInteger);                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.DefaultMontages
	void DefaultMontages(double HitAngle, int32_t RandomInteger);                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.BanditDeath
	void BanditDeath(AController* InstigatedBy, double HitAngle, FVector HitLocation, FName BoneName);                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.DeathBody_Multi
	void DeathBody_Multi(double HitAngle, FVector HitLocation, FName BoneName);                                              // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ReceiveRadialDamage
	void ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.MeleeMontages
	void MeleeMontages(double HitAngle, int32_t RandomInteger);                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.InitWoundComponent
	void InitWoundComponent();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.HitMontage_MULT
	void HitMontage_MULT(double HitAngle, double HitDistance, FName BoneName, FVector HitLocation, AActor* DamageCauser, bool RandomBoolWithWeight, int32_t RandomInteger0-4, int32_t RandomInteger0-1); // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.SetDeathAnim_MULTI
	void SetDeathAnim_MULTI();                                                                                               // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.BndEvt__Fence/ClimbCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Fence/ClimbCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbStart_SERV
	void ClimbStart_SERV(double ClimbHeight, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> ClimbType, bool In, double Width, FTransform ClimbStartTransform); // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ClimbStart_MULTI
	void ClimbStart_MULTI(double ClimbHeight, FComponentAndTransform ClimbLedgeWS, TEnumAsByte<ClimbType> ClimbType, bool In, double Width, FTransform ClimbStartTransform); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.Timer_BodyStiffness
	void Timer_BodyStiffness();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.RegenerateHealth_MULTI
	void RegenerateHealth_MULTI();                                                                                           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.DeathTR
	void DeathTR();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.fakeShoot
	void fakeShoot();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.fire
	void fire();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/BanditParentAI.BanditParentAI_C.ExecuteUbergraph_BanditParentAI
	void ExecuteUbergraph_BanditParentAI(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C
/// Size: 0x0140 (0x000CA9 - 0x000DE9)
class AFastZombieAI_C : public AParentZombieAI_C : AParentZombieAI_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0CA9   (0x0007)  MISSED
	USkeletalMeshComponent*                            Hair;                                                       // 0x0CB0   (0x0008)  
	USkeletalMeshComponent*                            Head;                                                       // 0x0CB8   (0x0008)  
	USkeletalMeshComponent*                            zombie_torso_shooting;                                      // 0x0CC0   (0x0008)  
	UArrowComponent*                                   Arrow1;                                                     // 0x0CC8   (0x0008)  
	UChildActorComponent*                              HeadPercept;                                                // 0x0CD0   (0x0008)  
	FS_FloatMinMax                                     RebirthDelay;                                               // 0x0CD8   (0x0008)  
	bool                                               Uvidel__R;                                                  // 0x0CE0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0CE1   (0x0007)  MISSED
	UAnimMontage*                                      M_StandAttack_Left;                                         // 0x0CE8   (0x0008)  
	UAnimMontage*                                      M_StandAttack_Right;                                        // 0x0CF0   (0x0008)  
	UAnimMontage*                                      M_MoveAttack_Left;                                          // 0x0CF8   (0x0008)  
	UAnimMontage*                                      M_MoveAttack_Right;                                         // 0x0D00   (0x0008)  
	UAnimMontage*                                      M_JerkAttack;                                               // 0x0D08   (0x0008)  
	TEnumAsByte<E_AnimState>                           AnimState_RN;                                               // 0x0D10   (0x0001)  
	TEnumAsByte<E_ZombiePosition>                      ZombiePosition_R;                                           // 0x0D11   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0D12   (0x0006)  MISSED
	UAnimSequence*                                     ReadyIdle_RN;                                               // 0x0D18   (0x0008)  
	bool                                               OnCar__R;                                                   // 0x0D20   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0D21   (0x0007)  MISSED
	ABP_RB_Vehicle_C*                                  Car_R;                                                      // 0x0D28   (0x0008)  
	TArray<double>                                     DistanceToCarSocket;                                        // 0x0D30   (0x0010)  
	TArray<FName>                                      CarSockets;                                                 // 0x0D40   (0x0010)  
	FName                                              SocketName;                                                 // 0x0D50   (0x0008)  
	bool                                               WithoutScream__R;                                           // 0x0D58   (0x0001)  
	bool                                               Running__R;                                                 // 0x0D59   (0x0001)  
	bool                                               LocFocus_;                                                  // 0x0D5A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x0D5B   (0x0005)  MISSED
	UBlendSpace*                                       RunBS2_R;                                                   // 0x0D60   (0x0008)  
	bool                                               StandartMoveTo_;                                            // 0x0D68   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0D69   (0x0007)  MISSED
	UNavigationPath*                                   Path;                                                       // 0x0D70   (0x0008)  
	TEnumAsByte<E_RunType>                             RunType_RN;                                                 // 0x0D78   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0D79   (0x0007)  MISSED
	double                                             ToStandDelay;                                               // 0x0D80   (0x0008)  
	ANavModifierVolume*                                NavMod;                                                     // 0x0D88   (0x0008)  
	double                                             PrevSpeed;                                                  // 0x0D90   (0x0008)  
	bool                                               isArmless_;                                                 // 0x0D98   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0D99   (0x0007)  MISSED
	ATargetPoint*                                      TargetPoint;                                                // 0x0DA0   (0x0008)  
	double                                             Distance;                                                   // 0x0DA8   (0x0008)  
	bool                                               screamed;                                                   // 0x0DB0   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0DB1   (0x0007)  MISSED
	TArray<FDefaultItemInfo>                           ItemsArray;                                                 // 0x0DB8   (0x0010)  
	APawnLootZombie_C*                                 LootPoint;                                                  // 0x0DC8   (0x0008)  
	TArray<FString>                                    LootName;                                                   // 0x0DD0   (0x0010)  
	bool                                               IsInCar;                                                    // 0x0DE0   (0x0001)  
	bool                                               isFromCar;                                                  // 0x0DE1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x0DE2   (0x0002)  MISSED
	int32_t                                            AudioTrack;                                                 // 0x0DE4   (0x0004)  
	bool                                               IsCutscene;                                                 // 0x0DE8   (0x0001)  


	/// Functions
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.OnRep_Lootpoint
	void OnRep_Lootpoint();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.SpawnLootPoint
	void SpawnLootPoint();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.OnRep_ReadyIdle_RN
	void OnRep_ReadyIdle_RN();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.OnRep_AnimState_RN
	void OnRep_AnimState_RN();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.OnRep_RunType_RN
	void OnRep_RunType_RN();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.GetMoveDirection
	void GetMoveDirection();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Zombie/MainZombie/FastZombieAI.FastZombieAI_C.IsPlayingAttackMontage?
	void IsPlayingAttackMontage?(bool& IsPlaying?);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/AInew/Bandit/mainBandit/BanditController.BanditController_C
/// Size: 0x0008 (0x0006D8 - 0x0006E0)
class ABanditController_C : public AParentAIDetourController_C : AParentAIDetourController_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06D8   (0x0008)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/BanditController.BanditController_C.ExecuteUbergraph_BanditController
	void ExecuteUbergraph_BanditController(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C
/// Size: 0x0690 (0x000F80 - 0x001610)
class AmainBanditAI_C : public ABanditParentAI_C : ABanditParentAI_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0F80   (0x0008)  
	UWidgetComponent*                                  Widget;                                                     // 0x0F88   (0x0008)  
	UNavigationInvokerComponent*                       NavigationInvoker;                                          // 0x0F90   (0x0008)  
	UBP_TrailComponent_C*                              RightTrailHand;                                             // 0x0F98   (0x0008)  
	UBP_TrailComponent_C*                              LeftTrailHand;                                              // 0x0FA0   (0x0008)  
	UBP_TrailComponent_C*                              PelvisTrail;                                                // 0x0FA8   (0x0008)  
	UBP_TrailComponent_C*                              RightTrail;                                                 // 0x0FB0   (0x0008)  
	UBP_TrailComponent_C*                              LeftTrail;                                                  // 0x0FB8   (0x0008)  
	FVector                                            ShootLoc_R;                                                 // 0x0FC0   (0x0018)  
	int32_t                                            Bullets;                                                    // 0x0FD8   (0x0004)  
	int32_t                                            MaxBullets;                                                 // 0x0FDC   (0x0004)  
	int32_t                                            ShootCount;                                                 // 0x0FE0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0FE4   (0x0004)  MISSED
	double                                             Damage;                                                     // 0x0FE8   (0x0008)  
	TEnumAsByte<E_AnimState>                           AnimState;                                                  // 0x0FF0   (0x0001)  
	bool                                               DontShoot;                                                  // 0x0FF1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0FF2   (0x0006)  MISSED
	FVector                                            ShootEnd_R;                                                 // 0x0FF8   (0x0018)  
	UAnimMontage*                                      LastTakeDamageMontage_R;                                    // 0x1010   (0x0008)  
	double                                             Stamina_R;                                                  // 0x1018   (0x0008)  
	double                                             MaxStamina_R;                                               // 0x1020   (0x0008)  
	bool                                               StandartMoveTo_;                                            // 0x1028   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1029   (0x0003)  MISSED
	int32_t                                            BulletCounter;                                              // 0x102C   (0x0004)  
	double                                             PitchSpread;                                                // 0x1030   (0x0008)  
	double                                             YawSpread;                                                  // 0x1038   (0x0008)  
	FVector                                            ShootEndLoc;                                                // 0x1040   (0x0018)  
	int32_t                                            BanditShoot;                                                // 0x1058   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x105C   (0x0004)  MISSED
	FBPS_WeaponData                                    WeaponData;                                                 // 0x1060   (0x04C0)  
	TArray<FName>                                      WeaponName;                                                 // 0x1520   (0x0010)  
	double                                             DelayBetweenShots;                                          // 0x1530   (0x0008)  
	int32_t                                            MinShoots;                                                  // 0x1538   (0x0004)  
	int32_t                                            MaxShoots;                                                  // 0x153C   (0x0004)  
	double                                             DelayAfterShots;                                            // 0x1540   (0x0008)  
	AActor*                                            HittedActor;                                                // 0x1548   (0x0008)  
	double                                             RandomFloatR;                                               // 0x1550   (0x0008)  
	FName                                              WeaponName_Set_;                                            // 0x1558   (0x0008)  
	UAnimMontage*                                      CharReloadAnim;                                             // 0x1560   (0x0008)  
	UAnimMontage*                                      WeaponReloadAnim;                                           // 0x1568   (0x0008)  
	bool                                               FireEnd_;                                                   // 0x1570   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x1571   (0x0007)  MISSED
	AZombieTriggerSpawner_C*                           TriggerSpawner;                                             // 0x1578   (0x0008)  
	double                                             WeightForHit;                                               // 0x1580   (0x0008)  
	double                                             DistanceToShootLocation;                                    // 0x1588   (0x0008)  
	FVector                                            ParticleSize;                                               // 0x1590   (0x0018)  
	bool                                               ShootActor_;                                                // 0x15A8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x15A9   (0x0003)  MISSED
	FName                                              WeaponToSet;                                                // 0x15AC   (0x0008)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x15B4   (0x0004)  MISSED
	ATargetPoint*                                      TargetPoint;                                                // 0x15B8   (0x0008)  
	FText                                              NickToSet;                                                  // 0x15C0   (0x0018)  
	ASurvivalPlayer_C*                                 PlayerRef;                                                  // 0x15D8   (0x0008)  
	FSlateColor                                        Color;                                                      // 0x15E0   (0x0014)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x15F4   (0x0004)  MISSED
	APawnLoot_C*                                       LootPoint;                                                  // 0x15F8   (0x0008)  
	TArray<FString>                                    LootName;                                                   // 0x1600   (0x0010)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnRep_Lootpoint
	void OnRep_Lootpoint();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.SpawnLootPoint
	void SpawnLootPoint();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PickDamageAnimByBone
	void PickDamageAnimByBone(FName BoneName, UAnimMontage*& DamageAnim);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.GetDecalMaterial
	void GetDecalMaterial(TEnumAsByte<EPhysicalSurface> SurfaceType, UMaterialInstance*& DynMaterial);                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PlayHitParticle
	void PlayHitParticle(FHitResult HitResult);                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.WPGetLefHandEffectorTransform
	void WPGetLefHandEffectorTransform(FVector& TransformLocation, FRotator& TransformRotation, FVector& TransformScale, bool& HasEffector); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.SetWeapon
	void SetWeapon();                                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnRep_WeaponData
	void OnRep_WeaponData();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ApplyPointDamage
	void ApplyPointDamage(AActor* DamagedActor, FHitResult& HitInfo, UObject* ZombieObject, double Damage);                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.WeaponTrace
	bool WeaponTrace(double SpreadPitchMin, double SpreadPitchMax, double SpreadYawMin, double SpreadYawMax, AActor*& HitActor, FHitResult& OutputHit); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.Debug
	void Debug();                                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnNotifyEnd_06798E9C421B2FF496BC24AA7C8B7A0C
	void OnNotifyEnd_06798E9C421B2FF496BC24AA7C8B7A0C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnNotifyBegin_06798E9C421B2FF496BC24AA7C8B7A0C
	void OnNotifyBegin_06798E9C421B2FF496BC24AA7C8B7A0C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnInterrupted_06798E9C421B2FF496BC24AA7C8B7A0C
	void OnInterrupted_06798E9C421B2FF496BC24AA7C8B7A0C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnBlendOut_06798E9C421B2FF496BC24AA7C8B7A0C
	void OnBlendOut_06798E9C421B2FF496BC24AA7C8B7A0C(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnCompleted_06798E9C421B2FF496BC24AA7C8B7A0C
	void OnCompleted_06798E9C421B2FF496BC24AA7C8B7A0C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnNotifyEnd_3678A9F449B5807D7A90BE904F8A4C83
	void OnNotifyEnd_3678A9F449B5807D7A90BE904F8A4C83(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnNotifyBegin_3678A9F449B5807D7A90BE904F8A4C83
	void OnNotifyBegin_3678A9F449B5807D7A90BE904F8A4C83(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnInterrupted_3678A9F449B5807D7A90BE904F8A4C83
	void OnInterrupted_3678A9F449B5807D7A90BE904F8A4C83(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnBlendOut_3678A9F449B5807D7A90BE904F8A4C83
	void OnBlendOut_3678A9F449B5807D7A90BE904F8A4C83(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnCompleted_3678A9F449B5807D7A90BE904F8A4C83
	void OnCompleted_3678A9F449B5807D7A90BE904F8A4C83(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnNotifyEnd_ED1B2C8F46C7CDA788649E9DF5587AE9
	void OnNotifyEnd_ED1B2C8F46C7CDA788649E9DF5587AE9(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnNotifyBegin_ED1B2C8F46C7CDA788649E9DF5587AE9
	void OnNotifyBegin_ED1B2C8F46C7CDA788649E9DF5587AE9(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnInterrupted_ED1B2C8F46C7CDA788649E9DF5587AE9
	void OnInterrupted_ED1B2C8F46C7CDA788649E9DF5587AE9(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnBlendOut_ED1B2C8F46C7CDA788649E9DF5587AE9
	void OnBlendOut_ED1B2C8F46C7CDA788649E9DF5587AE9(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnCompleted_ED1B2C8F46C7CDA788649E9DF5587AE9
	void OnCompleted_ED1B2C8F46C7CDA788649E9DF5587AE9(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OnLoaded_ECEF658C499C85FBFD3F9FA519EC773D
	void OnLoaded_ECEF658C499C85FBFD3F9FA519EC773D(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.Bandit_Shoot(SERV)
	void Bandit_Shoot(SERV)(bool Target?, AActor* Actor, FVector Location);                                                  // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ReceivePointDamage
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.SpawnTrail
	void SpawnTrail(FVector& Target);                                                                                        // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ReloadMontage_MULTI
	void ReloadMontage_MULTI();                                                                                              // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.Reload
	void Reload();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.Trace
	void Trace(double SpreadPitchMin, double SpreadPitchMax, double SpreadYawMin, double SpreadYawMax);                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.StopMontage_MULTI
	void StopMontage_MULTI(USkeletalMeshComponent* Mesh, double InBlendOutTime, UAnimMontage* Montage);                      // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.OpenGate(Shoot)
	void OpenGate(Shoot)();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.DelayDecalSpawn
	void DelayDecalSpawn(FVector Location, FVector Forward, UMaterialInterface* DecalMaterial, TArray<AActor*>& ActorsToIgnore); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PlayHitParticle_MULTI
	void PlayHitParticle_MULTI(FHitResult HitResult);                                                                        // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PlayPainSound_MULTI
	void PlayPainSound_MULTI();                                                                                              // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.GetDamageTR
	void GetDamageTR();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PlayBloodParticleH
	void PlayBloodParticleH();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PlayBloodParticle
	void PlayBloodParticle();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.PlayBloodParticle80
	void PlayBloodParticle80();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ThrowGrenade
	void ThrowGrenade();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ShowNickWidget
	void ShowNickWidget(bool Show);                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.find
	void find();                                                                                                             // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/mainBanditAI.mainBanditAI_C.ExecuteUbergraph_mainBanditAI
	void ExecuteUbergraph_mainBanditAI(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C
/// Size: 0x000D (0x001610 - 0x00161D)
class ABandit_Mannequin_C : public AmainBanditAI_C : AmainBanditAI_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1610   (0x0008)  
	int32_t                                            Count;                                                      // 0x1618   (0x0004)  
	bool                                               Crawling;                                                   // 0x161C   (0x0001)  


	/// Functions
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnNotifyEnd_9A19B6754C459B5BFCE125BE80B6DBF1
	void OnNotifyEnd_9A19B6754C459B5BFCE125BE80B6DBF1(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnNotifyBegin_9A19B6754C459B5BFCE125BE80B6DBF1
	void OnNotifyBegin_9A19B6754C459B5BFCE125BE80B6DBF1(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnInterrupted_9A19B6754C459B5BFCE125BE80B6DBF1
	void OnInterrupted_9A19B6754C459B5BFCE125BE80B6DBF1(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnBlendOut_9A19B6754C459B5BFCE125BE80B6DBF1
	void OnBlendOut_9A19B6754C459B5BFCE125BE80B6DBF1(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnCompleted_9A19B6754C459B5BFCE125BE80B6DBF1
	void OnCompleted_9A19B6754C459B5BFCE125BE80B6DBF1(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.ReceivePointDamage
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.ExecuteMannequin
	void ExecuteMannequin(ASurvivalPlayer_C* Killer);                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/Bandit/mainBandit/Bandit_Mannequin.Bandit_Mannequin_C.ExecuteUbergraph_Bandit_Mannequin
	void ExecuteUbergraph_Bandit_Mannequin(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Animals/NavArea_Doors.NavArea_Doors_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Doors_C : public UNavArea : UNavArea
{ 
public:
};

/// Class /Game/AInew/CutsceneCar.CutsceneCar_C
/// Size: 0x0324 (0x000318 - 0x00063C)
class ACutsceneCar_C : public APawn : APawn
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	USpotLightComponent*                               LightL;                                                     // 0x0320   (0x0008)  
	USpotLightComponent*                               LightR;                                                     // 0x0328   (0x0008)  
	UParticleSystemComponent*                          Water_R_B;                                                  // 0x0330   (0x0008)  
	UParticleSystemComponent*                          Water_L_B;                                                  // 0x0338   (0x0008)  
	UParticleSystemComponent*                          Water_R_F;                                                  // 0x0340   (0x0008)  
	UParticleSystemComponent*                          Water_L_F;                                                  // 0x0348   (0x0008)  
	UBoxComponent*                                     InteractCollider;                                           // 0x0350   (0x0008)  
	UParticleSystemComponent*                          Dirt_R_B;                                                   // 0x0358   (0x0008)  
	UParticleSystemComponent*                          Dirt_L_B;                                                   // 0x0360   (0x0008)  
	UParticleSystemComponent*                          Dirt_R_F;                                                   // 0x0368   (0x0008)  
	UParticleSystemComponent*                          Dirt_L_F;                                                   // 0x0370   (0x0008)  
	UParticleSystemComponent*                          Road_R_B;                                                   // 0x0378   (0x0008)  
	UParticleSystemComponent*                          Road_L_B;                                                   // 0x0380   (0x0008)  
	UParticleSystemComponent*                          Road_R_F;                                                   // 0x0388   (0x0008)  
	UParticleSystemComponent*                          Road_L_F;                                                   // 0x0390   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_B_2;                                    // 0x0398   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_F_4;                                    // 0x03A0   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_F_4;                                    // 0x03A8   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_B_4;                                    // 0x03B0   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_B_4;                                    // 0x03B8   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_F_3;                                    // 0x03C0   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_F_3;                                    // 0x03C8   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_B_3;                                    // 0x03D0   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_B_3;                                    // 0x03D8   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_F_2;                                    // 0x03E0   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_F_2;                                    // 0x03E8   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_B_2;                                    // 0x03F0   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_F_1;                                    // 0x03F8   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_F_1;                                    // 0x0400   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_L_B_1;                                    // 0x0408   (0x0008)  
	UBP_TrailComponent_C*                              BP_TrailComponent_R_B_1;                                    // 0x0410   (0x0008)  
	UStaticMeshComponent*                              Plane2;                                                     // 0x0418   (0x0008)  
	UStaticMeshComponent*                              Plane1;                                                     // 0x0420   (0x0008)  
	UStaticMeshComponent*                              Plane4;                                                     // 0x0428   (0x0008)  
	UStaticMeshComponent*                              Plane3;                                                     // 0x0430   (0x0008)  
	UStaticMeshComponent*                              Plane;                                                      // 0x0438   (0x0008)  
	USceneComponent*                                   Scene4;                                                     // 0x0440   (0x0008)  
	USceneComponent*                                   Scene3;                                                     // 0x0448   (0x0008)  
	USceneComponent*                                   Scene2;                                                     // 0x0450   (0x0008)  
	UBoxComponent*                                     HitCollision;                                               // 0x0458   (0x0008)  
	UBoxComponent*                                     PawnCollision;                                              // 0x0460   (0x0008)  
	USkeletalMeshComponent*                            CarMesh;                                                    // 0x0468   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0470   (0x0008)  
	int32_t                                            Index;                                                      // 0x0478   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	double                                             WheelsPitch;                                                // 0x0480   (0x0008)  
	double                                             CalculatedPitch;                                            // 0x0488   (0x0008)  
	double                                             CalculatedVelocity;                                         // 0x0490   (0x0008)  
	double                                             MudPitch;                                                   // 0x0498   (0x0008)  
	double                                             CurrentVelocity;                                            // 0x04A0   (0x0008)  
	double                                             DirtVelocity;                                               // 0x04A8   (0x0008)  
	double                                             D_SplashSpawn;                                              // 0x04B0   (0x0008)  
	double                                             D_SplashSize;                                               // 0x04B8   (0x0008)  
	double                                             D_SplashVelocity;                                           // 0x04C0   (0x0008)  
	double                                             D_BitsSpawn;                                                // 0x04C8   (0x0008)  
	double                                             D_BitsSize;                                                 // 0x04D0   (0x0008)  
	double                                             D_BitsVelocity;                                             // 0x04D8   (0x0008)  
	double                                             D_MudSpawn;                                                 // 0x04E0   (0x0008)  
	double                                             D_CloudsLocation;                                           // 0x04E8   (0x0008)  
	double                                             D_CloudsSpawn;                                              // 0x04F0   (0x0008)  
	double                                             D_GritDirtSize;                                             // 0x04F8   (0x0008)  
	double                                             D_GritDirtVelocity;                                         // 0x0500   (0x0008)  
	double                                             D_GritSnowSpawn;                                            // 0x0508   (0x0008)  
	double                                             D_GritSnowVelocity;                                         // 0x0510   (0x0008)  
	double                                             D_SnowSpraySize;                                            // 0x0518   (0x0008)  
	double                                             D_SnowSpraySpawn;                                           // 0x0520   (0x0008)  
	double                                             D_SnowSprayVelocity;                                        // 0x0528   (0x0008)  
	int32_t                                            WheelIndex;                                                 // 0x0530   (0x0004)  
	bool                                               UseDirt;                                                    // 0x0534   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0535   (0x0003)  MISSED
	TArray<UParticleSystemComponent*>                  ParticleSystems;                                            // 0x0538   (0x0010)  
	TArray<UMaterialInstanceDynamic*>                  TireSnowMats;                                               // 0x0548   (0x0010)  
	TArray<double>                                     DirtAmount;                                                 // 0x0558   (0x0010)  
	FLinearColor                                       TireSnowColor;                                              // 0x0568   (0x0010)  
	FLinearColor                                       TireDirtColor;                                              // 0x0578   (0x0010)  
	bool                                               UseDirt_L_F;                                                // 0x0588   (0x0001)  
	bool                                               UseDirt_R_F;                                                // 0x0589   (0x0001)  
	bool                                               UseDirt_L_B;                                                // 0x058A   (0x0001)  
	bool                                               UseDirt_R_B;                                                // 0x058B   (0x0001)  
	bool                                               SettedDirt_L_F;                                             // 0x058C   (0x0001)  
	bool                                               SettedDirt_R_F;                                             // 0x058D   (0x0001)  
	bool                                               SettedDirt_L_B;                                             // 0x058E   (0x0001)  
	bool                                               SettedDirt_R_B;                                             // 0x058F   (0x0001)  
	bool                                               SettedSnow_L_F;                                             // 0x0590   (0x0001)  
	bool                                               SettedSnow_R_F;                                             // 0x0591   (0x0001)  
	bool                                               SettedSnow_L_B;                                             // 0x0592   (0x0001)  
	bool                                               SettedSnow_R_B;                                             // 0x0593   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	double                                             RoadPitch;                                                  // 0x0598   (0x0008)  
	double                                             RoadVelocity;                                               // 0x05A0   (0x0008)  
	double                                             R_GritDirtVelocity;                                         // 0x05A8   (0x0008)  
	double                                             R_SnowSprayVelocity;                                        // 0x05B0   (0x0008)  
	double                                             R_CloudsLocation;                                           // 0x05B8   (0x0008)  
	double                                             R_CloudsSpawn;                                              // 0x05C0   (0x0008)  
	double                                             R_GritDirtSize;                                             // 0x05C8   (0x0008)  
	double                                             R_GritSnowSpawn;                                            // 0x05D0   (0x0008)  
	double                                             R_SnowSpraySize;                                            // 0x05D8   (0x0008)  
	ASurvivalPlayer_C*                                 PlayerRef;                                                  // 0x05E0   (0x0008)  
	ALevelSequenceActor*                               Sequence;                                                   // 0x05E8   (0x0008)  
	TArray<FName>                                      SeatAnimSockets;                                            // 0x05F0   (0x0010)  
	double                                             SequenceDelay;                                              // 0x0600   (0x0008)  
	ACutscenePersAnim_C*                               Passanger;                                                  // 0x0608   (0x0008)  
	ALevelSequenceActor*                               PassengerSequence;                                          // 0x0610   (0x0008)  
	double                                             ExitTimer;                                                  // 0x0618   (0x0008)  
	bool                                               UseWater;                                                   // 0x0620   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0621   (0x0007)  MISSED
	double                                             CarSpeed;                                                   // 0x0628   (0x0008)  
	UMaterialInstanceDynamic*                          FrontLightMat;                                              // 0x0630   (0x0008)  
	int32_t                                            FrontLightMatIndex;                                         // 0x0638   (0x0004)  


	/// Functions
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetBoostInfo
	void GetBoostInfo(double& BoostTime, double& BoostCooldownTime);                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.SetBoost
	void SetBoost(bool NewBoost, bool& Success);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetIsAccelerating
	void GetIsAccelerating(bool& IsAccelerating);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetEngineStarted
	void GetEngineStarted(bool& Started);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.ExitVehicle
	void ExitVehicle(AActor* Player, bool SkipAnimation, bool SkipExitOnLocation, bool IgnoreSpeedLimits, bool& Success);    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetCarStatsComponent
	void GetCarStatsComponent(UBPC_CarStatsComponent_C*& CarStats);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.HasDriver
	bool HasDriver();                                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetPassengers
	void GetPassengers(APawn*& PassengerFL, APawn*& PassengerBL, APawn*& PassengerBR);                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetDriver
	void GetDriver(APawn*& Driver, ASurvivalPlayer_V2_C*& NewParam);                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetWheelPitches
	void GetWheelPitches(TArray<double>& Pitches);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetSteering
	void GetSteering(double& angle);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetWheels
	void GetWheels(bool& IsValid, USphereComponent*& LF, USphereComponent*& RF, USphereComponent*& LB, USphereComponent*& RB); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.IsVehicle
	void IsVehicle(bool& IsVehicle);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetVehicleBody
	void GetVehicleBody(USkeletalMeshComponent*& Body);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.SetFrontLightEnabled
	void SetFrontLightEnabled(bool Index);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetExitPoint
	FVector GetExitPoint(int32_t SeatIndex);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.SetParticle
	void SetParticle(bool IsDirt, int32_t WheelIndex);                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.CalculateSnowOnTire
	void CalculateSnowOnTire(double WheelMovement, bool IsAdd, bool IsDirt, int32_t WheelIndex);                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.Glass_break
	void Glass_break();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.InpActEvt_Subtract_K2Node_InputKeyEvent
	void InpActEvt_Subtract_K2Node_InputKeyEvent(FKey Key);                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.GetOut
	void GetOut();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.PlayExitAnims
	void PlayExitAnims(UAnimInstance* PlayerAnimInst);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnLevelUnloaded
	void OnLevelUnloaded(FName Level, AActor* Player);                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.OnLevelLoaded
	void OnLevelLoaded(FName Level, AActor* Player);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.Repair
	void Repair();                                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.FillGas
	void FillGas();                                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.PassengerQuit
	void PassengerQuit();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.SwitchSits
	void SwitchSits(int32_t DesireSitIndex, AActor* Player);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar.CutsceneCar_C.ExecuteUbergraph_CutsceneCar
	void ExecuteUbergraph_CutsceneCar(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C
/// Size: 0x008D (0x00063C - 0x0006C9)
class ACutsceneCar_SD45_C : public ACutsceneCar_C : ACutsceneCar_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x063C   (0x0004)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0640   (0x0008)  
	USkeletalMeshComponent*                            Helmet;                                                     // 0x0648   (0x0008)  
	UCableComponent*                                   Cable;                                                      // 0x0650   (0x0008)  
	UPhysicsConstraintComponent*                       PhysicsConstraint;                                          // 0x0658   (0x0008)  
	USkeletalMeshComponent*                            Body;                                                       // 0x0660   (0x0008)  
	USkeletalMeshComponent*                            Weapon;                                                     // 0x0668   (0x0008)  
	USkeletalMeshComponent*                            Hair;                                                       // 0x0670   (0x0008)  
	USkeletalMeshComponent*                            Backpack;                                                   // 0x0678   (0x0008)  
	USkeletalMeshComponent*                            Pants;                                                      // 0x0680   (0x0008)  
	TArray<int32_t>                                    WheelMaterials;                                             // 0x0688   (0x0010)  
	TArray<UMaterialInstanceDynamic*>                  TireMats;                                                   // 0x0698   (0x0010)  
	TArray<FName>                                      WheelBoneNames;                                             // 0x06A8   (0x0010)  
	UUIW_CarStats_C*                                   CarUI;                                                      // 0x06B8   (0x0008)  
	double                                             CurrentFuel;                                                // 0x06C0   (0x0008)  
	bool                                               UIOpened;                                                   // 0x06C8   (0x0001)  


	/// Functions
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.UpdateTireDeformation
	void UpdateTireDeformation(UMaterialInstanceDynamic* MaterialInstance, int32_t WheelIndex);                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.InitTireMaterials
	void InitTireMaterials();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.PlayExitAnims
	void PlayExitAnims(UAnimInstance* PlayerAnimInst);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.PassengerQuit
	void PassengerQuit();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.ShowCarUI
	void ShowCarUI();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.HideCarUI
	void HideCarUI();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/CutsceneCar_SD45.CutsceneCar_SD45_C.ExecuteUbergraph_CutsceneCar_SD45
	void ExecuteUbergraph_CutsceneCar_SD45(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/NavAreas/NavArea_ClimbObjects.NavArea_ClimbObjects_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_ClimbObjects_C : public UNavArea : UNavArea
{ 
public:
};

/// Class /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UMouseCameraController_C : public UActorComponent : UActorComponent
{ 
public:
	FTimerHandle                                       CameraControllerTimerHandle;                                // 0x00A0   (0x0008)  
	float                                              DeltaTime;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	USceneComponent*                                   CameraRootComponent;                                        // 0x00B0   (0x0008)  
	AActor*                                            Owner;                                                      // 0x00B8   (0x0008)  
	bool                                               Usable;                                                     // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	APlayerController*                                 Controller;                                                 // 0x00C8   (0x0008)  
	float                                              InterpSpeed;                                                // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	double                                             MinPitch;                                                   // 0x00D8   (0x0008)  
	double                                             MaxPitch;                                                   // 0x00E0   (0x0008)  
	double                                             MinYaw;                                                     // 0x00E8   (0x0008)  
	double                                             MaxYaw;                                                     // 0x00F0   (0x0008)  
	FRotator                                           DefaultCaneraRotation;                                      // 0x00F8   (0x0018)  
	UCameraComponent*                                  CameraComponent;                                            // 0x0110   (0x0008)  
	double                                             MinPitchTemp;                                               // 0x0118   (0x0008)  
	double                                             MaxPitchTemp;                                               // 0x0120   (0x0008)  
	double                                             MinYawTemp;                                                 // 0x0128   (0x0008)  
	double                                             MaxYawTemp;                                                 // 0x0130   (0x0008)  
	bool                                               Lock;                                                       // 0x0138   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FTimerHandle                                       InvalidateTimerHandle;                                      // 0x0140   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C.CameraControllerTimerHandler
	void CameraControllerTimerHandler();                                                                                     // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C.CameraController
	void CameraController(bool Clear, bool Stop);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C.ClampAngel
	void ClampAngel(double Pitch, double Yaw, bool Condition, double& ClaimedPitch, double& ClaimedYaw);                     // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C.InvalidateWithDelay
	void InvalidateWithDelay(double Delay);                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C.Invalidate
	void Invalidate();                                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/MouseCameraController.MouseCameraController_C.Validate
	void Validate(bool& Result);                                                                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C
/// Size: 0x0428 (0x000290 - 0x0006B8)
class ABP_Shops_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              SM_rag_01;                                                  // 0x0298   (0x0008)  
	UWidgetComponent*                                  TutorialPoint3D;                                            // 0x02A0   (0x0008)  
	URectLightComponent*                               RectLight2;                                                 // 0x02A8   (0x0008)  
	URectLightComponent*                               RectLight1;                                                 // 0x02B0   (0x0008)  
	URectLightComponent*                               RectLight;                                                  // 0x02B8   (0x0008)  
	UWidgetComponent*                                  Point3D;                                                    // 0x02C0   (0x0008)  
	UWidgetComponent*                                  Widget;                                                     // 0x02C8   (0x0008)  
	UChildActorComponent*                              UMSNameplate;                                               // 0x02D0   (0x0008)  
	UMouseCameraController_C*                          MouseCameraController;                                      // 0x02D8   (0x0008)  
	USceneComponent*                                   PointToInteract;                                            // 0x02E0   (0x0008)  
	UBoxComponent*                                     TipBox;                                                     // 0x02E8   (0x0008)  
	USkeletalMeshComponent*                            Head;                                                       // 0x02F0   (0x0008)  
	USkeletalMeshComponent*                            Body;                                                       // 0x02F8   (0x0008)  
	UStaticMeshComponent*                              DialogueCameraTargetLocation;                               // 0x0300   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0308   (0x0008)  
	UCapsuleComponent*                                 Capsule;                                                    // 0x0310   (0x0008)  
	UADSDialoguePartecipantComponent*                  ADSDialoguePartecipant;                                     // 0x0318   (0x0008)  
	UStaticMeshComponent*                              PlayerPlace;                                                // 0x0320   (0x0008)  
	UCameraComponent*                                  CameraDialogue;                                             // 0x0328   (0x0008)  
	USceneComponent*                                   SceneRoot;                                                  // 0x0330   (0x0008)  
	float                                              Timeline_0_Cameramove_E54918924951C874158038B310B75468;     // 0x0338   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E54918924951C874158038B310B75468;     // 0x033C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	UTimelineComponent*                                Timeline;                                                   // 0x0340   (0x0008)  
	float                                              CameraChange_Cameramove_6D1CE93549ADB727D7070B8C71AE4780;   // 0x0348   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    CameraChange__Direction_6D1CE93549ADB727D7070B8C71AE4780;   // 0x034C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x034D   (0x0003)  MISSED
	UTimelineComponent*                                CameraChange;                                               // 0x0350   (0x0008)  
	bool                                               IsInteracted;                                               // 0x0358   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0359   (0x0007)  MISSED
	ASurvivalPlayer_C*                                 CachedInteractingPawn;                                      // 0x0360   (0x0008)  
	FMulticastInlineDelegate                           EventCompleted;                                             // 0x0368   (0x0010)  
	ASurvPC_C*                                         CachedController;                                           // 0x0378   (0x0008)  
	ABP_GameHUD_C*                                     CachedHUD;                                                  // 0x0380   (0x0008)  
	UW_Dialogue_C*                                     CachedDialogueWidget;                                       // 0x0388   (0x0008)  
	UW_Shop_C*                                         CachedShopWidget;                                           // 0x0390   (0x0008)  
	UDataTable*                                        AssortmentDataTable;                                        // 0x0398   (0x0008)  
	double                                             PlayerCameraFocalDistance;                                  // 0x03A0   (0x0008)  
	int32_t                                            AmountOfMoney;                                              // 0x03A8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03AC   (0x0004)  MISSED
	TMap<int32_t, FContainerPickupsInfo>               PlayerItems;                                                // 0x03B0   (0x0050)  
	TMap<int32_t, FContainerPickupsInfo>               ShopItems;                                                  // 0x0400   (0x0050)  
	TMap<int32_t, FContainerPickupsInfo>               BuybackItems_Init;                                          // 0x0450   (0x0050)  
	bool                                               Has_Reset;                                                  // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	FTimerHandle                                       Timer_by_reset;                                             // 0x04A8   (0x0008)  
	TMap<int32_t, FContainerPickupsInfo>               PlayerEquipmentItems;                                       // 0x04B0   (0x0050)  
	UADSDialoguePartecipantComponent*                  ADSComponent;                                               // 0x0500   (0x0008)  
	UClass*                                            DialogueComponentClass;                                     // 0x0508   (0x0008)  
	bool                                               PrevLineTraceResult;                                        // 0x0510   (0x0001)  
	bool                                               InteractingAnimation;                                       // 0x0511   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x0512   (0x0006)  MISSED
	TMap<int32_t, FContainerPickupsInfo>               ShopItems_Init;                                             // 0x0518   (0x0050)  
	TArray<FName>                                      ShopCategoriesArray;                                        // 0x0568   (0x0010)  
	TMap<int32_t, FContainerPickupsInfo>               BuybackItems;                                               // 0x0578   (0x0050)  
	bool                                               bCloseShop;                                                 // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x05C9   (0x0007)  MISSED
	TArray<FFItemInfo>                                 ItemsBuyback;                                               // 0x05D0   (0x0010)  
	UWBP_ShopVendorInfo_C*                             ShopVendorInfoRef;                                          // 0x05E0   (0x0008)  
	double                                             ShowPointTarget_Distance;                                   // 0x05E8   (0x0008)  
	FName                                              VendorName;                                                 // 0x05F0   (0x0008)  
	UWBP_CarShop_C*                                    CachedCarShopWidget;                                        // 0x05F8   (0x0008)  
	UWBP_HouseShop_C*                                  Cached_HouseShop_Widget;                                    // 0x0600   (0x0008)  
	UW_RPShop_C*                                       Cached_WorkRP_Widget;                                       // 0x0608   (0x0008)  
	bool                                               bShowTip;                                                   // 0x0610   (0x0001)  
	bool                                               bBigSlides;                                                 // 0x0611   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x0612   (0x0002)  MISSED
	FName                                              SlideName;                                                  // 0x0614   (0x0008)  
	FGameplayTag                                       QuestGameplay_Tag;                                          // 0x061C   (0x0008)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x0624   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnDialogueEnd;                                              // 0x0628   (0x0010)  
	FFMODEventInstance                                 3DFModEvent;                                                // 0x0638   (0x0008)  
	FTimerHandle                                       FModEventTimer;                                             // 0x0640   (0x0008)  
	int32_t                                            CurrentTimer3DFME;                                          // 0x0648   (0x0004)  
	int32_t                                            MaxTimer3DFME;                                              // 0x064C   (0x0004)  
	float                                              FModTimer;                                                  // 0x0650   (0x0004)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	UShopContainerWidget_C*                            ShopContainerWidget;                                        // 0x0658   (0x0008)  
	UMPInGameInventory_C*                              CachedInventoryWidget;                                      // 0x0660   (0x0008)  
	UW_TabsWindow_C*                                   CachedTabsWidget;                                           // 0x0668   (0x0008)  
	FName                                              DelayedDialoguePhrase;                                      // 0x0670   (0x0008)  
	ASurvivalPlayer_C*                                 CachedInteractingPawn;                                      // 0x0678   (0x0008)  
	int32_t                                            OnStartingGetTotalMoney;                                    // 0x0680   (0x0004)  
	bool                                               isTrailer;                                                  // 0x0684   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0685   (0x0003)  MISSED
	TArray<FString>                                    ActiveTutorialStage;                                        // 0x0688   (0x0010)  
	UFMODAudioComponent*                               CueWhenPlayerWalksFModAudioComponent;                       // 0x0698   (0x0008)  
	bool                                               bIsShopOpened;                                              // 0x06A0   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x06A1   (0x0007)  MISSED
	TArray<FContainerPickupsInfo>                      PickupsBuybackItems;                                        // 0x06A8   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.SetSlotIndex
	void SetSlotIndex(int32_t Count, FName Name, int32_t SlotIndex, FContainerPickupsInfo& StructRef, int32_t IndexArr);     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.RemoveBuyback
	void RemoveBuyback(int32_t SlotIndex, UJSIContainer_C* Container, int32_t Count, FName ItemName, int32_t& Index, bool& ItemRemoved); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetBuyback
	void GetBuyback(TArray<FContainerPickupsInfo>& PickupsBuybackItems);                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.AddBuyback
	void AddBuyback(FContainerPickupsInfo PickupsBuybackItems);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.NPCVoice
	void NPCVoice();                                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetDialogue_DT
	void GetDialogue_DT(UDataTable* DataTable, FName RowName, bool& RowFound?, FF_DialogueNodeInfo& Out Row);                // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetVendorName
	void GetVendorName(FName& VendorName);                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.DefaultShop
	void DefaultShop();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.ShowSlides
	void ShowSlides(bool bBigSlides, FName SlideName);                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetCachedDialogueWidget
	void GetCachedDialogueWidget(UW_Dialogue_C*& CachedDialogueWidget);                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.CalculatePlayerMoney
	void CalculatePlayerMoney();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.RemoveBuybackItems
	void RemoveBuybackItems(FFItemInfo ItemInfo, int32_t Count, UJSIContainer_C* Container, int32_t& Index, bool& ItemRemoved); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetBuybackItems
	void GetBuybackItems(TArray<FFItemInfo>& ItemsBuyback);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.AddBuybackItem
	void AddBuybackItem(FFItemInfo Item);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.AddMoney
	void AddMoney(int32_t Value);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetItemCategory
	void GetItemCategory(FFItemInfo ItemData, FName& CategoryName);                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetItemsForBuyback
	void GetItemsForBuyback(TArray<FContainerPickupsInfo>& Values);                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Get Buyback Categories Array
	void Get Buyback Categories Array(TArray<FName>& Categories);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Get Equipment Categories Array
	void Get Equipment Categories Array(TArray<FName>& EquipmentCategoriesArray);                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Get Shop Categories Array
	void Get Shop Categories Array(TArray<FName>& CategoriesArray);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.IsSomethingOnA Way
	bool IsSomethingOnA Way();                                                                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.HideDialogue
	void HideDialogue(bool Hide);                                                                                            // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetPlayerRef
	void GetPlayerRef(ASurvivalPlayer_C*& CachedInteractingPawn);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Event Split Players Item Between Slots
	void Event Split Players Item Between Slots(TEnumAsByte<E_BaseContainerType> ContainerType, int32_t SenderSlotIndex, int32_t RecipientSlotIndex, int32_t SplitCount); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.AddMoneyLikeItem
	void AddMoneyLikeItem();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Send Data
	void Send Data();                                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetTypeRatio
	void GetTypeRatio(TEnumAsByte<ELootTypes> ItemType, double& Result);                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetPriceWithDurabilityRatio
	void GetPriceWithDurabilityRatio(FContainerPickupsInfo& Pickup, double& Price);                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.MakeBuyback
	void MakeBuyback(int32_t SenderSlotIndex, int32_t RecipientSlotIndex, int32_t ItemCount);                                // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.MakeBuy
	void MakeBuy(int32_t SenderSlotIndex, int32_t RecipientSlotIndex, int32_t ItemCount);                                    // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.MakeSell
	void MakeSell(int32_t SenderSlotIndex, int32_t RecipientSlotIndex, int32_t ItemCount);                                   // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.ChangeKeyForData
	void ChangeKeyForData(TEnumAsByte<E_BaseContainerType> ContainerType, int32_t OldIndex, int32_t NewIndex);               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.CheckTransaction
	void CheckTransaction(TEnumAsByte<E_BaseContainerType> SenderContainerType, int32_t SenderSlotIndex, int32_t RecipientSlotIndex, int32_t ItemCount, int32_t ItemId, bool& Success, TEnumAsByte<E_ReasonForCancelingTransaction>& CancelReason); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Cached Data for Shop
	void Cached Data for Shop(bool All, FName CategoryName);                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetInventoryCapacity
	void GetInventoryCapacity(int32_t& Length);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetPlayerEquipmentWeight
	void GetPlayerEquipmentWeight(double& MaxWeigth, double& ConstantEquipWeight);                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetAmountOfMoney
	void GetAmountOfMoney(int32_t& NumberOfMoney);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetCachedReferences
	void GetCachedReferences(ASurvivalPlayer_C*& InteractingPawn, ASurvPC_C*& Controller, ABP_GameHUD_C*& HUD, UW_Dialogue_C*& DialogueWidget, UW_Shop_C*& ShopWidget); // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetShopAssortment
	void GetShopAssortment(TArray<FContainerPickupsInfo>& ShopAssortment);                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Generate Items For Buyback
	void Generate Items For Buyback(bool All, FName CategoryName);                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.GetPlayerItems
	void GetPlayerItems(TArray<FContainerPickupsInfo>& PlayerItems);                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.EndDialogue
	void EndDialogue();                                                                                                      // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.SetDialogueCamera
	void SetDialogueCamera(bool Condition);                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Generate Shop Assortment
	void Generate Shop Assortment(bool Initialization, bool All, FName CategoryName);                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.CameraChange__FinishedFunc
	void CameraChange__FinishedFunc();                                                                                       // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.CameraChange__UpdateFunc
	void CameraChange__UpdateFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Timeline_0__FinishedFunc
	void Timeline_0__FinishedFunc();                                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Timeline_0__UpdateFunc
	void Timeline_0__UpdateFunc();                                                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnNotifyEnd_63A4C1BB43FF849711ED028C87F00FF8
	void OnNotifyEnd_63A4C1BB43FF849711ED028C87F00FF8(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnNotifyBegin_63A4C1BB43FF849711ED028C87F00FF8
	void OnNotifyBegin_63A4C1BB43FF849711ED028C87F00FF8(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnInterrupted_63A4C1BB43FF849711ED028C87F00FF8
	void OnInterrupted_63A4C1BB43FF849711ED028C87F00FF8(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnBlendOut_63A4C1BB43FF849711ED028C87F00FF8
	void OnBlendOut_63A4C1BB43FF849711ED028C87F00FF8(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnCompleted_63A4C1BB43FF849711ED028C87F00FF8
	void OnCompleted_63A4C1BB43FF849711ED028C87F00FF8(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StartShopping
	void StartShopping(TEnumAsByte<E_Shops> E_ShopType);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.LeaveTheShop
	void LeaveTheShop(FGameplayTag GameplayTag, bool ShowBigSlides, FName SlideName, FString StageName);                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StopShopping
	void StopShopping();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.ActivateQuest
	void ActivateQuest();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.MoveInCamera
	void MoveInCamera();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.MoveOutCamera
	void MoveOutCamera();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.CompleteQuest
	void CompleteQuest(int32_t QuestIndex, int32_t ObjectiveIndex);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnFadeAnimationStarted_Callback
	void OnFadeAnimationStarted_Callback();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StartDialogue
	void StartDialogue();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StartTransaction
	void StartTransaction(TEnumAsByte<E_BaseContainerType> SenderContainerType, int32_t SenderSlotIndex, int32_t RecipientSlotIndex, int32_t ItemCount, int32_t ItemId); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.EventDeletePlayersItem
	void EventDeletePlayersItem(int32_t Index);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Reset Timer
	void Reset Timer();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Reset
	void Reset();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.RespawnADSComponent
	void RespawnADSComponent();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.DestroyADSComponent
	void DestroyADSComponent();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.PlayHeadAnimationMontage
	void PlayHeadAnimationMontage(UAnimMontage* MontageToPlay);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StopHeadAnimationMontage
	void StopHeadAnimationMontage();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.BndEvt__BP_Shops_TipBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__BP_Shops_TipBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StartDialogueAnim
	void StartDialogueAnim(bool Start);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Play3DFModEvent_Timer
	void Play3DFModEvent_Timer(UFMODEvent* Event, FName DelayedDialoguePhrase, double Timer);                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.PlayTimerFMEvent
	void PlayTimerFMEvent();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.StopFmodEvent
	void StopFmodEvent();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnCloseInventory
	void OnCloseInventory();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnOpenInventory
	void OnOpenInventory();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Play3DFmodEvent
	void Play3DFmodEvent(UFMODEvent* Event, FName Row);                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.TrailerOn
	void TrailerOn();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.TrailerOff
	void TrailerOff();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.Play3D
	void Play3D();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnTutorStageUpdated_Event
	void OnTutorStageUpdated_Event(FString TutorialStage);                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.ExecuteUbergraph_BP_Shops
	void ExecuteUbergraph_BP_Shops(int32_t EntryPoint);                                                                      // [0x2407bf0] Final|HasDefaults    
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.OnDialogueEnd__DelegateSignature
	void OnDialogueEnd__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_Shops.BP_Shops_C.EventCompleted__DelegateSignature
	void EventCompleted__DelegateSignature();                                                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C
/// Size: 0x0048 (0x0006B8 - 0x000700)
class ABP_MedicShop_Tutorial_C : public ABP_Shops_C : ABP_Shops_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	UStaticMeshComponent*                              SM_Pencil_01a;                                              // 0x06C0   (0x0008)  
	UStaticMeshComponent*                              SM_Clipboard_Filled;                                        // 0x06C8   (0x0008)  
	bool                                               IsQuestActive;                                              // 0x06D0   (0x0001)  
	bool                                               HasThisItem;                                                // 0x06D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x06D2   (0x0006)  MISSED
	TArray<ABP_Quest_C*>                               Quests;                                                     // 0x06D8   (0x0010)  
	int32_t                                            ItemUniqID;                                                 // 0x06E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06EC   (0x0004)  MISSED
	ULegacyCameraShake*                                ShakeInstance;                                              // 0x06F0   (0x0008)  
	double                                             ShopFOV;                                                    // 0x06F8   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop_Tutorial.BP_MedicShop_Tutorial_C.ExecuteUbergraph_BP_MedicShop_Tutorial
	void ExecuteUbergraph_BP_MedicShop_Tutorial(int32_t EntryPoint);                                                         // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/NPC/Shops/BP_MedicShop.BP_MedicShop_C
/// Size: 0x0048 (0x0006B8 - 0x000700)
class ABP_MedicShop_C : public ABP_Shops_C : ABP_Shops_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	UStaticMeshComponent*                              SM_Pencil_01a;                                              // 0x06C0   (0x0008)  
	UStaticMeshComponent*                              SM_Clipboard_Filled;                                        // 0x06C8   (0x0008)  
	bool                                               IsQuestActive;                                              // 0x06D0   (0x0001)  
	bool                                               HasThisItem;                                                // 0x06D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x06D2   (0x0006)  MISSED
	TArray<ABP_Quest_C*>                               Quests;                                                     // 0x06D8   (0x0010)  
	int32_t                                            ItemUniqID;                                                 // 0x06E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06EC   (0x0004)  MISSED
	ULegacyCameraShake*                                ShakeInstance;                                              // 0x06F0   (0x0008)  
	double                                             ShopFOV;                                                    // 0x06F8   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/BP_MedicShop.BP_MedicShop_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop.BP_MedicShop_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop.BP_MedicShop_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop.BP_MedicShop_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_MedicShop.BP_MedicShop_C.ExecuteUbergraph_BP_MedicShop
	void ExecuteUbergraph_BP_MedicShop(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C
/// Size: 0x0050 (0x0006B8 - 0x000708)
class ABP_LeadChriss_C : public ABP_Shops_C : ABP_Shops_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	URectLightComponent*                               RectLight1;                                                 // 0x06C0   (0x0008)  
	URectLightComponent*                               RectLight;                                                  // 0x06C8   (0x0008)  
	UStaticMeshComponent*                              R_wep_attachment;                                           // 0x06D0   (0x0008)  
	bool                                               IsQuestActive;                                              // 0x06D8   (0x0001)  
	bool                                               HasThisItem;                                                // 0x06D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x06DA   (0x0006)  MISSED
	TArray<ABP_Quest_C*>                               Quests;                                                     // 0x06E0   (0x0010)  
	int32_t                                            ItemUniqID;                                                 // 0x06F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x06F4   (0x0004)  MISSED
	ULegacyCameraShake*                                ShakeInstance;                                              // 0x06F8   (0x0008)  
	double                                             ShopFOV;                                                    // 0x0700   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.StartDialogue
	void StartDialogue();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.DialogueReset
	void DialogueReset();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_LeadChriss.BP_LeadChriss_C.ExecuteUbergraph_BP_LeadChriss
	void ExecuteUbergraph_BP_LeadChriss(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/NPC/Shops/BP_BartenderShop.BP_BartenderShop_C
/// Size: 0x0038 (0x0006B8 - 0x0006F0)
class ABP_BartenderShop_C : public ABP_Shops_C : ABP_Shops_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)  
	URectLightComponent*                               RectLight;                                                  // 0x06C0   (0x0008)  
	URectLightComponent*                               RectLight1;                                                 // 0x06C8   (0x0008)  
	UStaticMeshComponent*                              SM_small_props_bar_single_glass_01;                         // 0x06D0   (0x0008)  
	ULegacyCameraShake*                                ShakeInstance;                                              // 0x06D8   (0x0008)  
	bool                                               IsFreeItemBuyed;                                            // 0x06E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x06E1   (0x0007)  MISSED
	double                                             ShopFOV;                                                    // 0x06E8   (0x0008)  


	/// Functions
	// Function /Game/AInew/NPC/Shops/BP_BartenderShop.BP_BartenderShop_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_BartenderShop.BP_BartenderShop_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/Shops/BP_BartenderShop.BP_BartenderShop_C.ExecuteUbergraph_BP_BartenderShop
	void ExecuteUbergraph_BP_BartenderShop(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/Spawner/aispawnmanager/SpawnManagerChild.SpawnManagerChild_C
/// Size: 0x0114 (0x0000A0 - 0x0001B4)
class USpawnManagerChild_C : public UActorComponent : UActorComponent
{ 
public:
	bool                                               IsActive_;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FS_FloatMinMax                                     BeginDelay;                                                 // 0x00A4   (0x0008)  
	FS_IntegerMinMax                                   1SpawnLimitRange;                                           // 0x00AC   (0x0008)  
	FS_IntegerMinMax                                   2SpawnLimitRange;                                           // 0x00B4   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	ASurvivalPlayer_C*                                 Player;                                                     // 0x00C0   (0x0008)  
	AAISpawnManager_C*                                 AISpawnerManager;                                           // 0x00C8   (0x0008)  
	int32_t                                            GroupSize;                                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<AActor*>                                    PlayerAIs;                                                  // 0x00D8   (0x0010)  
	FS_IntegerMinMax                                   3SpawnLimitRange;                                           // 0x00E8   (0x0008)  
	FS_IntegerMinMax                                   4SpawnLimitRange;                                           // 0x00F0   (0x0008)  
	int32_t                                            ZombieLimit;                                                // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	TArray<bool>                                       _;                                                          // 0x0100   (0x0010)  
	int32_t                                            CountIndex;                                                 // 0x0110   (0x0004)  
	TEnumAsByte<E_SpawnGroup>                          SpawnGroupType;                                             // 0x0114   (0x0001)  
	TEnumAsByte<E_AIType>                              AIType;                                                     // 0x0115   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0116   (0x0002)  MISSED
	FVector                                            SpawnLocation;                                              // 0x0118   (0x0018)  
	TArray<double>                                     ItemScore;                                                  // 0x0130   (0x0010)  
	TArray<int32_t>                                    ItemIndex;                                                  // 0x0140   (0x0010)  
	double                                             DelayBetweenSpawns;                                         // 0x0150   (0x0008)  
	double                                             BigDelayBetweenSpawns;                                      // 0x0158   (0x0008)  
	int32_t                                            SpawnsCount;                                                // 0x0160   (0x0004)  
	int32_t                                            PlayerKillsCount;                                           // 0x0164   (0x0004)  
	int32_t                                            PlayerKillsLimitForBigDelay;                                // 0x0168   (0x0004)  
	bool                                               BlockBanditSpawn;                                           // 0x016C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x016D   (0x0003)  MISSED
	int32_t                                            BanditGroupSize;                                            // 0x0170   (0x0004)  
	int32_t                                            BanditCountIndex;                                           // 0x0174   (0x0004)  
	TArray<double>                                     ItemScoreBandit;                                            // 0x0178   (0x0010)  
	TArray<int32_t>                                    ItemIndexBandit;                                            // 0x0188   (0x0010)  
	TArray<AActor*>                                    AIBandits;                                                  // 0x0198   (0x0010)  
	bool                                               BlockForZombies;                                            // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x01A9   (0x0003)  MISSED
	int32_t                                            CountLevel;                                                 // 0x01AC   (0x0004)  
	int32_t                                            ZombeLimitDefault;                                          // 0x01B0   (0x0004)  


	/// Functions
	// Function /Game/AInew/Spawner/aispawnmanager/SpawnManagerChild.SpawnManagerChild_C.GetZoneSize
	void GetZoneSize();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Spawner/aispawnmanager/SpawnManagerChild.SpawnManagerChild_C.CheckNearPlayers
	void CheckNearPlayers(FVector SpawnLocation);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Spawner/aispawnmanager/SpawnManagerChild.SpawnManagerChild_C.CalculateSpawnLocation
	void CalculateSpawnLocation();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AInew/Spawner/aispawnmanager/SpawnManagerChild.SpawnManagerChild_C.SetGroupSize
	void SetGroupSize(TEnumAsByte<E_SpawnGroup> GroupType, TEnumAsByte<E_AIType> AIType);                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/AInew/PerceptActor.PerceptActor_C
/// Size: 0x0008 (0x000290 - 0x000298)
class APerceptActor_C : public AActor : AActor
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0290   (0x0008)  
};

/// Class /Game/AInew/NPC/QuestSystemComp.QuestSystemComp_C
/// Size: 0x0298 (0x0000A0 - 0x000338)
class UQuestSystemComp_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	TArray<FS_Quest>                                   Quests;                                                     // 0x00A8   (0x0010)  
	TMap<int32_t, FVector>                             ItemLocation;                                               // 0x00B8   (0x0050)  
	FFItemInfo                                         ContainerPickUpInfo;                                        // 0x0108   (0x0220)  
	FString                                            NewVar;                                                     // 0x0328   (0x0010)  


	/// Functions
	// Function /Game/AInew/NPC/QuestSystemComp.QuestSystemComp_C.AddQuest
	void AddQuest(FString QuestName, int32_t QuestItemID, ABP_QuestItemOld_C* QuestItem);                                    // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/QuestSystemComp.QuestSystemComp_C.ResetQuest
	void ResetQuest();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/QuestSystemComp.QuestSystemComp_C.RemoveQuest
	void RemoveQuest(int32_t UniqItemID);                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AInew/NPC/QuestSystemComp.QuestSystemComp_C.ExecuteUbergraph_QuestSystemComp
	void ExecuteUbergraph_QuestSystemComp(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AInew/NPC/StaticNPC/SG_DeathCount.SG_DeathCount_C
/// Size: 0x0004 (0x000028 - 0x00002C)
class USG_DeathCount_C : public USaveGame : USaveGame
{ 
public:
	int32_t                                            DeathCount;                                                 // 0x0028   (0x0004)  
};

/// Enum /Game/AInew/Spawner/aispawnmanager/E_SpawnGroup.E_SpawnGroup
/// Size: 0x05
enum E_SpawnGroup : uint8_t
{
	E_SpawnGroup__NewEnumerator00                                                    = 0,
	E_SpawnGroup__NewEnumerator11                                                    = 1,
	E_SpawnGroup__NewEnumerator22                                                    = 2,
	E_SpawnGroup__NewEnumerator33                                                    = 3,
	E_SpawnGroup__E_MAX4                                                             = 4
};

/// Enum /Game/AInew/NPC/E_ShopType.E_ShopType
/// Size: 0x04
enum E_ShopType : uint8_t
{
	E_ShopType__NewEnumerator00                                                      = 0,
	E_ShopType__NewEnumerator11                                                      = 1,
	E_ShopType__NewEnumerator22                                                      = 2,
	E_ShopType__E_MAX3                                                               = 3
};

/// Enum /Game/AInew/NPC/E_NPCState.E_NPCState
/// Size: 0x06
enum E_NPCState : uint8_t
{
	E_NPCState__NewEnumerator40                                                      = 0,
	E_NPCState__NewEnumerator01                                                      = 1,
	E_NPCState__NewEnumerator12                                                      = 2,
	E_NPCState__NewEnumerator23                                                      = 3,
	E_NPCState__NewEnumerator34                                                      = 4,
	E_NPCState__E_MAX5                                                               = 5
};

/// Enum /Game/AInew/NPC/E_NPCIdle.E_NPCIdle
/// Size: 0x14
enum E_NPCIdle : uint8_t
{
	E_NPCIdle__NewEnumerator00                                                       = 0,
	E_NPCIdle__NewEnumerator11                                                       = 1,
	E_NPCIdle__NewEnumerator22                                                       = 2,
	E_NPCIdle__NewEnumerator63                                                       = 3,
	E_NPCIdle__NewEnumerator74                                                       = 4,
	E_NPCIdle__NewEnumerator85                                                       = 5,
	E_NPCIdle__NewEnumerator96                                                       = 6,
	E_NPCIdle__NewEnumerator107                                                      = 7,
	E_NPCIdle__NewEnumerator118                                                      = 8,
	E_NPCIdle__NewEnumerator129                                                      = 9,
	E_NPCIdle__NewEnumerator1310                                                     = 10,
	E_NPCIdle__NewEnumerator1411                                                     = 11,
	E_NPCIdle__NewEnumerator1512                                                     = 12,
	E_NPCIdle__E_MAX13                                                               = 13
};

/// Enum /Game/AInew/ParentBT/E_ActorOrVector.E_ActorOrVector
/// Size: 0x03
enum E_ActorOrVector : uint8_t
{
	E_ActorOrVector__NewEnumerator00                                                 = 0,
	E_ActorOrVector__NewEnumerator11                                                 = 1,
	E_ActorOrVector__E_MAX2                                                          = 2
};

/// Enum /Game/AInew/Zombie/MainZombie/E_WalkType.E_WalkType
/// Size: 0x03
enum E_WalkType : uint8_t
{
	E_WalkType__NewEnumerator00                                                      = 0,
	E_WalkType__NewEnumerator11                                                      = 1,
	E_WalkType__E_MAX2                                                               = 2
};

/// Enum /Game/AInew/Zombie/E_SmoothSynsPrefab.E_SmoothSynsPrefab
/// Size: 0x04
enum E_SmoothSynsPrefab : uint8_t
{
	E_SmoothSynsPrefab__NewEnumerator00                                              = 0,
	E_SmoothSynsPrefab__NewEnumerator11                                              = 1,
	E_SmoothSynsPrefab__NewEnumerator22                                              = 2,
	E_SmoothSynsPrefab__E_MAX3                                                       = 3
};

/// Enum /Game/AInew/Zombie/MainZombie/E_ZombiePosition.E_ZombiePosition
/// Size: 0x05
enum E_ZombiePosition : uint8_t
{
	E_ZombiePosition__NewEnumerator00                                                = 0,
	E_ZombiePosition__NewEnumerator11                                                = 1,
	E_ZombiePosition__NewEnumerator22                                                = 2,
	E_ZombiePosition__NewEnumerator33                                                = 3,
	E_ZombiePosition__E_MAX4                                                         = 4
};

/// Enum /Game/AInew/Zombie/MainZombie/E_RunType.E_RunType
/// Size: 0x06
enum E_RunType : uint8_t
{
	E_RunType__NewEnumerator00                                                       = 0,
	E_RunType__NewEnumerator11                                                       = 1,
	E_RunType__NewEnumerator22                                                       = 2,
	E_RunType__NewEnumerator33                                                       = 3,
	E_RunType__NewEnumerator44                                                       = 4,
	E_RunType__E_MAX5                                                                = 5
};

/// Enum /Game/AInew/Spawner/aispawnmanager/E_AIType.E_AIType
/// Size: 0x04
enum E_AIType : uint8_t
{
	E_AIType__NewEnumerator00                                                        = 0,
	E_AIType__NewEnumerator11                                                        = 1,
	E_AIType__NewEnumerator22                                                        = 2,
	E_AIType__E_MAX3                                                                 = 3
};

/// Enum /Game/AInew/Zombie/E_AnimState.E_AnimState
/// Size: 0x03
enum E_AnimState : uint8_t
{
	E_AnimState__NewEnumerator00                                                     = 0,
	E_AnimState__NewEnumerator11                                                     = 1,
	E_AnimState__E_MAX2                                                              = 2
};

/// Enum /Game/AInew/Bandit/mainBandit/Animation/New/E_Bandit_MovementMode.E_Bandit_MovementMode
/// Size: 0x07
enum E_Bandit_MovementMode : uint8_t
{
	E_Bandit_MovementMode__NewEnumerator00                                           = 0,
	E_Bandit_MovementMode__NewEnumerator11                                           = 1,
	E_Bandit_MovementMode__NewEnumerator22                                           = 2,
	E_Bandit_MovementMode__NewEnumerator33                                           = 3,
	E_Bandit_MovementMode__NewEnumerator44                                           = 4,
	E_Bandit_MovementMode__NewEnumerator55                                           = 5,
	E_Bandit_MovementMode__E_Bandit_MAX6                                             = 6
};

/// Enum /Game/AInew/Spawner/aispawnmanager/AISpawnZoneType.AISpawnZoneType
/// Size: 0x05
enum AISpawnZoneType : uint8_t
{
	AISpawnZoneType__NewEnumerator00                                                 = 0,
	AISpawnZoneType__NewEnumerator11                                                 = 1,
	AISpawnZoneType__NewEnumerator22                                                 = 2,
	AISpawnZoneType__NewEnumerator33                                                 = 3,
	AISpawnZoneType__AISpawnZoneType_MAX4                                            = 4
};

