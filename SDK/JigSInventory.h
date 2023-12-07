
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package JigSInventory.

/// Struct /Game/JigSInventory/1-System/PickupSystem/Data/EquipmentStatus.EquipmentStatus
/// Size: 0x000B (0x000000 - 0x00000B)
struct FEquipmentStatus
{ 
	bool                                               HasBackpack_1_9A6C741A44A3CBFB89106F9A236F9074;             // 0x0000   (0x0001)  
	bool                                               HasHelmet_3_6750FDB044B3B516AE64E0AF3B91761E;               // 0x0001   (0x0001)  
	bool                                               HasArmor_5_573D108C42110E015B40D290A40A9453;                // 0x0002   (0x0001)  
	bool                                               HasPants_7_A42A7D8D4B25CC7678DD2A95A0E191B3;                // 0x0003   (0x0001)  
	bool                                               HasGloves_9_AE99AB6C4F55E5694F680DB0B67046A6;               // 0x0004   (0x0001)  
	bool                                               HasShoes_19_84057DC844E4AF021EEDED8E1E293388;               // 0x0005   (0x0001)  
	bool                                               HasPrimary_11_3289233A43F4D7D9473A55B33E93DA11;             // 0x0006   (0x0001)  
	bool                                               HasSecondary_13_EFDAA4E54AF0574CD581F2BD05B67FC3;           // 0x0007   (0x0001)  
	bool                                               HasPistol_15_02CC2A1D493DCCC4324ABD8F2DCF48DC;              // 0x0008   (0x0001)  
	bool                                               HasMelee_17_5E9DCAA34560AAF3416CBDBEBD23B9C0;               // 0x0009   (0x0001)  
	bool                                               HasTactRig_21_E860BCBC4B371274F7335D9C0A560559;             // 0x000A   (0x0001)  
};

/// Struct /Game/JigSInventory/1-System/Data/WeaponUniqueInfo.WeaponUniqueInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FWeaponUniqueInfo
{ 
	int32_t                                            UniqueServerID_83_19E6C8FE42B778BAE918F79F1D85AE2A;         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPickupAttachments                                 AttachmentsInfo_91_2F6158F24439C5DBAD74F798FE8DB22B;        // 0x0008   (0x0010)  
	int32_t                                            WeaponAmmoCount_127_B1B113B84D74B28D56B83EB337E5D027;       // 0x0018   (0x0004)  
	TEnumAsByte<BPE_FireMode>                          FireMode_207_5BA61B7947DB36053B7BEF847E822460;              // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	double                                             Durability_134_8F07298842FAE8804B3788B5ECCCFEE6;            // 0x0020   (0x0008)  
};

/// Struct /Game/JigSInventory/1-System/Data/MPContPickupInfo.MPContPickupInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMPContPickupInfo
{ 
	int32_t                                            UniqServerID_16_23B656AB4301FAFCD123249398106B34;           // 0x0000   (0x0004)  
	FName                                              ItemName_18_04CB0FB44C13EA915E7CF98974DF8662;               // 0x0004   (0x0008)  
	int32_t                                            Count_21_C71CA0494B62A5B22F5151AA38613902;                  // 0x000C   (0x0004)  
	double                                             Price_27_DD94BEDD482FD0DB3DFE40998A2E4D62;                  // 0x0010   (0x0008)  
	bool                                               IsCont_5_2BCE41334388BD983418F3844A7B7383;                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ContMotherID_8_21D985B8489CADE4196A18B8A9CFEDB2;            // 0x001C   (0x0004)  
	int32_t                                            SlotIndex_10_BED39999492FB1BBADF484A1682B8C07;              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<int32_t>                                    HostedByIndexes_13_063855B0453AE9282C0ACAA13BEB98D6;        // 0x0028   (0x0010)  
};

/// Struct /Game/JigSInventory/1-System/PickupSystem/MPContainers/Data/ServerSlotInfoArray.ServerSlotInfoArray
/// Size: 0x0020 (0x000000 - 0x000020)
struct FServerSlotInfoArray
{ 
	int32_t                                            ContainerUID_16_BAD2F4D04207FB4C36FAB5840F6FF8F9;           // 0x0000   (0x0004)  
	int32_t                                            NumberOfColumns_19_B2A05746498FA8E539B70F84719E57CE;        // 0x0004   (0x0004)  
	int32_t                                            NumberOfRows_21_AB73A6714722DC35E4F03C99CAC44459;           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FServerSlotInfo>                            ContainerSlots_10_170955EB41F38490334C068515F5BD61;         // 0x0010   (0x0010)  
};

/// Struct /Game/JigSInventory/1-System/PickupSystem/MPContainers/Data/ServerSlotInfo.ServerSlotInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FServerSlotInfo
{ 
	int32_t                                            slotIndex_6_F4FBC5A540C0051D28A25FB780BE9C85;               // 0x0000   (0x0004)  
	bool                                               Empty_1_837A097C463AA10B4D48AFB48DBCEEE1;                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            HostingID_4_170955EB41F38490334C068515F5BD61;               // 0x0008   (0x0004)  
};

/// Struct /Game/JigSInventory/1-System/PickupSystem/MPContainers/Data/MpContentRep.MpContentRep
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMpContentRep
{ 
	TArray<FContainerPickupsInfo>                      Containers_20_C2E8C4AF45214D8A0EA5FFB5B79FB01F;             // 0x0000   (0x0010)  
	TArray<FContainerPickupsInfo>                      ContainerItems_21_F6A0AC9A4A15CD199AC2A9A84BB7451D;         // 0x0010   (0x0010)  
};

/// Struct /Game/JigSInventory/1-System/PickupSystem/S_LootChanceModifier.S_LootChanceModifier
/// Size: 0x0009 (0x000000 - 0x000009)
struct FS_LootChanceModifier
{ 
	bool                                               IncreaseFood_3_C01F50E149B504C1EDEBCA9A75D58C51;            // 0x0000   (0x0001)  
	bool                                               IncreaseDrink_4_7E33BDA441F405DB7EEA5FB36A38C6D1;           // 0x0001   (0x0001)  
	bool                                               IncreaseAid_5_570FB3D5419A2E3963F756A18B7262F4;             // 0x0002   (0x0001)  
	bool                                               DecreasePistol_9_E7F8BFEA48B69A39092E4B985FC9037D;          // 0x0003   (0x0001)  
	bool                                               DecreaseRifle_10_74CF55A144872FF9261A31899E191547;          // 0x0004   (0x0001)  
	bool                                               DecreaseShotgun_15_396B9D35439AB2D7577DDBAADB788D78;        // 0x0005   (0x0001)  
	bool                                               DecreaseBackpack_11_1E572B934C15C364801FBC9D570188CF;       // 0x0006   (0x0001)  
	bool                                               DecreaseAid_13_33DA96434C4DE6DE459238B91F01EB16;            // 0x0007   (0x0001)  
	bool                                               DecreaseMelee_17_5CB48088489A531823132298E05616C6;          // 0x0008   (0x0001)  
};

/// Struct /Game/JigSInventory/1-System/Data/RarityColors.RarityColors
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRarityColors
{ 
	TEnumAsByte<SlotRarity>                            Rarity_7_1ECA466C401EECF14CB520ACC77B0DC9;                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FSlateColor                                        Color_5_5D95F13B4E70F46A857F15A7FB3F0687;                   // 0x0004   (0x0014)  
};

/// Struct /Game/JigSInventory/1-System/Data/ContainerPickupsInfo.ContainerPickupsInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FContainerPickupsInfo
{ 
	int32_t                                            UniqueServerID_17_C49AE0DA449ACAE3BE4633A263303B68;         // 0x0000   (0x0004)  
	FName                                              ItemName_27_4082F0E14C2C9C8DEEA71CAD0FE1A1DE;               // 0x0004   (0x0008)  
	int32_t                                            Count_30_3E65AE454D385E42A00C0B80BA377053;                  // 0x000C   (0x0004)  
	double                                             Durability_36_A2286DB1453E802D6EBA6F8C1F88BE45;             // 0x0010   (0x0008)  
	double                                             Price_33_4198BD364CCDDF5B5C057793EBB6B62B;                  // 0x0018   (0x0008)  
	bool                                               IsContainer_14_0198F62E4F1B93DD8B4D6E92B7E3EA45;            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            ContainerMotherID_12_33D59C5047C31FF0367835AAF5ABE05D;      // 0x0024   (0x0004)  
	int32_t                                            SlotIndex_6_8ED1F34A4AF1D565616883B80192E3DD;               // 0x0028   (0x0004)  
	bool                                               Rotated_9_3CFE5D9342A81FB1FF17DEB7B491CE56;                 // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	TArray<int32_t>                                    HostedByIndexes_24_0340D561440141A13C19C6B2CEE1E7DA;        // 0x0030   (0x0010)  
	double                                             SellPrice_39_2ED03A98495B5434C7FA02960F6E2819;              // 0x0040   (0x0008)  
	double                                             MaxDurability_42_F2490B3C49B1A16B80DDC4ACC3F6E1D1;          // 0x0048   (0x0008)  
	int32_t                                            WeaponAmmoCount_45_C682C76C43D7CCCC6F51C2825FE6A2F4;        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FPickupAttachments                                 AttachmentsInfo_48_563559D847364EBE4B183C8E373D950C;        // 0x0058   (0x0010)  
};

/// Struct /Game/JigSInventory/1-System/Data/DefaultItemInfo.DefaultItemInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDefaultItemInfo
{ 
	FName                                              ID_8_A4671602429751065B0F1A847C871333;                      // 0x0000   (0x0008)  
	int32_t                                            Count_4_3A0BA4F14039FFC27BBB0DA42FD44C10;                   // 0x0008   (0x0004)  
	int32_t                                            ServerUID_14_3F4D7B3347D02945734A71A4FA29B178;              // 0x000C   (0x0004)  
	double                                             Price_17_08673FF64B06D7231DF1E9A189E20E31;                  // 0x0010   (0x0008)  
	int32_t                                            WeaponAmmoCount_20_0603AAC64412400EE2F98B91AC1CF81F;        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	double                                             Durability_23_0BDB4E7E4114538825EBAF8415D3AD14;             // 0x0020   (0x0008)  
	double                                             MaxDurability_25_1002D3C543BA24CCBC229F932479EBD5;          // 0x0028   (0x0008)  
	FPickupAttachments                                 AttachmentsInfo_28_150D309C4B8CA204FBD4A892496869DA;        // 0x0030   (0x0010)  
};

/// Struct /Game/JigSInventory/1-System/PickupSystem/Data/AttachmentInfo.AttachmentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAttachmentInfo
{ 
	FName                                              ID_6_32A630D34243B40EE616889524FE6B5E;                      // 0x0000   (0x0008)  
	FName                                              Socket_5_AC038A9B42D3A10760AA86B469983883;                  // 0x0008   (0x0008)  
};

/// Struct /Game/JigSInventory/1-System/PickupSystem/Data/PickupAttachments.PickupAttachments
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPickupAttachments
{ 
	TArray<FAttachmentInfo>                            Attachments_3_B0A230F4484B8D45633F3FB6A2BA5389;             // 0x0000   (0x0010)  
};

/// Struct /Game/JigSInventory/1-System/Data/DisassembleSettings.DisassembleSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDisassembleSettings
{ 
	bool                                               DIsassembable_1_7B25A4CD4A89DB8177B3188099045245;           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Metal_4_3F2ABB79428AE99E2D075D9D2BC92E9E;                   // 0x0004   (0x0004)  
	int32_t                                            Rag_6_1EC879494FDB3A05F875A08DF69F5F77;                     // 0x0008   (0x0004)  
	int32_t                                            Chemical_8_F3AE2A9F497FEDDEE01389B71F8D9C92;                // 0x000C   (0x0004)  
};

/// Struct /Game/JigSInventory/1-System/Data/FItemInfo.FItemInfo
/// Size: 0x0220 (0x000000 - 0x000220)
struct FFItemInfo
{ 
	int32_t                                            ItemID_35_1737366145EEBA44086DB6ACE0E9C90F;                 // 0x0000   (0x0004)  
	int32_t                                            UniqueServerID_83_19E6C8FE42B778BAE918F79F1D85AE2A;         // 0x0004   (0x0004)  
	TEnumAsByte<JSItemType>                            Type_12_E22AD1CB453807664569C7949C6F4AB9;                   // 0x0008   (0x0001)  
	TEnumAsByte<SlotRarity>                            Rarity_38_07F066D7469AAC458F4C5EAE38A3404D;                 // 0x0009   (0x0001)  
	bool                                               CanStack_5_C8C8CA994713D5823B06DDB479DDA7A1;                // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x000B   (0x0001)  MISSED
	int32_t                                            MaxStack_8_4ABF8FB44B55528999A71A9403501AF2;                // 0x000C   (0x0004)  
	TWeakObjectPtr<UPaperSprite*>                      Image_218_E628F1D64A229DE1FEB2E4A836A2A062;                 // 0x0010   (0x0030)  
	FVector2D                                          SlotDimension_19_F030B0224A638DF8046DFBA1A9F61992;          // 0x0040   (0x0010)  
	int32_t                                            Count_22_BFF3027A4FD5D984887F16B0B821DF3E;                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	double                                             Weight_30_E433C36F456EFAB514CBEDAADFB5327D;                 // 0x0058   (0x0008)  
	double                                             AddingMaximumWeight_172_D5908E0D40A332B68964169B6DF33445;   // 0x0060   (0x0008)  
	double                                             Price_57_4C5179914BEF1256A839BC82633708AA;                  // 0x0068   (0x0008)  
	double                                             SellPrice_169_AC84F6EB4E9792F817A4D981CC889826;             // 0x0070   (0x0008)  
	FName                                              Name_148_93E2656145FAF7132466958620A18F32;                  // 0x0078   (0x0008)  
	FText                                              DisplayName_86_2237A1B6401F88D046C1FFB42F1AE9E1;            // 0x0080   (0x0018)  
	FText                                              Description_27_45B737B141296650099E5D8976095DA0;            // 0x0098   (0x0018)  
	UFMODEvent*                                        DropSound_140_F650CD1C4D08B863C42B87A31E1B6B21;             // 0x00B0   (0x0008)  
	bool                                               IsContainer__63_3AD174BB4850528B424E14A0C4C8572B;           // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FVector2D                                          Container_Dimension_65_6D47220C4F2046154883BABEAB9FD1E8;    // 0x00C0   (0x0010)  
	TArray<TEnumAsByte>                                ContainerSupportedItems_62_F265E89F42E4E8297D366D9210B5C2C7; // 0x00D0   (0x0010)  
	bool                                               OpenContainerOnDoubleClick__67_68B91ADA4ECCFD7451C90F9CC7FC8C88; // 0x00E0   (0x0001)  
	bool                                               Rotated__59_F26C07E6426F46EEC5E69AA45599BE1A;               // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x00E2   (0x0006)  MISSED
	UClass*                                            ActorClass_223_77A75A04464A96A5A5D68DB6F2799286;            // 0x00E8   (0x0008)  
	TArray<FName>                                      SupportedAttachmentIDs_147_6C43851D43640AF0030953920C18596C; // 0x00F0   (0x0010)  
	FPickupAttachments                                 AttachmentsInfo_91_2F6158F24439C5DBAD74F798FE8DB22B;        // 0x0100   (0x0010)  
	TWeakObjectPtr<UClass*>                            SpecialContainerWidget_219_5352E1BC43874D84D3B55FA48815DAA5; // 0x0110   (0x0030)  
	UUserWidget*                                       SpecialContainerRef_221_7EA1683D4FDD0D5BA6B8758A430EC4BE;   // 0x0140   (0x0008)  
	bool                                               OpenSpecialWidgetOnDoubleClick__106_186A542A44E7D3835F3CD8B912CED612; // 0x0148   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	TWeakObjectPtr<UStaticMesh*>                       Mesh_224_36CB7DF24AD9484779C91382C5DBEBCE;                  // 0x0150   (0x0030)  
	TArray<FEffectContructor>                          Effects_115_6036120A4D6F9C48D33CD283D3929C38;               // 0x0180   (0x0010)  
	bool                                               IsUsable_119_BDDCE2504EE8CCBC9138509B1D7E9A8E;              // 0x0190   (0x0001)  
	EItemType                                          LootType_123_ACA3E5444DAB48150571839C35C09ADD;              // 0x0191   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0192   (0x0002)  MISSED
	int32_t                                            WeaponAmmoCount_127_B1B113B84D74B28D56B83EB337E5D027;       // 0x0194   (0x0004)  
	TEnumAsByte<BPE_FireMode>                          FireMode_207_5BA61B7947DB36053B7BEF847E822460;              // 0x0198   (0x0001)  
	TEnumAsByte<BPE_AmmoClass>                         AmmoClass_217_539A229A463EDEC3B7623AB5E8E51D22;             // 0x0199   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x019A   (0x0006)  MISSED
	double                                             MaxDurability_133_DE24AAEF43903D46F72E97B1D30A9A08;         // 0x01A0   (0x0008)  
	double                                             Durability_134_8F07298842FAE8804B3788B5ECCCFEE6;            // 0x01A8   (0x0008)  
	UPaperSprite*                                      BW_Image_137_70FD5D2E455DC578D18735A6D26C2ABD;              // 0x01B0   (0x0008)  
	bool                                               Resource__139_8A2869614526546E1F9B268CC5D359A8;             // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x01B9   (0x0007)  MISSED
	UFMODEvent*                                        DragSound_143_FD6BDEC549347AEA8302EA8F0B7D7658;             // 0x01C0   (0x0008)  
	FDisassembleSettings                               DiassembleSettings_146_8D85F60B4B24D88BFFC00FA6A450203B;    // 0x01C8   (0x0010)  
	TEnumAsByte<ELootTypes>                            LootTypes_154_CB5777FA46CF748F997685AB6F6B632C;             // 0x01D8   (0x0001)  
	TEnumAsByte<EDismantleType>                        DismantleType_162_12C170BF43D8AC3318BA418D4708309D;         // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x01DA   (0x0006)  MISSED
	TWeakObjectPtr<UPaperSprite*>                      ImageWorkbench_225_31A417854B56FC92FF438092D7477CF6;        // 0x01E0   (0x0030)  
	TEnumAsByte<E_ItemColorTypes>                      ColorType_199_CBE31A644367F5485A2B43AFB63E9922;             // 0x0210   (0x0001)  
	TEnumAsByte<InfoType>                              InfoType_204_6D7171524FDF4BC2F474AB90E0078F89;              // 0x0211   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x0212   (0x0002)  MISSED
	int32_t                                            ArmorLevel_211_FFDAB12E4A8ED3FA0E55D0A4C52BF504;            // 0x0214   (0x0004)  
	UFMODEvent*                                        EquipSound_214_D3A194F04AFEAA7B29A28EA106473219;            // 0x0218   (0x0008)  
};

/// Class /Game/JigSInventory/1-System/PickupSystem/Data/PickupInterface.PickupInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UPickupInterface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AStatM_MainPickupClass_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              MainStaticMesh;                                             // 0x0298   (0x0008)  
	UPickupComponent_C*                                PickupComponent;                                            // 0x02A0   (0x0008)  
	int32_t                                            NewCount;                                                   // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	USkeletalMesh*                                     SkeletalMeshAsset;                                          // 0x02B0   (0x0008)  
	ACharacter*                                        OwnerChar;                                                  // 0x02B8   (0x0008)  
	FName                                              AttachToSocket;                                             // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.IsInWater
	void IsInWater(bool& InWater);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.IsPlayer
	void IsPlayer(bool& IsPlayer);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.SetEnableSmoothSync
	void SetEnableSmoothSync(bool NewEnable, bool& Success);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerItemCountByName
	void PlayerItemCountByName(FString ItemName, int32_t& Count);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerGetMesh
	void PlayerGetMesh(USkeletalMeshComponent*& Mesh);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerAddItem
	void PlayerAddItem(FFItemInfo ItemInfo, UWBP_AttachmentCell_C* ActiveCell, bool& Added);                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.GetMuzzleLocation
	void GetMuzzleLocation(FVector& Muzzle);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.GetSkeletalAsset
	void GetSkeletalAsset(USkeletalMesh*& SkelRef);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.GetPickupComponent
	void GetPickupComponent(UPickupComponent_C*& PickupCompo);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.getMesh
	void getMesh(UMeshComponent*& MeshRef);                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.GI_TileLoaded
	void GI_TileLoaded(FName TileName);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.GI_TileUnloaded
	void GI_TileUnloaded(FName TileName);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.Craft
	void Craft(APawn* Player);                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.HeatUpBonfire
	void HeatUpBonfire(APawn* Player);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.CallLootAnim
	void CallLootAnim(double LootingHeight, bool LootPointOpened);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.OpenLootRPC
	void OpenLootRPC(ALootPoint_C* LootPoint);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.ShowSimpleUIText
	void ShowSimpleUIText(FString String);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.OpenDoorRPC
	void OpenDoorRPC(ABP_Door_C* Door, bool IsOpen);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.PlayerCanisterAction
	void PlayerCanisterAction(bool Attach, ABP_Canister_C* Canister);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.CampPlaceBegin
	void CampPlaceBegin();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.CampPlaceEnd
	void CampPlaceEnd();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.CampBuildInstant
	void CampBuildInstant();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.Interact
	void Interact(bool NewParam);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.SetPlayerCollisionInCar
	void SetPlayerCollisionInCar(bool NewEnable);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.SetPickupPhysicsEnabled
	void SetPickupPhysicsEnabled(bool Enable?);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.SetEquipped
	void SetEquipped(bool Equipped);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/StatM_MainPickupClass.StatM_MainPickupClass_C.ExecuteUbergraph_StatM_MainPickupClass
	void ExecuteUbergraph_StatM_MainPickupClass(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_ItemSizePreview.WBP_ItemSizePreview_C
/// Size: 0x0028 (0x000280 - 0x0002A8)
class UWBP_ItemSizePreview_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UUniformGridPanel*                                 UniformGridPanel_Content;                                   // 0x0288   (0x0008)  
	UClass*                                            WidgetImageClass;                                           // 0x0290   (0x0008)  
	FVector2D                                          SlotDim;                                                    // 0x0298   (0x0010)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_ItemSizePreview.WBP_ItemSizePreview_C.SetDimention
	void SetDimention(FVector2D Dimention);                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_ItemSizePreview.WBP_ItemSizePreview_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_ItemSizePreview.WBP_ItemSizePreview_C.ExecuteUbergraph_WBP_ItemSizePreview
	void ExecuteUbergraph_WBP_ItemSizePreview(int32_t EntryPoint);                                                           // [0x2407bf0] Final                
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C
/// Size: 0x04F0 (0x000280 - 0x000770)
class UWBP_LootItem_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Deselect_Anim;                                              // 0x0288   (0x0008)  
	UWidgetAnimation*                                  Select_Anim;                                                // 0x0290   (0x0008)  
	UWidgetAnimation*                                  Hover_Anim;                                                 // 0x0298   (0x0008)  
	UBackgroundBlur*                                   BackgroundBlur;                                             // 0x02A0   (0x0008)  
	UImage*                                            Image_CountBG_Default;                                      // 0x02A8   (0x0008)  
	UImage*                                            Image_CountBG_Hovered;                                      // 0x02B0   (0x0008)  
	UImage*                                            Image_CountBG_Selected;                                     // 0x02B8   (0x0008)  
	UImage*                                            Image_ItemBG_Default;                                       // 0x02C0   (0x0008)  
	UImage*                                            Image_ItemBG_Hovered;                                       // 0x02C8   (0x0008)  
	UImage*                                            Image_ItemBG_Selected;                                      // 0x02D0   (0x0008)  
	UImage*                                            Image_ItemBG_Shining;                                       // 0x02D8   (0x0008)  
	UImage*                                            Image_ItemIcon;                                             // 0x02E0   (0x0008)  
	UJSIContainer_C*                                   JSIContainer_Storage;                                       // 0x02E8   (0x0008)  
	UTextBlock*                                        Text_Count;                                                 // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FS_ItemsToCraft                                    CraftItemData;                                              // 0x0300   (0x0150)  
	FFItemInfo                                         ItemData;                                                   // 0x0450   (0x0220)  
	int32_t                                            Counter;                                                    // 0x0670   (0x0004)  
	FName                                              ItemName;                                                   // 0x0674   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x067C   (0x0004)  MISSED
	ASurvivalPlayer_C*                                 PlayerRef;                                                  // 0x0680   (0x0008)  
	FMulticastInlineDelegate                           OnSelected;                                                 // 0x0688   (0x0010)  
	bool                                               CannotBeCrafted;                                            // 0x0698   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0699   (0x0007)  MISSED
	FContainerPickupsInfo                              Pickups_Info;                                               // 0x06A0   (0x0068)  
	bool                                               CraftStarted;                                               // 0x0708   (0x0001)  
	bool                                               CraftEnded;                                                 // 0x0709   (0x0001)  
	bool                                               CraftFinished;                                              // 0x070A   (0x0001)  
	bool                                               DismantlingStarted;                                         // 0x070B   (0x0001)  
	bool                                               DismantlingEnded;                                           // 0x070C   (0x0001)  
	bool                                               DismantlingFinished;                                        // 0x070D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x070E   (0x0002)  MISSED
	FMulticastInlineDelegate                           OnCraftingFinished;                                         // 0x0710   (0x0010)  
	FMulticastInlineDelegate                           OnDismantlingFinished;                                      // 0x0720   (0x0010)  
	FMulticastInlineDelegate                           OnNotEnoughtResources;                                      // 0x0730   (0x0010)  
	FMulticastInlineDelegate                           OnNotEnoughtInventorySpace;                                 // 0x0740   (0x0010)  
	int32_t                                            TempCounter;                                                // 0x0750   (0x0004)  
	bool                                               Hovered;                                                    // 0x0754   (0x0001)  
	bool                                               Selected;                                                   // 0x0755   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0756   (0x0002)  MISSED
	FVector2D                                          ClickPos;                                                   // 0x0758   (0x0010)  
	UJSI_Slot_C*                                       Slot_Item_Ref;                                              // 0x0768   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnMouseButtonDown
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnDragDetected
	void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);                  // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.UpdateCount
	void UpdateCount();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnLoaded_FDFF71BD49C265FBDD0D8AB14B11263A
	void OnLoaded_FDFF71BD49C265FBDD0D8AB14B11263A(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.UpdateItemData
	void UpdateItemData(FFItemInfo ItemData);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.Deselect
	void Deselect();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.Select
	void Select();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.Hover
	void Hover();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.Unhover
	void Unhover();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnMouseEnter
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.ExecuteUbergraph_WBP_LootItem
	void ExecuteUbergraph_WBP_LootItem(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnNotEnoughtInventorySpace__DelegateSignature
	void OnNotEnoughtInventorySpace__DelegateSignature(UWBP_CraftItem_C* Item);                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnNotEnoughtResources__DelegateSignature
	void OnNotEnoughtResources__DelegateSignature(UWBP_CraftItem_C* Item);                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnDismantlingFinished__DelegateSignature
	void OnDismantlingFinished__DelegateSignature(UWBP_CraftItem_C* Item);                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnCraftingFinished__DelegateSignature
	void OnCraftingFinished__DelegateSignature(UWBP_CraftItem_C* Item);                                                      // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootItem.WBP_LootItem_C.OnSelected__DelegateSignature
	void OnSelected__DelegateSignature(UWBP_LootItem_C* Item);                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C
/// Size: 0x0288 (0x000280 - 0x000508)
class UWBP_LootEntry_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  Hover_Anim;                                                 // 0x0288   (0x0008)  
	UImage*                                            Image_BG;                                                   // 0x0290   (0x0008)  
	UImage*                                            Image_BG_Hovered;                                           // 0x0298   (0x0008)  
	UTextBlock*                                        TextBlock_Description;                                      // 0x02A0   (0x0008)  
	UTextBlock*                                        TextBlock_Name;                                             // 0x02A8   (0x0008)  
	UWBP_ItemSizePreview_C*                            WBP_ItemSizePreview;                                        // 0x02B0   (0x0008)  
	UWBP_LootItem_C*                                   WBP_LootItem;                                               // 0x02B8   (0x0008)  
	FFItemInfo                                         ItemInfo;                                                   // 0x02C0   (0x0220)  
	bool                                               Hovered;                                                    // 0x04E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04E1   (0x0007)  MISSED
	FVector2D                                          ClickPos;                                                   // 0x04E8   (0x0010)  
	FMulticastInlineDelegate                           OnEntryDragged;                                             // 0x04F8   (0x0010)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.SetUniqueID
	void SetUniqueID(int32_t UniqueId);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.OnDragDetected
	void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);                  // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.OnMouseButtonDown
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.GetUniqueID
	void GetUniqueID(int32_t& UniqueId);                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.OnMouseEnter
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.ExecuteUbergraph_WBP_LootEntry
	void ExecuteUbergraph_WBP_LootEntry(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/LootEntry/WBP_LootEntry.WBP_LootEntry_C.OnEntryDragged__DelegateSignature
	void OnEntryDragged__DelegateSignature(UWBP_LootEntry_C* EntryRef);                                                      // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C
/// Size: 0x0060 (0x000280 - 0x0002E0)
class UMPContainerWidget_v2_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UImage*                                            Image_EmptyBG;                                              // 0x0288   (0x0008)  
	UImage*                                            Image_TextBG;                                               // 0x0290   (0x0008)  
	USizeBox*                                          SizeBox_Empty;                                              // 0x0298   (0x0008)  
	UVerticalBox*                                      VerticalBox;                                                // 0x02A0   (0x0008)  
	TArray<UWBP_LootEntry_C*>                          ArrayOfItems;                                               // 0x02A8   (0x0010)  
	FMulticastInlineDelegate                           OnEntryDragged;                                             // 0x02B8   (0x0010)  
	FMulticastInlineDelegate                           OnContainerDropped;                                         // 0x02C8   (0x0010)  
	UWBP_LootEntry_C*                                  DraggedEntry;                                               // 0x02D8   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.OnDrop
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.RemoveItem
	void RemoveItem(FFItemInfo ItemInfo);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.AddItem
	void AddItem(FFItemInfo ItemInfo, UWBP_LootEntry_C*& EntryRef);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.Clear
	void Clear();                                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.EntryDragged
	void EntryDragged(UWBP_LootEntry_C* EntryRef);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.ExecuteUbergraph_MPContainerWidget_v2
	void ExecuteUbergraph_MPContainerWidget_v2(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.OnContainerDropped__DelegateSignature
	void OnContainerDropped__DelegateSignature(UJSIContainer_C* FromContainerRef, UJSI_Slot_C* FromSlotRef, UWBP_LootEntry_C* ToEntryRef, UJSI_Slot_C* ToSlotRef); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget_v2.MPContainerWidget_v2_C.OnEntryDragged__DelegateSignature
	void OnEntryDragged__DelegateSignature(UWBP_LootEntry_C* EntryRef);                                                      // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/Data/ItemsFuncLibrary.ItemsFuncLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemsFuncLibrary_C : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Game/JigSInventory/1-System/Widgets/WBP_TutorialHighlight.WBP_TutorialHighlight_C
/// Size: 0x0008 (0x000280 - 0x000288)
class UWBP_TutorialHighlight_C : public UUserWidget : UUserWidget
{ 
public:
	UOverlay*                                          Overlay_TutorialHighlight;                                  // 0x0280   (0x0008)  
};

/// Class /Game/JigSInventory/1-System/Widgets/HoverDrag/Hover/OnHoverTooltipWidget.OnHoverTooltipWidget_C
/// Size: 0x0129 (0x000280 - 0x0003A9)
class UOnHoverTooltipWidget_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UImage*                                            Background;                                                 // 0x0288   (0x0008)  
	UCanvasPanel*                                      CanvasPanel;                                                // 0x0290   (0x0008)  
	USizeBox*                                          DownBlur;                                                   // 0x0298   (0x0008)  
	UImage*                                            Image;                                                      // 0x02A0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02A8   (0x0008)  
	UImage*                                            Image_ItemIcon;                                             // 0x02B0   (0x0008)  
	USizeBox*                                          ImageSizeBox;                                               // 0x02B8   (0x0008)  
	UMultiLineEditableTextBox*                         MultiLineEditableTextBox_Description;                       // 0x02C0   (0x0008)  
	USafeZone*                                         SafeZone;                                                   // 0x02C8   (0x0008)  
	UTextBlock*                                        TextBox_Damage;                                             // 0x02D0   (0x0008)  
	UTextBlock*                                        TextBox_Name;                                               // 0x02D8   (0x0008)  
	USizeBox*                                          UpperBlur;                                                  // 0x02E0   (0x0008)  
	FText                                              SlotName;                                                   // 0x02E8   (0x0018)  
	FText                                              SlotDescription;                                            // 0x0300   (0x0018)  
	double                                             Price;                                                      // 0x0318   (0x0008)  
	double                                             Weight;                                                     // 0x0320   (0x0008)  
	int32_t                                            Count;                                                      // 0x0328   (0x0004)  
	int32_t                                            DefaultSize;                                                // 0x032C   (0x0004)  
	FSlateFontInfo                                     DefaultFont;                                                // 0x0330   (0x0058)  
	int32_t                                            ItemUID;                                                    // 0x0388   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	UPaperSprite*                                      SpriteIcon;                                                 // 0x0390   (0x0008)  
	double                                             SlotSize;                                                   // 0x0398   (0x0008)  
	double                                             Durability;                                                 // 0x03A0   (0x0008)  
	TEnumAsByte<JSItemType>                            LootType;                                                   // 0x03A8   (0x0001)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/Hover/OnHoverTooltipWidget.OnHoverTooltipWidget_C.Update
	void Update();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/Hover/OnHoverTooltipWidget.OnHoverTooltipWidget_C.SetSizeOnHoverSlot
	void SetSizeOnHoverSlot(FVector2D IconSize, FVector2D WidgetSize, double IconHeight);                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/Hover/OnHoverTooltipWidget.OnHoverTooltipWidget_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/Hover/OnHoverTooltipWidget.OnHoverTooltipWidget_C.ExecuteUbergraph_OnHoverTooltipWidget
	void ExecuteUbergraph_OnHoverTooltipWidget(int32_t EntryPoint);                                                          // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C
/// Size: 0x0120 (0x000280 - 0x0003A0)
class UJigSplitWidget_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  FadeOut_Anim;                                               // 0x0288   (0x0008)  
	UWidgetAnimation*                                  FadeIn_Anim;                                                // 0x0290   (0x0008)  
	UButton*                                           Button_ModalClose;                                          // 0x0298   (0x0008)  
	UButton*                                           Button_Slider;                                              // 0x02A0   (0x0008)  
	UButton*                                           Button_SwitchLeft;                                          // 0x02A8   (0x0008)  
	UButton*                                           Button_SwitchRight;                                         // 0x02B0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02B8   (0x0008)  
	UImage*                                            Image;                                                      // 0x02C0   (0x0008)  
	UImage*                                            Image_BG;                                                   // 0x02C8   (0x0008)  
	UImage*                                            Image_VectorL;                                              // 0x02D0   (0x0008)  
	UImage*                                            Image_VectorR;                                              // 0x02D8   (0x0008)  
	UOverlay*                                          Overlay_DialogContent;                                      // 0x02E0   (0x0008)  
	UProgressBar*                                      Plus;                                                       // 0x02E8   (0x0008)  
	USizeBox*                                          SizeBox_CountSlider;                                        // 0x02F0   (0x0008)  
	USizeBox*                                          SizeBox_Progress;                                           // 0x02F8   (0x0008)  
	USlider*                                           Slider;                                                     // 0x0300   (0x0008)  
	USlider*                                           Slider_Main;                                                // 0x0308   (0x0008)  
	UTextBlock*                                        TextBlock_CurrentCount;                                     // 0x0310   (0x0008)  
	UTextBlock*                                        TextBlock_ItemName;                                         // 0x0318   (0x0008)  
	UTextBlock*                                        TextBlock_ItemName;                                         // 0x0320   (0x0008)  
	UTextBlock*                                        TextBlock_Max;                                              // 0x0328   (0x0008)  
	UTextBlock*                                        TextBlockWhattodo;                                          // 0x0330   (0x0008)  
	UW_ModalWindowButton_C*                            W_BaseDialogButton_Accept;                                  // 0x0338   (0x0008)  
	UW_ModalWindowButton_C*                            W_BaseDialogButton_Decline;                                 // 0x0340   (0x0008)  
	UJSIContainer_C*                                   ContainerRec;                                               // 0x0348   (0x0008)  
	UJSI_Slot_C*                                       slotRef;                                                    // 0x0350   (0x0008)  
	int32_t                                            MaxCount;                                                   // 0x0358   (0x0004)  
	int32_t                                            CurrentValue;                                               // 0x035C   (0x0004)  
	int32_t                                            ToSlot;                                                     // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	double                                             Weight;                                                     // 0x0368   (0x0008)  
	FTimerHandle                                       PressedIncreaseSplitItem_Timer;                             // 0x0370   (0x0008)  
	FMulticastInlineDelegate                           NewEventDispatcher;                                         // 0x0378   (0x0010)  
	FTimerHandle                                       PressedDecreaseSplitItem_Timer;                             // 0x0388   (0x0008)  
	bool                                               NewVar;                                                     // 0x0390   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0391   (0x0007)  MISSED
	double                                             SliderValue;                                                // 0x0398   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.TempFItem
	void TempFItem(FFItemInfo& StructOut);                                                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.ChangeCountOfSplitItem
	void ChangeCountOfSplitItem(bool bIsNeedToIncrease);                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.Finished_F395720742C9261F785F698171BADDCE
	void Finished_F395720742C9261F785F698171BADDCE();                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.OnCounterValueChanged
	void OnCounterValueChanged(double Value);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Slider_Main_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Slider_Main_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.RemoveItem
	void RemoveItem();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.Delete
	void Delete();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Button_126_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_126_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();           // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.SetTextWeight
	void SetTextWeight();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Button_Slider_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_Slider_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();        // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_W_ModalWindowButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	void BndEvt__JigSplitWidget_W_ModalWindowButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();             // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_W_ModalWindowButton_87_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	void BndEvt__JigSplitWidget_W_ModalWindowButton_87_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();          // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.AcceptSplit
	void AcceptSplit();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Button_SwitchRight_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_SwitchRight_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();   // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Button_SwitchLeft_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_SwitchLeft_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();    // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Button_SwitchRight_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_SwitchRight_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();  // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.OnIncreaseSplitItem
	void OnIncreaseSplitItem();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.OnDecreaseSplitItem
	void OnDecreaseSplitItem();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Button_SwitchLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_SwitchLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();   // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Slider_539_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Slider_539_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.BndEvt__JigSplitWidget_Slider_539_K2Node_ComponentBoundEvent_15_OnMouseCaptureBeginEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Slider_539_K2Node_ComponentBoundEvent_15_OnMouseCaptureBeginEvent__DelegateSignature();      // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.ExecuteUbergraph_JigSplitWidget
	void ExecuteUbergraph_JigSplitWidget(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSplitWidget.JigSplitWidget_C.NewEventDispatcher__DelegateSignature
	void NewEventDispatcher__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/Widgets/ContainerWindow/ContainerWindowWidget.ContainerWindowWidget_C
/// Size: 0x0018 (0x000280 - 0x000298)
class UContainerWindowWidget_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UVerticalBox*                                      VBox;                                                       // 0x0288   (0x0008)  
	UJSI_Slot_C*                                       ItemRef;                                                    // 0x0290   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/ContainerWindow/ContainerWindowWidget.ContainerWindowWidget_C.GetListOfContainers
	void GetListOfContainers(TArray<UJSIContainer_C*>& Containers);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/ContainerWindow/ContainerWindowWidget.ContainerWindowWidget_C.SetItemReference
	void SetItemReference(UJSI_Slot_C* ItemRef);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/ContainerWindow/ContainerWindowWidget.ContainerWindowWidget_C.ExecuteUbergraph_ContainerWindowWidget
	void ExecuteUbergraph_ContainerWindowWidget(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

/// Class /Game/JigSInventory/1-System/Widgets/SpecialContainers/JSISpecialWidgetInterface.JSISpecialWidgetInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UJSISpecialWidgetInterface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C
/// Size: 0x0470 (0x000280 - 0x0006F0)
class UDropItemAmountSelector_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  FadeOut_Anim;                                               // 0x0288   (0x0008)  
	UWidgetAnimation*                                  FadeIn_Anim;                                                // 0x0290   (0x0008)  
	UW_ModalWindowButton_C*                            Button_Accept;                                              // 0x0298   (0x0008)  
	UW_ModalWindowButton_C*                            Button_Decline;                                             // 0x02A0   (0x0008)  
	UButton*                                           Button_FullIStack;                                          // 0x02A8   (0x0008)  
	UButton*                                           Button_FullIStack;                                          // 0x02B0   (0x0008)  
	UButton*                                           Button_Minus;                                               // 0x02B8   (0x0008)  
	UButton*                                           Button_Minus;                                               // 0x02C0   (0x0008)  
	UButton*                                           Button_Modal;                                               // 0x02C8   (0x0008)  
	UButton*                                           Button_Plus;                                                // 0x02D0   (0x0008)  
	UButton*                                           Button_Plus;                                                // 0x02D8   (0x0008)  
	UButton*                                           Button_Slider;                                              // 0x02E0   (0x0008)  
	UButton*                                           Button_SwitchLeft;                                          // 0x02E8   (0x0008)  
	UButton*                                           Button_SwitchRight;                                         // 0x02F0   (0x0008)  
	UImage*                                            Image;                                                      // 0x02F8   (0x0008)  
	UImage*                                            Image;                                                      // 0x0300   (0x0008)  
	UImage*                                            Image_BorderOfNumber;                                       // 0x0308   (0x0008)  
	UImage*                                            Image_BorderOfNumber;                                       // 0x0310   (0x0008)  
	UImage*                                            Image_ItemIcon;                                             // 0x0318   (0x0008)  
	UImage*                                            Image_ItemIcon;                                             // 0x0320   (0x0008)  
	UImage*                                            Image_VectorL;                                              // 0x0328   (0x0008)  
	UImage*                                            Image_VectorR;                                              // 0x0330   (0x0008)  
	UProgressBar*                                      Plus;                                                       // 0x0338   (0x0008)  
	USizeBox*                                          SizeBox_CountSlider;                                        // 0x0340   (0x0008)  
	USizeBox*                                          SizeBox_CurrentValue;                                       // 0x0348   (0x0008)  
	USizeBox*                                          SizeBox_MaxValue;                                           // 0x0350   (0x0008)  
	USizeBox*                                          SizeBox_Progress;                                           // 0x0358   (0x0008)  
	USlider*                                           Slider;                                                     // 0x0360   (0x0008)  
	USlider*                                           Slider_Main;                                                // 0x0368   (0x0008)  
	UTextBlock*                                        Text_Description;                                           // 0x0370   (0x0008)  
	UTextBlock*                                        Text_Description;                                           // 0x0378   (0x0008)  
	UTextBlock*                                        TextBlock_Count;                                            // 0x0380   (0x0008)  
	UTextBlock*                                        TextBlock_CurrentCount;                                     // 0x0388   (0x0008)  
	UTextBlock*                                        TextBlock_CurrentCount;                                     // 0x0390   (0x0008)  
	UTextBlock*                                        TextBlock_FullIStack;                                       // 0x0398   (0x0008)  
	UTextBlock*                                        TextBlock_FullIStack;                                       // 0x03A0   (0x0008)  
	UTextBlock*                                        TextBlock_ItemName;                                         // 0x03A8   (0x0008)  
	UTextBlock*                                        TextBlock_ItemName;                                         // 0x03B0   (0x0008)  
	UTextBlock*                                        TextBlock_ItemName;                                         // 0x03B8   (0x0008)  
	UTextBlock*                                        TextBlock_ItemName;                                         // 0x03C0   (0x0008)  
	UTextBlock*                                        TextBlock_ItemNameCurrent;                                  // 0x03C8   (0x0008)  
	UTextBlock*                                        TextBlock_Max;                                              // 0x03D0   (0x0008)  
	UTextBlock*                                        TextBlockWhattodo;                                          // 0x03D8   (0x0008)  
	UW_BaseDialogueButton_C*                           W_BaseDialogButton_Accept;                                  // 0x03E0   (0x0008)  
	UW_BaseDialogueButton_C*                           W_BaseDialogButton_Accept;                                  // 0x03E8   (0x0008)  
	UW_ModalWindowButton_C*                            W_BaseDialogButton_Accept;                                  // 0x03F0   (0x0008)  
	UW_BaseDialogueButton_C*                           W_BaseDialogButton_Decline;                                 // 0x03F8   (0x0008)  
	UW_BaseDialogueButton_C*                           W_BaseDialogButton_Decline;                                 // 0x0400   (0x0008)  
	UW_ModalWindowButton_C*                            W_BaseDialogButton_Decline;                                 // 0x0408   (0x0008)  
	UW_HintButtonNew_C*                                W_HintButtonLess;                                           // 0x0410   (0x0008)  
	UW_HintButtonNew_C*                                W_HintButtonMax;                                            // 0x0418   (0x0008)  
	UW_HintButtonNew_C*                                W_HintButtonMore;                                           // 0x0420   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher;                                             // 0x0428   (0x0008)  
	UDropItemBackGwidget_C*                            DropBackGRef;                                               // 0x0430   (0x0008)  
	UJSI_Slot_C*                                       ItemRef;                                                    // 0x0438   (0x0008)  
	int32_t                                            MaxCount;                                                   // 0x0440   (0x0004)  
	int32_t                                            CurrentValue;                                               // 0x0444   (0x0004)  
	double                                             C_WIDTH;                                                    // 0x0448   (0x0008)  
	double                                             C_HEIGHT;                                                   // 0x0450   (0x0008)  
	FTimerHandle                                       AnimTimer;                                                  // 0x0458   (0x0008)  
	double                                             WidthStep;                                                  // 0x0460   (0x0008)  
	double                                             HeightStep;                                                 // 0x0468   (0x0008)  
	bool                                               IsOpen;                                                     // 0x0470   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0471   (0x0007)  MISSED
	UJSIContainer_C*                                   ToContainer;                                                // 0x0478   (0x0008)  
	UJSIContainer_C*                                   From_Container;                                             // 0x0480   (0x0008)  
	double                                             Weight;                                                     // 0x0488   (0x0008)  
	FTimerHandle                                       InputControllerTimerHandle;                                 // 0x0490   (0x0008)  
	FTimerHandle                                       PressedIncreaseSplitItem_Timer;                             // 0x0498   (0x0008)  
	FTimerHandle                                       PressedDecreaseSplitItem_Timer;                             // 0x04A0   (0x0008)  
	float                                              Slider_Value;                                               // 0x04A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x04AC   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnAccept_ModalWindow_;                                      // 0x04B0   (0x0010)  
	FMulticastInlineDelegate                           OnDecline_ModalWindow_;                                     // 0x04C0   (0x0010)  
	FFItemInfo                                         Item_Info;                                                  // 0x04D0   (0x0220)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.CalculatePrice
	void CalculatePrice(bool UseSellPrice, int32_t& ResultPrice);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.GetMaxCount
	void GetMaxCount(int32_t& MaxCount);                                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.Change Count Of Split Item
	void Change Count Of Split Item(bool bIsNeedToIncrease);                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.StackValueManage
	void StackValueManage(int32_t NewValue);                                                                                 // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.InputController
	void InputController();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.DropItems
	void DropItems(int32_t Count);                                                                                           // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.Finished_8EBE1E1D47D136C0523681AF8A66B6FF
	void Finished_8EBE1E1D47D136C0523681AF8A66B6FF();                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__JigSplitWidget_Button_126_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__JigSplitWidget_Button_126_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();           // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.Hide
	void Hide();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.DropAll
	void DropAll();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_W_BaseDialogButton_Accept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	void BndEvt__DropItemAmountSelector_W_BaseDialogButton_Accept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_W_HintButtonMax_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	void BndEvt__DropItemAmountSelector_W_HintButtonMax_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();        // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_W_HintButtonLess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	void BndEvt__DropItemAmountSelector_W_HintButtonLess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();       // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_W_HintButtonMore_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	void BndEvt__DropItemAmountSelector_W_HintButtonMore_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();       // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_Minus_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_Minus_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_Plus_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_Plus_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_FullItems_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_FullItems_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_Accept_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_Accept_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();           // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.StopListenEvents
	void StopListenEvents();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Slider_Main_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Slider_Main_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_SwitchLeft_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_SwitchLeft_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_SwitchLeft_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_SwitchLeft_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_SwitchRight_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_SwitchRight_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_SwitchRight_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_SwitchRight_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.OnIncreaseSplitItem
	void OnIncreaseSplitItem();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.OnDecreaseSplitItem
	void OnDecreaseSplitItem();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Slider_539_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Slider_539_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature(float Value); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Slider_539_K2Node_ComponentBoundEvent_19_OnMouseCaptureBeginEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Slider_539_K2Node_ComponentBoundEvent_19_OnMouseCaptureBeginEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.Accept
	void Accept();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_Button_Slider_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	void BndEvt__DropItemAmountSelector_Button_Slider_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_W_BaseDialogButton_Accept_2_K2Node_ComponentBoundEvent_22_OnPressed__DelegateSignature
	void BndEvt__DropItemAmountSelector_W_BaseDialogButton_Accept_2_K2Node_ComponentBoundEvent_22_OnPressed__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.BndEvt__DropItemAmountSelector_W_BaseDialogButton_Decline_2_K2Node_ComponentBoundEvent_23_OnPressed__DelegateSignature
	void BndEvt__DropItemAmountSelector_W_BaseDialogButton_Decline_2_K2Node_ComponentBoundEvent_23_OnPressed__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.OnDecline
	void OnDecline();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.OnCounterValueChanged
	void OnCounterValueChanged(double Value);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.ExecuteUbergraph_DropItemAmountSelector
	void ExecuteUbergraph_DropItemAmountSelector(int32_t EntryPoint);                                                        // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.OnDecline(ModalWindow)__DelegateSignature
	void OnDecline(ModalWindow)__DelegateSignature();                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemAmountSelector.DropItemAmountSelector_C.OnAccept(ModalWindow)__DelegateSignature
	void OnAccept(ModalWindow)__DelegateSignature(UJSI_Slot_C* Ref, int32_t CurrentValue);                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C
/// Size: 0x0061 (0x000280 - 0x0002E1)
class UW_CategoryButton_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  HoverAnim;                                                  // 0x0288   (0x0008)  
	UWidgetAnimation*                                  SelectionAnim;                                              // 0x0290   (0x0008)  
	UButton*                                           Button_Category;                                            // 0x0298   (0x0008)  
	UImage*                                            Image_Icon;                                                 // 0x02A0   (0x0008)  
	UImage*                                            Image_Selection;                                            // 0x02A8   (0x0008)  
	UPaperSprite*                                      Icon;                                                       // 0x02B0   (0x0008)  
	double                                             Scale;                                                      // 0x02B8   (0x0008)  
	double                                             IconPositionX;                                              // 0x02C0   (0x0008)  
	bool                                               IsSelected;                                                 // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnClicked;                                                  // 0x02D0   (0x0010)  
	EItemType                                          CategoryType;                                               // 0x02E0   (0x0001)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.SetItemType
	void SetItemType(EItemType Type);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_24_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_24_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.OnClick
	void OnClick();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.Unclick
	void Unclick();                                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.ExecuteUbergraph_W_CategoryButton
	void ExecuteUbergraph_W_CategoryButton(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryButton.W_CategoryButton_C.OnClicked__DelegateSignature
	void OnClicked__DelegateSignature(UW_CategoryButton_C* ClickedWidget);                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryBar.W_CategoryBar_C
/// Size: 0x0068 (0x000280 - 0x0002E8)
class UW_CategoryBar_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_Aids;                                      // 0x0288   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_All;                                       // 0x0290   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_ClothArmor;                                // 0x0298   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_Exchangeable;                              // 0x02A0   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_FoodDrinks;                                // 0x02A8   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_Resources;                                 // 0x02B0   (0x0008)  
	UW_CategoryButton_C*                               W_CategoryButton_WeaponAmmo;                                // 0x02B8   (0x0008)  
	TArray<UW_CategoryButton_C*>                       ButtonsArray;                                               // 0x02C0   (0x0010)  
	UW_CategoryButton_C*                               SelectedCategory;                                           // 0x02D0   (0x0008)  
	FMulticastInlineDelegate                           OnClickedCategoryButton;                                    // 0x02D8   (0x0010)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryBar.W_CategoryBar_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryBar.W_CategoryBar_C.OnCategoryClicked
	void OnCategoryClicked(UW_CategoryButton_C* ClickedWidget);                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryBar.W_CategoryBar_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryBar.W_CategoryBar_C.ExecuteUbergraph_W_CategoryBar
	void ExecuteUbergraph_W_CategoryBar(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/W_CategoryBar.W_CategoryBar_C.OnClickedCategoryButton__DelegateSignature
	void OnClickedCategoryButton__DelegateSignature(UW_CategoryButton_C* Button);                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget.MPContainerWidget_C
/// Size: 0x0008 (0x000280 - 0x000288)
class UMPContainerWidget_C : public UUserWidget : UUserWidget
{ 
public:
	UJSIContainer_C*                                   MainInventoryContainer;                                     // 0x0280   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/MPContainerWidget.MPContainerWidget_C.InitCell
	void InitCell();                                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C
/// Size: 0x009C (0x000280 - 0x00031C)
class UInGameContainerWidget_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  FadeOut_Anim;                                               // 0x0288   (0x0008)  
	UWidgetAnimation*                                  FadeIn_Anim;                                                // 0x0290   (0x0008)  
	UButton*                                           Button;                                                     // 0x0298   (0x0008)  
	UJSIContainer_C*                                   MainInventoryContainer;                                     // 0x02A0   (0x0008)  
	UScrollBox*                                        ScrollBox_Items;                                            // 0x02A8   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x02B0   (0x0008)  
	UUMG_LabelText_C*                                  UMG_LabelText;                                              // 0x02B8   (0x0008)  
	UWBP_Scroller_C*                                   WBP_InventoryScroller;                                      // 0x02C0   (0x0008)  
	UW_StashTutorial_C*                                StashTutorialWidget;                                        // 0x02C8   (0x0008)  
	UMPInGameInventory_C*                              InventoryRef;                                               // 0x02D0   (0x0008)  
	ABP_Stash_C*                                       BP_Stash;                                                   // 0x02D8   (0x0008)  
	double                                             ScrollBarOpacity;                                           // 0x02E0   (0x0008)  
	UScrollBox*                                        Scroll_Box_Widget_Ref;                                      // 0x02E8   (0x0008)  
	FTimerHandle                                       ScrollBarOpacityTimer;                                      // 0x02F0   (0x0008)  
	ASurvivalPlayer_C*                                 Player_Ref;                                                 // 0x02F8   (0x0008)  
	ASurvPC_C*                                         As_Surv_PC;                                                 // 0x0300   (0x0008)  
	FMulticastInlineDelegate                           StashUpdatDispatcher;                                       // 0x0308   (0x0010)  
	int32_t                                            Columns;                                                    // 0x0318   (0x0004)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.CheckInventoryContainer
	bool CheckInventoryContainer(UObject* StashContainer);                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.FromInventoryDropInfo
	void FromInventoryDropInfo(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.InGameContainerWidget_AutoGenFunc
	void InGameContainerWidget_AutoGenFunc(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* SlotReceiver, UJSI_Slot_C* SlotDropped, bool SlotDroppedRemoved?); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.CanAddItem
	void CanAddItem(UJSIContainer_C* containerRef, UJSI_Slot_C* slotRef, bool& Result);                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.SetContainerRowsNumber
	void SetContainerRowsNumber(int32_t SlotsNumber);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.ScrollBarOpacityAnimTick
	void ScrollBarOpacityAnimTick();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.GetScrollBarRenderOpacity
	double GetScrollBarRenderOpacity(UScrollBox* ScrollBoxWidgetRef);                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.SetScrollBarRenderOpacity
	void SetScrollBarRenderOpacity(UScrollBox* ScrollBoxWidgetRef, double Opacity, FLinearColor TinpColor);                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.PlayScrollBarOpacityAnim
	void PlayScrollBarOpacityAnim(double Opacity, UScrollBox* ScrollBoxWidgetRef);                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.MoveItemToStash
	void MoveItemToStash();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.MoveItemToInventory
	void MoveItemToInventory(UJSIContainer_C* Container Ref, UJSI_Slot_C* Slot Ref);                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.EquipItem
	void EquipItem(UJSIContainer_C* Container Ref, UJSI_Slot_C* Slot Ref, bool& Equipped);                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.SetStashTutorialWidget
	void SetStashTutorialWidget(UW_StashTutorial_C* TutorialWidget);                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.FIlterItems
	void FIlterItems(EItemType Type);                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_12_DragEnd__DelegateSignature
	void BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_12_DragEnd__DelegateSignature();    // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_4_DropInfo_ContainerToContainer__DelegateSignature
	void BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_4_DropInfo_ContainerToContainer__DelegateSignature(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_5_OnContainerUpdate__DelegateSignature
	void BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_5_OnContainerUpdate__DelegateSignature(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.OnInventoryDoubleClick
	void OnInventoryDoubleClick(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_2_OnSlotDoubleClick__DelegateSignature
	void BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_2_OnSlotDoubleClick__DelegateSignature(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_0_OnSlotMouseButtonDown__DelegateSignature
	void BndEvt__InGameContainerWidget_MainInventoryContainer_K2Node_ComponentBoundEvent_0_OnSlotMouseButtonDown__DelegateSignature(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_Button_124_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__InGameContainerWidget_Button_124_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();    // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.Hide
	void Hide();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.BndEvt__InGameContainerWidget_ScrollBox_68_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature
	void BndEvt__InGameContainerWidget_ScrollBox_68_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.Show
	void Show();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.ExecuteUbergraph_InGameContainerWidget
	void ExecuteUbergraph_InGameContainerWidget(int32_t EntryPoint);                                                         // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/PickupSystem/MPContainers/Widget/InGameContainerWidget.InGameContainerWidget_C.StashUpdatDispatcher__DelegateSignature
	void StashUpdatDispatcher__DelegateSignature();                                                                          // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C
/// Size: 0x0060 (0x000280 - 0x0002E0)
class UDropItemBackGwidget_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UButton*                                           Button;                                                     // 0x0288   (0x0008)  
	FMulticastInlineDelegate                           ItemDropRequest;                                            // 0x0290   (0x0010)  
	UDropItemAmountSelector_C*                         AmountSelector;                                             // 0x02A0   (0x0008)  
	UJSI_Slot_C*                                       SlotReference;                                              // 0x02A8   (0x0008)  
	UUserWidget*                                       ParentWidget;                                               // 0x02B0   (0x0008)  
	FMulticastInlineDelegate                           OnButtonPressed;                                            // 0x02B8   (0x0010)  
	ASurvPC_C*                                         As_Surv_PC;                                                 // 0x02C8   (0x0008)  
	FMulticastInlineDelegate                           OnDropDeniedInTutorial;                                     // 0x02D0   (0x0010)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.Set Parent Widget
	void Set Parent Widget(UUserWidget* NewWidget);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.OnToggleSplitDialog
	void OnToggleSplitDialog(bool NewState);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.OnDrop
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.ShowSelector
	void ShowSelector(UJSI_Slot_C* Slot, UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer);                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.BndEvt__DropItemBackGwidget_Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__DropItemBackGwidget_Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();       // [0x2407bf0] BlueprintEvent       
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.OnInitialized
	void OnInitialized();                                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.ExecuteUbergraph_DropItemBackGwidget
	void ExecuteUbergraph_DropItemBackGwidget(int32_t EntryPoint);                                                           // [0x2407bf0] Final                
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.OnDropDeniedInTutorial__DelegateSignature
	void OnDropDeniedInTutorial__DelegateSignature(bool TutorReason, bool IsProtectiveCase);                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.OnButtonPressed__DelegateSignature
	void OnButtonPressed__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/DropItemBackGwidget.DropItemBackGwidget_C.ItemDropRequest__DelegateSignature
	void ItemDropRequest__DelegateSignature(UJSI_Slot_C* ItemRef, FFItemInfo ItemInfo, int32_t Count, UJSIContainer_C* Container); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C
/// Size: 0x010C (0x000280 - 0x00038C)
class UDragWidget_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_ImageCanvas;                                    // 0x0288   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_Root;                                           // 0x0290   (0x0008)  
	UImage*                                            Image_BG;                                                   // 0x0298   (0x0008)  
	UImage*                                            Image_ColorGradient;                                        // 0x02A0   (0x0008)  
	UImage*                                            Image_ItemIcon;                                             // 0x02A8   (0x0008)  
	UTextBlock*                                        TextBlock_Count;                                            // 0x02B0   (0x0008)  
	FVector2D                                          Size;                                                       // 0x02B8   (0x0010)  
	TWeakObjectPtr<UPaperSprite*>                      Image;                                                      // 0x02C8   (0x0030)  
	UJSI_Slot_C*                                       ParentSlot;                                                 // 0x02F8   (0x0008)  
	TArray<UJSIContainer_C*>                           ContainersDragOver;                                         // 0x0300   (0x0010)  
	FKey                                               RotateKey;                                                  // 0x0310   (0x0018)  
	bool                                               isKeyDown;                                                  // 0x0328   (0x0001)  
	bool                                               RotationChanged_;                                           // 0x0329   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x032A   (0x0006)  MISSED
	UJSI_Slot_C*                                       OnSlot;                                                     // 0x0330   (0x0008)  
	UDragDropOperation*                                Operation;                                                  // 0x0338   (0x0008)  
	bool                                               IsSlotRotated_;                                             // 0x0340   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0341   (0x0007)  MISSED
	double                                             InitImageRot;                                               // 0x0348   (0x0008)  
	bool                                               AdjustLocToMouse;                                           // 0x0350   (0x0001)  
	bool                                               isSplit_;                                                   // 0x0351   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0352   (0x0006)  MISSED
	UTexture*                                          ItemDragTexture;                                            // 0x0358   (0x0008)  
	bool                                               candrop;                                                    // 0x0360   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	UObject*                                           CanDropSprite;                                              // 0x0368   (0x0008)  
	UObject*                                           CannotDropSprite;                                           // 0x0370   (0x0008)  
	FVector2D                                          MoveOffset;                                                 // 0x0378   (0x0010)  
	int32_t                                            InitPivotIndex;                                             // 0x0388   (0x0004)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.GetRotationOffset
	void GetRotationOffset(FVector2D MoveOffset, FVector2D& RotationOffset);                                                 // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.GetPivotIndex
	void GetPivotIndex(int32_t& Ind);                                                                                        // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.GetMoveOffset
	FVector2D GetMoveOffset();                                                                                               // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.GetSlotBrushes
	void GetSlotBrushes(FSlateBrush& BG_Brush, FSlateBrush& Gradient_Brush);                                                 // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.OnKeyDown
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.AddContainer
	void AddContainer(UJSIContainer_C*& NewContainer);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.RotateKeyDown
	void RotateKeyDown();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/HoverDrag/DragWidget.DragWidget_C.ExecuteUbergraph_DragWidget
	void ExecuteUbergraph_DragWidget(int32_t EntryPoint);                                                                    // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/JigSInventory/1-System/Widgets/HoverDrag/JigSDragOperation.JigSDragOperation_C
/// Size: 0x001C (0x000090 - 0x0000AC)
class UJigSDragOperation_C : public UDragDropOperation : UDragDropOperation
{ 
public:
	UJSI_Slot_C*                                       slotRef;                                                    // 0x0090   (0x0008)  
	FVector2D                                          MouseDownPos;                                               // 0x0098   (0x0010)  
	int32_t                                            PivotIndex;                                                 // 0x00A8   (0x0004)  
};

/// Class /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C
/// Size: 0x0290 (0x0000A0 - 0x000330)
class UPickupComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	UDataTable*                                        DataSource;                                                 // 0x00A8   (0x0008)  
	FName                                              Item_ID;                                                    // 0x00B0   (0x0008)  
	FFItemInfo                                         PickupItemInfo;                                             // 0x00B8   (0x0220)  
	UJSIContainer_C*                                   containerRef;                                               // 0x02D8   (0x0008)  
	bool                                               Equipped;                                                   // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02E1   (0x0007)  MISSED
	TArray<FContainerPickupsInfo>                      ContainersData;                                             // 0x02E8   (0x0010)  
	TArray<FContainerPickupsInfo>                      ContainerItems;                                             // 0x02F8   (0x0010)  
	bool                                               HasUniqueID_;                                               // 0x0308   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0309   (0x0003)  MISSED
	int32_t                                            PlayerID;                                                   // 0x030C   (0x0004)  
	TArray<FContainerPickupsInfo>                      MPContainersData;                                           // 0x0310   (0x0010)  
	TArray<FContainerPickupsInfo>                      MPContainerItems;                                           // 0x0320   (0x0010)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.OnRep_PickupItemInfo
	void OnRep_PickupItemInfo();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.GetSpecialContainer
	void GetSpecialContainer(TWeakObjectPtr<UClass*>& SpecialContainerWidget);                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.JustaDummyFunc
	bool JustaDummyFunc();                                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.ClearContainerContent
	void ClearContainerContent(bool& Cleared);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.HasUniqueID
	void HasUniqueID(bool& HasUniqueID?);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.SetUniqueID
	void SetUniqueID(int32_t ID, bool& Success);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.AddContainerItem
	void AddContainerItem(FContainerPickupsInfo& ContainerItem, bool& Added);                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.AddContainer
	void AddContainer(FContainerPickupsInfo& Container, bool& Added);                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.SetPickupInfo
	void SetPickupInfo(FFItemInfo PickupItemInfo, bool& Updated);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.UpdateEquipped
	void UpdateEquipped(bool Equipped, bool& IsEquipped);                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.GetContainer
	void GetContainer(UJSIContainer_C*& containerRef);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.SetContainer
	void SetContainer(UJSIContainer_C* containerRef, bool& Done);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.UpdateCount
	void UpdateCount(int32_t Count, bool& Updated);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.GetCount
	void GetCount(int32_t& Count);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.GetItemNameCount
	void GetItemNameCount(FText& Name);                                                                                      // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.GetInfo
	void GetInfo(FFItemInfo& ItemInfo);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.Init
	void Init();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/PickupComponent.PickupComponent_C.ExecuteUbergraph_PickupComponent
	void ExecuteUbergraph_PickupComponent(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C
/// Size: 0x0488 (0x000280 - 0x000708)
class UJSIContainer_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UCanvasPanel*                                      CellContainer;                                              // 0x0288   (0x0008)  
	UBorder*                                           ContainerBorder;                                            // 0x0290   (0x0008)  
	UImage*                                            Image_Highlighter;                                          // 0x0298   (0x0008)  
	UOverlay*                                          MainOverlay;                                                // 0x02A0   (0x0008)  
	USizeBox*                                          SizeBox_Title;                                              // 0x02A8   (0x0008)  
	UTextBlock*                                        TextBlock_ContainerText;                                    // 0x02B0   (0x0008)  
	UUniformGridPanel*                                 Ungrid_Content;                                             // 0x02B8   (0x0008)  
	UUniformGridPanel*                                 Ungrid_SlotShadows;                                         // 0x02C0   (0x0008)  
	bool                                               Initialized;                                                // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C9   (0x0003)  MISSED
	int32_t                                            ContainerID;                                                // 0x02CC   (0x0004)  
	TEnumAsByte<ContainerType>                         ContainerType;                                              // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02D1   (0x0003)  MISSED
	int32_t                                            NumberOfRows;                                               // 0x02D4   (0x0004)  
	int32_t                                            NumberOfColumns;                                            // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	TArray<UJSI_Slot_C*>                               WSlots;                                                     // 0x02E0   (0x0010)  
	FVector2D                                          SlotSize;                                                   // 0x02F0   (0x0010)  
	FMargin                                            SlotPadding;                                                // 0x0300   (0x0010)  
	FSlateColor                                        SlotOnHoverColor;                                           // 0x0310   (0x0014)  
	FSlateColor                                        DragHighlightColor;                                         // 0x0324   (0x0014)  
	FSlateColor                                        InvalidDragHighlightColor;                                  // 0x0338   (0x0014)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	TArray<FRarityColors>                              RarityColors;                                               // 0x0350   (0x0010)  
	UPaperSprite*                                      SlotImage;                                                  // 0x0360   (0x0008)  
	FSlateColor                                        ImageTint;                                                  // 0x0368   (0x0014)  
	int32_t                                            CurrentSlotIndex;                                           // 0x037C   (0x0004)  
	TArray<UUniformGridSlot*>                          GridSlots;                                                  // 0x0380   (0x0010)  
	FLinearColor                                       ContainerTint;                                              // 0x0390   (0x0010)  
	TMap<int32_t, UJSI_Slot_C*>                        GridSlotsDic;                                               // 0x03A0   (0x0050)  
	TArray<UJSI_Slot_C*>                               HighlightedSlots;                                           // 0x03F0   (0x0010)  
	bool                                               CanDrop_;                                                   // 0x0400   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0401   (0x0003)  MISSED
	int32_t                                            FromXLoc;                                                   // 0x0404   (0x0004)  
	int32_t                                            FromYLoc;                                                   // 0x0408   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x040C   (0x0004)  MISSED
	UJSI_Slot_C*                                       SlotRecH;                                                   // 0x0410   (0x0008)  
	FVector2D                                          MouseLocH;                                                  // 0x0418   (0x0010)  
	UDataTable*                                        DataSource;                                                 // 0x0428   (0x0008)  
	TArray<UJSI_Slot_C*>                               ArrayOfItems;                                               // 0x0430   (0x0010)  
	TArray<TEnumAsByte>                                SupportedItemTypes;                                         // 0x0440   (0x0010)  
	FMulticastInlineDelegate                           ItemsCombined;                                              // 0x0450   (0x0010)  
	FMulticastInlineDelegate                           DropInfo_ContainerToContainer;                              // 0x0460   (0x0010)  
	FMulticastInlineDelegate                           DropInfo_OnItemEquippedChange;                              // 0x0470   (0x0010)  
	TArray<int32_t>                                    OnlySupportTheseIDs;                                        // 0x0480   (0x0010)  
	TArray<int32_t>                                    DoNotSupportTheseIDs;                                       // 0x0490   (0x0010)  
	FKey                                               RotateKey;                                                  // 0x04A0   (0x0018)  
	int32_t                                            DropToSlot;                                                 // 0x04B8   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x04BC   (0x0004)  MISSED
	FKey                                               SplitKey;                                                   // 0x04C0   (0x0018)  
	FMulticastInlineDelegate                           DropInfo_SplitPerformed;                                    // 0x04D8   (0x0010)  
	FMulticastInlineDelegate                           Drop_ItemOverItem;                                          // 0x04E8   (0x0010)  
	EDragPivot                                         DragBehaviour;                                              // 0x04F8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x04F9   (0x0007)  MISSED
	double                                             MaxWeight;                                                  // 0x0500   (0x0008)  
	bool                                               HideItemOnDrag_;                                            // 0x0508   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0509   (0x0007)  MISSED
	TArray<FDefaultItemInfo>                           AddDefaultItems;                                            // 0x0510   (0x0010)  
	bool                                               AllowDrag;                                                  // 0x0520   (0x0001)  
	bool                                               AllowMovingItemsOnDrop;                                     // 0x0521   (0x0001)  
	bool                                               AllowOpeningContainers;                                     // 0x0522   (0x0001)  
	bool                                               HandleContainerToContainerDrop;                             // 0x0523   (0x0001)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0524   (0x0004)  MISSED
	FMulticastInlineDelegate                           Drop_ContainerOnContainerUnhandled;                         // 0x0528   (0x0010)  
	bool                                               ReceiveAllUnhandledEvent;                                   // 0x0538   (0x0001)  
	bool                                               ShowPrices;                                                 // 0x0539   (0x0001)  
	unsigned char                                      UnknownData10_5[0x6];                                       // 0x053A   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnSlotMouseButtonDown;                                      // 0x0540   (0x0010)  
	FMulticastInlineDelegate                           OnSlotDoubleClick;                                          // 0x0550   (0x0010)  
	bool                                               DragRotated_;                                               // 0x0560   (0x0001)  
	bool                                               DroppedSlotRotated_;                                        // 0x0561   (0x0001)  
	unsigned char                                      UnknownData11_5[0x6];                                       // 0x0562   (0x0006)  MISSED
	FText                                              ContainerName;                                              // 0x0568   (0x0018)  
	bool                                               AllowDropToContainer;                                       // 0x0580   (0x0001)  
	bool                                               AllowDropToGround;                                          // 0x0581   (0x0001)  
	unsigned char                                      UnknownData12_5[0x6];                                       // 0x0582   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnItemSlotOrRotationChanged;                                // 0x0588   (0x0010)  
	UJSI_Slot_C*                                       SlotMother;                                                 // 0x0598   (0x0008)  
	FMulticastInlineDelegate                           OnItemSplitRequest;                                         // 0x05A0   (0x0010)  
	bool                                               AutoPerformSplit;                                           // 0x05B0   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x05B1   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnItemStackRequest;                                         // 0x05B8   (0x0010)  
	bool                                               AutoPerformStack;                                           // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x05C9   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnStackCountChanged;                                        // 0x05D0   (0x0010)  
	int32_t                                            ParentID;                                                   // 0x05E0   (0x0004)  
	unsigned char                                      UnknownData15_5[0x4];                                       // 0x05E4   (0x0004)  MISSED
	TArray<TEnumAsByte>                                SortHighlightedTypes;                                       // 0x05E8   (0x0010)  
	bool                                               AllowBlindAddItemToContainer_;                              // 0x05F8   (0x0001)  
	bool                                               IsPartSpecialContainer;                                     // 0x05F9   (0x0001)  
	bool                                               Loot;                                                       // 0x05FA   (0x0001)  
	unsigned char                                      UnknownData16_5[0x5];                                       // 0x05FB   (0x0005)  MISSED
	UDataTable*                                        ItemsDataTable;                                             // 0x0600   (0x0008)  
	bool                                               IsMouseIn;                                                  // 0x0608   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x0609   (0x0007)  MISSED
	UDragDropOperation*                                Operation;                                                  // 0x0610   (0x0008)  
	bool                                               Equip;                                                      // 0x0618   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x0619   (0x0007)  MISSED
	UJSI_Slot_C*                                       ActiveSlot;                                                 // 0x0620   (0x0008)  
	bool                                               IsShop;                                                     // 0x0628   (0x0001)  
	unsigned char                                      UnknownData19_5[0x7];                                       // 0x0629   (0x0007)  MISSED
	FText                                              TitleText;                                                  // 0x0630   (0x0018)  
	UJSIContainer_C*                                   CurrentItemMoveContainer;                                   // 0x0648   (0x0008)  
	UJSI_Slot_C*                                       SelectedSlot;                                               // 0x0650   (0x0008)  
	FMulticastInlineDelegate                           OnContainerUpdate;                                          // 0x0658   (0x0010)  
	ASurvivalPlayer_C*                                 SurvivalPlayerRef;                                          // 0x0668   (0x0008)  
	FMulticastInlineDelegate                           EventSelectItem;                                            // 0x0670   (0x0010)  
	FMulticastInlineDelegate                           Unselect;                                                   // 0x0680   (0x0010)  
	FMulticastInlineDelegate                           DragStart;                                                  // 0x0690   (0x0010)  
	FMulticastInlineDelegate                           DragEnd;                                                    // 0x06A0   (0x0010)  
	TArray<UJSI_Slot_C*>                               EmptySlots;                                                 // 0x06B0   (0x0010)  
	UWidget*                                           Navigation_LeftWidget;                                      // 0x06C0   (0x0008)  
	FVector2D                                          CustomSizeSlot;                                             // 0x06C8   (0x0010)  
	bool                                               Toggle_Price_Shop;                                          // 0x06D8   (0x0001)  
	unsigned char                                      UnknownData20_5[0x7];                                       // 0x06D9   (0x0007)  MISSED
	FVector2D                                          Set_Custom_Translation;                                     // 0x06E0   (0x0010)  
	TEnumAsByte<E_ShopContainer>                       SetShopContainer;                                           // 0x06F0   (0x0001)  
	unsigned char                                      UnknownData21_5[0x7];                                       // 0x06F1   (0x0007)  MISSED
	FMulticastInlineDelegate                           ItemsDispatcher;                                            // 0x06F8   (0x0010)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckEquippedSlots
	bool CheckEquippedSlots(UJSIContainer_C* FromContainer, UMPInGameInventory_C* Inventory);                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckCanRemoveBackpack
	void CheckCanRemoveBackpack(UJSIContainer_C* Pocket, bool& NotAllowed1);                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Get Max YDimension
	void Get Max YDimension(UJSIContainer_C* Container, int32_t& SlotsCount);                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckMoneyMoveToCase
	void CheckMoneyMoveToCase(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool& allow); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckIsEmptySlot
	void CheckIsEmptySlot(int32_t Index, FVector2D SlotDimension, bool& NotEmpty);                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckTutorial
	void CheckTutorial(UJSI_Slot_C* Slot, UJSIContainer_C* OnContainer, UJSIContainer_C* FromContainer, bool& Locked, bool& IsCase); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.SetNavigationWidget_Left
	void SetNavigationWidget_Left(UWidget* NavigationWidget);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.NavigationChange
	void NavigationChange(EUINavigation Direaction);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Items FilterDupl
	void Items FilterDupl();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Items Filter Surv
	void Items Filter Surv();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckAvailableItemsByName
	void CheckAvailableItemsByName(FName Name, int32_t Count, bool& Found);                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GenerateEmptySlots (OnDrag)
	void GenerateEmptySlots (OnDrag)(UJSI_Slot_C* JSISlot, bool OnlyReset);                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GenerateEmptySlots
	void GenerateEmptySlots(int32_t MinRows, int32_t MinColumns);                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.TakeAllItems
	void TakeAllItems();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckItemBeforeEquip
	void CheckItemBeforeEquip(FFItemInfo ItemInfo, FFItemInfo& Result);                                                      // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CheckIsEmptySlots
	void CheckIsEmptySlots(TArray<UJSI_Slot_C*>& Array, bool& Return);                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.SetHightlightBrush
	void SetHightlightBrush(FVector2D Dim, bool candrop, UPaperSprite*& BG_Sprite1);                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetWeight
	void GetWeight(double& Return);                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetMaxCountSlots
	int32_t GetMaxCountSlots();                                                                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetCountFreeSlots
	void GetCountFreeSlots(int32_t& Value);                                                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetSelectItemInfo
	void GetSelectItemInfo(FFItemInfo& ItemInfo);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.StopDragAndDrop
	void StopDragAndDrop();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetSelecetItemName
	void GetSelecetItemName(FText& Name);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DeleteSelectItem
	bool DeleteSelectItem();                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DeleteItemInfo
	bool DeleteItemInfo();                                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetIndexBySlotLocation
	void GetIndexBySlotLocation(int32_t Row, int32_t Col, int32_t& SlotIndex, bool& Result);                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetSlotLocationByIndex
	void GetSlotLocationByIndex(int32_t SlotIndex_Loc, int32_t& ColumnIndex , int32_t& RowIndex );                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetDropOffset
	void GetDropOffset(int32_t SizeX, int32_t SizeY, int32_t PivotIndex, int32_t& X_Offset, int32_t& Y_Offset);              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetDropSlotWithOffset
	void GetDropSlotWithOffset(int32_t SizeX, int32_t SizeY, int32_t SlotIndex, int32_t PivotIndex, int32_t& SlotIndex1, bool& Result); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Call Container On Container
	void Call Container On Container(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, UJSI_Slot_C* ToSlotRef, int32_t ToSlot, bool DragRotated?, bool TryRotated?); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetNumberOfFreeSlots
	void GetNumberOfFreeSlots(int32_t& Num);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetContainerCapacity
	int32_t GetContainerCapacity();                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ClearContainerOccupation
	void ClearContainerOccupation();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.RecalculateHighlitherPosition
	void RecalculateHighlitherPosition(TArray<UJSI_Slot_C*>& Slots, bool Rotated, FVector2D& Position);                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.RecalculateHighlighterDim
	void RecalculateHighlighterDim(TArray<UJSI_Slot_C*>& Slots, FVector2D& Dimention);                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.RecalculateHighlighretSize
	void RecalculateHighlighretSize(double SingleSlotSizeX, double SingleSlotSizeY, FVector2D Dimention, double DistanceBetweenSlots, FVector2D& Size); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.MoveHighlighter
	void MoveHighlighter(UJSI_Slot_C* ItemSlot, TArray<UJSI_Slot_C*>& Highlighted, bool candrop, bool Rotated);              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.MakeCell
	void MakeCell();                                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.UpdateTitle
	void UpdateTitle();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CanItAllFitIn
	void CanItAllFitIn(TArray<UJSI_Slot_C*>& ArrayOfItems, bool& CanFit?);                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetLowestSlotIndex
	void GetLowestSlotIndex(TArray<UJSI_Slot_C*>& Array, int32_t& MinIndex);                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetInventoryItemsByName
	void GetInventoryItemsByName(FName ItemName, bool& Found?, TArray<UJSI_Slot_C*>& ItemsFound);                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetContainerHierarchy
	void GetContainerHierarchy(TArray<UJSIContainer_C*>& Containers);                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.SelectRotation
	void SelectRotation(UJSI_Slot_C* ItemRef, bool DroppedRotated?, bool& Rotated);                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.SomeFunctionBool
	bool SomeFunctionBool();                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Re-SortHighlightItems
	void Re-SortHighlightItems();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.RemoveSortHighlightedTypes
	void RemoveSortHighlightedTypes(TArray<TEnumAsByte>& Types);                                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.AddSortHighlightedTypes
	void AddSortHighlightedTypes(TArray<TEnumAsByte>& Types);                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.HighlightItemsByType
	void HighlightItemsByType(TArray<TEnumAsByte>& Types);                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetRootContainerRef
	void GetRootContainerRef(bool ExcludeEquipTo, UJSIContainer_C*& containerRef);                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetItemByUniqueID
	void GetItemByUniqueID(int32_t UniqueId, bool& Found, UJSI_Slot_C*& Item);                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetSlotMotherUID
	void GetSlotMotherUID(bool ReturnContainerID_IfInvalid?, int32_t& UDID);                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.MoveItemToIndexBySlotIndex
	void MoveItemToIndexBySlotIndex(int32_t ItemSlotIndex, int32_t ToIndex, bool Rotate?, bool& Moved?);                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.MoveItemToIndexByItemRef
	void MoveItemToIndexByItemRef(UJSI_Slot_C* ItemRef, int32_t ToIndex, bool Rotate?, bool& Moved?);                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetColumnRowBySlotIndex
	void GetColumnRowBySlotIndex(int32_t SlotIndex, int32_t& column, int32_t& Row);                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetItemBySlotIndex
	void GetItemBySlotIndex(int32_t SlotIndex, bool& Found, UJSI_Slot_C*& Item);                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetEquippedItemRef
	void GetEquippedItemRef(bool& Found?, UJSI_Slot_C*& ItemRef);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CanStackSingleSlot?
	void CanStackSingleSlot?(FFItemInfo Info, bool& Sucess, UJSI_Slot_C*& ItemRef);                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.UpdateCountByUniqueID
	void UpdateCountByUniqueID(int32_t ID, int32_t NewCount, bool& Sucess);                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.RemoveItemByUniqueID
	void RemoveItemByUniqueID(int32_t ID, bool& Sucess);                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.UnequipItem
	void UnequipItem(bool TriggerUnequippedEvent?, bool& Unequipped, UJSI_Slot_C*& slotRef);                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Equip Item
	void Equip Item(FName ItemId, FVector2D SlotVector, FFItemInfo CustomInfo, UJSIContainer_C* SlotContainer, bool TriggerEquippedEvent?, bool& Equipped, UJSI_Slot_C*& SlotItemRef); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.IsEquipped?
	bool IsEquipped?();                                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetContainerName
	void GetContainerName(FText& ContainerName);                                                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CalculateSizeCustom
	FVector2D CalculateSizeCustom(FVector2D SlotVector, FVector2D CSlotSize);                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetItemsByRarity
	void GetItemsByRarity(TEnumAsByte<SlotRarity> Rarity, bool& Found?, TArray<UJSI_Slot_C*>& ItemsFound);                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetItemsCount
	int32_t GetItemsCount();                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CalculateWeight
	void CalculateWeight(double& Weight);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ChangeItemRarity
	void ChangeItemRarity(UJSI_Slot_C* ItemRef, TEnumAsByte<SlotRarity> NewRarity, bool& Changed?);                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetInventoryItemsByID
	void GetInventoryItemsByID(int32_t ItemId, bool& Found?, TArray<UJSI_Slot_C*>& ItemsFound);                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetInventoryItemsByType
	void GetInventoryItemsByType(TEnumAsByte<JSItemType> Type, bool& Found?, TArray<UJSI_Slot_C*>& ItemsFound);              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.MoveItemToContainer
	void MoveItemToContainer(UJSIContainer_C* ToContainer, UJSI_Slot_C* ItemRef, int32_t Count, int32_t ToSlot, bool Rotated?, bool& Moved?); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ChangeItemCount
	void ChangeItemCount(UJSI_Slot_C* ItemRef, int32_t NewCount, bool& Changed?);                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ChangeItemImage
	void ChangeItemImage(UJSI_Slot_C* ItemRef, UPaperSprite* NewTexture, bool& Changed?);                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ResizeItem
	void ResizeItem(UJSI_Slot_C* slotRef, int32_t AddToX, int32_t AddToY, bool& Resized?);                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CanResize?
	void CanResize?(UJSI_Slot_C* slotRef, int32_t AddToX, int32_t AddToY, bool& Result, TArray<UJSI_Slot_C*>& HostingSlotsArray, TArray<UJSI_Slot_C*>& FreedHostingSlotsArray); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CanStack?
	void CanStack?(UJSIContainer_C* Container, FFItemInfo ItemInfo, bool& Canstack);                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.FlipSlotDim
	void FlipSlotDim(FVector2D SlotVector, FVector2D& Flipped);                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.AddMultipleInventoryItems
	void AddMultipleInventoryItems(TArray<int32_t>& ItemIDs, TArray<int32_t>& NotAdded);                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.IsSupportedID?
	void IsSupportedID?(int32_t ID, bool& Supported);                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.IsSupportedType?
	void IsSupportedType?(TArray<TEnumAsByte>& SupportedItemTypes, TEnumAsByte<JSItemType>& Type, int32_t ItemId, bool& Supported?); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnKeyDown
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ChangeItemsInteract
	void ChangeItemsInteract(bool Interact?);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.HandleContainerOnContainer
	void HandleContainerOnContainer(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, UJSI_Slot_C* ToSlotRef, int32_t ToSlot, bool DraggedRotated?, bool TryRotated?, bool& Handled?); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CombineItemRequest
	void CombineItemRequest(UJSIContainer_C* FromContainer, UJSI_Slot_C* SlotRec, UJSI_Slot_C* SlotDropped, bool TriggerEventDispatcher?); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CalculateSize
	FVector2D CalculateSize(FVector2D SlotVector);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ClearContainer
	void ClearContainer();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.AddNewInventoryItem_CustomVector
	void AddNewInventoryItem_CustomVector(FName ItemId, int32_t Count, int32_t ToSlot, FVector2D SlotVector, FVector2D OriginalSize, FFItemInfo CustomInfo, bool& Added, int32_t& SlotIndex, FFItemInfo& ItemInfo, UJSI_Slot_C*& SlotItemRef); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.RemoveInventoryItemByRef
	void RemoveInventoryItemByRef(UJSI_Slot_C* slotRef, bool& Removed);                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetLength
	int32_t GetLength();                                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnDrop
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetEmptySlot
	void GetEmptySlot(FVector2D SlotVector, bool OccupyAfterCheck, int32_t& SlotIndex, bool& Found?);                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CancelHighlights
	void CancelHighlights(bool Drop);                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.AddNewInventoryItem
	void AddNewInventoryItem(FName ItemId, int32_t Count, int32_t ToSlot, bool Rotated?, bool TryRotated?, bool TryToStack?, FFItemInfo CustomInfo, bool& Added, int32_t& SlotIndex, FFItemInfo& ItemInfo, UJSI_Slot_C*& SlotItemRef, int32_t& StackRemainder); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.HighlightSlots
	void HighlightSlots(int32_t SlotIndex, FVector2D SlotVector, FVector2D MouseLoc, UJSI_Slot_C* slotRef, UJSI_Slot_C* SlotRecRef, bool Rotated?, bool Supported?, int32_t PivotIndex); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Hightlight_DragMove
	void Hightlight_DragMove(int32_t SlotIndex, UJSI_Slot_C* DragSlotRef, UJSI_Slot_C* SlotRec, bool Rotated?, int32_t PivotIndex); // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetSlotIndexByColumnRow
	int32_t GetSlotIndexByColumnRow(int32_t column, int32_t Row);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.PerfromDrop
	void PerfromDrop(int32_t SlotIndex, FVector2D SlotVector, UJSI_Slot_C* slotRef, bool Rotated?, bool& Moved);             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetPaddingBySlotIndex
	void GetPaddingBySlotIndex(int32_t SlotIndex, FVector2D SlotVector, FMargin& Padding, int32_t& Conumn, int32_t& Row);    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.GetSlotIndex
	void GetSlotIndex(int32_t& Result);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.AddNewItem
	void AddNewItem(int32_t ToSlot, TWeakObjectPtr<UObject*> Image, FVector2D SlotVector, TEnumAsByte<SlotRarity> Rarity, FFItemInfo ItemInfo, bool SetVector, bool& Added, int32_t& AddedToSlot, FFItemInfo& Info, UJSI_Slot_C*& SlotItemRef); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Initialize
	void Initialize(bool Design?);                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Re-Init
	void Re-Init(int32_t Columns, int32_t Rows);                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnDragLeave
	void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnDragEnter
	void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                       // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ClearData
	void ClearData();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.CancelHlight
	void CancelHlight();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.SetBGColorOfDragWidget
	void SetBGColorOfDragWidget(UDragDropOperation* Target, bool candrop, bool Leave);                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.SelectSlot
	void SelectSlot(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ClearSelection
	void ClearSelection();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.StopDrag
	void StopDrag();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ItemsFilterEvent
	void ItemsFilterEvent();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ItemsFilterEventDelayer
	void ItemsFilterEventDelayer();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnPlayerDeath
	void OnPlayerDeath();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ExecuteUbergraph_JSIContainer
	void ExecuteUbergraph_JSIContainer(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ItemsDispatcher__DelegateSignature
	void ItemsDispatcher__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DragEnd__DelegateSignature
	void DragEnd__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DragStart__DelegateSignature
	void DragStart__DelegateSignature();                                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Unselect__DelegateSignature
	void Unselect__DelegateSignature();                                                                                      // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.EventSelectItem__DelegateSignature
	void EventSelectItem__DelegateSignature(UJSI_Slot_C* Item, UJSIContainer_C* Container);                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnContainerUpdate__DelegateSignature
	void OnContainerUpdate__DelegateSignature();                                                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnStackCountChanged__DelegateSignature
	void OnStackCountChanged__DelegateSignature(UJSI_Slot_C* ItemRef, int32_t NewCount);                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnItemStackRequest__DelegateSignature
	void OnItemStackRequest__DelegateSignature(UJSI_Slot_C* DroppedItem, UJSI_Slot_C* ReceiverItem);                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnItemSplitRequest__DelegateSignature
	void OnItemSplitRequest__DelegateSignature(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* ItemSource, int32_t ToSlotIndex, int32_t TotalAmount, int32_t SplitAmount); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnItemSlotOrRotationChanged__DelegateSignature
	void OnItemSlotOrRotationChanged__DelegateSignature(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, int32_t NewIndex, bool Rotated); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnSlotDoubleClick__DelegateSignature
	void OnSlotDoubleClick__DelegateSignature(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.OnSlotMouseButtonDown__DelegateSignature
	void OnSlotMouseButtonDown__DelegateSignature(UJSIContainer_C* Container, UJSI_Slot_C* slotRef, FKey Button);            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Drop_ContainerOnContainerUnhandled__DelegateSignature
	void Drop_ContainerOnContainerUnhandled__DelegateSignature(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool Rotated?, bool RightMouseButton); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.Drop_ItemOverItem__DelegateSignature
	void Drop_ItemOverItem__DelegateSignature(UJSI_Slot_C* ItemReceiver, UJSI_Slot_C* ItemDropped, UJSIContainer_C* ItemReceiverContainer, UJSIContainer_C* ItemDroppedContainer); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DropInfo_SplitPerformed__DelegateSignature
	void DropInfo_SplitPerformed__DelegateSignature(UJSI_Slot_C* SourceSlotRef, UJSI_Slot_C* NewSplitSlotRef, UJSIContainer_C* ContainerSource, UJSIContainer_C* ContainerReceiver, int32_t SplitAmount, int32_t AmountRemaining); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DropInfo_OnItemEquippedChange__DelegateSignature
	void DropInfo_OnItemEquippedChange__DelegateSignature(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* slotRef, bool Equipped?, bool ToPockets?); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.DropInfo_ContainerToContainer__DelegateSignature
	void DropInfo_ContainerToContainer__DelegateSignature(UJSIContainer_C* From, UJSIContainer_C* To, UJSI_Slot_C* FromSlotRef, UJSI_Slot_C* ToSlotRef, bool ToEmptySlot?, bool MovedAll?); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSIContainer.JSIContainer_C.ItemsCombined__DelegateSignature
	void ItemsCombined__DelegateSignature(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* SlotReceiver, UJSI_Slot_C* SlotDropped, bool SlotDroppedRemoved?); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C
/// Size: 0x06E9 (0x000280 - 0x000969)
class UJSI_Slot_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  UsingItemAnim;                                              // 0x0288   (0x0008)  
	UWidgetAnimation*                                  GTAHover;                                                   // 0x0290   (0x0008)  
	UWidgetAnimation*                                  HoverV2;                                                    // 0x0298   (0x0008)  
	UWidgetAnimation*                                  Hover_Anim;                                                 // 0x02A0   (0x0008)  
	UWidgetAnimation*                                  ShopAnim;                                                   // 0x02A8   (0x0008)  
	UWidgetAnimation*                                  Hover_AnimShop;                                             // 0x02B0   (0x0008)  
	UWidgetAnimation*                                  CannotBeUsingItem;                                          // 0x02B8   (0x0008)  
	UWidgetAnimation*                                  DismantleProgress_Anim;                                     // 0x02C0   (0x0008)  
	UWidgetAnimation*                                  ShowProgressBar6sec;                                        // 0x02C8   (0x0008)  
	UWidgetAnimation*                                  ShowProgressBar52sec;                                       // 0x02D0   (0x0008)  
	UWidgetAnimation*                                  Deselect_Anim;                                              // 0x02D8   (0x0008)  
	UWidgetAnimation*                                  Add_Anim;                                                   // 0x02E0   (0x0008)  
	UWidgetAnimation*                                  Drop_Anim;                                                  // 0x02E8   (0x0008)  
	UWidgetAnimation*                                  FailedToSelect_Anim;                                        // 0x02F0   (0x0008)  
	UWidgetAnimation*                                  DoubleClick_Failed_Anim;                                    // 0x02F8   (0x0008)  
	UWidgetAnimation*                                  DoubleClick_Successed_Anim;                                 // 0x0300   (0x0008)  
	UWidgetAnimation*                                  Select_Anim;                                                // 0x0308   (0x0008)  
	UWidgetAnimation*                                  MouseUp_Anim;                                               // 0x0310   (0x0008)  
	UWidgetAnimation*                                  MouseDown_Anim;                                             // 0x0318   (0x0008)  
	UWidgetAnimation*                                  Hover_Anim;                                                 // 0x0320   (0x0008)  
	UImage*                                            Background;                                                 // 0x0328   (0x0008)  
	UImage*                                            Background_WithItem;                                        // 0x0330   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_SlotImage;                                      // 0x0338   (0x0008)  
	UProgressBar*                                      Durability_ProgressBar;                                     // 0x0340   (0x0008)  
	UImage*                                            HighlightEffect;                                            // 0x0348   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_RP;                                           // 0x0350   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_ShopPrice;                                    // 0x0358   (0x0008)  
	UImage*                                            Image_BGPrice;                                              // 0x0360   (0x0008)  
	UImage*                                            Image_Border;                                               // 0x0368   (0x0008)  
	UImage*                                            Image_BorderShop;                                           // 0x0370   (0x0008)  
	UImage*                                            Image_ColorGradient;                                        // 0x0378   (0x0008)  
	UImage*                                            Image_DismantleLocked;                                      // 0x0380   (0x0008)  
	UImage*                                            Image_EmptySlotHovered;                                     // 0x0388   (0x0008)  
	UImage*                                            Image_Hovered;                                              // 0x0390   (0x0008)  
	UImage*                                            Image_QuestItemIcon;                                        // 0x0398   (0x0008)  
	UImage*                                            Image_Repair;                                               // 0x03A0   (0x0008)  
	UImage*                                            Image_Rp;                                                   // 0x03A8   (0x0008)  
	UImage*                                            Image_Selected;                                             // 0x03B0   (0x0008)  
	UImage*                                            Image_Selected_Bad;                                         // 0x03B8   (0x0008)  
	UImage*                                            Image_ShopAnim;                                             // 0x03C0   (0x0008)  
	UImage*                                            Indicator_BG;                                               // 0x03C8   (0x0008)  
	UImage*                                            Indicator_Fill;                                             // 0x03D0   (0x0008)  
	UOverlay*                                          MainSlotOverlay;                                            // 0x03D8   (0x0008)  
	UOverlay*                                          Overlay_BGPrice;                                            // 0x03E0   (0x0008)  
	UOverlay*                                          Overlay_ShopPrice;                                          // 0x03E8   (0x0008)  
	UProgressBar*                                      ProgressBar_Component;                                      // 0x03F0   (0x0008)  
	UProgressBar*                                      ProgressBar_Dismantle;                                      // 0x03F8   (0x0008)  
	USizeBox*                                          RoundProgressBar;                                           // 0x0400   (0x0008)  
	UTextBlock*                                        ShopPrice;                                                  // 0x0408   (0x0008)  
	UTextBlock*                                        ShopPrice_RP;                                               // 0x0410   (0x0008)  
	USizeBox*                                          SizeBox_q;                                                  // 0x0418   (0x0008)  
	USizeBox*                                          SizeBox_ShopPrice;                                          // 0x0420   (0x0008)  
	USizeBox*                                          SizeBox_ShopPriceBG;                                        // 0x0428   (0x0008)  
	USizeBox*                                          SizeBox_TextPrice;                                          // 0x0430   (0x0008)  
	UImage*                                            SlotImage;                                                  // 0x0438   (0x0008)  
	USizeBox*                                          SlotSizeBox;                                                // 0x0440   (0x0008)  
	UTextBlock*                                        Text_WCoin;                                                 // 0x0448   (0x0008)  
	UTextBlock*                                        TextBlock_Durability;                                       // 0x0450   (0x0008)  
	UTextBlock*                                        TextCout;                                                   // 0x0458   (0x0008)  
	UTextBlock*                                        TextCout_WithRP;                                            // 0x0460   (0x0008)  
	UWBP_TutorialHighlight_C*                          WBP_TutorialHighlight;                                      // 0x0468   (0x0008)  
	int32_t                                            SlotIndex;                                                  // 0x0470   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0474   (0x0004)  MISSED
	FVector2D                                          Size;                                                       // 0x0478   (0x0010)  
	FSlateColor                                        OnHoverTint;                                                // 0x0488   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x049C   (0x0004)  MISSED
	UPaperSprite*                                      Image;                                                      // 0x04A0   (0x0008)  
	bool                                               IsEmpty;                                                    // 0x04A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x04A9   (0x0003)  MISSED
	int32_t                                            Row;                                                        // 0x04AC   (0x0004)  
	int32_t                                            column;                                                     // 0x04B0   (0x0004)  
	bool                                               Highlighted_;                                               // 0x04B4   (0x0001)  
	bool                                               HighlightOnHover_;                                          // 0x04B5   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x04B6   (0x0002)  MISSED
	UJSIContainer_C*                                   ContainerMother;                                            // 0x04B8   (0x0008)  
	FVector2D                                          SlotVector;                                                 // 0x04C0   (0x0010)  
	FVector2D                                          LastClickLoc;                                               // 0x04D0   (0x0010)  
	UJSI_Slot_C*                                       HostedItem;                                                 // 0x04E0   (0x0008)  
	TArray<UJSI_Slot_C*>                               ArrayOfHostingItem;                                         // 0x04E8   (0x0010)  
	UOverlaySlot*                                      OverlayRef;                                                 // 0x04F8   (0x0008)  
	FVector2D                                          DragOffset;                                                 // 0x0500   (0x0010)  
	TEnumAsByte<SlotRarity>                            Rarity;                                                     // 0x0510   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0511   (0x0007)  MISSED
	FFItemInfo                                         ItemInfo;                                                   // 0x0518   (0x0220)  
	UJSIContainer_C*                                   SlotContainer;                                              // 0x0738   (0x0008)  
	TArray<TEnumAsByte>                                DropSupportedItems;                                         // 0x0740   (0x0010)  
	FVector2D                                          OriginalSize;                                               // 0x0750   (0x0010)  
	bool                                               IsFixedSlot_;                                               // 0x0760   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0761   (0x0007)  MISSED
	FKey                                               RotateKey;                                                  // 0x0768   (0x0018)  
	bool                                               SlotRotated_;                                               // 0x0780   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0781   (0x0007)  MISSED
	UContainerWindowWidget_C*                          WindowContainer;                                            // 0x0788   (0x0008)  
	UOnHoverTooltipWidget_C*                           OnHoverWidget;                                              // 0x0790   (0x0008)  
	UTexture2D*                                        FrameImage;                                                 // 0x0798   (0x0008)  
	UTexture2D*                                        FrameImageRect;                                             // 0x07A0   (0x0008)  
	int32_t                                            ParentID;                                                   // 0x07A8   (0x0004)  
	bool                                               HideOnDrag;                                                 // 0x07AC   (0x0001)  
	EDragPivot                                         DragBehaviour;                                              // 0x07AD   (0x0001)  
	bool                                               SortHighlighted_;                                           // 0x07AE   (0x0001)  
	bool                                               AllowInteractionOnSort;                                     // 0x07AF   (0x0001)  
	double                                             SortHighlightOpacity;                                       // 0x07B0   (0x0008)  
	FSlateColor                                        ImageTint;                                                  // 0x07B8   (0x0014)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x07CC   (0x0004)  MISSED
	UTexture*                                          ItemDragTexture;                                            // 0x07D0   (0x0008)  
	bool                                               DisableSome;                                                // 0x07D8   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x07D9   (0x0007)  MISSED
	UW_UsageRequest_C*                                 W_UsageRequest;                                             // 0x07E0   (0x0008)  
	bool                                               Loot;                                                       // 0x07E8   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x07E9   (0x0007)  MISSED
	UDataTable*                                        ItemsDataTable;                                             // 0x07F0   (0x0008)  
	bool                                               BorderIsInvisible;                                          // 0x07F8   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x07F9   (0x0003)  MISSED
	FMargin                                            BoxMargin;                                                  // 0x07FC   (0x0010)  
	bool                                               Active;                                                     // 0x080C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x080D   (0x0003)  MISSED
	double                                             Time;                                                       // 0x0810   (0x0008)  
	bool                                               IsLoading;                                                  // 0x0818   (0x0001)  
	bool                                               NeedsLoading;                                               // 0x0819   (0x0001)  
	bool                                               IsEquipmentSlot;                                            // 0x081A   (0x0001)  
	unsigned char                                      UnknownData12_5[0x5];                                       // 0x081B   (0x0005)  MISSED
	UImage*                                            EquipmentSiluet;                                            // 0x0820   (0x0008)  
	bool                                               IsSelected;                                                 // 0x0828   (0x0001)  
	bool                                               bShowSiluetImage;                                           // 0x0829   (0x0001)  
	unsigned char                                      UnknownData13_5[0x6];                                       // 0x082A   (0x0006)  MISSED
	FVector2D                                          DC_Position;                                                // 0x0830   (0x0010)  
	FText                                              Name;                                                       // 0x0840   (0x0018)  
	bool                                               PossiblyOccupied;                                           // 0x0858   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0859   (0x0007)  MISSED
	ABP_GameHUD_C*                                     Game_HUD_Ref;                                               // 0x0860   (0x0008)  
	UObject*                                           RenderWeaponIcon;                                           // 0x0868   (0x0008)  
	ASurvPC_C*                                         Controller_Ref;                                             // 0x0870   (0x0008)  
	FMulticastInlineDelegate                           OnDragStart;                                                // 0x0878   (0x0010)  
	ASurvivalPlayer_C*                                 As_Survival_Player;                                         // 0x0888   (0x0008)  
	FMulticastInlineDelegate                           OnDragMove;                                                 // 0x0890   (0x0010)  
	FMulticastInlineDelegate                           OnSelected_Clicked_;                                        // 0x08A0   (0x0010)  
	float                                              Playback_Speed5sec;                                         // 0x08B0   (0x0004)  
	float                                              Playback_Speed6sec;                                         // 0x08B4   (0x0004)  
	float                                              Percent;                                                    // 0x08B8   (0x0004)  
	unsigned char                                      UnknownData15_5[0x4];                                       // 0x08BC   (0x0004)  MISSED
	double                                             Values;                                                     // 0x08C0   (0x0008)  
	bool                                               DismantleEnabled;                                           // 0x08C8   (0x0001)  
	bool                                               bOnMouseEnter;                                              // 0x08C9   (0x0001)  
	unsigned char                                      UnknownData16_5[0x6];                                       // 0x08CA   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnSelected_ClickedRMB_;                                     // 0x08D0   (0x0010)  
	FMulticastInlineDelegate                           OnContentHidden;                                            // 0x08E0   (0x0010)  
	FMulticastInlineDelegate                           OnContentShow;                                              // 0x08F0   (0x0010)  
	FMulticastInlineDelegate                           OnDurabilityChanged;                                        // 0x0900   (0x0010)  
	UFMODEvent*                                        HoverSoundEvent;                                            // 0x0910   (0x0008)  
	bool                                               TogglePrice;                                                // 0x0918   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x0919   (0x0007)  MISSED
	FVector2D                                          SetCustomTranslation;                                       // 0x0920   (0x0010)  
	int32_t                                            RP_Point;                                                   // 0x0930   (0x0004)  
	TEnumAsByte<E_ShopContainer>                       SetShopContainerEnum;                                       // 0x0934   (0x0001)  
	unsigned char                                      UnknownData18_5[0x3];                                       // 0x0935   (0x0003)  MISSED
	FMulticastInlineDelegate                           OnShopAnimFinished;                                         // 0x0938   (0x0010)  
	UMaterialInterface*                                GeneratedWeaponIcon;                                        // 0x0948   (0x0008)  
	bool                                               CanBeHovered;                                               // 0x0950   (0x0001)  
	bool                                               FullDurability;                                             // 0x0951   (0x0001)  
	unsigned char                                      UnknownData19_5[0x2];                                       // 0x0952   (0x0002)  MISSED
	int32_t                                            RepairPrice;                                                // 0x0954   (0x0004)  
	bool                                               HaveEnoughMoney;                                            // 0x0958   (0x0001)  
	unsigned char                                      UnknownData20_5[0x7];                                       // 0x0959   (0x0007)  MISSED
	FTimerHandle                                       RepairProgressTimer;                                        // 0x0960   (0x0008)  
	bool                                               bLock;                                                      // 0x0968   (0x0001)  


	/// Functions
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SequenceEvent__ENTRYPOINTJSI_Slot
	void SequenceEvent__ENTRYPOINTJSI_Slot(UImage* Image_Hovered);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SequenceEvent__ENTRYPOINTJSI_Slot
	void SequenceEvent__ENTRYPOINTJSI_Slot(UImage* Image_Hovered);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SequenceEvent__ENTRYPOINTJSI_Slot
	void SequenceEvent__ENTRYPOINTJSI_Slot(UImage* Image_ShopAnim);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SequenceEvent__ENTRYPOINTJSI_Slot
	void SequenceEvent__ENTRYPOINTJSI_Slot(UProgressBar* ProgressBar_Component);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SequenceEvent__ENTRYPOINTJSI_Slot
	void SequenceEvent__ENTRYPOINTJSI_Slot(UProgressBar* ProgressBar_Component);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.CheckShopContainer
	void CheckShopContainer(int32_t& PageIndex, TEnumAsByte<E_ShopContainer>& GetShopContainer, UJSIContainer_C*& ShopContainer); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetNewMaxDurability
	double GetNewMaxDurability(double InputPin);                                                                             // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.CheckSlotIsContainer
	void CheckSlotIsContainer();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetRepairStatus
	void GetRepairStatus();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Repair Stop Progress
	void Repair Stop Progress();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Repair
	void Repair();                                                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get Repair Price
	void Get Repair Price(int32_t& RepairPrice);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get Enough Money
	void Get Enough Money(bool& HaveEnoughMoney);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetRepair
	void SetRepair();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetWeaponIcon
	void GetWeaponIcon(UMaterialInterface*& GeneratedWeaponIcon);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UnhoverSlot
	void UnhoverSlot();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.HoverSlot
	void HoverSlot();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Calculate Result Price
	int32_t Calculate Result Price();                                                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetRenderIcon
	void SetRenderIcon(bool bForced);                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ChangesImageAnchors
	void ChangesImageAnchors();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetPrice(Shop)
	void GetPrice(Shop)();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ButtonPressed
	void ButtonPressed();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.DoCustomNavigation_Down
	UWidget* DoCustomNavigation_Down(EUINavigation Navigation);                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.DoCustomNavigation_Up
	UWidget* DoCustomNavigation_Up(EUINavigation Navigation);                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.DoCustomNavigation_Right
	UWidget* DoCustomNavigation_Right(EUINavigation Navigation);                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.DoCustomNavigation_Left
	UWidget* DoCustomNavigation_Left(EUINavigation Navigation);                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetDismantleEnabled
	void GetDismantleEnabled(bool& Enabled);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetDismantleEnabled
	void SetDismantleEnabled(bool Enable);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetSlotBrushes
	void SetSlotBrushes();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetFillValue
	void SetFillValue(double Values);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get Image Border Visibility
	ESlateVisibility Get Image Border Visibility();                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ConfirmDragOperation
	void ConfirmDragOperation(UJSIContainer_C* OutContainer, UJSIContainer_C* InContainer, bool& Result);                    // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnHideItemInfo
	void OnHideItemInfo();                                                                                                   // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnShowItemInfo
	void OnShowItemInfo();                                                                                                   // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragOver
	bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                        // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetContentHidden
	void SetContentHidden(bool bIsHidden);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.PlayDropSound
	void PlayDropSound(UJSI_Slot_C* slotRef, UJSIContainer_C* ToContainerRef, bool Local);                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetWeight
	void GetWeight(double& Weight);                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnMouseButtonDoubleClick
	FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                               // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetImageDefaultBackground
	void SetImageDefaultBackground();                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetSlotSizeBaground
	void GetSlotSizeBaground();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get Pivot Index
	void Get Pivot Index(FVector2D DragOffset, int32_t& Index);                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get_Image_ColorGradient_Visibility
	ESlateVisibility Get_Image_ColorGradient_Visibility();                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetSlotBrushes
	void GetSlotBrushes(FSlateBrush& BG_Brush, FSlateBrush& Gradient_Brush, FSlateBrush& Highlight_Brush, FSlateBrush& Hover_Brush, UPaperSprite*& BGSprite); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SwapVector
	FVector2D SwapVector(FVector2D Vector);                                                                                  // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get Icon
	void Get Icon(FFItemInfo& FItemInfo, ABP_GameHUD_C* HUD, UObject*& Image);                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UpdateDurabilityProgressBar
	void UpdateDurabilityProgressBar();                                                                                      // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Set Percent To Progress Bar
	double Set Percent To Progress Bar();                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.IsBroken
	void IsBroken(bool& Return);                                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Calculate Size With Ratio
	void Calculate Size With Ratio(FVector2D& Size);                                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get_Background_WithItem_Visibility
	ESlateVisibility Get_Background_WithItem_Visibility();                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Get_Background_Visibility
	ESlateVisibility Get_Background_Visibility();                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Update Slot Info
	void Update Slot Info();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetDurability
	void SetDurability(double NewDurability);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetDurability
	void GetDurability(double& Durability, double& MaxDurability);                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UnhandledGetTargetContainer
	void UnhandledGetTargetContainer(UJSIContainer_C* Container1, UJSIContainer_C* Container2, UJSIContainer_C*& Target);    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.CheckRootContainer
	void CheckRootContainer(UJSI_Slot_C* DraggedItem, bool& CanAdd?);                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.IsSpecialContainer?
	bool IsSpecialContainer?();                                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetSpecialContainer
	void SetSpecialContainer(UUserWidget* SpecialContainerRef);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetSpecialContainerRef
	void GetSpecialContainerRef(UUserWidget*& SpecialContainerRef);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.CanOpenSpecialContainer?
	void CanOpenSpecialContainer?(bool& Return value);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetSortHighlight
	void SetSortHighlight(bool IsFaded);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetType
	void GetType(TEnumAsByte<JSItemType>& Type);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.AddToXY
	void AddToXY(int32_t X, int32_t Y, FVector2D& SlotDimension);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.AddAttachment
	void AddAttachment(FAttachmentInfo AttachmentInfo);                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.CanAttachAttachment
	bool CanAttachAttachment(FName AttachmentID);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.IsSupportedAttachment
	bool IsSupportedAttachment(FName AttachmentID);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.DetectChange
	void DetectChange(UJSI_Slot_C* DroppedSlotRef, bool DraggedRotated?, bool& NOChange);                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetClickLocation
	void GetClickLocation(FGeometry& Geometry, FPointerEvent& MouseEvents, FVector2D& Output_Get);                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Handle Size Box
	void Handle Size Box();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.IsStillValid
	void IsStillValid(UJSI_Slot_C* Slot, bool& Valid);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.IsContainer?
	void IsContainer?(bool& IsContainer?);                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetUniqueID
	void GetUniqueID(int32_t& UniqueServerID);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetUniqueID
	void SetUniqueID(int32_t ID, int32_t& UniqueId);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetItemName
	void GetItemName(FText& Name);                                                                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ChangePrice
	void ChangePrice(double Price);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ChangeRarity
	void ChangeRarity(TEnumAsByte<SlotRarity> Rarity, bool& Changed?);                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UpdateImage
	void UpdateImage(UPaperSprite* NewTexture, bool& Updated);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ResizeSlot
	void ResizeSlot(FVector2D NewSize, FVector2D SlotDimension, FVector2D& Size);                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.On_MouseDoubleClick
	FEventReply On_MouseDoubleClick(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.isRotated?
	bool isRotated?();                                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnKeyDown
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetCount
	void GetCount(int32_t& Count);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UpdateCount
	void UpdateCount(int32_t NewCount, double NewDurability, bool WithDurabilty, int32_t& Count);                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetSlotIndexOnDrop
	void GetSlotIndexOnDrop(int32_t& SlotIndex);                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetBorderColorByRarity
	void GetBorderColorByRarity(TEnumAsByte<SlotRarity> Rarity, FLinearColor& Color);                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetHighlight
	void SetHighlight(bool Highlight?, FSlateColor HighlightColor, bool Drop);                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetOverlaySlot
	void SetOverlaySlot(UOverlaySlot* OverlayRef);                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetHostingArray
	void SetHostingArray(TArray<UJSI_Slot_C*>& ArrayOfHostingItem);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.GetHostedSlot
	void GetHostedSlot(UJSI_Slot_C*& HostingItem);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetHostedSlot
	void SetHostedSlot(UJSI_Slot_C* HostingItem);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnMouseButtonUp
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDrop
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragDetected
	void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);                  // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnMouseButtonDown
	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ToggleHighlight
	void ToggleHighlight(bool DragEnter, UDragDropOperation* Operation);                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.IsEmptySlot
	void IsEmptySlot(bool& IsEmpty);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ClearSlot
	void ClearSlot();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UpdateInfo
	void UpdateInfo(UObject* Image, FVector2D Image Size);                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Finished_C4F95376474216B3E074BAA89C8034E2
	void Finished_C4F95376474216B3E074BAA89C8034E2();                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnLoaded_7D15951943AF1C18C4E3788AE52A2621
	void OnLoaded_7D15951943AF1C18C4E3788AE52A2621(UClass* Loaded);                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.RotateSlot
	void RotateSlot(bool Rotate?, bool FlipVector?);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ConstructInitialize
	void ConstructInitialize();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Destruct
	void Destruct();                                                                                                         // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragLeave
	void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);                                             // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetUnactiveSlot
	void SetUnactiveSlot();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetActiveSlot
	void SetActiveSlot(bool Active);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetActiveHighlight
	void SetActiveHighlight(bool Index);                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetSelected
	void SetSelected(bool Selected);                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.PlayDoubleClickSuccessed
	void PlayDoubleClickSuccessed();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.PlayDoubleClickFailed
	void PlayDoubleClickFailed();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.PlayDropAnimation
	void PlayDropAnimation(TEnumAsByte<EUMGSequencePlayMode> Direction);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetBorderHidden
	void SetBorderHidden(bool Value);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragCancelled
	void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation);                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ChangeImageAnchors
	void ChangeImageAnchors(bool Equipped);                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.RefreshOnDragEnter
	void RefreshOnDragEnter(UDragDropOperation* Op);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragEnter
	void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                       // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Initialize
	void Initialize();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Image_Hovered_Event
	void Image_Hovered_Event(UImage* Image_Hovered);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Image_Hovered_Event
	void Image_Hovered_Event(UImage* Image_Hovered);                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ShopAnimFinished
	void ShopAnimFinished(UImage* Image_ShopAnim);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ProgressBar6s
	void ProgressBar6s(UProgressBar* ProgressBar_Component);                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UpdateIcon
	void UpdateIcon();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.QuipItem
	void QuipItem();                                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ProgressBar5s
	void ProgressBar5s(UProgressBar* ProgressBar_Component);                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ProgressBar52sec
	void ProgressBar52sec();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ProgressBar6Sec
	void ProgressBar6Sec();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetBadSelectionImage
	void SetBadSelectionImage();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ChangeVisibilityIsEmpty
	void ChangeVisibilityIsEmpty();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ChangeVisibilityIsFixedSlot
	void ChangeVisibilityIsFixedSlot();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.SetDefaultSelectionImage
	void SetDefaultSelectionImage();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.PlayDismantleAnimation
	void PlayDismantleAnimation();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Hovered Slot
	void Hovered Slot();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.UnhoveredSlot
	void UnhoveredSlot();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.Construct
	void Construct();                                                                                                        // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnAddedToFocusPath
	void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnRemovedFromFocusPath
	void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnMouseEnter
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnMouseLeave
	void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x2407bf0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.StopDismantleAnimation
	void StopDismantleAnimation();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ShopAnim 
	void ShopAnim ();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.StartProcessRepair
	void StartProcessRepair();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.RepairProgressFilled
	void RepairProgressFilled();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.DragCancel
	void DragCancel();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.BlockTimer
	void BlockTimer(double Time);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.ExecuteUbergraph_JSI_Slot
	void ExecuteUbergraph_JSI_Slot(int32_t EntryPoint);                                                                      // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnShopAnimFinished__DelegateSignature
	void OnShopAnimFinished__DelegateSignature();                                                                            // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDurabilityChanged__DelegateSignature
	void OnDurabilityChanged__DelegateSignature();                                                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnContentShow__DelegateSignature
	void OnContentShow__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnContentHidden__DelegateSignature
	void OnContentHidden__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnSelected(ClickedRMB)__DelegateSignature
	void OnSelected(ClickedRMB)__DelegateSignature(UJSI_Slot_C* SlotWidgetRef);                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnSelected(Clicked)__DelegateSignature
	void OnSelected(Clicked)__DelegateSignature(UJSI_Slot_C* SlotWidgetRef);                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragMove__DelegateSignature
	void OnDragMove__DelegateSignature();                                                                                    // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/Widgets/JSI_Slot.JSI_Slot_C.OnDragStart__DelegateSignature
	void OnDragStart__DelegateSignature();                                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/Trade/WBP_TradeOffer.WBP_TradeOffer_C
/// Size: 0x0010 (0x000310 - 0x000320)
class UWBP_TradeOffer_C : public UWBP_Offer_C : UWBP_Offer_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	ASurvivalPlayer_C*                                 TradeOfferer;                                               // 0x0318   (0x0008)  


	/// Functions
	// Function /Game/JigSInventory/Trade/WBP_TradeOffer.WBP_TradeOffer_C.Init
	void Init();                                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/Trade/WBP_TradeOffer.WBP_TradeOffer_C.AcceptOffer
	void AcceptOffer();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/Trade/WBP_TradeOffer.WBP_TradeOffer_C.DeclineOffer
	void DeclineOffer();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/Trade/WBP_TradeOffer.WBP_TradeOffer_C.ExecuteUbergraph_WBP_TradeOffer
	void ExecuteUbergraph_WBP_TradeOffer(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C
/// Size: 0x0221 (0x000290 - 0x0004B1)
class AMPMainContainerBox_C : public AMainContainerBox : AMainContainerBox
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	bool                                               RandomGenerate;                                             // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FText                                              ContainerName;                                              // 0x02A8   (0x0018)  
	UMPContainerWidget_C*                              ContainerWidget;                                            // 0x02C0   (0x0008)  
	TArray<FDefaultItemInfo>                           ContainerItems;                                             // 0x02C8   (0x0010)  
	FMulticastInlineDelegate                           OnContainerAction;                                          // 0x02D8   (0x0010)  
	int32_t                                            CurrentContainerID;                                         // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	TArray<FContainerPickupsInfo>                      MPContainers;                                               // 0x02F0   (0x0010)  
	TArray<FContainerPickupsInfo>                      MPContainerItems;                                           // 0x0300   (0x0010)  
	UDataTable*                                        DataTable;                                                  // 0x0310   (0x0008)  
	int32_t                                            CurrentUID;                                                 // 0x0318   (0x0004)  
	int32_t                                            MainNumOfColumns;                                           // 0x031C   (0x0004)  
	int32_t                                            MainNumOfRows;                                              // 0x0320   (0x0004)  
	bool                                               DataRequested;                                              // 0x0324   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0325   (0x0003)  MISSED
	TArray<FServerSlotInfoArray>                       MPContainerSlotDataS;                                       // 0x0328   (0x0010)  
	TMap<int32_t, UJSIContainer_C*>                    ContainerWidgets;                                           // 0x0338   (0x0050)  
	bool                                               DataBuilt;                                                  // 0x0388   (0x0001)  
	TEnumAsByte<LootGeneratorType>                     LootGeneratorType;                                          // 0x0389   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x038A   (0x0006)  MISSED
	APawn*                                             UsingPlayer;                                                // 0x0390   (0x0008)  
	UDataTable*                                        LootGeneratorAsset;                                         // 0x0398   (0x0008)  
	int32_t                                            MaxItemsCount;                                              // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x03A4   (0x0004)  MISSED
	UPDA_ChanceModifier_C*                             LootChanceModAsset;                                         // 0x03A8   (0x0008)  
	bool                                               IsShop;                                                     // 0x03B0   (0x0001)  
	bool                                               WidgetInited;                                               // 0x03B1   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x03B2   (0x0006)  MISSED
	FMulticastInlineDelegate                           MovedToChar;                                                // 0x03B8   (0x0010)  
	UMPContainerWidget_v2_C*                           ContainerWidget_v2;                                         // 0x03C8   (0x0008)  
	int32_t                                            ChanceTier4;                                                // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	UDataTable*                                        WeaponDataTable;                                            // 0x03D8   (0x0008)  
	int32_t                                            ChanceTier5;                                                // 0x03E0   (0x0004)  
	bool                                               CanStackItem;                                               // 0x03E4   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x03E5   (0x0003)  MISSED
	int32_t                                            RandomIndexGenerate;                                        // 0x03E8   (0x0004)  
	int32_t                                            RandomCountMoney;                                           // 0x03EC   (0x0004)  
	int32_t                                            ChanceMoney;                                                // 0x03F0   (0x0004)  
	int32_t                                            MinMoney;                                                   // 0x03F4   (0x0004)  
	int32_t                                            MaxMoney;                                                   // 0x03F8   (0x0004)  
	bool                                               GenerateItemsInventory;                                     // 0x03FC   (0x0001)  
	bool                                               NeedGenerate;                                               // 0x03FD   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x03FE   (0x0002)  MISSED
	int32_t                                            ContainerItemsCount;                                        // 0x0400   (0x0004)  
	bool                                               LootOpened;                                                 // 0x0404   (0x0001)  
	bool                                               bIsLocked;                                                  // 0x0405   (0x0001)  
	bool                                               bCurrentLockState;                                          // 0x0406   (0x0001)  
	TEnumAsByte<E_LockpickDifficulty>                  LockpickDiffuculty;                                         // 0x0407   (0x0001)  
	ABP_LockpickingGame_C*                             LockpickingGameActor;                                       // 0x0408   (0x0008)  
	bool                                               RespawnContainerItems;                                      // 0x0410   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0411   (0x0007)  MISSED
	TArray<FDefaultItemInfo>                           ContainerItemsForRespawn;                                   // 0x0418   (0x0010)  
	TArray<FContainerPickupsInfo>                      MPContainerItemsForRespawn;                                 // 0x0428   (0x0010)  
	bool                                               CanCloseDoor;                                               // 0x0438   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0439   (0x0003)  MISSED
	int32_t                                            MaxItemsPerContainer;                                       // 0x043C   (0x0004)  
	int32_t                                            LootedCount;                                                // 0x0440   (0x0004)  
	unsigned char                                      UnknownData11_5[0x4];                                       // 0x0444   (0x0004)  MISSED
	UJSIContainer_C*                                   JSIContainer;                                               // 0x0448   (0x0008)  
	UJSI_Slot_C*                                       Slot_Item_Ref;                                              // 0x0450   (0x0008)  
	UJSI_Slot_C*                                       PointedItemSlot;                                            // 0x0458   (0x0008)  
	TMap<UQuest*, double>                              QuestList;                                                  // 0x0460   (0x0050)  
	bool                                               bFreePickup;                                                // 0x04B0   (0x0001)  


	/// Functions
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.IsInWater
	void IsInWater(bool& InWater);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.IsPlayer
	void IsPlayer(bool& IsPlayer);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.SetEnableSmoothSync
	void SetEnableSmoothSync(bool NewEnable, bool& Success);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.PlayerItemCountByName
	void PlayerItemCountByName(FString ItemName, int32_t& Count);                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.PlayerGetMesh
	void PlayerGetMesh(USkeletalMeshComponent*& Mesh);                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.PlayerAddItem
	void PlayerAddItem(FFItemInfo ItemInfo, UWBP_AttachmentCell_C* ActiveCell, bool& Added);                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetFreePickup
	void GetFreePickup(bool& bFreePickup);                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.SetFreePickup
	void SetFreePickup(bool bFreePickup);                                                                                    // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.Get Rand Unique Item
	void Get Rand Unique Item(UQuestData_C* QuestData, ASurvivalPlayer_C* Surv, FString& ItemName);                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetPointedItemSlot
	void GetPointedItemSlot(UJSI_Slot_C*& PointedItemSlot);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetRandCurrentQuestsData
	void GetRandCurrentQuestsData(ASurvPC_C* Controller, UQuestData_C*& AsQuest Data, double& Chance);                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MPCUpdateItemInfo
	void MPCUpdateItemInfo(FContainerPickupsInfo Item);                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.UpdateContainerData (OnlyServer)
	void UpdateContainerData (OnlyServer)(TArray<FContainerPickupsInfo>& InContainers, bool Re-Init, bool& Result);          // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetCompiledContainerStructure
	void GetCompiledContainerStructure(FFItemInfo Item, FDefaultItemInfo DefItem, int32_t ContainerMotherID, int32_t SlotIndex, bool AutoUpdateChild, bool& Result, FContainerPickupsInfo& Container); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.IsLootPoint
	void IsLootPoint(bool& Result, ALootPoint_C*& Loot);                                                                     // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.AddItemToFreeSlot (OnlyServer)
	void AddItemToFreeSlot (OnlyServer)(int32_t ContainerUID, FDefaultItemInfo Item, bool AutoUpdate, bool& Result, FContainerPickupsInfo& Container); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.InteractController
	void InteractController();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnRep_NeedGenerate
	void OnRep_NeedGenerate();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.CheckTierAndLootTypes
	bool CheckTierAndLootTypes(FFItemInfo& FItemInfo, ATDB_GameMode_C* GameMode, TArray<FName>& ArrayTypes);                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GenerateRandomItemsOnType
	void GenerateRandomItemsOnType(TEnumAsByte<ELootTypes> Type, TEnumAsByte<SlotRarity> LootTier, int32_t Chance, FName& ID, bool& Canstack, int32_t& MaxCountStack, ATDB_GameMode_C*& AsTDB Game Mode); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.PlayerGetItemCount
	void PlayerGetItemCount(UObject* Target, FString ItemName, int32_t& Count);                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.PlayerHasWeapon
	void PlayerHasWeapon(UObject* Target, bool& Value);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MPContToFull
	void MPContToFull(FMpContentRep Content, TArray<FContainerPickupsInfo>& Containers, TArray<FContainerPickupsInfo>& ContainerItems); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GenerateContainerItems
	void GenerateContainerItems(FS_LootChanceModifier LootChanceMod, TArray<FDefaultItemInfo>& Items);                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.RemoveContainerCustom
	void RemoveContainerCustom(int32_t ItemUID, bool IsContainer?);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnRep_MPContainerItems
	void OnRep_MPContainerItems();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.InMPCMoveItem
	void InMPCMoveItem(int32_t ItemUID, int32_t ToContainerUID, int32_t ToIndex, bool Rotated?, bool isContainer);           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.TransferMPCDataToChar
	void TransferMPCDataToChar(FContainerPickupsInfo& ContainerInfo, int32_t ContainerIndex, bool Shop, int32_t ItemsLeft, bool& Success, TArray<FContainerPickupsInfo>& ContainerDataResult, TArray<FContainerPickupsInfo>& ContainerItemsResult); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.BuildContainerDataToWidget
	void BuildContainerDataToWidget(TArray<FContainerPickupsInfo>& ItemData_Containers, TArray<FContainerPickupsInfo>& ItemData_Items, UJSIContainer_C* MainContainer, TArray<UJSIContainer_C*>& CreatedContainerList); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.AddContainerToContainer
	void AddContainerToContainer(FContainerPickupsInfo Container, TArray<FContainerPickupsInfo>& ContainerData, TArray<FContainerPickupsInfo>& ContainerItems, int32_t ToContainerUID, int32_t ToSlot, bool Rotated?, bool NotSync); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetVector
	void GetVector(bool Rotated, FVector2D Vector, FVector2D& NewVector);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.DoesItemExist
	void DoesItemExist(int32_t Uid, bool IsContainer?, bool& Exists, FContainerPickupsInfo& PickupItem, int32_t& ArrayIndex); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.SetContainerPermissions
	void SetContainerPermissions(UJSIContainer_C* Container);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.AddContainersToDictionary
	void AddContainersToDictionary(TArray<UJSIContainer_C*>& Containers);                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.AddItemToContainer
	void AddItemToContainer(int32_t ToContainerUID, int32_t ToSlotIndex, FContainerPickupsInfo ItemPInfo, bool Rotated?, bool CallMCEvent?, bool& Added); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MPCRemoveItem
	void MPCRemoveItem(int32_t Uid, bool IsContainer?, bool Shop, bool& Removed);                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MPCFindItem
	void MPCFindItem(int32_t ContainerUID, int32_t ItemUID, bool IsContainer?, bool Shop, bool& Found, FContainerPickupsInfo& ItemInfo, int32_t& Index); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.BuildContainerSlotData
	void BuildContainerSlotData(int32_t NumOfColumns, int32_t NumOfRows, int32_t ContainerUID, bool Shop);                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetSlotDataArrIndexByUID
	void GetSlotDataArrIndexByUID(int32_t Uid, bool Shop, int32_t& Index);                                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.AddItemToContainer_NoData
	void AddItemToContainer_NoData(int32_t ContainerUID, int32_t NOfColumns, int32_t NOfRows, FVector2D SlotVector, bool& Added, int32_t& AddedTo, TArray<int32_t>& HostingSlots); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.RequestMoveItem
	void RequestMoveItem(int32_t ToSlotIndex, int32_t ItemUID, int32_t ToContainerUID, bool Rotated?, bool isContainer, bool CallMCEvent?, bool Shop, bool& Moved); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MoveItemToSlotInContainer
	void MoveItemToSlotInContainer(int32_t NOfColumns, int32_t NumOfRows, int32_t ToSlotIndex, int32_t ItemUID, FVector2D ItemVector, int32_t ItemSlotIndex, int32_t ToContainerUID, bool isContainer, bool Rotated?, bool& Moved, int32_t& ToSlot, int32_t& ItemId, int32_t& ContainerUID); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetHostingSlots
	void GetHostingSlots(int32_t InIndex, int32_t NOfColumns, int32_t NOfRows, FVector2D ItemVector, TArray<int32_t>& Indexes); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetMainContainer
	void GetMainContainer(UMPContainerWidget_C*& ContainerWidget);                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetReplicatedData (OnlyServer)
	void GetReplicatedData (OnlyServer)(APawn* Player, FS_LootChanceModifier LootChanceMod, FMpContentRep& Data);            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetSlotIndexByRowColumn
	int32_t GetSlotIndexByRowColumn(int32_t column, int32_t Row, int32_t NumOfColumns);                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetColumnRowBySlotIndex
	void GetColumnRowBySlotIndex(int32_t SlotIndex, int32_t NumOfColumns, int32_t NumOfRows, int32_t& column, int32_t& Row); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.BlindAddNewItemToContainer
	void BlindAddNewItemToContainer(FVector2D SlotVector, int32_t ItemUID, int32_t ToContainerUID, bool Shop, bool& Added, int32_t& ToSlotIndex, int32_t& UniqueId); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GetUniqueServerID
	void GetUniqueServerID(int32_t& NewUID);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.BuildData (OnlyServer)
	void BuildData (OnlyServer)(FS_LootChanceModifier LootChanceMod, bool Re-Build);                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.getRotation
	void getRotation(bool ItemRotated?, bool DroppedRotation, bool& Rotated);                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.CompleteQuest
	void CompleteQuest(int32_t QuestIndex, int32_t ObjectiveIndex);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ActivateQuest
	void ActivateQuest();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GI_TileLoaded
	void GI_TileLoaded(FName TileName);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.GI_TileUnloaded
	void GI_TileUnloaded(FName TileName);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.Craft
	void Craft(APawn* Player);                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.HeatUpBonfire
	void HeatUpBonfire(APawn* Player);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.CallLootAnim
	void CallLootAnim(double LootingHeight, bool LootPointOpened);                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OpenLootRPC
	void OpenLootRPC(ALootPoint_C* LootPoint);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ShowSimpleUIText
	void ShowSimpleUIText(FString String);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OpenDoorRPC
	void OpenDoorRPC(ABP_Door_C* Door, bool IsOpen);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.PlayerCanisterAction
	void PlayerCanisterAction(bool Attach, ABP_Canister_C* Canister);                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.CampPlaceBegin
	void CampPlaceBegin();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.CampPlaceEnd
	void CampPlaceEnd();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.CampBuildInstant
	void CampBuildInstant();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.Interact
	void Interact(bool NewParam);                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.SetPlayerCollisionInCar
	void SetPlayerCollisionInCar(bool NewEnable);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.HandleContainersEvents
	void HandleContainersEvents(UJSIContainer_C* Container, bool SetID?);                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.EventOnContainerAction
	void EventOnContainerAction(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool Rotated?, bool RightMouseButton); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MC_MPContainerMoveItem
	void MC_MPContainerMoveItem(int32_t ContainerID, int32_t ItemSlotIndex, int32_t ToSlotIndex, bool Rotated?);             // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MC_RemoveItem
	void MC_RemoveItem(int32_t ContainerUID, int32_t ItemUID);                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MC_AddNewItemToContainer
	void MC_AddNewItemToContainer(int32_t ToContainerUID, FContainerPickupsInfo PickupItem, int32_t ToSlot);                 // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.UnhandleAllEvents
	void UnhandleAllEvents(UJSIContainer_C* Container);                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MC_AddNewContainer
	void MC_AddNewContainer(int32_t ToContainerUID, FContainerPickupsInfo PickupItem, int32_t ToSlot, bool Rotated?, TArray<FContainerPickupsInfo>& ContainerData, TArray<FContainerPickupsInfo>& ContainerItems, bool BlockAddContainer); // [0x2407bf0] Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MC_InMPCMoveItem
	void MC_InMPCMoveItem(int32_t ItemUID, int32_t FromContainerUID, int32_t ToContainerUID, int32_t ToIndex, bool Rotated?); // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.InitContainerWidget (Main)
	void InitContainerWidget (Main)();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ResetGenerateItemsSpawnEvent
	void ResetGenerateItemsSpawnEvent();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ContainerBoxClosed
	void ContainerBoxClosed();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.StopLockpicking(binding)
	void StopLockpicking(binding)(bool Success);                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.RunOpenLogicAfterLockpicking
	void RunOpenLogicAfterLockpicking();                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.AddItemToDropBox (Multicast)
	void AddItemToDropBox (Multicast)(AActor* Actor, FDefaultItemInfo& Item);                                                // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MC_UpdateItemCount
	void MC_UpdateItemCount(int32_t ContainerUID, int32_t ItemUID, int32_t Count);                                           // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ContainerOpened
	void ContainerOpened();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.ExecuteUbergraph_MPMainContainerBox
	void ExecuteUbergraph_MPMainContainerBox(int32_t EntryPoint);                                                            // [0x2407bf0] Final|HasDefaults    
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.MovedToChar__DelegateSignature
	void MovedToChar__DelegateSignature(FName NewParam);                                                                     // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox.MPMainContainerBox_C.OnContainerAction__DelegateSignature
	void OnContainerAction__DelegateSignature(UJSIContainer_C* FromContainer, UJSIContainer_C* ToContainer, UJSI_Slot_C* DroppedSlotRef, UJSI_Slot_C* SlotReceiverRef, int32_t ToSlotIndex, bool DroppedRotated?); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/JigSInventory/1-System/PickupSystem/MPMainContainerBox_Child.MPMainContainerBox_Child_C
/// Size: 0x0000 (0x0004B1 - 0x0004B1)
class AMPMainContainerBox_Child_C : public AMPMainContainerBox_C : AMPMainContainerBox_C
{ 
public:
};

/// Enum /Game/JigSInventory/1-System/PickupSystem/Data/EquipmentSlot.EquipmentSlot
/// Size: 0x13
enum EquipmentSlot : uint8_t
{
	EquipmentSlot__NewEnumerator00                                                   = 0,
	EquipmentSlot__NewEnumerator11                                                   = 1,
	EquipmentSlot__NewEnumerator22                                                   = 2,
	EquipmentSlot__NewEnumerator33                                                   = 3,
	EquipmentSlot__NewEnumerator64                                                   = 4,
	EquipmentSlot__NewEnumerator75                                                   = 5,
	EquipmentSlot__NewEnumerator86                                                   = 6,
	EquipmentSlot__NewEnumerator57                                                   = 7,
	EquipmentSlot__NewEnumerator98                                                   = 8,
	EquipmentSlot__NewEnumerator109                                                  = 9,
	EquipmentSlot__NewEnumerator1110                                                 = 10,
	EquipmentSlot__NewEnumerator1211                                                 = 11,
	EquipmentSlot__EquipmentSlot_MAX12                                               = 12
};

/// Enum /Game/JigSInventory/Examples/Data/PlayerSlots.PlayerSlots
/// Size: 0x13
enum PlayerSlots : uint8_t
{
	PlayerSlots__NewEnumerator00                                                     = 0,
	PlayerSlots__NewEnumerator11                                                     = 1,
	PlayerSlots__NewEnumerator22                                                     = 2,
	PlayerSlots__NewEnumerator33                                                     = 3,
	PlayerSlots__NewEnumerator44                                                     = 4,
	PlayerSlots__NewEnumerator55                                                     = 5,
	PlayerSlots__NewEnumerator66                                                     = 6,
	PlayerSlots__NewEnumerator77                                                     = 7,
	PlayerSlots__NewEnumerator88                                                     = 8,
	PlayerSlots__NewEnumerator99                                                     = 9,
	PlayerSlots__NewEnumerator1010                                                   = 10,
	PlayerSlots__NewEnumerator1111                                                   = 11,
	PlayerSlots__PlayerSlots_MAX12                                                   = 12
};

/// Enum /Game/JigSInventory/1-System/Data/ContainerType.ContainerType
/// Size: 0x05
enum ContainerType : uint8_t
{
	ContainerType__NewEnumerator00                                                   = 0,
	ContainerType__NewEnumerator11                                                   = 1,
	ContainerType__NewEnumerator22                                                   = 2,
	ContainerType__NewEnumerator33                                                   = 3,
	ContainerType__ContainerType_MAX4                                                = 4
};

/// Enum /Game/JigSInventory/1-System/Data/SlotRarity.SlotRarity
/// Size: 0x10
enum SlotRarity : uint8_t
{
	SlotRarity__NewEnumerator00                                                      = 0,
	SlotRarity__NewEnumerator11                                                      = 1,
	SlotRarity__NewEnumerator22                                                      = 2,
	SlotRarity__NewEnumerator33                                                      = 3,
	SlotRarity__NewEnumerator44                                                      = 4,
	SlotRarity__NewEnumerator55                                                      = 5,
	SlotRarity__NewEnumerator66                                                      = 6,
	SlotRarity__NewEnumerator77                                                      = 7,
	SlotRarity__NewEnumerator88                                                      = 8,
	SlotRarity__SlotRarity_MAX9                                                      = 9
};

/// Enum /Game/JigSInventory/1-System/Data/JSItemType.JSItemType
/// Size: 0x25
enum JSItemType : uint8_t
{
	JSItemType__NewEnumerator00                                                      = 0,
	JSItemType__NewEnumerator11                                                      = 1,
	JSItemType__NewEnumerator82                                                      = 2,
	JSItemType__NewEnumerator23                                                      = 3,
	JSItemType__NewEnumerator34                                                      = 4,
	JSItemType__NewEnumerator45                                                      = 5,
	JSItemType__NewEnumerator56                                                      = 6,
	JSItemType__NewEnumerator67                                                      = 7,
	JSItemType__NewEnumerator98                                                      = 8,
	JSItemType__NewEnumerator109                                                     = 9,
	JSItemType__NewEnumerator1110                                                    = 10,
	JSItemType__NewEnumerator1211                                                    = 11,
	JSItemType__NewEnumerator1312                                                    = 12,
	JSItemType__NewEnumerator1413                                                    = 13,
	JSItemType__NewEnumerator1514                                                    = 14,
	JSItemType__NewEnumerator1615                                                    = 15,
	JSItemType__NewEnumerator1716                                                    = 16,
	JSItemType__NewEnumerator1817                                                    = 17,
	JSItemType__NewEnumerator1918                                                    = 18,
	JSItemType__NewEnumerator2019                                                    = 19,
	JSItemType__NewEnumerator2120                                                    = 20,
	JSItemType__NewEnumerator2221                                                    = 21,
	JSItemType__NewEnumerator2322                                                    = 22,
	JSItemType__NewEnumerator2423                                                    = 23,
	JSItemType__JSItemType_MAX24                                                     = 24
};

/// Enum /Game/JigSInventory/1-System/Data/InfoType.InfoType
/// Size: 0x19
enum InfoType : uint8_t
{
	InfoType__NewEnumerator00                                                        = 0,
	InfoType__NewEnumerator11                                                        = 1,
	InfoType__NewEnumerator22                                                        = 2,
	InfoType__NewEnumerator33                                                        = 3,
	InfoType__NewEnumerator44                                                        = 4,
	InfoType__NewEnumerator55                                                        = 5,
	InfoType__NewEnumerator66                                                        = 6,
	InfoType__NewEnumerator77                                                        = 7,
	InfoType__NewEnumerator128                                                       = 8,
	InfoType__NewEnumerator139                                                       = 9,
	InfoType__NewEnumerator1410                                                      = 10,
	InfoType__NewEnumerator1511                                                      = 11,
	InfoType__NewEnumerator1612                                                      = 12,
	InfoType__NewEnumerator1713                                                      = 13,
	InfoType__NewEnumerator1914                                                      = 14,
	InfoType__NewEnumerator2015                                                      = 15,
	InfoType__NewEnumerator2116                                                      = 16,
	InfoType__NewEnumerator2217                                                      = 17,
	InfoType__InfoType_MAX18                                                         = 18
};

/// Enum /Game/JigSInventory/1-System/Data/EDismantleType.EDismantleType
/// Size: 0x06
enum EDismantleType : uint8_t
{
	EDismantleType__NewEnumerator30                                                  = 0,
	EDismantleType__NewEnumerator01                                                  = 1,
	EDismantleType__NewEnumerator12                                                  = 2,
	EDismantleType__NewEnumerator23                                                  = 3,
	EDismantleType__NewEnumerator44                                                  = 4,
	EDismantleType__EDismantleType_MAX5                                              = 5
};

