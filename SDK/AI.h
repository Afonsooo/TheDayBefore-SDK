
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AI.

/// Struct /Game/AI/Zombie/DismembermentParts/F_ZombieDismemberedParts.F_ZombieDismemberedParts
/// Size: 0x0010 (0x000000 - 0x000010)
struct FF_ZombieDismemberedParts
{ 
	TArray<TWeakObjectPtr>                             DismembermentParts_3_B1C49A0B45DD472959B594B1D5D25DAA;      // 0x0000   (0x0010)  
};

/// Struct /Game/AI/Zombie/ZombieDeadBody/Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00F7 (0x000001 - 0x0000F8)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0008)  
	FName                                              __NameProperty;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UBlendProfile*                                     __BlendProfile;                                             // 0x0018   (0x0008)  
	UCurveFloat*                                       __CurveFloat;                                               // 0x0020   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x0028   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0029   (0x0001)  
	EBlendListTransitionType                           __EnumProperty;                                             // 0x002A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0030   (0x0010)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0040   (0x0020)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0060   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00E0   (0x0018)  
};

/// Struct /Game/AI/Zombie/ZombieDeadBody/Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
};

/// Struct /Game/AI/Zombie/F_ShotgunActorDamage.F_ShotgunActorDamage
/// Size: 0x0050 (0x000000 - 0x000050)
struct FF_ShotgunActorDamage
{ 
	TMap<FName, double>                                BoneDamageMap_14_C2932D7844EEEABABAF16F9D2749BD63;          // 0x0000   (0x0050)  
};

/// Struct /Game/AI/Zombie/S_IntegerMinMax.S_IntegerMinMax
/// Size: 0x0008 (0x000000 - 0x000008)
struct FS_IntegerMinMax
{ 
	int32_t                                            Min_2_86C487CF4DAEB412541AB28BA54FE483;                     // 0x0000   (0x0004)  
	int32_t                                            Max_4_82B3B5964FC2943578D852811D9141A6;                     // 0x0004   (0x0004)  
};

/// Struct /Game/AI/Zombie/ZombiePartitionedMeshes/ZombiePartitionedMeshes.ZombiePartitionedMeshes
/// Size: 0x0010 (0x000000 - 0x000010)
struct FZombiePartitionedMeshes
{ 
	TArray<TWeakObjectPtr>                             PartitionedMeshes_4_ACD4BCE6435A52FD4AF07E938C1CC3DB;       // 0x0000   (0x0010)  
};

/// Struct /Game/AI/Zombie/Wound/F_WoundInfo.F_WoundInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FF_WoundInfo
{ 
	FVertexDetectAndPaintFundementalsStruct            VertexPaintFundementals_4_F2E68CB74CE58B6A201E7080E7C0DE78; // 0x0000   (0x0068)  
	FVector                                            BoneLocation_7_8F57A6214A729042856061AF39DB93E6;            // 0x0068   (0x0018)  
	FRotator                                           BoneRotation_10_F51108F84B339C0C072C24A236F19A9F;           // 0x0080   (0x0018)  
};

/// Struct /Game/AI/Zombie/Sounds/F_ZombieSounds.F_ZombieSounds
/// Size: 0x0120 (0x000000 - 0x000120)
struct FF_ZombieSounds
{ 
	TArray<TWeakObjectPtr>                             Idles_58_AC865A6442C7C5214273FDA813A29F1F;                  // 0x0000   (0x0010)  
	TWeakObjectPtr<UFMODEvent*>                        Agressive_57_102C8CED4F23DCB279C39192D597E049;              // 0x0010   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        Death_56_1976086F426304B202583CA52024B94B;                  // 0x0040   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        Attack_55_2A8C79B641B93FD9947EE7AD7F3C6CD2;                 // 0x0070   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        Scream_54_1B299883419B76EDA864A5A90F6720AE;                 // 0x00A0   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        Damaged_53_A023EFDD49C453F45F37E684D4A5F109;                // 0x00D0   (0x0030)  
	TArray<TWeakObjectPtr>                             WalkStep_52_72FC4F9D4A16351A74F572BA3891856A;               // 0x0100   (0x0010)  
	TArray<TWeakObjectPtr>                             SprintStep_51_BE4D492241CB6F31C9BF5DB8883E40DE;             // 0x0110   (0x0010)  
};

/// Struct /Game/AI/Zombie/F_AgressiveMontage.F_AgressiveMontage
/// Size: 0x0030 (0x000000 - 0x000030)
struct FF_AgressiveMontage
{ 
	TWeakObjectPtr<UAnimMontage*>                      AgressiveMontage_3_9B7126364B775894EAE6FFA09297A5F8;        // 0x0000   (0x0030)  
};

/// Struct /Game/AI/Zombie/DismembermentMeshes/SpawnDecalStructure.SpawnDecalStructure
/// Size: 0x0009 (0x000000 - 0x000009)
struct FSpawnDecalStructure
{ 
	UDecalComponent*                                   SpawnedDecal_4_796487ED413C858D91501E84EF355E61;            // 0x0000   (0x0008)  
	bool                                               SpawnedSuccesfully_2_F903705A487A20897720BCA081129CA2;      // 0x0008   (0x0001)  
};

/// Struct /Game/AI/Zombie/DismembermentMeshes/DismembermentMeshCollection.DismembermentMeshCollection
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDismembermentMeshCollection
{ 
	TArray<TWeakObjectPtr>                             HeadDismembermentMesh_35_37B416144615768E99BB1D84D5860DF2;  // 0x0000   (0x0010)  
	TArray<TWeakObjectPtr>                             LeftArmDismembermentMesh_36_38780BBB40CAFDA053F227BA07B85E5E; // 0x0010   (0x0010)  
	TArray<TWeakObjectPtr>                             RightArmDismembermentMesh_37_0A08E25F42C2674A351ED0BB5279FBE4; // 0x0020   (0x0010)  
	TArray<TWeakObjectPtr>                             LeftLegDismembermentMesh_38_96B3E92343F642BB3B3CD9934AF27CA3; // 0x0030   (0x0010)  
	TArray<TWeakObjectPtr>                             RightLegDismembermentMesh_39_3EED427E4CFBA399D7DFBC843FB3C062; // 0x0040   (0x0010)  
	TArray<TWeakObjectPtr>                             FullFeetDismembermentMesh_40_E8750D704A5979CC4598F7AB4CA70E7F; // 0x0050   (0x0010)  
	TArray<TWeakObjectPtr>                             FullBodyDismembermentMesh_41_29ACA2B840F2B4656336DEAE99781537; // 0x0060   (0x0010)  
};

/// Struct /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0001   (0x0007)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0008   (0x0020)  
	FName                                              __NameProperty;                                             // 0x0028   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0030   (0x0008)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0038   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00B8   (0x0018)  
};

/// Struct /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01E7 (0x000001 - 0x0001E8)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x000C   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0010   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0018   (0x0004)  
	FName                                              __NameProperty;                                             // 0x001C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0024   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0028   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0030   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0038   (0x0004)  
	FName                                              __NameProperty;                                             // 0x003C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0044   (0x0004)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x004C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0054   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0058   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0068   (0x0010)  
	TArray<float>                                      __ArrayProperty;                                            // 0x0078   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x0088   (0x0010)  
	FInputScaleBiasClampConstants                      __StructProperty;                                           // 0x0098   (0x002C)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x00C4   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00C6   (0x0002)  MISSED
	FName                                              __NameProperty;                                             // 0x00C8   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00D0   (0x0004)  
	float                                              __FloatProperty;                                            // 0x00D4   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x00DC   (0x0004)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x00E0   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FName                                              __NameProperty;                                             // 0x00E4   (0x0008)  
	FName                                              __NameProperty;                                             // 0x00EC   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x00F4   (0x0004)  
	UBlendProfile*                                     __BlendProfile;                                             // 0x00F8   (0x0008)  
	UCurveFloat*                                       __CurveFloat;                                               // 0x0100   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x0108   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0109   (0x0001)  
	EBlendListTransitionType                           __EnumProperty;                                             // 0x010A   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x010B   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0110   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0120   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0128   (0x0008)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0130   (0x0020)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0150   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x01D0   (0x0018)  
};

/// Struct /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0020 (0x000001 - 0x000021)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              __FloatProperty;                                            // 0x0004   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0008   (0x0004)  
	float                                              __FloatProperty;                                            // 0x000C   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0010   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0014   (0x0001)  
	char                                               __ByteProperty;                                             // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              __FloatProperty;                                            // 0x0018   (0x0004)  
	float                                              __FloatProperty;                                            // 0x001C   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0020   (0x0001)  
};

/// Struct /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01F7 (0x000001 - 0x0001F8)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0008   (0x0010)  
	FName                                              __NameProperty;                                             // 0x0018   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0020   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0024   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x002C   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0030   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0038   (0x0004)  
	FName                                              __NameProperty;                                             // 0x003C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0044   (0x0004)  
	FName                                              __NameProperty;                                             // 0x0048   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0050   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0058   (0x0004)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0060   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0068   (0x0004)  
	FName                                              __NameProperty;                                             // 0x006C   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0074   (0x0004)  
	TArray<float>                                      __ArrayProperty;                                            // 0x0078   (0x0010)  
	TArray<float>                                      __ArrayProperty;                                            // 0x0088   (0x0010)  
	UBlendProfile*                                     __BlendProfile;                                             // 0x0098   (0x0008)  
	UCurveFloat*                                       __CurveFloat;                                               // 0x00A0   (0x0008)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x00A8   (0x0001)  
	EBlendListTransitionType                           __EnumProperty;                                             // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x00B0   (0x0010)  
	TArray<int32_t>                                    __ArrayProperty;                                            // 0x00C0   (0x0010)  
	FInputScaleBiasClampConstants                      __StructProperty;                                           // 0x00D0   (0x002C)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x00FC   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00FE   (0x0002)  MISSED
	FName                                              __NameProperty;                                             // 0x0100   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x0108   (0x0004)  
	float                                              __FloatProperty;                                            // 0x010C   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              __FloatProperty;                                            // 0x0114   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0118   (0x0001)  
	EAnimSyncMethod                                    __EnumProperty;                                             // 0x0119   (0x0001)  
	TEnumAsByte<EAnimGroupRole>                        __ByteProperty;                                             // 0x011A   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x011B   (0x0001)  MISSED
	FName                                              __NameProperty;                                             // 0x011C   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0124   (0x0008)  
	int32_t                                            __IntProperty;                                              // 0x012C   (0x0004)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0130   (0x0020)  
	FName                                              __NameProperty;                                             // 0x0150   (0x0008)  
	FName                                              __NameProperty;                                             // 0x0158   (0x0008)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0160   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x01E0   (0x0018)  
};

/// Struct /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimBlueprintGeneratedMutableData
/// Size: 0x001B (0x000001 - 0x00001C)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x0002   (0x0001)  
	bool                                               __BoolProperty;                                             // 0x0003   (0x0001)  
	float                                              __FloatProperty;                                            // 0x0004   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0008   (0x0004)  
	int32_t                                            __IntProperty;                                              // 0x000C   (0x0004)  
	bool                                               __BoolProperty;                                             // 0x0010   (0x0001)  
	char                                               __ByteProperty;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              __FloatProperty;                                            // 0x0014   (0x0004)  
	float                                              __FloatProperty;                                            // 0x0018   (0x0004)  
};

/// Struct /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal_Armored.ABP_ZombieFinal_Armored_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintGeneratedConstantData
{ 
};

/// Struct /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/AreaPropertiesUpdated.AreaPropertiesUpdated
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FAreaPropertiesUpdated
{ 
	bool                                               ShowWorkingArea_9_1EDE0BF548E9C033C7F40E93B3387C54;         // 0x0000   (0x0001)  
	bool                                               UseAreaRotation_48_EA4087EC44ECAE900F7250B488BE34F5;        // 0x0001   (0x0001)  
	EZombieType                                        ZombieType_75_845AF9234217CDE4E1D3DBA05430B0C2;             // 0x0002   (0x0001)  
	EZombieAnimType                                    ZombieAnimType_74_CD4C20D7424E1B9F1D9C979939167EAA;         // 0x0003   (0x0001)  
	int32_t                                            MinAmountOfAI_36_8A6AF20E43783775A83B75B40B4C0D00;          // 0x0004   (0x0004)  
	int32_t                                            MaxAmountOfAI_39_517E2F324626C7EA83494FAD11322F92;          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Extent_63_08E1301C4A466DD8CBAFA9B2977B0DF9;                 // 0x0010   (0x0018)  
	FVector                                            RelativeLocation_61_1831EB5043E8BBEC1706ED999E20287A;       // 0x0028   (0x0018)  
	FRotator                                           RelativeRotation_62_E993BF404555C5F5A8AB2A90E2124E59;       // 0x0040   (0x0018)  
	ABP_Door_C*                                        ConnectedDoor_66_29F6D43F41DD7766B00E35815D084F36;          // 0x0058   (0x0008)  
	FVector                                            PlayerCheckAreaExtext_70_2716170A4F838FF1EDFA74873EC3E8D5;  // 0x0060   (0x0018)  
	FRotator                                           PlayerCheckAreaRotation_73_39039BE646277A4A97EE2DB4F32A3EED; // 0x0078   (0x0018)  
	bool                                               InDarkRoom_77_A3A062D948A3E6EDCEA78799455F5AAE;             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FVector                                            PlayerCheckAreaLocation_80_5C2E30794C891EF3AD7503B24B5C68B2; // 0x0098   (0x0018)  
	bool                                               IgnoreSpawnIncrease_82_A09A00ED4B154F0A10F88BB917C61874;    // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<ATargetPoint*>                              PatrollingPath_86_9541DB994DC0ACB179FAE78922947988;         // 0x00B8   (0x0010)  
};

/// Struct /Game/AI/Zombie/AIMovementComponent/F_RotationCurvesMap.F_RotationCurvesMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FF_RotationCurvesMap
{ 
	TMap<double, UCurveFloat*>                         RotationCurvesMap_6_137CF03F4BC0EFF9ADA38AA6AFF19551;       // 0x0000   (0x0050)  
};

/// Struct /Game/AI/Zombie/AIMovementComponent/F_MovementSettings.F_MovementSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FF_MovementSettings
{ 
	double                                             Acceleration_4_E82C91A94F39DD22987809BE4FB44EBB;            // 0x0000   (0x0008)  
	double                                             Deceleration_5_B8EDB0164B7E0861C5493A8FBC002463;            // 0x0008   (0x0008)  
	double                                             MinSpeed_51_9E6EB4A0461D845F984DBFA88B80F7F2;               // 0x0010   (0x0008)  
	double                                             MaxSpeed_52_F26413844D06F2975C4D25AD97C78494;               // 0x0018   (0x0008)  
	double                                             MinDirInterpSpeed_39_852B85934787CBCC4CFE29903B03A2F3;      // 0x0020   (0x0008)  
	double                                             MaxDirInterpSpeed_40_8925E6FE43E1DACE75A12CB584C9BD27;      // 0x0028   (0x0008)  
	double                                             SpeedInterpSpeed_31_8703B86F42C1FE914B9BA797E496BDEE;       // 0x0030   (0x0008)  
	double                                             DecreaseStateDist_37_5E9C7CF34CE90A6DE189C5876AFD1FC0;      // 0x0038   (0x0008)  
	double                                             IncreaseStateDist_36_4A1E1BDA4112EC553303E78274364951;      // 0x0040   (0x0008)  
	double                                             HighestAngle_24_D19673934E93912BFFD6CBBF9574AECD;           // 0x0048   (0x0008)  
	double                                             LowestAngle_25_44A175E946753AE9CD3D7BA5D53891C8;            // 0x0050   (0x0008)  
	double                                             ChangePointDist_35_60B329A84E4555F8C40DC9A042B50492;        // 0x0058   (0x0008)  
	double                                             CloseToTargetDist_44_A2BF0692470EE7E4011329ACC11E1021;      // 0x0060   (0x0008)  
	double                                             CloseDirInterpSpeed_49_ED6AC7124B3B4F15E608C38BD9071784;    // 0x0068   (0x0008)  
	double                                             AfterDecreaseAdjustment_47_0B4A14654A91D1E880A9A3AF078AB53A; // 0x0070   (0x0008)  
	double                                             TwistCheckDistance_56_F77339FE4BB493D45358689D97F41161;     // 0x0078   (0x0008)  
};

/// Struct /Game/AI/Zombie/S_FloatMinMax.S_FloatMinMax
/// Size: 0x0008 (0x000000 - 0x000008)
struct FS_FloatMinMax
{ 
	float                                              MinFloat_6_C5EF9F534EC542B28CE05198A58A2866;                // 0x0000   (0x0004)  
	float                                              MaxFloat_7_3EF445024C012D3C8AF32385FF638D6D;                // 0x0004   (0x0004)  
};

/// Struct /Game/AI/Bandit/S_WeaponAccuracy.S_WeaponAccuracy
/// Size: 0x000C (0x000000 - 0x00000C)
struct FS_WeaponAccuracy
{ 
	TEnumAsByte<BPE_Weapon_Type>                       Weapon_4_E57A75644FBDBBCFD555CFBED20B7D36;                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SpreadPitch_9_2B091AC54E262EA6B2AEB8AEBA8D7926;             // 0x0004   (0x0004)  
	float                                              Spreadyaw_13_940500F8486AB91B701885A76E6507B9;              // 0x0008   (0x0004)  
};

/// Class /Game/AI/Zombie/NewAnimation/AN_StopDirectMove.AN_StopDirectMove_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UAN_StopDirectMove_C : public UAnimNotify : UAnimNotify
{ 
public:
	bool                                               Walk;                                                       // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/AI/Zombie/NewAnimation/AN_StopDirectMove.AN_StopDirectMove_C.Received_Notify
	bool Received_Notify(USkeletalMeshComponent* meshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x2407bf0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/AI/Zombie/NewAnimation/AN_ContinueMovement.AN_ContinueMovement_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAN_ContinueMovement_C : public UAnimNotify : UAnimNotify
{ 
public:
};

/// Class /Game/AI/Zombie/ZombieDeadBody/Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C
/// Size: 0x0230 (0x000350 - 0x000580)
class UOptimized_ABP_ZombieDeadBody_C : public UAnimInstance : UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0358   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x035A   (0x0006)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0360   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0368   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0370   (0x0020)  
	FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot;                                 // 0x0390   (0x0090)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0420   (0x0048)  
	FAnimNode_PoseSnapshot                             AnimGraphNode_PoseSnapshot;                                 // 0x0468   (0x0090)  
	FPoseSnapshot                                      K2Node_PropertyAccess;                                      // 0x04F8   (0x0038)  
	bool                                               K2Node_PropertyAccess;                                      // 0x0530   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0531   (0x0007)  MISSED
	FPoseSnapshot                                      K2Node_PropertyAccess;                                      // 0x0538   (0x0038)  
	AZombie_C*                                         Zombie;                                                     // 0x0570   (0x0008)  
	AZombieDeadBody_C*                                 ZombieDeadBody;                                             // 0x0578   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/ZombieDeadBody/Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C.BlueprintBeginPlay
	void BlueprintBeginPlay();                                                                                               // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C.ExecuteUbergraph_Optimized_ABP_ZombieDeadBody
	void ExecuteUbergraph_Optimized_ABP_ZombieDeadBody(int32_t EntryPoint);                                                  // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C
/// Size: 0x0150 (0x000318 - 0x000468)
class AZombieDeadBody_C : public APawn : APawn
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	UStaticMeshComponent*                              RightLeg;                                                   // 0x0320   (0x0008)  
	UStaticMeshComponent*                              LeftLeg;                                                    // 0x0328   (0x0008)  
	UStaticMeshComponent*                              RightArm;                                                   // 0x0330   (0x0008)  
	UStaticMeshComponent*                              LeftArm;                                                    // 0x0338   (0x0008)  
	USkeletalMeshComponent*                            Body;                                                       // 0x0340   (0x0008)  
	USkeletalMeshComponent*                            Feet;                                                       // 0x0348   (0x0008)  
	USkeletalMeshComponent*                            Head;                                                       // 0x0350   (0x0008)  
	float                                              DecayTimeline_DecayValue_F6DBDDEC4801F170B7EABEAA7EEA67B4;  // 0x0358   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DecayTimeline__Direction_F6DBDDEC4801F170B7EABEAA7EEA67B4;  // 0x035C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x035D   (0x0003)  MISSED
	UTimelineComponent*                                DecayTimeline;                                              // 0x0360   (0x0008)  
	AZombie_C*                                         Zombie;                                                     // 0x0368   (0x0008)  
	FTimerHandle                                       ShowingTimer;                                               // 0x0370   (0x0008)  
	int32_t                                            ZombieMeshType;                                             // 0x0378   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	TArray<TWeakObjectPtr>                             DismembermentParts;                                         // 0x0380   (0x0010)  
	FTimerHandle                                       LeftArmTimer;                                               // 0x0390   (0x0008)  
	FTimerHandle                                       RightArmTimer;                                              // 0x0398   (0x0008)  
	FTimerHandle                                       LeftLegTimer;                                               // 0x03A0   (0x0008)  
	FTimerHandle                                       RightLegTimer;                                              // 0x03A8   (0x0008)  
	bool                                               SpawnedLeftArmDecal;                                        // 0x03B0   (0x0001)  
	bool                                               SpawnedRightArmDecal;                                       // 0x03B1   (0x0001)  
	bool                                               SpawnedLeftLegDecal;                                        // 0x03B2   (0x0001)  
	bool                                               SpawnedRightLegDecal;                                       // 0x03B3   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03B4   (0x0004)  MISSED
	double                                             HitDecalLifeSpan;                                           // 0x03B8   (0x0008)  
	double                                             PoolDecalLifeSpan;                                          // 0x03C0   (0x0008)  
	FName                                              RootBoneName;                                               // 0x03C8   (0x0008)  
	FPoseSnapshot                                      AfterDeathPose;                                             // 0x03D0   (0x0038)  
	bool                                               AfterDeath;                                                 // 0x0408   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0409   (0x0007)  MISSED
	AZombieDeadBodyLootPoint_C*                        LootPoint;                                                  // 0x0410   (0x0008)  
	FMulticastInlineDelegate                           OnFinishInitialization;                                     // 0x0418   (0x0010)  
	bool                                               NoPhysics;                                                  // 0x0428   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0429   (0x0007)  MISSED
	TArray<UMaterialInstanceDynamic*>                  AllMaterials;                                               // 0x0430   (0x0010)  
	FTimerHandle                                       DecayStartTimer;                                            // 0x0440   (0x0008)  
	float                                              DecayStartDelay;                                            // 0x0448   (0x0004)  
	FName                                              DecayKey;                                                   // 0x044C   (0x0008)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0454   (0x0004)  MISSED
	UCurveFloat*                                       DecayCurve;                                                 // 0x0458   (0x0008)  
	ADropBox_LP_C*                                     LootPointBag;                                               // 0x0460   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.SetLootPointBag
	void SetLootPointBag(ADropBox_LP_C* LootPointBag);                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.StartDecayZombie
	void StartDecayZombie();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.CreateDMIForMesh
	void CreateDMIForMesh(UMeshComponent*& Mesh);                                                                            // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.SetupSkeletalMeshMaterials
	void SetupSkeletalMeshMaterials();                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.SetLootPoint
	void SetLootPoint(AZombieDeadBodyLootPoint_C* LootPoint);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.SpawnDecalUnderLimb
	void SpawnDecalUnderLimb(FVector LimbLocation, UMaterialInstance* DecalToSpawn, int32_t DecalMinSize, int32_t DecalMaxSize, double DecalLifeSpan, FSpawnDecalStructure& ResultStructure); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.CheckRightLegHit
	void CheckRightLegHit();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.CheckLeftLegHit
	void CheckLeftLegHit();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.CheckRightArmHit
	void CheckRightArmHit();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.CheckLeftArmHit
	void CheckLeftArmHit();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.Show Dismembered Mesh Part
	void Show Dismembered Mesh Part(TEnumAsByte<DismembermentPart> DismembermentPart, FVector TraceStart, FVector LimbImpulse); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.FinishInitialization
	void FinishInitialization();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.ChangeComponentsTickInterval
	void ChangeComponentsTickInterval(double TickInterval);                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.ChangeComponentsTickEnabled
	void ChangeComponentsTickEnabled(bool NeedTick);                                                                         // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.SetBodyTransform
	void SetBodyTransform();                                                                                                 // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.SetSkeletalMeshes
	void SetSkeletalMeshes();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.CheckCouldShow
	void CheckCouldShow();                                                                                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.Initialize
	void Initialize(bool NoPhysics);                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.DecayTimeline__FinishedFunc
	void DecayTimeline__FinishedFunc();                                                                                      // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.DecayTimeline__UpdateFunc
	void DecayTimeline__UpdateFunc();                                                                                        // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.OnLoaded_38F3396D4956D571BDCB9AA4A15074E6
	void OnLoaded_38F3396D4956D571BDCB9AA4A15074E6(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.OnLoaded_38F3396D4956D571BDCB9AA41630DFA8
	void OnLoaded_38F3396D4956D571BDCB9AA41630DFA8(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.OnLoaded_38F3396D4956D571BDCB9AA4CD186DA2
	void OnLoaded_38F3396D4956D571BDCB9AA4CD186DA2(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.OnLoaded_38F3396D4956D571BDCB9AA4A3D9809F
	void OnLoaded_38F3396D4956D571BDCB9AA4A3D9809F(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.LoadDismemberMeshes
	void LoadDismemberMeshes();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.ExecuteUbergraph_ZombieDeadBody
	void ExecuteUbergraph_ZombieDeadBody(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
	// Function /Game/AI/Zombie/ZombieDeadBody/ZombieDeadBody.ZombieDeadBody_C.OnFinishInitialization__DelegateSignature
	void OnFinishInitialization__DelegateSignature();                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/Zombie/I_Zombie.I_Zombie_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_Zombie_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/AI/Zombie/DroppingHelmet.DroppingHelmet_C
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADroppingHelmet_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              Visor;                                                      // 0x0298   (0x0008)  
	UStaticMeshComponent*                              Helmet;                                                     // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/DroppingHelmet.DroppingHelmet_C.BndEvt__DroppingHelmet_Visor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__DroppingHelmet_Visor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/DroppingHelmet.DroppingHelmet_C.BndEvt__DroppingHelmet_Helmet_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void BndEvt__DroppingHelmet_Helmet_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/DroppingHelmet.DroppingHelmet_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/DroppingHelmet.DroppingHelmet_C.ExecuteUbergraph_DroppingHelmet
	void ExecuteUbergraph_DroppingHelmet(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C
/// Size: 0x0141 (0x000350 - 0x000491)
class UOptimized_ABP_Zombie_C : public UAnimInstance : UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0358   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0360   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0368   (0x0020)  
	AZombie_C*                                         Zombie;                                                     // 0x0388   (0x0008)  
	double                                             VelocityValue;                                              // 0x0390   (0x0008)  
	double                                             AnimationAngle;                                             // 0x0398   (0x0008)  
	double                                             SurfaceTypeParameter;                                       // 0x03A0   (0x0008)  
	bool                                               IsRightFoot;                                                // 0x03A8   (0x0001)  
	bool                                               UseIK;                                                      // 0x03A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03AA   (0x0006)  MISSED
	FVector                                            RightFootJointTargetLocation;                               // 0x03B0   (0x0018)  
	FVector                                            LeftFootJointTargetLocation;                                // 0x03C8   (0x0018)  
	FVector                                            LeftFootJointTargetDesiredLocation;                         // 0x03E0   (0x0018)  
	FVector                                            RightFootJointTargetDesiredLocation;                        // 0x03F8   (0x0018)  
	float                                              Interp_Speed;                                               // 0x0410   (0x0004)  
	bool                                               IsAuthoritive;                                              // 0x0414   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0415   (0x0003)  MISSED
	FRotator                                           CharacterRotationLastFrame;                                 // 0x0418   (0x0018)  
	FRotator                                           CharacterRotation;                                          // 0x0430   (0x0018)  
	double                                             Target;                                                     // 0x0448   (0x0008)  
	double                                             Interp;                                                     // 0x0450   (0x0008)  
	double                                             Lean;                                                       // 0x0458   (0x0008)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x0460   (0x0008)  
	bool                                               IsStopping;                                                 // 0x0468   (0x0001)  
	TEnumAsByte<E_AIMovementType>                      MovementType;                                               // 0x0469   (0x0001)  
	bool                                               Accelerating;                                               // 0x046A   (0x0001)  
	bool                                               VelocityFromAnimation;                                      // 0x046B   (0x0001)  
	bool                                               CalculateLean;                                              // 0x046C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x046D   (0x0003)  MISSED
	FVector                                            LookAtLocation;                                             // 0x0470   (0x0018)  
	AActor*                                            Target_Actor;                                               // 0x0488   (0x0008)  
	bool                                               LookAtTarget;                                               // 0x0490   (0x0001)  


	/// Functions
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.CalculateLookAtLocation
	void CalculateLookAtLocation();                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.OnSetTargetActor
	void OnSetTargetActor(AActor* TargetActor);                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.StopCalculateLeaning
	void StopCalculateLeaning();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.StartCalculateLeaning
	void StartCalculateLeaning();                                                                                            // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.CalculateLeaning
	void CalculateLeaning(double DeltaTime);                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.InterpolateJointTargetLocations
	void InterpolateJointTargetLocations();                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/Optimized_ABP_Zombie.Optimized_ABP_Zombie_C.ExecuteUbergraph_Optimized_ABP_Zombie
	void ExecuteUbergraph_Optimized_ABP_Zombie(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C
/// Size: 0x1568 (0x000350 - 0x0018B8)
class UABP_ZombieFinalCopy_Night_C : public UZombieAnimInstance : UZombieAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0358   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0380   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0388   (0x0008)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0408   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0430   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0458   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0480   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0520   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0548   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0570   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0598   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x05C0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x05E8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0630   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0678   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x06C0   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x06E0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0728   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0748   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0790   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x07B0   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0820   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0840   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x08B0   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x08D0   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0940   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0960   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x09A8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x09C8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0A10   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0A58   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x0AA0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0AE8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0B30   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0B78   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0BC0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0C08   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0C50   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0C98   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0CB8   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0D28   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0D48   (0x00C8)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0E10   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0E58   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0EA0   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0FA8   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0FF0   (0x00E0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x10D0   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x11D8   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1200   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1248   (0x0028)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt;                                       // 0x1270   (0x0250)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x14C0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x14E0   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1500   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1608   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1630   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1678   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x16A0   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x16C8   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x16E8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1708   (0x0020)  
	TWeakObjectPtr<UFMODEvent*>                        K2Node_PropertyAccess;                                      // 0x1728   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        K2Node_PropertyAccess;                                      // 0x1758   (0x0030)  
	bool                                               K2Node_PropertyAccess;                                      // 0x1788   (0x0001)  
	bool                                               IsAuthoritive;                                              // 0x1789   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x178A   (0x0006)  MISSED
	AZombie_C*                                         Zombie;                                                     // 0x1790   (0x0008)  
	USkeletalMeshComponent*                            Mesh;                                                       // 0x1798   (0x0008)  
	UCapsuleComponent*                                 CapsuleComp;                                                // 0x17A0   (0x0008)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x17A8   (0x0008)  
	bool                                               RecentlyInitialized;                                        // 0x17B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x17B1   (0x0003)  MISSED
	float                                              DeltaTime;                                                  // 0x17B4   (0x0004)  
	bool                                               VelocityFromAnimation;                                      // 0x17B8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x17B9   (0x0007)  MISSED
	double                                             VelocityValue;                                              // 0x17C0   (0x0008)  
	bool                                               Stunned;                                                    // 0x17C8   (0x0001)  
	bool                                               Back_to_Idle;                                               // 0x17C9   (0x0001)  
	bool                                               Agressive;                                                  // 0x17CA   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x17CB   (0x0005)  MISSED
	double                                             AnimationAngle;                                             // 0x17D0   (0x0008)  
	bool                                               IsStopping;                                                 // 0x17D8   (0x0001)  
	bool                                               Accelerating;                                               // 0x17D9   (0x0001)  
	bool                                               TransitToWalkStart;                                         // 0x17DA   (0x0001)  
	bool                                               TransitToSprintStart;                                       // 0x17DB   (0x0001)  
	bool                                               CalculateLean;                                              // 0x17DC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x17DD   (0x0003)  MISSED
	FRotator                                           CharacterRotationLastFrame;                                 // 0x17E0   (0x0018)  
	FRotator                                           CharacterRotation;                                          // 0x17F8   (0x0018)  
	double                                             Target;                                                     // 0x1810   (0x0008)  
	double                                             LeanInterpValue;                                            // 0x1818   (0x0008)  
	double                                             Lean;                                                       // 0x1820   (0x0008)  
	bool                                               LookAtTarget;                                               // 0x1828   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x1829   (0x0007)  MISSED
	FVector                                            LookAtLocation;                                             // 0x1830   (0x0018)  
	ASurvivalPlayer_C*                                 Target_Actor;                                               // 0x1848   (0x0008)  
	double                                             MeshInterpSpeed;                                            // 0x1850   (0x0008)  
	bool                                               IsRightFoot;                                                // 0x1858   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x1859   (0x0003)  MISSED
	int32_t                                            SurfaceTypeParameter;                                       // 0x185C   (0x0004)  
	double                                             MeshZOffset;                                                // 0x1860   (0x0008)  
	bool                                               TransitToSprint;                                            // 0x1868   (0x0001)  
	bool                                               TransitToWalk;                                              // 0x1869   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x186A   (0x0006)  MISSED
	FVector                                            SmoothRootCorrection;                                       // 0x1870   (0x0018)  
	bool                                               Damaged;                                                    // 0x1888   (0x0001)  
	EZombieAnimType                                    ZombieAnimType;                                             // 0x1889   (0x0001)  
	EMovementType                                      MovementType;                                               // 0x188A   (0x0001)  
	bool                                               IsWitch;                                                    // 0x188B   (0x0001)  
	bool                                               StartTransitionBackToIdle;                                  // 0x188C   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x188D   (0x0003)  MISSED
	UFMODEvent*                                        StandupDownEvent;                                           // 0x1890   (0x0008)  
	UFMODEvent*                                        StandUpKnee2Event;                                          // 0x1898   (0x0008)  
	UFMODEvent*                                        StandUpKnee1Event;                                          // 0x18A0   (0x0008)  
	int32_t                                            IdleType;                                                   // 0x18A8   (0x0004)  
	bool                                               Is_Sleeping_Zombie;                                         // 0x18AC   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x18AD   (0x0003)  MISSED
	double                                             ActualVelocity;                                             // 0x18B0   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.Check If Sound Load Needed
	void Check If Sound Load Needed(TWeakObjectPtr<UFMODEvent*> FMOD Event);                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.MeshSmoothCorrection
	void MeshSmoothCorrection();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.GetTransitToSprint
	bool GetTransitToSprint();                                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.GetTransitToWalk
	bool GetTransitToWalk();                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.TraceOnStep
	void TraceOnStep(TEnumAsByte<EPhysicalSurface>& SurfaceType);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.SetupSurfaceTypeParameter
	void SetupSurfaceTypeParameter(TEnumAsByte<EPhysicalSurface> SurfaceType);                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.CalculateLookAtLocation
	void CalculateLookAtLocation();                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.OnSetTargetActor
	void OnSetTargetActor(AActor* TargetActor);                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.StopCalculateLeaning
	void StopCalculateLeaning();                                                                                             // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.StartCalculateLeaning
	void StartCalculateLeaning();                                                                                            // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.CalculateLeaning
	void CalculateLeaning();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.DetermineFoot
	void DetermineFoot();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieFinalCopy_Night_AnimGraphNode_TransitionResult_16516E5A48EE029D9FE284B48EB9F7C5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieFinalCopy_Night_AnimGraphNode_TransitionResult_16516E5A48EE029D9FE284B48EB9F7C5(); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_sprint_step
	void AnimNotify_zombie_sprint_step();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_step
	void AnimNotify_zombie_step();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_standup_down
	void AnimNotify_zombie_standup_down();                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_standup_knee1
	void AnimNotify_zombie_standup_knee1();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_standup_knee2
	void AnimNotify_zombie_standup_knee2();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_01_attack
	void AnimNotify_zombie_01_attack();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_zombie_detect
	void AnimNotify_zombie_detect();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_StopWalk_Enter
	void AnimNotify_StopWalk_Enter();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_RunState_Entered
	void AnimNotify_RunState_Entered();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_RunState_Left
	void AnimNotify_RunState_Left();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.BlueprintBeginPlay
	void BlueprintBeginPlay();                                                                                               // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.AnimNotify_OnEnteredIdleState
	void AnimNotify_OnEnteredIdleState();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.OnABP_Set
	void OnABP_Set();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinalCopy_Night.ABP_ZombieFinalCopy_Night_C.ExecuteUbergraph_ABP_ZombieFinalCopy_Night
	void ExecuteUbergraph_ABP_ZombieFinalCopy_Night(int32_t EntryPoint);                                                     // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C
/// Size: 0x1692 (0x000350 - 0x0019E2)
class UABP_ZombieFinal_C : public UZombieAnimInstance : UZombieAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0358   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0374   (0x0004)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0378   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0380   (0x0008)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0388   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x03D0   (0x0108)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x04D8   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0520   (0x00E0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0600   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0708   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0730   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0778   (0x0028)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt;                                       // 0x07A0   (0x0250)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x09F0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0A10   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0A30   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0B38   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0B60   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0BA8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0BD0   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0BF8   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0C40   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0C68   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0C90   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0CB8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0CE0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0D08   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0D30   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0D58   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0D80   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0DA8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0DD0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0DF8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E48   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E70   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0E98   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0EC0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0F08   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0F50   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0F98   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0FB8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1000   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1020   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1068   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x10B0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x10F8   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1118   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1188   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x11A8   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x11F0   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x1210   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1280   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x12A0   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x12E8   (0x0020)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1308   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1350   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1398   (0x0048)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x13E0   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1428   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1470   (0x0048)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x14B8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1500   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1548   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1590   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x15D8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1620   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x1668   (0x0048)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x16B0   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x16D0   (0x0070)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1740   (0x0020)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1760   (0x00C8)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x1828   (0x0020)  
	TWeakObjectPtr<UFMODEvent*>                        K2Node_PropertyAccess;                                      // 0x1848   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        K2Node_PropertyAccess;                                      // 0x1878   (0x0030)  
	bool                                               K2Node_PropertyAccess;                                      // 0x18A8   (0x0001)  
	bool                                               IsAuthoritive;                                              // 0x18A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x18AA   (0x0006)  MISSED
	AZombie_C*                                         Zombie;                                                     // 0x18B0   (0x0008)  
	USkeletalMeshComponent*                            Mesh;                                                       // 0x18B8   (0x0008)  
	UCapsuleComponent*                                 CapsuleComp;                                                // 0x18C0   (0x0008)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x18C8   (0x0008)  
	bool                                               RecentlyInitialized;                                        // 0x18D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x18D1   (0x0003)  MISSED
	float                                              DeltaTime;                                                  // 0x18D4   (0x0004)  
	bool                                               VelocityFromAnimation;                                      // 0x18D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x18D9   (0x0007)  MISSED
	double                                             VelocityValue;                                              // 0x18E0   (0x0008)  
	bool                                               Stunned;                                                    // 0x18E8   (0x0001)  
	bool                                               Back_to_Idle;                                               // 0x18E9   (0x0001)  
	bool                                               Agressive;                                                  // 0x18EA   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x18EB   (0x0005)  MISSED
	double                                             AnimationAngle;                                             // 0x18F0   (0x0008)  
	bool                                               IsStopping;                                                 // 0x18F8   (0x0001)  
	bool                                               Accelerating;                                               // 0x18F9   (0x0001)  
	bool                                               TransitToWalkStart;                                         // 0x18FA   (0x0001)  
	bool                                               TransitToSprintStart;                                       // 0x18FB   (0x0001)  
	bool                                               CalculateLean;                                              // 0x18FC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x18FD   (0x0003)  MISSED
	FRotator                                           CharacterRotationLastFrame;                                 // 0x1900   (0x0018)  
	FRotator                                           CharacterRotation;                                          // 0x1918   (0x0018)  
	double                                             Target;                                                     // 0x1930   (0x0008)  
	double                                             LeanInterpValue;                                            // 0x1938   (0x0008)  
	double                                             Lean;                                                       // 0x1940   (0x0008)  
	bool                                               LookAtTarget;                                               // 0x1948   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x1949   (0x0007)  MISSED
	FVector                                            LookAtLocation;                                             // 0x1950   (0x0018)  
	ASurvivalPlayer_C*                                 Target_Actor;                                               // 0x1968   (0x0008)  
	double                                             MeshInterpSpeed;                                            // 0x1970   (0x0008)  
	bool                                               IsRightFoot;                                                // 0x1978   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x1979   (0x0003)  MISSED
	int32_t                                            SurfaceTypeParameter;                                       // 0x197C   (0x0004)  
	double                                             MeshZOffset;                                                // 0x1980   (0x0008)  
	bool                                               TransitToSprint;                                            // 0x1988   (0x0001)  
	bool                                               TransitToWalk;                                              // 0x1989   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x198A   (0x0006)  MISSED
	FVector                                            SmoothRootCorrection;                                       // 0x1990   (0x0018)  
	bool                                               Damaged;                                                    // 0x19A8   (0x0001)  
	EZombieAnimType                                    ZombieAnimType;                                             // 0x19A9   (0x0001)  
	EMovementType                                      MovementType;                                               // 0x19AA   (0x0001)  
	bool                                               IsWitch;                                                    // 0x19AB   (0x0001)  
	bool                                               StartTransitionBackToIdle;                                  // 0x19AC   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x19AD   (0x0003)  MISSED
	UFMODEvent*                                        StandupDownEvent;                                           // 0x19B0   (0x0008)  
	UFMODEvent*                                        StandUpKnee2Event;                                          // 0x19B8   (0x0008)  
	UFMODEvent*                                        StandUpKnee1Event;                                          // 0x19C0   (0x0008)  
	int32_t                                            IdleType;                                                   // 0x19C8   (0x0004)  
	bool                                               Is_Sleeping_Zombie;                                         // 0x19CC   (0x0001)  
	bool                                               TransitToWalkStart;                                         // 0x19CD   (0x0001)  
	unsigned char                                      UnknownData10_5[0x2];                                       // 0x19CE   (0x0002)  MISSED
	double                                             ActualVelocity;                                             // 0x19D0   (0x0008)  
	UFMODEvent*                                        ZombieCarOpen;                                              // 0x19D8   (0x0008)  
	bool                                               AntiGlideTransitToSprint;                                   // 0x19E0   (0x0001)  
	bool                                               IdleToBattleIdle;                                           // 0x19E1   (0x0001)  


	/// Functions
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimGraph
	void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.GetAntiGlideTransitToSprint
	bool GetAntiGlideTransitToSprint();                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.Check If Sound Load Needed
	void Check If Sound Load Needed(TWeakObjectPtr<UFMODEvent*> FMOD Event);                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.MeshSmoothCorrection
	void MeshSmoothCorrection();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.GetTransitToSprint
	bool GetTransitToSprint();                                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.GetTransitToWalk
	bool GetTransitToWalk();                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.TraceOnStep
	void TraceOnStep(TEnumAsByte<EPhysicalSurface>& SurfaceType);                                                            // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.SetupSurfaceTypeParameter
	void SetupSurfaceTypeParameter(TEnumAsByte<EPhysicalSurface> SurfaceType);                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.CalculateLookAtLocation
	void CalculateLookAtLocation();                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.OnSetTargetActor
	void OnSetTargetActor(AActor* TargetActor);                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.StopCalculateLeaning
	void StopCalculateLeaning();                                                                                             // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.StartCalculateLeaning
	void StartCalculateLeaning();                                                                                            // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.CalculateLeaning
	void CalculateLeaning();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.DetermineFoot
	void DetermineFoot();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_sprint_step
	void AnimNotify_zombie_sprint_step();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_01_attack
	void AnimNotify_zombie_01_attack();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_step
	void AnimNotify_zombie_step();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_detect
	void AnimNotify_zombie_detect();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_standup_down
	void AnimNotify_zombie_standup_down();                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_standup_knee1
	void AnimNotify_zombie_standup_knee1();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_standup_knee2
	void AnimNotify_zombie_standup_knee2();                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_StopWalk_Enter
	void AnimNotify_StopWalk_Enter();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_RunState_Entered
	void AnimNotify_RunState_Entered();                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_RunState_Left
	void AnimNotify_RunState_Left();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.BlueprintBeginPlay
	void BlueprintBeginPlay();                                                                                               // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_OnEnteredIdleState
	void AnimNotify_OnEnteredIdleState();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.OnABP_Set
	void OnABP_Set();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.AnimNotify_zombie_openCar
	void AnimNotify_zombie_openCar();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal.ABP_ZombieFinal_C.ExecuteUbergraph_ABP_ZombieFinal
	void ExecuteUbergraph_ABP_ZombieFinal(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal_Armored.ABP_ZombieFinal_Armored_C
/// Size: 0x000E (0x0019E2 - 0x0019F0)
class UABP_ZombieFinal_Armored_C : public UABP_ZombieFinal_C : UABP_ZombieFinal_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x19E2   (0x0006)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x19E8   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal_Armored.ABP_ZombieFinal_Armored_C.OnABP_Set
	void OnABP_Set();                                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal_Armored.ABP_ZombieFinal_Armored_C.BlueprintBeginPlay
	void BlueprintBeginPlay();                                                                                               // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/OptimizedSkeleton/Animations/ABP_ZombieFinal_Armored.ABP_ZombieFinal_Armored_C.ExecuteUbergraph_ABP_ZombieFinal_Armored
	void ExecuteUbergraph_ABP_ZombieFinal_Armored(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C
/// Size: 0x0121 (0x0000A8 - 0x0001C9)
class UTask_Zombie_MoveAttack1_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	AAIController*                                     Controller;                                                 // 0x00B0   (0x0008)  
	AZombie_C*                                         Zombie;                                                     // 0x00B8   (0x0008)  
	TArray<AZombie_C*>                                 ZombieArr;                                                  // 0x00C0   (0x0010)  
	FBlackboardKeySelector                             StopRun;                                                    // 0x00D0   (0x0028)  
	FBlackboardKeySelector                             Enemy;                                                      // 0x00F8   (0x0028)  
	double                                             DistanceLimit;                                              // 0x0120   (0x0008)  
	FBlackboardKeySelector                             RightHand;                                                  // 0x0128   (0x0028)  
	TEnumAsByte<E_AttackingArm>                        AttackingArm;                                               // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FTimerHandle                                       StoppingTimer;                                              // 0x0158   (0x0008)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x0160   (0x0008)  
	AActor*                                            EnemyActor;                                                 // 0x0168   (0x0008)  
	bool                                               MovingAttack;                                               // 0x0170   (0x0001)  
	bool                                               TickEnabled;                                                // 0x0171   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0172   (0x0006)  MISSED
	FBlackboardKeySelector                             NeedOpenDoorKey;                                            // 0x0178   (0x0028)  
	FBlackboardKeySelector                             DoorKey;                                                    // 0x01A0   (0x0028)  
	bool                                               Car_Attack;                                                 // 0x01C8   (0x0001)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.On Death Bind Func
	void On Death Bind Func();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.On Death EP Bind Func
	void On Death EP Bind Func(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnHitRegistered
	void OnHitRegistered(bool Door);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.ClampStopDistanceByTargetSpeed
	void ClampStopDistanceByTargetSpeed(double& StopDistance);                                                               // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.ClampDelayByTargetSpeed
	void ClampDelayByTargetSpeed(double& DelayDuration);                                                                     // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnAttacking
	void OnAttacking();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnStartAttack
	void OnStartAttack(AAIController* OwnerController, APawn* ControlledPawn);                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnEndAttack
	void OnEndAttack();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.GetCorrectAttackMontage
	void GetCorrectAttackMontage(UAnimMontage*& MontageToPlay, float& PlayRate);                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.CheckScreaming
	void CheckScreaming(bool& StartScreaming);                                                                               // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnStopRunning
	void OnStopRunning();                                                                                                    // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.RapidStop
	void RapidStop();                                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.CheckDistanceAndStop
	void CheckDistanceAndStop();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.CheckNotify
	void CheckNotify(FName NotifyName);                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.DefineAttackingArm
	void DefineAttackingArm();                                                                                               // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnNotifyEnd_ACAE742741FA9C3062AA768DF7F2C114
	void OnNotifyEnd_ACAE742741FA9C3062AA768DF7F2C114(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnNotifyBegin_ACAE742741FA9C3062AA768DF7F2C114
	void OnNotifyBegin_ACAE742741FA9C3062AA768DF7F2C114(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnInterrupted_ACAE742741FA9C3062AA768DF7F2C114
	void OnInterrupted_ACAE742741FA9C3062AA768DF7F2C114(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnBlendOut_ACAE742741FA9C3062AA768DF7F2C114
	void OnBlendOut_ACAE742741FA9C3062AA768DF7F2C114(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnCompleted_ACAE742741FA9C3062AA768DF7F2C114
	void OnCompleted_ACAE742741FA9C3062AA768DF7F2C114(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnNotifyEnd_5D65380B4DE58406D3D3049CCE240C9E
	void OnNotifyEnd_5D65380B4DE58406D3D3049CCE240C9E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnNotifyBegin_5D65380B4DE58406D3D3049CCE240C9E
	void OnNotifyBegin_5D65380B4DE58406D3D3049CCE240C9E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnInterrupted_5D65380B4DE58406D3D3049CCE240C9E
	void OnInterrupted_5D65380B4DE58406D3D3049CCE240C9E(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnBlendOut_5D65380B4DE58406D3D3049CCE240C9E
	void OnBlendOut_5D65380B4DE58406D3D3049CCE240C9E(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.OnCompleted_5D65380B4DE58406D3D3049CCE240C9E
	void OnCompleted_5D65380B4DE58406D3D3049CCE240C9E(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_MoveAttack1.Task_Zombie_MoveAttack1_C.ExecuteUbergraph_Task_Zombie_MoveAttack1
	void ExecuteUbergraph_Task_Zombie_MoveAttack1(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UTask_Zombie_ChaseTarget_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	FBlackboardKeySelector                             Target;                                                     // 0x00B0   (0x0028)  
	FBlackboardKeySelector                             StopRun;                                                    // 0x00D8   (0x0028)  
	AZombie_C*                                         Zombie;                                                     // 0x0100   (0x0008)  
	FTimerHandle                                       WaitingTimer;                                               // 0x0108   (0x0008)  
	FBlackboardKeySelector                             Attack;                                                     // 0x0110   (0x0028)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x0138   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.OnFinishTask
	void OnFinishTask();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.Continue Chasing
	void Continue Chasing();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.Can Start Running
	void Can Start Running(bool& StartRunning);                                                                              // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.IsAttackSetted
	void IsAttackSetted(bool& AttackIsSetted);                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.WaitTillStart
	void WaitTillStart();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.OnEndAttack
	void OnEndAttack();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.ReceiveAbortAI
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);                                              // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.RestartMovement
	void RestartMovement();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/Task_Zombie_ChaseTarget.Task_Zombie_ChaseTarget_C.ExecuteUbergraph_Task_Zombie_ChaseTarget
	void ExecuteUbergraph_Task_Zombie_ChaseTarget(int32_t EntryPoint);                                                       // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/AI/Tasks/BTTask_ClearBlackboardKey.BTTask_ClearBlackboardKey_C
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UBTTask_ClearBlackboardKey_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	FBlackboardKeySelector                             KeyToClear;                                                 // 0x00B0   (0x0028)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/BTTask_ClearBlackboardKey.BTTask_ClearBlackboardKey_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTTask_ClearBlackboardKey.BTTask_ClearBlackboardKey_C.ExecuteUbergraph_BTTask_ClearBlackboardKey
	void ExecuteUbergraph_BTTask_ClearBlackboardKey(int32_t EntryPoint);                                                     // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Tasks/BTT_WaitTransitionToIdle.BTT_WaitTransitionToIdle_C
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UBTT_WaitTransitionToIdle_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	AZombie_C*                                         Zombie;                                                     // 0x00B0   (0x0008)  
	UAnimSequence*                                     TransitionAnimationAsset;                                   // 0x00B8   (0x0008)  
	FTimerHandle                                       TransitionTimer;                                            // 0x00C0   (0x0008)  
	UAnimSequence*                                     SleepingTransitionAnimationAsset;                           // 0x00C8   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/BTT_WaitTransitionToIdle.BTT_WaitTransitionToIdle_C.OnEndTransition
	void OnEndTransition();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_WaitTransitionToIdle.BTT_WaitTransitionToIdle_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_WaitTransitionToIdle.BTT_WaitTransitionToIdle_C.ReceiveAbortAI
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);                                              // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_WaitTransitionToIdle.BTT_WaitTransitionToIdle_C.ExecuteUbergraph_BTT_WaitTransitionToIdle
	void ExecuteUbergraph_BTT_WaitTransitionToIdle(int32_t EntryPoint);                                                      // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/AI/Tasks/BTT_TurnAndScream.BTT_TurnAndScream_C
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UBTT_TurnAndScream_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	AZombie_C*                                         Zombie;                                                     // 0x00B0   (0x0008)  
	FBlackboardKeySelector                             TargetLocation;                                             // 0x00B8   (0x0028)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x00E0   (0x0008)  
	FBlackboardKeySelector                             Enemy;                                                      // 0x00E8   (0x0028)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/BTT_TurnAndScream.BTT_TurnAndScream_C.OnEndScreaming
	void OnEndScreaming();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_TurnAndScream.BTT_TurnAndScream_C.GetDegreesForKey
	void GetDegreesForKey(double& Degrees);                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_TurnAndScream.BTT_TurnAndScream_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_TurnAndScream.BTT_TurnAndScream_C.ExecuteUbergraph_BTT_TurnAndScream
	void ExecuteUbergraph_BTT_TurnAndScream(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Tasks/BTT_Patrol.BTT_Patrol_C
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UBTT_Patrol_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	AZombie_C*                                         Zombie;                                                     // 0x00B0   (0x0008)  
	FBlackboardKeySelector                             TargetLocationKey;                                          // 0x00B8   (0x0028)  
	UAIMovementComponent_C*                            AIMovementComp;                                             // 0x00E0   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/BTT_Patrol.BTT_Patrol_C.OnExecuteAI
	void OnExecuteAI();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_Patrol.BTT_Patrol_C.OnReachTarget
	void OnReachTarget();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_Patrol.BTT_Patrol_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_Patrol.BTT_Patrol_C.ReceiveAbortAI
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);                                              // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_Patrol.BTT_Patrol_C.ExecuteUbergraph_BTT_Patrol
	void ExecuteUbergraph_BTT_Patrol(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Tasks/BTT_GenerateRandomPatrolLocation.BTT_GenerateRandomPatrolLocation_C
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UBTT_GenerateRandomPatrolLocation_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	FBlackboardKeySelector                             LocationKey;                                                // 0x00B0   (0x0028)  
	AZombie_C*                                         As_Zombie;                                                  // 0x00D8   (0x0008)  
	FBlackboardKeySelector                             CurrentPatrolPointIndexKey;                                 // 0x00E0   (0x0028)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/BTT_GenerateRandomPatrolLocation.BTT_GenerateRandomPatrolLocation_C.Patrolling
	void Patrolling();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_GenerateRandomPatrolLocation.BTT_GenerateRandomPatrolLocation_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_GenerateRandomPatrolLocation.BTT_GenerateRandomPatrolLocation_C.ExecuteUbergraph_BTT_GenerateRandomPatrolLocation
	void ExecuteUbergraph_BTT_GenerateRandomPatrolLocation(int32_t EntryPoint);                                              // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Tasks/BTT_GeneratePatrolPoint.BTT_GeneratePatrolPoint_C
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UBTT_GeneratePatrolPoint_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	double                                             GenerationRadius;                                           // 0x00B0   (0x0008)  
	double                                             MinDistance;                                                // 0x00B8   (0x0008)  
	bool                                               FoundLocation;                                              // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FVector                                            Random_Location;                                            // 0x00C8   (0x0018)  
	bool                                               LocationGenerated;                                          // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	APawn*                                             Controlled_Pawn;                                            // 0x00E8   (0x0008)  
	FBlackboardKeySelector                             AroundKey;                                                  // 0x00F0   (0x0028)  
	FBlackboardKeySelector                             LocationKey;                                                // 0x0118   (0x0028)  
	AZombie_C*                                         Zombie;                                                     // 0x0140   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Tasks/BTT_GeneratePatrolPoint.BTT_GeneratePatrolPoint_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Tasks/BTT_GeneratePatrolPoint.BTT_GeneratePatrolPoint_C.ExecuteUbergraph_BTT_GeneratePatrolPoint
	void ExecuteUbergraph_BTT_GeneratePatrolPoint(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C
/// Size: 0x00F8 (0x000098 - 0x000190)
class UService_Zombie_CheckDIstance_C : public UBTService_BlueprintBase : UBTService_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0098   (0x0008)  
	FBlackboardKeySelector                             Enemy;                                                      // 0x00A0   (0x0028)  
	AActor*                                            EnemyKey;                                                   // 0x00C8   (0x0008)  
	double                                             Distance;                                                   // 0x00D0   (0x0008)  
	bool                                               CloseAttack;                                                // 0x00D8   (0x0001)  
	bool                                               NearAttack;                                                 // 0x00D9   (0x0001)  
	bool                                               FarAttack;                                                  // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00DB   (0x0001)  MISSED
	FName                                              AttackKey;                                                  // 0x00DC   (0x0008)  
	bool                                               ResultAttack;                                               // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	AZombie_C*                                         Zombie;                                                     // 0x00E8   (0x0008)  
	UAIMovementComponent_C*                            AIMoveComp;                                                 // 0x00F0   (0x0008)  
	FBlackboardKeySelector                             CheckDoor;                                                  // 0x00F8   (0x0028)  
	FBlackboardKeySelector                             NeedOpenDoorKey;                                            // 0x0120   (0x0028)  
	FBlackboardKeySelector                             DoorKey;                                                    // 0x0148   (0x0028)  
	bool                                               TargetIsVehicle;                                            // 0x0170   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	double                                             CloseAttackDistance;                                        // 0x0178   (0x0008)  
	double                                             NearAttackFarDistance;                                      // 0x0180   (0x0008)  
	double                                             FarAttackDistance;                                          // 0x0188   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.CheckDoorInFront
	void CheckDoorInFront(bool& FoundDoor);                                                                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.SetupAllBooleans
	void SetupAllBooleans();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.GetFarAttack
	bool GetFarAttack();                                                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.GetCloseAttack
	bool GetCloseAttack();                                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.GetNearAttack
	bool GetNearAttack();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.ReceiveTickAI
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.ReceiveActivationAI
	void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                         // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AI/Service/Service_Zombie_CheckDIstance.Service_Zombie_CheckDIstance_C.ExecuteUbergraph_Service_Zombie_CheckDIstance
	void ExecuteUbergraph_Service_Zombie_CheckDIstance(int32_t EntryPoint);                                                  // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AI/Decorators/BTD_SpecialZombie.BTD_SpecialZombie_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UBTD_SpecialZombie_C : public UBTDecorator_BlueprintBase : UBTDecorator_BlueprintBase
{ 
public:
};

/// Class /Game/AI/NavAreas/HouseArea.HouseArea_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UHouseArea_C : public UNavArea : UNavArea
{ 
public:
};

/// Class /Game/AI/NavAreas/FIlter_AvoidHouses.FIlter_AvoidHouses_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UFIlter_AvoidHouses_C : public UNavigationQueryFilter : UNavigationQueryFilter
{ 
public:
};

/// Class /Game/AI/Animals/Bear/Bear.Bear_C
/// Size: 0x0028 (0x000630 - 0x000658)
class ABear_C : public ACharacter : ACharacter
{ 
public:
	double                                             Health_RN;                                                  // 0x0630   (0x0008)  
	bool                                               Dead_R;                                                     // 0x0638   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0639   (0x0007)  MISSED
	double                                             Direction_R;                                                // 0x0640   (0x0008)  
	bool                                               IsActive_;                                                  // 0x0648   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0649   (0x0007)  MISSED
	double                                             Damage_R;                                                   // 0x0650   (0x0008)  
};

/// Class /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C
/// Size: 0x0024 (0x000290 - 0x0002B4)
class ABP_ZombieSpawnerHandler_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UBoxComponent*                                     Box;                                                        // 0x0298   (0x0008)  
	TArray<ABP_ZombieSpawner_C*>                       OverlappingSpawners;                                        // 0x02A0   (0x0010)  
	int32_t                                            AreaPlayerCounter;                                          // 0x02B0   (0x0004)  


	/// Functions
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.CREATEDELEGATE_PROXYFUNCTION
	void CREATEDELEGATE_PROXYFUNCTION(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.CREATEDELEGATE_PROXYFUNCTION
	void CREATEDELEGATE_PROXYFUNCTION(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.GetSpawnMultiplier
	double GetSpawnMultiplier();                                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.OnBoxEndOverlap
	void OnBoxEndOverlap(UPrimitiveComponent*& OverlappedComponent, AActor*& OtherActor, UPrimitiveComponent*& OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.OnBoxBeginOverlap
	void OnBoxBeginOverlap(UPrimitiveComponent*& OverlappedComponent, AActor*& OtherActor, UPrimitiveComponent*& OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.GetAllOverlappingSpawners
	void GetAllOverlappingSpawners();                                                                                        // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawnerHandler.BP_ZombieSpawnerHandler_C.ExecuteUbergraph_BP_ZombieSpawnerHandler
	void ExecuteUbergraph_BP_ZombieSpawnerHandler(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/AI/ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C
/// Size: 0x0010 (0x000298 - 0x0002A8)
class AZombieReturn_TriggerBox_C : public ATriggerBox : ATriggerBox
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	UStaticMeshComponent*                              Cube;                                                       // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/AI/ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.ReceiveActorBeginOverlap
	void ReceiveActorBeginOverlap(AActor* OtherActor);                                                                       // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.ExecuteUbergraph_ZombieReturn_TriggerBox
	void ExecuteUbergraph_ZombieReturn_TriggerBox(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

/// Class /Game/AI/ZombieCarTrigger.ZombieCarTrigger_C
/// Size: 0x0010 (0x000298 - 0x0002A8)
class AZombieCarTrigger_C : public ATriggerBox : ATriggerBox
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	USphereComponent*                                  Sphere;                                                     // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/AI/ZombieCarTrigger.ZombieCarTrigger_C.BndEvt__ZombieCarTrigger_CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ZombieCarTrigger_CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/ZombieCarTrigger.ZombieCarTrigger_C.BndEvt__ZombieCarTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ZombieCarTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/ZombieCarTrigger.ZombieCarTrigger_C.ExecuteUbergraph_ZombieCarTrigger
	void ExecuteUbergraph_ZombieCarTrigger(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Animals/Bear/Service/BTTask_BlueprintBase_New.BTTask_BlueprintBase_New_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBTTask_BlueprintBase_New_C : public UBTTask_BlueprintBase : UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/AI/Animals/Bear/Service/BTTask_BlueprintBase_New.BTTask_BlueprintBase_New_C.ReceiveExecuteAI
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Animals/Bear/Service/BTTask_BlueprintBase_New.BTTask_BlueprintBase_New_C.ExecuteUbergraph_BTTask_BlueprintBase_New
	void ExecuteUbergraph_BTTask_BlueprintBase_New(int32_t EntryPoint);                                                      // [0x2407bf0] Final                
};

/// Class /Game/AI/I_AIInfo.I_AIInfo_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_AIInfo_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/AI/ParentAIDetourController.ParentAIDetourController_C
/// Size: 0x0318 (0x0003C0 - 0x0006D8)
class AParentAIDetourController_C : public AAIControllerTeam : AAIControllerTeam
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	UPawnSensingComponent*                             PawnSensing;                                                // 0x03C8   (0x0008)  
	UAIPerceptionComponent*                            AIPerception;                                               // 0x03D0   (0x0008)  
	APawn*                                             AI;                                                         // 0x03D8   (0x0008)  
	UBehaviorTree*                                     BT;                                                         // 0x03E0   (0x0008)  
	AActor*                                            HearedEnemy;                                                // 0x03E8   (0x0008)  
	bool                                               DisableReactions;                                           // 0x03F0   (0x0001)  
	bool                                               PrintDebug;                                                 // 0x03F1   (0x0001)  
	bool                                               DisableSight;                                               // 0x03F2   (0x0001)  
	bool                                               DisableHearing;                                             // 0x03F3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	TArray<AActor*>                                    SeenActors;                                                 // 0x03F8   (0x0010)  
	AActor*                                            SeenEnemy;                                                  // 0x0408   (0x0008)  
	double                                             DistanceLimiter;                                            // 0x0410   (0x0008)  
	bool                                               BlockSightEvent;                                            // 0x0418   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0419   (0x0007)  MISSED
	double                                             HomeDistanceLimiter;                                        // 0x0420   (0x0008)  
	bool                                               DisableBT;                                                  // 0x0428   (0x0001)  
	bool                                               IsActiveAI;                                                 // 0x0429   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x042A   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnSeenActor;                                                // 0x0430   (0x0010)  
	FName                                              TargetLastHearedLocation;                                   // 0x0440   (0x0008)  
	AActor*                                            StartSensedActor;                                           // 0x0448   (0x0008)  
	FAIStimulus                                        StartStimulus;                                              // 0x0450   (0x0058)  
	FVector                                            StimulusLocation;                                           // 0x04A8   (0x0018)  
	FName                                              StimulusTag;                                                // 0x04C0   (0x0008)  
	UClass*                                            StimulusSenseClass;                                         // 0x04C8   (0x0008)  
	FName                                              TargetHeared;                                               // 0x04D0   (0x0008)  
	FName                                              Enemy;                                                      // 0x04D8   (0x0008)  
	FName                                              TargetIsVisible;                                            // 0x04E0   (0x0008)  
	FName                                              HomeLocation;                                               // 0x04E8   (0x0008)  
	TEnumAsByte<E_PerceptionType>                      PerceptionType;                                             // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	FTimerHandle                                       LoseTargetTimer;                                            // 0x04F8   (0x0008)  
	double                                             TimeTillLastSight;                                          // 0x0500   (0x0008)  
	float                                              LoseTargetTickTime;                                         // 0x0508   (0x0004)  
	float                                              LoseTargetTimeLimit;                                        // 0x050C   (0x0004)  
	bool                                               ChangedTarget;                                              // 0x0510   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0511   (0x0003)  MISSED
	FName                                              StartScreaming;                                             // 0x0514   (0x0008)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x051C   (0x0004)  MISSED
	AZombie_C*                                         Zombie;                                                     // 0x0520   (0x0008)  
	double                                             LosingTargetThreshold;                                      // 0x0528   (0x0008)  
	bool                                               AfterAlarm;                                                 // 0x0530   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0531   (0x0003)  MISSED
	int32_t                                            NearPlayersNum;                                             // 0x0534   (0x0004)  
	bool                                               bIsAnyPlayerNear;                                           // 0x0538   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0539   (0x0007)  MISSED
	FTimerHandle                                       PlayerIsNearTimer;                                          // 0x0540   (0x0008)  
	bool                                               TargetKnockedDown;                                          // 0x0548   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0549   (0x0007)  MISSED
	FTimerHandle                                       TimerCheckTargetHP;                                         // 0x0550   (0x0008)  
	bool                                               bDisableSleepingMode;                                       // 0x0558   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0559   (0x0007)  MISSED
	TArray<double>                                     Movement_LODs;                                              // 0x0560   (0x0010)  
	bool                                               EnableMovementLODs;                                         // 0x0570   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0571   (0x0007)  MISSED
	TMap<AActor*, int32_t>                             Players_LOD_indexes;                                        // 0x0578   (0x0050)  
	int32_t                                            CurrentMovementLOD;                                         // 0x05C8   (0x0004)  
	unsigned char                                      UnknownData11_5[0x4];                                       // 0x05CC   (0x0004)  MISSED
	TMap<int32_t, double>                              Movement_LOD_Multipliers;                                   // 0x05D0   (0x0050)  
	TMap<int32_t, double>                              Perception_LOD_Ticks;                                       // 0x0620   (0x0050)  
	TMap<int32_t, double>                              NetUpdate_LOD_Frequency_Dividers;                           // 0x0670   (0x0050)  
	bool                                               bIgnoreCars;                                                // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x06C1   (0x0003)  MISSED
	float                                              CarIgnoreTimeAfterDamage;                                   // 0x06C4   (0x0004)  
	bool                                               bCarsAreAlwaysLowPriority;                                  // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x06C9   (0x0007)  MISSED
	FTimerHandle                                       KillOnLongSleepTimer;                                       // 0x06D0   (0x0008)  


	/// Functions
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.KillOnLongSleep
	void KillOnLongSleep();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.IsTargetEmptyCar
	void IsTargetEmptyCar(AActor* Actor, bool& Result);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.UnsetIgnoreCars
	void UnsetIgnoreCars();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.SetIgnoreCars
	void SetIgnoreCars();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.Is Target Car
	bool Is Target Car(UObject* Object);                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.Set Sleep Mode Enabled
	void Set Sleep Mode Enabled(bool Enabled);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.Adjust Movement LOD
	void Adjust Movement LOD();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CheckMovementLOD
	void CheckMovementLOD(double Distance, AActor* PlayerActor);                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.On Player Death After Timer
	void On Player Death After Timer();                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CheckTargetHP
	void CheckTargetHP();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.Set Check Target HP Timer
	void Set Check Target HP Timer();                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.OnPlayerKnockedDown
	void OnPlayerKnockedDown();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.LoadSoundsAfterNetcull
	void LoadSoundsAfterNetcull();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.Optimization Adjustments Needed
	void Optimization Adjustments Needed(bool bIsPlayerNear);                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.SetNoPlayersNear
	void SetNoPlayersNear();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CheckIsOptimizationHearing
	void CheckIsOptimizationHearing(UObject* Actor, FAIStimulus& AIStimulus);                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.OnEndScreaming
	void OnEndScreaming();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CantHear
	bool CantHear();                                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CantSee
	bool CantSee();                                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.UnbindFromDelegates
	void UnbindFromDelegates();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.BindToDelegates
	void BindToDelegates();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.On Player Death
	void On Player Death();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.TargetIsTooFar
	bool TargetIsTooFar();                                                                                                   // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.SetupLosingTargetTimer
	void SetupLosingTargetTimer();                                                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.LosingTargetProcess
	void LosingTargetProcess();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.ValidatePerception
	void ValidatePerception(TEnumAsByte<E_PerceptionType>& PerceptionType);                                                  // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.InitializeVariablesOnPerception
	void InitializeVariablesOnPerception(AActor* Actor, FAIStimulus Stimulus);                                               // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CheckForClearView
	void CheckForClearView(bool& Clear);                                                                                     // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.Can Detect Special Zombie
	void Can Detect Special Zombie(AActor* Actor, bool& CanDetect);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.HasSupressor
	void HasSupressor(AActor* HearedActor, bool& HasSupressor);                                                              // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.DelaySetAfterKill
	void DelaySetAfterKill();                                                                                                // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.SetupVariablesAfterSight
	void SetupVariablesAfterSight();                                                                                         // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.ClearVariablesAfterSight
	void ClearVariablesAfterSight();                                                                                         // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.FindClosestActor
	void FindClosestActor(AActor*& ClosestActor);                                                                            // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CalculateDistance
	void CalculateDistance(AActor*& Actor, double& Distance);                                                                // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CheckNextNearestActor
	void CheckNextNearestActor(AActor*& NewActor);                                                                           // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.PlayerDeathEP
	void PlayerDeathEP(AActor* Actor, char Byte);                                                                            // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.CheckIsClosest
	void CheckIsClosest(AActor*& SeenActor, bool& IsClosest);                                                                // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.ActorSeen
	void ActorSeen(AActor* SeenActor, bool DamageSense);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.DamageSensed
	void DamageSensed();                                                                                                     // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.ActorHeared
	void ActorHeared();                                                                                                      // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.SetupVariablesAfterHearing
	void SetupVariablesAfterHearing();                                                                                       // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature(AActor* Actor, FAIStimulus Stimulus); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.TriggeredByAlarm
	void TriggeredByAlarm(AActor* SeenActor);                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	void BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.StartNoPlayerNearTimer
	void StartNoPlayerNearTimer();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.ExecuteUbergraph_ParentAIDetourController
	void ExecuteUbergraph_ParentAIDetourController(int32_t EntryPoint);                                                      // [0x2407bf0] Final|HasDefaults    
	// Function /Game/AI/ParentAIDetourController.ParentAIDetourController_C.OnSeenActor__DelegateSignature
	void OnSeenActor__DelegateSignature(AActor* SeenActor);                                                                  // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/Zombie/BPI_DoorNavModifier.BPI_DoorNavModifier_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_DoorNavModifier_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/AI/Zombie/Navigation/BP_DoorNavModifier.BP_DoorNavModifier_C
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ABP_DoorNavModifier_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UBoxComponent*                                     SecondDoorArea;                                             // 0x0298   (0x0008)  
	UNavModifierComponent*                             NavModifier;                                                // 0x02A0   (0x0008)  
	UBoxComponent*                                     FirstDoorArea;                                              // 0x02A8   (0x0008)  
	bool                                               DoubleDoor;                                                 // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	ABP_Door_C*                                        ParentDoor;                                                 // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/Navigation/BP_DoorNavModifier.BP_DoorNavModifier_C.DoubleDoorHandler
	void DoubleDoorHandler();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Navigation/BP_DoorNavModifier.BP_DoorNavModifier_C.SingleDoorHandler
	void SingleDoorHandler();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Navigation/BP_DoorNavModifier.BP_DoorNavModifier_C.SetDoorNavModifierExtent
	void SetDoorNavModifierExtent(ABP_Door_C* ParentDoor);                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Navigation/BP_DoorNavModifier.BP_DoorNavModifier_C.SetCarNavModifierExtent
	void SetCarNavModifierExtent(FTransform SocketTransform);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Navigation/BP_DoorNavModifier.BP_DoorNavModifier_C.ExecuteUbergraph_BP_DoorNavModifier
	void ExecuteUbergraph_BP_DoorNavModifier(int32_t EntryPoint);                                                            // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/Navigation/BP_CarDoorNavModifier.BP_CarDoorNavModifier_C
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class ABP_CarDoorNavModifier_C : public ABP_DoorNavModifier_C : ABP_DoorNavModifier_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/Navigation/BP_CarDoorNavModifier.BP_CarDoorNavModifier_C.SetCarNavModifierExtent
	void SetCarNavModifierExtent(FTransform SocketTransform);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Navigation/BP_CarDoorNavModifier.BP_CarDoorNavModifier_C.ExecuteUbergraph_BP_CarDoorNavModifier
	void ExecuteUbergraph_BP_CarDoorNavModifier(int32_t EntryPoint);                                                         // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/ZombieManager.ZombieManager_C
/// Size: 0x0098 (0x000290 - 0x000328)
class AZombieManager_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	TArray<AZombie_C*>                                 AllZombies;                                                 // 0x02A0   (0x0010)  
	TArray<int32_t>                                    ActiveZombiesIndexes;                                       // 0x02B0   (0x0010)  
	int32_t                                            AmountOfZombieOnServer;                                     // 0x02C0   (0x0004)  
	int32_t                                            AmountOfSpawnedZombie;                                      // 0x02C4   (0x0004)  
	FTimerHandle                                       SpawningTimer;                                              // 0x02C8   (0x0008)  
	TArray<AZombie_C*>                                 ActiveZombies;                                              // 0x02D0   (0x0010)  
	bool                                               BlockSpawn;                                                 // 0x02E0   (0x0001)  
	bool                                               BlockAI;                                                    // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02E2   (0x0002)  MISSED
	FName                                              DeactivateAIKeyName;                                        // 0x02E4   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	FTimerHandle                                       CheckPlayersTimer;                                          // 0x02F0   (0x0008)  
	bool                                               NoPlayers;                                                  // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02F9   (0x0003)  MISSED
	int32_t                                            MaxAmountOfZombiesOnServer;                                 // 0x02FC   (0x0004)  
	bool                                               DeactivatedAI;                                              // 0x0300   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0301   (0x0003)  MISSED
	int32_t                                            SleepingZombiesCount;                                       // 0x0304   (0x0004)  
	int32_t                                            InvisibleZombieKills;                                       // 0x0308   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x030C   (0x0004)  MISSED
	TArray<AZombie_C*>                                 InvisibleZombieBlueprints;                                  // 0x0310   (0x0010)  
	int32_t                                            MaxCityZombiesAmount;                                       // 0x0320   (0x0004)  
	int32_t                                            CurrentCityZombiesAmount;                                   // 0x0324   (0x0004)  


	/// Functions
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.GetActiveZombiesAmount
	void GetActiveZombiesAmount(int32_t& ZombiesAmount);                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.GetInvisibleZombieBlueprintsCount
	void GetInvisibleZombieBlueprintsCount(int32_t& NewParam);                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.UpdateInvisibleStat
	void UpdateInvisibleStat(AZombie_C*& KilledZombie);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.SetMaxZombiesOnServer
	void SetMaxZombiesOnServer(int32_t MaxAmountOfZombiesOnServer);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.Get Dead Zombies Amount
	void Get Dead Zombies Amount(int32_t& DeadZombiesAmount);                                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.Get Sleeping Zombies Amount
	void Get Sleeping Zombies Amount(int32_t& SleepingZombiesAmount);                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.ActivateAI
	void ActivateAI();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.DeactivateAI
	void DeactivateAI();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.GetDeactivatedAI
	bool GetDeactivatedAI();                                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.Check Players
	void Check Players();                                                                                                    // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.KillAllActiveZombies
	void KillAllActiveZombies(AController* InstigatedBy);                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.IsSpawnBlocked
	void IsSpawnBlocked(bool& IsBlocked);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.ToggleZombieAI
	void ToggleZombieAI();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.GetAllZombies
	void GetAllZombies(TArray<AZombie_C*>& AllZombies);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.ToggleBlockSpawn
	void ToggleBlockSpawn();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.GetActiveZombies
	void GetActiveZombies(TArray<AZombie_C*>& ActiveZombies);                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.SpawnerRequest
	void SpawnerRequest(int32_t AmountOfZombie);                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.ResetZombie
	void ResetZombie(int32_t ZombieManagerIndex, AZombie_C* ZombieRef, bool IsCityZombie);                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.Get Free Zombie Index
	void Get Free Zombie Index(bool IsCityZombie, int32_t& FreeIndex);                                                       // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.RequestSpawnOfZombie
	void RequestSpawnOfZombie(int32_t MeshType, EZombieType Type, EZombieAnimType AnimType, FVector Location, FRotator Rotation, TSet<UQuest*> Quests, ABP_Door_C*& ConnectedDoor, TArray<ATargetPoint*>& PatrollingPath, bool IsCityZombie, AZombie_C*& SpawnedZombie); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.SpawnZombie
	void SpawnZombie();                                                                                                      // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieManager.ZombieManager_C.ExecuteUbergraph_ZombieManager
	void ExecuteUbergraph_ZombieManager(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/ZombieController.ZombieController_C
/// Size: 0x0024 (0x0006D8 - 0x0006FC)
class AZombieController_C : public AParentAIDetourController_C : AParentAIDetourController_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06D8   (0x0008)  
	TArray<FName>                                      AllBlackboardKeys;                                          // 0x06E0   (0x0010)  
	FTimerHandle                                       ResettingFixTimer;                                          // 0x06F0   (0x0008)  
	int32_t                                            ResetCounter;                                               // 0x06F8   (0x0004)  


	/// Functions
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.ActivateAI
	void ActivateAI(FVector HomeLocation, EZombieAnimType ZombieAnimType);                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.ResetAllParamsFix
	void ResetAllParamsFix();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.SetHomeLocation
	void SetHomeLocation(FVector HomeLocation);                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.Reset All Params
	void Reset All Params();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.SwitchPerception
	void SwitchPerception(bool TurnOn);                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.SetupVariablesAfterSight
	void SetupVariablesAfterSight();                                                                                         // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.ClearVariablesAfterSight
	void ClearVariablesAfterSight();                                                                                         // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.GetActorPerceptionViewpoint
	void GetActorPerceptionViewpoint(FVector& out_Location, FRotator& out_Rotation);                                         // [0x2407bf0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.DeactivateAI
	void DeactivateAI();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieController.ZombieController_C.ExecuteUbergraph_ZombieController
	void ExecuteUbergraph_ZombieController(int32_t EntryPoint);                                                              // [0x2407bf0] Final                
};

/// Class /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C
/// Size: 0x04C8 (0x0000B0 - 0x000578)
class UAIMovementComponent_C : public UAIMoveComp : UAIMoveComp
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00B0   (0x0008)  
	UCharacterMovementComponent*                       CharMoveComp;                                               // 0x00B8   (0x0008)  
	bool                                               IsStopping;                                                 // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FVector                                            ResultVelocity;                                             // 0x00C8   (0x0018)  
	FVector                                            VelocityDirection;                                          // 0x00E0   (0x0018)  
	FVector                                            DesiredVelocityDirection;                                   // 0x00F8   (0x0018)  
	double                                             VelocityValue;                                              // 0x0110   (0x0008)  
	double                                             MaxVelocityValue;                                           // 0x0118   (0x0008)  
	double                                             MinVelocityValue;                                           // 0x0120   (0x0008)  
	double                                             DirectionInterpolationSpeed;                                // 0x0128   (0x0008)  
	UNavigationPath*                                   Path;                                                       // 0x0130   (0x0008)  
	TArray<FVector_NetQuantize>                        PathPoints;                                                 // 0x0138   (0x0010)  
	AActor*                                            TargetActor;                                                // 0x0148   (0x0008)  
	AActor*                                            PathfindingContext;                                         // 0x0150   (0x0008)  
	UClass*                                            FilterClass;                                                // 0x0158   (0x0008)  
	bool                                               TargetIsActor;                                              // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	FVector                                            NextPathPointLocation;                                      // 0x0168   (0x0018)  
	FVector                                            CurrentPathPointLocation;                                   // 0x0180   (0x0018)  
	FVector                                            TargetPathGenerationLocation;                               // 0x0198   (0x0018)  
	FVector                                            PathPointLocation;                                          // 0x01B0   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x01C8   (0x0018)  
	int32_t                                            CurrentPathPointIndex;                                      // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	double                                             EndMovementSpeed;                                           // 0x01E8   (0x0008)  
	double                                             StateAcceleration;                                          // 0x01F0   (0x0008)  
	double                                             StateDeceleration;                                          // 0x01F8   (0x0008)  
	double                                             StateMinSpeed;                                              // 0x0200   (0x0008)  
	bool                                               VelocityFromAnimation;                                      // 0x0208   (0x0001)  
	bool                                               DrawDebugLines;                                             // 0x0209   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x020A   (0x0006)  MISSED
	FVector                                            OwnerLocation;                                              // 0x0210   (0x0018)  
	FName                                              VelocityCurveName;                                          // 0x0228   (0x0008)  
	ACharacter*                                        Character;                                                  // 0x0230   (0x0008)  
	UAnimInstance*                                     CharacterAnimInstance;                                      // 0x0238   (0x0008)  
	double                                             AnimationAngle;                                             // 0x0240   (0x0008)  
	TEnumAsByte<E_AIMovementType>                      MovementType;                                               // 0x0248   (0x0001)  
	bool                                               RotationFromAnimation;                                      // 0x0249   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x024A   (0x0002)  MISSED
	FName                                              RotationCurveName;                                          // 0x024C   (0x0008)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	double                                             StartRotationYawZ;                                          // 0x0258   (0x0008)  
	double                                             TurnTime;                                                   // 0x0260   (0x0008)  
	float                                              RotationYawZ;                                               // 0x0268   (0x0004)  
	float                                              AnimationRotationInterpolationSpeed;                        // 0x026C   (0x0004)  
	TEnumAsByte<E_PathMovementState>                   PathMovementState;                                          // 0x0270   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	double                                             StateMaxSpeed;                                              // 0x0278   (0x0008)  
	double                                             StateChangePointDist;                                       // 0x0280   (0x0008)  
	double                                             DecreaseStateDist;                                          // 0x0288   (0x0008)  
	double                                             IncreaseStateDist;                                          // 0x0290   (0x0008)  
	double                                             StateDistanceToFilterPathPoints;                            // 0x0298   (0x0008)  
	double                                             StateHighestAngle;                                          // 0x02A0   (0x0008)  
	double                                             StateLowestAngle;                                           // 0x02A8   (0x0008)  
	double                                             StartChangingVelocityValue;                                 // 0x02B0   (0x0008)  
	FMulticastInlineDelegate                           OnReachTarget;                                              // 0x02B8   (0x0010)  
	bool                                               DrawDebugPathPoints;                                        // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	AParentAIDetourController_C*                       CharacterController;                                        // 0x02D0   (0x0008)  
	double                                             PathRegenerationDistance;                                   // 0x02D8   (0x0008)  
	double                                             StateMinDirInterpSpeed;                                     // 0x02E0   (0x0008)  
	double                                             StateMaxDirInterpSpeed;                                     // 0x02E8   (0x0008)  
	double                                             StateSpeedInterpSpeed;                                      // 0x02F0   (0x0008)  
	double                                             StateIsCloseToTargetDistance;                               // 0x02F8   (0x0008)  
	double                                             StateCloseDirInterpSpeed;                                   // 0x0300   (0x0008)  
	double                                             StateAfterDecreasingAdjustment;                             // 0x0308   (0x0008)  
	bool                                               LastPointIsTargetActor;                                     // 0x0310   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	TMap<TEnumAsByte, FF_MovementSettings>             MovementSettings;                                           // 0x0318   (0x0050)  
	double                                             StateTwistCheckDistance;                                    // 0x0368   (0x0008)  
	FVector                                            TargetActorLocation;                                        // 0x0370   (0x0018)  
	double                                             EndPointMultiplier;                                         // 0x0388   (0x0008)  
	bool                                               NeedPreciseCalculation;                                     // 0x0390   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0391   (0x0007)  MISSED
	double                                             DistanceToTarget;                                           // 0x0398   (0x0008)  
	double                                             TargetSpeedPrevious;                                        // 0x03A0   (0x0008)  
	bool                                               ZombieInFront;                                              // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x03A9   (0x0007)  MISSED
	AZombie_C*                                         Zombie;                                                     // 0x03B0   (0x0008)  
	FTimerHandle                                       ZombieCheckTimer;                                           // 0x03B8   (0x0008)  
	double                                             DistanceToZombie;                                           // 0x03C0   (0x0008)  
	TArray<AActor*>                                    ActorsToIgnore;                                             // 0x03C8   (0x0010)  
	TMap<EMovementType, FF_MovementSettings>           MovementSettingsCPP;                                        // 0x03D8   (0x0050)  
	TMap<EMovementType, FF_RotationCurvesMap>          RotationCurves;                                             // 0x0428   (0x0050)  
	UCurveFloat*                                       CurrentRotationCurve;                                       // 0x0478   (0x0008)  
	double                                             EndTime;                                                    // 0x0480   (0x0008)  
	double                                             DistanceToCurrentPathPoint;                                 // 0x0488   (0x0008)  
	bool                                               bSkipCalculations;                                          // 0x0490   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x0491   (0x0007)  MISSED
	double                                             PreviousDistance;                                           // 0x0498   (0x0008)  
	bool                                               bAlwaysRecalculateMovement;                                 // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	double                                             SkipCalculationsDistance;                                   // 0x04A8   (0x0008)  
	bool                                               bIsBlockedOnFront;                                          // 0x04B0   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x04B1   (0x0007)  MISSED
	AZombie_C*                                         ZombieBlockedBy;                                            // 0x04B8   (0x0008)  
	FTimerHandle                                       RotationExtractionSubtickTimer;                             // 0x04C0   (0x0008)  
	float                                              RotationSubtickInterval;                                    // 0x04C8   (0x0004)  
	unsigned char                                      UnknownData14_5[0x4];                                       // 0x04CC   (0x0004)  MISSED
	FRotator                                           NewRotation;                                                // 0x04D0   (0x0018)  
	FTimerHandle                                       RotationSubtickTimer;                                       // 0x04E8   (0x0008)  
	bool                                               bUseRotationSubtick;                                        // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	double                                             MinDistanceBeforeLastPoint;                                 // 0x04F8   (0x0008)  
	FTimerHandle                                       UnblockZombieTimer;                                         // 0x0500   (0x0008)  
	double                                             MinDistanceToStartMoving;                                   // 0x0508   (0x0008)  
	double                                             ReplicatedRotationZ;                                        // 0x0510   (0x0008)  
	double                                             MinAngleToStopMovement;                                     // 0x0518   (0x0008)  
	double                                             maxClientAngleDifference;                                   // 0x0520   (0x0008)  
	FTimerHandle                                       UnblockZombieFromWaterTargetTimer;                          // 0x0528   (0x0008)  
	double                                             VelocityLengthFromServer;                                   // 0x0530   (0x0008)  
	bool                                               bCarInFront;                                                // 0x0538   (0x0001)  
	unsigned char                                      UnknownData16_5[0x7];                                       // 0x0539   (0x0007)  MISSED
	AAVS_VehicleMaster_C*                              CarInFront;                                                 // 0x0540   (0x0008)  
	FVector                                            CarHitLocation;                                             // 0x0548   (0x0018)  
	FVector                                            CarHitReflectionVector;                                     // 0x0560   (0x0018)  


	/// Functions
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.AddCarAvoidingPoint
	void AddCarAvoidingPoint(TArray<FVector>& InPoints, TArray<FVector>& OutPoints);                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetOwnerVelocityClient
	void SetOwnerVelocityClient();                                                                                           // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.BlockZombieByWaterTarget
	void BlockZombieByWaterTarget();                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.UnblockZombieFromWaterTarget
	void UnblockZombieFromWaterTarget();                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.UnblockZombie
	void UnblockZombie();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.BlockZombie
	void BlockZombie();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CheckStartAngleIsTooBig
	void CheckStartAngleIsTooBig();                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.StopPathOnTooBigAngle
	void StopPathOnTooBigAngle(TArray<FVector>& PathPointsArr, TArray<FVector>& PathPoints);                                 // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetOwnerRotationClient
	void SetOwnerRotationClient();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DebugShowPathTrack
	void DebugShowPathTrack();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DebugShowPath
	void DebugShowPath();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.RotationTickExecutor
	void RotationTickExecutor();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.RotationSubtick
	void RotationSubtick(FRotator TargetRotation, float DeltaTime);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.RotationExtractionSubtick
	void RotationExtractionSubtick();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetPathPoints
	void SetPathPoints(TArray<FVector>& InPoints);                                                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CheckHittedActor
	void CheckHittedActor(UObject* ActorHitted, FVector Hit location);                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetIsMovingCorrectly
	void GetIsMovingCorrectly(bool& bMovingCorrectly);                                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Get Should Skip Calculations
	void Get Should Skip Calculations();                                                                                     // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateDistanceToCurrentPoint
	void CalculateDistanceToCurrentPoint();                                                                                  // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DetermineRotationCurve
	void DetermineRotationCurve(EMovementType MovementType, double AnimationAngle);                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetMovementSettingsCPP
	void SetMovementSettingsCPP(TMap<EMovementType, FF_MovementSettings> NewMovementSettingsCPP);                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CheckZombieInFront
	void CheckZombieInFront();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.AddRandomPointNearTarget
	void AddRandomPointNearTarget(TArray<FVector>& InPoints, TArray<FVector>& OutPoints);                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetDistanceToStop
	double GetDistanceToStop();                                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateDistanceToTarget
	void CalculateDistanceToTarget();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateTargetLocation
	void CalculateTargetLocation();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetMovementSettings
	void SetMovementSettings(TMap<TEnumAsByte, FF_MovementSettings> NewMovementSettings);                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateTwistCheckDistance
	void SetStateTwistCheckDistance(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateAfterDecreaseAdjustment
	void SetStateAfterDecreaseAdjustment(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateCloseDirInterpSpeed
	void SetStateCloseDirInterpSpeed(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateCloseToTargetDist
	void SetStateCloseToTargetDist(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateChangePointDist
	void SetStateChangePointDist(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateLowestAngle
	void SetStateLowestAngle(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateHighestAngle
	void SetStateHighestAngle(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateIncreaseStateDist
	void SetStateIncreaseStateDist(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateDecreaseStateDist
	void SetStateDecreaseStateDist(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateSpeedInterpSpeed
	void SetStateSpeedInterpSpeed(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateMaxDirInterpSpeed
	void SetStateMaxDirInterpSpeed(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateMinDirInterpSpeed
	void SetStateMinDirInterpSpeed(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateMaxSpeed
	void SetStateMaxSpeed(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateMinSpeed
	void SetStateMinSpeed(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateDeceleration
	void SetStateDeceleration(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetStateAcceleration
	void SetStateAcceleration(TEnumAsByte<E_AIMovementType> MovementType, double NewValue);                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.RefreshMovemenetType
	void RefreshMovemenetType();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.TwistDetected
	bool TwistDetected();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.StopCalculations
	bool StopCalculations();                                                                                                 // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetCurrentPathPointLocation
	void GetCurrentPathPointLocation(FVector& CurrentPathPointLocation);                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateNextPathPointLocation
	void CalculateNextPathPointLocation();                                                                                   // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateCurrentPathPointLocation
	void CalculateCurrentPathPointLocation();                                                                                // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.On Set Target Actor
	void On Set Target Actor(AActor* TargetActor);                                                                           // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.IsIndexInRange
	void IsIndexInRange(int32_t Index, bool& InRange);                                                                       // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateTargetLocationDifference
	void CalculateTargetLocationDifference();                                                                                // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.ResetAllVariables
	void ResetAllVariables();                                                                                                // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Get Last Point Is Target Actor
	void Get Last Point Is Target Actor(bool& LastPointIsTargetActor);                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetDesiredVector
	void GetDesiredVector(FVector& DesiredVector);                                                                           // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.IsCloseToTarget
	void IsCloseToTarget(bool& IsClose);                                                                                     // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetVelocityValue
	double GetVelocityValue();                                                                                               // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.On Reach Last Point
	void On Reach Last Point();                                                                                              // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Rotation Curve Name Rep Notify
	void Rotation Curve Name Rep Notify(EMovementType MovementType, double AnimationAngle);                                  // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.MovementTypeRepNotify
	void MovementTypeRepNotify();                                                                                            // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DecreasingMovementSetup
	void DecreasingMovementSetup();                                                                                          // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.IncreasingMovementSetup
	void IncreasingMovementSetup();                                                                                          // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DefaultMovementSetup
	void DefaultMovementSetup();                                                                                             // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.OnRep_PathMovementState
	void OnRep_PathMovementState();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.LastPointIsTarget
	void LastPointIsTarget(bool& IsTarget);                                                                                  // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.OnReachPathPoint
	void OnReachPathPoint();                                                                                                 // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.FinishedAcceleration
	void FinishedAcceleration(bool& Finished);                                                                               // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.IncreasingMovement
	void IncreasingMovement();                                                                                               // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DecreasingMovement
	void DecreasingMovement();                                                                                               // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DefaultMovement
	void DefaultMovement();                                                                                                  // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Time to Change to Increasing State
	void Time to Change to Increasing State(bool& Change);                                                                   // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Time To Change To Decreasing State
	void Time To Change To Decreasing State(bool& Change);                                                                   // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.TimeToChangePointIndex
	void TimeToChangePointIndex(bool& Change);                                                                               // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Is Current Point Not Last
	void Is Current Point Not Last(bool& IsNotLast);                                                                         // [0x2407bf0] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetEndSpeedbyAngle
	void SetEndSpeedbyAngle(double angle);                                                                                   // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetAngleBetweenDirections
	void GetAngleBetweenDirections(double& angle);                                                                           // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetDistanceToNextPoint
	double GetDistanceToNextPoint();                                                                                         // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.PathMovementHandle
	void PathMovementHandle();                                                                                               // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.UpdatePath
	void UpdatePath();                                                                                                       // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetVelocityFromAnimation
	bool GetVelocityFromAnimation();                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.StopExtractionRotationFromAnimation
	void StopExtractionRotationFromAnimation();                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CheckAnimationRotationStop
	void CheckAnimationRotationStop(bool& Stop);                                                                             // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.OnRep_RotationCurveName
	void OnRep_RotationCurveName();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.RotationExtraction
	void RotationExtraction(double DeltaSeconds);                                                                            // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.ExtractRotationFromAnimation
	void ExtractRotationFromAnimation(FName RotationCurveName, double AnimationAngle, EMovementType MovementType);           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetMovementType
	void SetMovementType(TEnumAsByte<E_AIMovementType> MovementType, EMovementType NewParam);                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetIsStopping
	bool GetIsStopping();                                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetAnimationAngle
	double GetAnimationAngle();                                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.GetMovementType
	TEnumAsByte<E_AIMovementType> GetMovementType();                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.OnRep_MovementType
	void OnRep_MovementType();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DrawPathPoints
	void DrawPathPoints();                                                                                                   // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Set Owner Rotation
	void Set Owner Rotation(double DeltaSeconds);                                                                            // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateOwnerLocation
	void CalculateOwnerLocation();                                                                                           // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DrawAIDebugLine
	void DrawAIDebugLine(FVector Direction, FLinearColor LineColor, double DrawDistance, double DrawThickness);              // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.OnRep_PathPoints
	void OnRep_PathPoints();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.AnalyzePath
	void AnalyzePath();                                                                                                      // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.SetOwnerVelocity
	void SetOwnerVelocity();                                                                                                 // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.InitializePath
	void InitializePath(bool TargetIsActor, AActor* TargetActor, FVector TargetLocationIn, AActor* PathfindingContext, UClass* FilterClass); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateVelocity
	void CalculateVelocity(double DeltaSeconds);                                                                             // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateDirectionInterpolationSpeed
	void CalculateDirectionInterpolationSpeed(double& InterpolationSpeed);                                                   // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.Calculate Desired Direction
	void Calculate Desired Direction(FVector& DesiredDirection);                                                             // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateOwnerDirection
	void CalculateOwnerDirection(FVector& OwnerDirection);                                                                   // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateResultVelocity
	void CalculateResultVelocity(FVector& Velocity);                                                                         // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateVelocityDirection
	void CalculateVelocityDirection(double DeltaSeconds, FVector& Direction);                                                // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CalculateVelocityValue
	void CalculateVelocityValue(double DeltaSeconds, double& VelocityValue);                                                 // [0x2407bf0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.StopAnimationMovement
	void StopAnimationMovement();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.StopMovementImmediately 
	void StopMovementImmediately ();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.StartMovement
	void StartMovement(bool StartFromAnimation);                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DeactivateComponent
	void DeactivateComponent();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.ActivateComponent
	void ActivateComponent(bool TickEnabled);                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.CPPMovementTypeRepNotify
	void CPPMovementTypeRepNotify();                                                                                         // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.DelayedUnsetAnimationMovement
	void DelayedUnsetAnimationMovement();                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.ReachLastPoint
	void ReachLastPoint();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.MulticastRotationCurveNameRepNotify
	void MulticastRotationCurveNameRepNotify(EMovementType MovementType, double AnimationAngle);                             // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.ExecuteUbergraph_AIMovementComponent
	void ExecuteUbergraph_AIMovementComponent(int32_t EntryPoint);                                                           // [0x2407bf0] Final                
	// Function /Game/AI/Zombie/AIMovementComponent/AIMovementComponent.AIMovementComponent_C.OnReachTarget__DelegateSignature
	void OnReachTarget__DelegateSignature();                                                                                 // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C
/// Size: 0x0068 (0x000290 - 0x0002F8)
class ADeerManager_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	int32_t                                            MaxAmounOfDeers;                                            // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	FTimerHandle                                       SpawningTimer;                                              // 0x02A8   (0x0008)  
	int32_t                                            AmountOfSpawnedDeers;                                       // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	TArray<ABP_DeerV2_C*>                              AllDeers;                                                   // 0x02B8   (0x0010)  
	TArray<int32_t>                                    ActiveDeersIndexes;                                         // 0x02C8   (0x0010)  
	TArray<ABP_DeerV2_C*>                              ActiveDeers;                                                // 0x02D8   (0x0010)  
	bool                                               NoPlayers;                                                  // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	FTimerHandle                                       CheckPlayersTimer;                                          // 0x02F0   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.CheckPlayers
	void CheckPlayers();                                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.KillAllActiveDeers
	void KillAllActiveDeers();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.RequestSpawnOfDeer
	void RequestSpawnOfDeer(FVector Location, FRotator Rotation, TEnumAsByte<E_DeerSpawnType> Type, ABP_DeerV2_C*& SpawnedDeer); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.GetAllDeers
	TArray<ABP_DeerV2_C*> GetAllDeers();                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.GetActiveDeers
	TArray<ABP_DeerV2_C*> GetActiveDeers();                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.ResetDeer
	void ResetDeer(int32_t DeerManagerIndex, ABP_DeerV2_C* DeerRef);                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.GetFreeDeerIndex
	int32_t GetFreeDeerIndex();                                                                                              // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.SpawnDeer
	void SpawnDeer();                                                                                                        // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.SpawnerRequest
	void SpawnerRequest(int32_t AmountOfDeers);                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/AIManagers/DeerManager.DeerManager_C.ExecuteUbergraph_DeerManager
	void ExecuteUbergraph_DeerManager(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C
/// Size: 0x0199 (0x000290 - 0x000429)
class ABP_ZombieSpawner_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UBoxComponent*                                     BoxTriggerZone;                                             // 0x0298   (0x0008)  
	USphereComponent*                                  DetectCollision;                                            // 0x02A0   (0x0008)  
	UBillboardComponent*                               billboard;                                                  // 0x02A8   (0x0008)  
	UTextRenderComponent*                              TextRender;                                                 // 0x02B0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
	int32_t                                            Cooldown;                                                   // 0x02C0   (0x0004)  
	int32_t                                            ZombieSpawnChance;                                          // 0x02C4   (0x0004)  
	bool                                               ShowMainWorkingArea;                                        // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C9   (0x0003)  MISSED
	int32_t                                            SpawnCount;                                                 // 0x02CC   (0x0004)  
	int32_t                                            ZombieCounter;                                              // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	FTimerHandle                                       CooldownTimer;                                              // 0x02D8   (0x0008)  
	int32_t                                            TickingCooldown;                                            // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	AActor*                                            TriggeredActor;                                             // 0x02E8   (0x0008)  
	bool                                               OnCooldown;                                                 // 0x02F0   (0x0001)  
	bool                                               AfterAlarm;                                                 // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x02F2   (0x0006)  MISSED
	TArray<int32_t>                                    DayMeshTypes;                                               // 0x02F8   (0x0010)  
	bool                                               SpawnWitch;                                                 // 0x0308   (0x0001)  
	bool                                               SpawnSWAT;                                                  // 0x0309   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x030A   (0x0006)  MISSED
	AZombieManager_C*                                  ZombieManager;                                              // 0x0310   (0x0008)  
	ATDB_GameMode_C*                                   TDBGameMode;                                                // 0x0318   (0x0008)  
	AGS_TDB_C*                                         GameStateRef;                                               // 0x0320   (0x0008)  
	ABP_ZombieSpawnerHandler_C*                        SpawnerHandler;                                             // 0x0328   (0x0008)  
	ASkyCreatorController_C*                           SkyCreatorController;                                       // 0x0330   (0x0008)  
	TArray<int32_t>                                    NightMeshTypes;                                             // 0x0338   (0x0010)  
	bool                                               RandomizeSpawnBetweenAreas;                                 // 0x0348   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0349   (0x0007)  MISSED
	ATargetPoint*                                      AntiCampSpawnPoint;                                         // 0x0350   (0x0008)  
	TArray<FAreaPropertiesUpdated>                     NewSpawnAreas;                                              // 0x0358   (0x0010)  
	TSet<UQuest*>                                      LinkedQuests;                                               // 0x0368   (0x0050)  
	TArray<UPrimitiveComponent*>                       CheckAreas;                                                 // 0x03B8   (0x0010)  
	TArray<int32_t>                                    CheckAreasPlayerCount;                                      // 0x03C8   (0x0010)  
	FVector                                            AntiCampSpawnLocation;                                      // 0x03D8   (0x0018)  
	int32_t                                            PlayersNearCount;                                           // 0x03F0   (0x0004)  
	float                                              AntiCampSpawnTime;                                          // 0x03F4   (0x0004)  
	FTimerHandle                                       AntiCampSpawnTimer;                                         // 0x03F8   (0x0008)  
	bool                                               SpawningAntiCampZombies;                                    // 0x0400   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0401   (0x0007)  MISSED
	TArray<AActor*>                                    PlayersNear;                                                // 0x0408   (0x0010)  
	TArray<int32_t>                                    SoldierMeshTypes;                                           // 0x0418   (0x0010)  
	bool                                               bIsCitySpawner;                                             // 0x0428   (0x0001)  


	/// Functions
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.CREATEDELEGATE_PROXYFUNCTION
	void CREATEDELEGATE_PROXYFUNCTION(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.CREATEDELEGATE_PROXYFUNCTION
	void CREATEDELEGATE_PROXYFUNCTION(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.GenerateSoldierMeshType
	void GenerateSoldierMeshType(int32_t& MeshType);                                                                         // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.SpawnAntiCampZombies
	void SpawnAntiCampZombies();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.CheckShouldSpawnAntiCamp
	void CheckShouldSpawnAntiCamp();                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.GetSpawnMultiplier
	double GetSpawnMultiplier();                                                                                             // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ConfigureRotation
	FRotator ConfigureRotation(FAreaPropertiesUpdated& Area);                                                                // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ConfigureZombieAndMeshType
	void ConfigureZombieAndMeshType(FAreaPropertiesUpdated& Area, EZombieType& ZombieType, int32_t& MeshType);               // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ConfigureAnimType
	EZombieAnimType ConfigureAnimType(FAreaPropertiesUpdated& Area);                                                         // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ValidNightConditions
	bool ValidNightConditions(bool InDarkRoom);                                                                              // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.Is Night Time
	bool Is Night Time();                                                                                                    // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.StartCooldown
	void StartCooldown();                                                                                                    // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ValidateSpawnResult
	void ValidateSpawnResult();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.SetSpawnerHandler
	void SetSpawnerHandler(ABP_ZombieSpawnerHandler_C* InSpawnerHandler);                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.Get Random Area Index
	int32_t Get Random Area Index();                                                                                         // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.AreaIsEmptyFromPlayers
	bool AreaIsEmptyFromPlayers(int32_t AreaIndex);                                                                          // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.All Areas Occupied
	bool All Areas Occupied();                                                                                               // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.PrintLogs
	void PrintLogs();                                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.OnCheckAreaEndOverlap
	void OnCheckAreaEndOverlap(UPrimitiveComponent*& OverlappedComponent, AActor*& OtherActor, UPrimitiveComponent*& OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.OnCheckAreaBeginOverlap
	void OnCheckAreaBeginOverlap(UPrimitiveComponent*& OverlappedComponent, AActor*& OtherActor, UPrimitiveComponent*& OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.AddPlayerCheckArea
	void AddPlayerCheckArea(FAreaPropertiesUpdated& Area, FTransform& ConnectedAreaRelativeTransform);                       // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.SetLinkedQuests
	void SetLinkedQuests(TArray<UQuest*>& LinkedQuests);                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.SpawnNightZombie
	EZombieType SpawnNightZombie(bool InDarkRoomArea);                                                                       // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.GenerateNightMeshType
	void GenerateNightMeshType(int32_t& MeshType);                                                                           // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.OnTriggerSpawn
	void OnTriggerSpawn(AActor* Actor, bool AfterAlarm);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.DetermineZombieAnimType
	EZombieAnimType DetermineZombieAnimType(EZombieAnimType InputType);                                                      // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.Get Amount Of Zombies
	void Get Amount Of Zombies(int32_t& AmountOfZombies);                                                                    // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.Spawn Zombies
	void Spawn Zombies(AActor* Actor, bool AfterAlarm);                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.DecreaseGroupCounter
	void DecreaseGroupCounter();                                                                                             // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.AnotherZombieInSpawnPoint
	bool AnotherZombieInSpawnPoint(FVector SpawnLocation);                                                                   // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.GenerateDayMeshType
	void GenerateDayMeshType(int32_t& MeshType);                                                                             // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ResetSpawner
	void ResetSpawner();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.RotateVectorAroundPoint
	void RotateVectorAroundPoint(FVector PivotVector, FVector VectorToRotate, FRotator Rotation, FVector& RotatedVector);    // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.Spawn Zombie in Area
	void Spawn Zombie in Area(FAreaPropertiesUpdated& Area);                                                                 // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.DecreaseCooldown
	void DecreaseCooldown();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.GetTraceStartAndEndPoint
	void GetTraceStartAndEndPoint(FAreaPropertiesUpdated& SpawnArea, FVector& TraceStart, FVector& TraceEnd);                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.GetSpawnLocationInArea
	void GetSpawnLocationInArea(FAreaPropertiesUpdated& SpawnArea, FVector& SpawnLocation);                                  // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.AddArea
	void AddArea(FAreaPropertiesUpdated& AreaProperties);                                                                    // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.IsSpawnerReady
	void IsSpawnerReady(bool& Ready);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.Spawn Zombie
	void Spawn Zombie(FVector Location, FAreaPropertiesUpdated& Area);                                                       // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.BndEvt__BP_ZombieSpawner_BoxTriggerZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_ZombieSpawner_BoxTriggerZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.BndEvt__BP_ZombieSpawner_BoxTriggerZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__BP_ZombieSpawner_BoxTriggerZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/Zombie/ZombieSpawner/ZombieAreaSpawner/BP_ZombieSpawner.BP_ZombieSpawner_C.ExecuteUbergraph_BP_ZombieSpawner
	void ExecuteUbergraph_BP_ZombieSpawner(int32_t EntryPoint);                                                              // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/AI/Zombie/Zombie.Zombie_C
/// Size: 0x0F40 (0x000640 - 0x001580)
class AZombie_C : public AZombieCharacter : AZombieCharacter
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0640   (0x0008)  
	UAudioCheckerComponent_C*                          AudioCheckerComponent;                                      // 0x0648   (0x0008)  
	USkeletalMeshComponent*                            Head;                                                       // 0x0650   (0x0008)  
	UAIMovementComponent_C*                            AIMovementComponent;                                        // 0x0658   (0x0008)  
	UBPC_TickIntervalController_C*                     BPC_TickIntervalController;                                 // 0x0660   (0x0008)  
	USkeletalMeshComponent*                            Feet;                                                       // 0x0668   (0x0008)  
	USkeletalMeshComponent*                            Body;                                                       // 0x0670   (0x0008)  
	double                                             Health;                                                     // 0x0678   (0x0008)  
	bool                                               Dead;                                                       // 0x0680   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0681   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnDeath;                                                    // 0x0688   (0x0010)  
	int32_t                                            MeshType;                                                   // 0x0698   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x069C   (0x0004)  MISSED
	TArray<FName>                                      LeftArmBones;                                               // 0x06A0   (0x0010)  
	TArray<FName>                                      RightArmBones;                                              // 0x06B0   (0x0010)  
	TArray<FName>                                      BodyBones;                                                  // 0x06C0   (0x0010)  
	double                                             DefaultImpulseOnDeath;                                      // 0x06D0   (0x0008)  
	float                                              BulletShotRange;                                            // 0x06D8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x06DC   (0x0004)  MISSED
	UOptimized_ABP_Zombie_C*                           AnimBP;                                                     // 0x06E0   (0x0008)  
	bool                                               DamageWasDealt;                                             // 0x06E8   (0x0001)  
	bool                                               SpottedSurvivor;                                            // 0x06E9   (0x0001)  
	bool                                               AttackOnCooldown;                                           // 0x06EA   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x06EB   (0x0005)  MISSED
	double                                             AttackCooldown;                                             // 0x06F0   (0x0008)  
	FTimerHandle                                       AttackTimer;                                                // 0x06F8   (0x0008)  
	TMap<FName, TWeakObjectPtr>                        DamagedMontages;                                            // 0x0700   (0x0050)  
	TMap<FName, TEnumAsByte>                           BoneMeshLink;                                               // 0x0750   (0x0050)  
	TEnumAsByte<DismembermentState>                    HeadDismembermentState;                                     // 0x07A0   (0x0001)  
	TEnumAsByte<DismembermentState>                    BodyDismembermentState;                                     // 0x07A1   (0x0001)  
	TEnumAsByte<DismembermentState>                    FeetDismembermentState;                                     // 0x07A2   (0x0001)  
	TEnumAsByte<DismembermentPart>                     Dismemberment_Part;                                         // 0x07A3   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x07A4   (0x0004)  MISSED
	USkeletalMesh*                                     Dismemberment_Mesh;                                         // 0x07A8   (0x0008)  
	bool                                               DismembermentInProgress;                                    // 0x07B0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x07B1   (0x0003)  MISSED
	FName                                              G_HitBoneName;                                              // 0x07B4   (0x0008)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x07BC   (0x0004)  MISSED
	FVector                                            G_Hit_Location;                                             // 0x07C0   (0x0018)  
	AController*                                       G_Instigated_By;                                            // 0x07D8   (0x0008)  
	double                                             G_Hit_Angle;                                                // 0x07E0   (0x0008)  
	TEnumAsByte<BPE_Weapon_Type>                       WeaponType;                                                 // 0x07E8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x07E9   (0x0007)  MISSED
	TMap<TEnumAsByte, double>                          LimbsDurability;                                            // 0x07F0   (0x0050)  
	double                                             ExplosionDismemberDistance;                                 // 0x0840   (0x0008)  
	int32_t                                            ExplosionDismembermentCounter;                              // 0x0848   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x084C   (0x0004)  MISSED
	TArray<FName>                                      Explosion_Bones_to_Dismember;                               // 0x0850   (0x0010)  
	TEnumAsByte<DismembermentPart>                     DismemberPartBeforeCorrection;                              // 0x0860   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0861   (0x0007)  MISSED
	FHitResult                                         G_Hit_Info;                                                 // 0x0868   (0x00E8)  
	FPoseSnapshot                                      DismemberSnapshot;                                          // 0x0950   (0x0038)  
	bool                                               AfterRagdoll;                                               // 0x0988   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0989   (0x0007)  MISSED
	FTimerHandle                                       RagdollTimer;                                               // 0x0990   (0x0008)  
	bool                                               RagdollIsFaceUp;                                            // 0x0998   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x0999   (0x0007)  MISSED
	FVector                                            BloodDecalLocation;                                         // 0x09A0   (0x0018)  
	TMap<FName, TWeakObjectPtr>                        MoveAttackMontages;                                         // 0x09B8   (0x0050)  
	FMulticastInlineDelegate                           OnEndAttack;                                                // 0x0A08   (0x0010)  
	TArray<UFMODEvent*>                                DismembermentSounds;                                        // 0x0A18   (0x0010)  
	FMulticastInlineDelegate                           ContinueMovement;                                           // 0x0A28   (0x0010)  
	double                                             HitDecalLifeSpan;                                           // 0x0A38   (0x0008)  
	double                                             PoolDecalLifeSpan;                                          // 0x0A40   (0x0008)  
	double                                             BloodDropDecalLifeSpan;                                     // 0x0A48   (0x0008)  
	FTimerHandle                                       DecalsHitTimer;                                             // 0x0A50   (0x0008)  
	TArray<FName>                                      HitDecalBones;                                              // 0x0A58   (0x0010)  
	TArray<FName>                                      Excluded_Bones;                                             // 0x0A68   (0x0010)  
	bool                                               AdditiveDamage;                                             // 0x0A78   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0A79   (0x0007)  MISSED
	FMulticastInlineDelegate                           MoveAfterDamage;                                            // 0x0A80   (0x0010)  
	bool                                               CoreDamageAnimation;                                        // 0x0A90   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0A91   (0x0007)  MISSED
	FTimerHandle                                       DamageAnimResetTimer;                                       // 0x0A98   (0x0008)  
	bool                                               Attacking;                                                  // 0x0AA0   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0AA1   (0x0007)  MISSED
	FPoseSnapshot                                      DeadBodySnapshot;                                           // 0x0AA8   (0x0038)  
	AZombieDeadBody_C*                                 ZombieDeadBodyRef;                                          // 0x0AE0   (0x0008)  
	bool                                               Stunned;                                                    // 0x0AE8   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x0AE9   (0x0007)  MISSED
	AZombieController_C*                               ZombieController;                                           // 0x0AF0   (0x0008)  
	TWeakObjectPtr<UAnimMontage*>                      HeadMontageToPlay;                                          // 0x0AF8   (0x0030)  
	int32_t                                            HelmetDurability;                                           // 0x0B28   (0x0004)  
	unsigned char                                      UnknownData16_5[0x4];                                       // 0x0B2C   (0x0004)  MISSED
	TArray<TWeakObjectPtr>                             SparkVFXs;                                                  // 0x0B30   (0x0010)  
	int32_t                                            ZombieManagerIndex;                                         // 0x0B40   (0x0004)  
	unsigned char                                      UnknownData17_5[0x4];                                       // 0x0B44   (0x0004)  MISSED
	AZombieManager_C*                                  ZombieManager;                                              // 0x0B48   (0x0008)  
	FVector                                            ZombieScale;                                                // 0x0B50   (0x0018)  
	FTimerHandle                                       RagdollStopTimer;                                           // 0x0B68   (0x0008)  
	FVector                                            MeshPosition;                                               // 0x0B70   (0x0018)  
	TArray<TWeakObjectPtr>                             Partitioned_Meshes;                                         // 0x0B88   (0x0010)  
	bool                                               IsPossessed;                                                // 0x0B98   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x0B99   (0x0007)  MISSED
	FTimerHandle                                       ZombieManagerNotifyTimer;                                   // 0x0BA0   (0x0008)  
	FTimerHandle                                       SpawnDeadBodyTimer;                                         // 0x0BA8   (0x0008)  
	FVector                                            ZombieHomeLocation;                                         // 0x0BB0   (0x0018)  
	TWeakObjectPtr<UFMODEvent*>                        IdleSoundEvent;                                             // 0x0BC8   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        AgressiveSoundEvent;                                        // 0x0BF8   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        DeathSound;                                                 // 0x0C28   (0x0030)  
	UFMODAudioComponent*                               IdleSoundComp;                                              // 0x0C58   (0x0008)  
	UFMODAudioComponent*                               AgressiveSoundComp;                                         // 0x0C60   (0x0008)  
	FMulticastInlineDelegate                           OnReset;                                                    // 0x0C68   (0x0010)  
	bool                                               IsChasing;                                                  // 0x0C78   (0x0001)  
	unsigned char                                      UnknownData19_5[0x7];                                       // 0x0C79   (0x0007)  MISSED
	FDismembermentMeshCollection                       DismembermentMeshesRow;                                     // 0x0C80   (0x0070)  
	TWeakObjectPtr<UFMODEvent*>                        ScreamSound;                                                // 0x0CF0   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        DamagedSound;                                               // 0x0D20   (0x0030)  
	TWeakObjectPtr<UFMODEvent*>                        AttackSound;                                                // 0x0D50   (0x0030)  
	TArray<TWeakObjectPtr>                             WalkStepSounds;                                             // 0x0D80   (0x0010)  
	TArray<TWeakObjectPtr>                             SprintStepSounds;                                           // 0x0D90   (0x0010)  
	int32_t                                            MeshTypeDefaultValue;                                       // 0x0DA0   (0x0004)  
	unsigned char                                      UnknownData20_5[0x4];                                       // 0x0DA4   (0x0004)  MISSED
	AActor*                                            CurrentTarget;                                              // 0x0DA8   (0x0008)  
	FMulticastInlineDelegate                           OnSetTargetActor;                                           // 0x0DB0   (0x0010)  
	bool                                               BloodNiagaraActive;                                         // 0x0DC0   (0x0001)  
	unsigned char                                      UnknownData21_5[0x7];                                       // 0x0DC1   (0x0007)  MISSED
	FTimerHandle                                       BloodNiagaraTimer;                                          // 0x0DC8   (0x0008)  
	TArray<FName>                                      NiagaraBones;                                               // 0x0DD0   (0x0010)  
	FMulticastInlineDelegate                           OnEndScreaming;                                             // 0x0DE0   (0x0010)  
	FTimerHandle                                       NavMeshGettingTimer;                                        // 0x0DF0   (0x0008)  
	FString                                            NavDataName;                                                // 0x0DF8   (0x0010)  
	ARecastNavMesh*                                    ZombieNavData;                                              // 0x0E08   (0x0008)  
	FName                                              StartScreamingKey;                                          // 0x0E10   (0x0008)  
	TArray<FName>                                      DecalsBones;                                                // 0x0E18   (0x0010)  
	FMulticastInlineDelegate                           OnCarShotHear;                                              // 0x0E28   (0x0010)  
	FVector                                            LimbImpulse;                                                // 0x0E38   (0x0018)  
	TMap<TEnumAsByte, double>                          ArmoredLimbsDurability;                                     // 0x0E50   (0x0050)  
	TMap<TEnumAsByte, double>                          WitchLimbsDurability;                                       // 0x0EA0   (0x0050)  
	TMap<TEnumAsByte, double>                          NightLimbsDurability;                                       // 0x0EF0   (0x0050)  
	TMap<TEnumAsByte, double>                          DayLimbsDurability;                                         // 0x0F40   (0x0050)  
	FVector2D                                          ZombieDamage;                                               // 0x0F90   (0x0010)  
	FName                                              DNA_SampleName;                                             // 0x0FA0   (0x0008)  
	TArray<UQuest*>                                    LinkedQuests;                                               // 0x0FA8   (0x0010)  
	bool                                               FullHeadDismemberment;                                      // 0x0FB8   (0x0001)  
	unsigned char                                      UnknownData22_5[0x7];                                       // 0x0FB9   (0x0007)  MISSED
	FTimerHandle                                       KillZombieTimer;                                            // 0x0FC0   (0x0008)  
	bool                                               Dead_by_Timer_G;                                            // 0x0FC8   (0x0001)  
	unsigned char                                      UnknownData23_5[0x7];                                       // 0x0FC9   (0x0007)  MISSED
	FTimerHandle                                       ShowingTimer;                                               // 0x0FD0   (0x0008)  
	int32_t                                            DefaultQuestDropChance;                                     // 0x0FD8   (0x0004)  
	int32_t                                            SpecialQuestDropChance;                                     // 0x0FDC   (0x0004)  
	FTimerHandle                                       DelayedSMTickTimer;                                         // 0x0FE0   (0x0008)  
	FMulticastInlineDelegate                           OnChangeAIState;                                            // 0x0FE8   (0x0010)  
	TMap<FName, TWeakObjectPtr>                        StayAttackMontages;                                         // 0x0FF8   (0x0050)  
	ABP_Door_C*                                        ConnectedDoor;                                              // 0x1048   (0x0008)  
	bool                                               SinglePlayDamageAnimation;                                  // 0x1050   (0x0001)  
	unsigned char                                      UnknownData24_5[0x7];                                       // 0x1051   (0x0007)  MISSED
	double                                             StartHealth;                                                // 0x1058   (0x0008)  
	UFMODEvent*                                        DismembermentEvent;                                         // 0x1060   (0x0008)  
	int32_t                                            DefaultLootDropChance;                                      // 0x1068   (0x0004)  
	bool                                               IsSleepingZombie;                                           // 0x106C   (0x0001)  
	unsigned char                                      UnknownData25_5[0x3];                                       // 0x106D   (0x0003)  MISSED
	FFItemInfo                                         Item_Info;                                                  // 0x1070   (0x0220)  
	bool                                               OneShotSWATAnimation;                                       // 0x1290   (0x0001)  
	bool                                               BlockSWATDismemberment;                                     // 0x1291   (0x0001)  
	unsigned char                                      UnknownData26_5[0x6];                                       // 0x1292   (0x0006)  MISSED
	FTimerHandle                                       AttackingTimer;                                             // 0x1298   (0x0008)  
	TEnumAsByte<E_AttackingArm>                        AttackingArm;                                               // 0x12A0   (0x0001)  
	unsigned char                                      UnknownData27_5[0x7];                                       // 0x12A1   (0x0007)  MISSED
	FMulticastInlineDelegate                           HitRegistered;                                              // 0x12A8   (0x0010)  
	TArray<ATargetPoint*>                              Patrolling_Path;                                            // 0x12B8   (0x0010)  
	FTimerHandle                                       CheckPlayerIsNear_Timer;                                    // 0x12C8   (0x0008)  
	bool                                               bSoundsLoaded;                                              // 0x12D0   (0x0001)  
	unsigned char                                      UnknownData28_5[0x7];                                       // 0x12D1   (0x0007)  MISSED
	TMap<FName, TWeakObjectPtr>                        DamagedMontagesWithoutScream;                               // 0x12D8   (0x0050)  
	TArray<FVertexDetectAndPaintFundementalsStruct>    HeadWounds;                                                 // 0x1328   (0x0010)  
	TArray<FVertexDetectAndPaintFundementalsStruct>    BodyWounds;                                                 // 0x1338   (0x0010)  
	TArray<FVertexDetectAndPaintFundementalsStruct>    FeetWounds;                                                 // 0x1348   (0x0010)  
	TArray<FF_WoundInfo>                               BodyWoundStructs;                                           // 0x1358   (0x0010)  
	bool                                               bEnableVertexPainting;                                      // 0x1368   (0x0001)  
	unsigned char                                      UnknownData29_5[0x7];                                       // 0x1369   (0x0007)  MISSED
	ABP_CarWithZombie_C*                               ZombieCarBP;                                                // 0x1370   (0x0008)  
	FTimerHandle                                       RegAgrSoundTimer;                                           // 0x1378   (0x0008)  
	UDataTable*                                        Day_ZombieLootTable;                                        // 0x1380   (0x0008)  
	UDataTable*                                        Night_ZombieLootTable;                                      // 0x1388   (0x0008)  
	UDataTable*                                        Witch_ZombieLootTable;                                      // 0x1390   (0x0008)  
	UDataTable*                                        SWAT_ZombieLootTable;                                       // 0x1398   (0x0008)  
	UDataTable*                                        Soldier_ZombieLootTable;                                    // 0x13A0   (0x0008)  
	TArray<int32_t>                                    Day_LootChances_1_2_3;                                      // 0x13A8   (0x0010)  
	TArray<int32_t>                                    Night_LootChances_1_2_3;                                    // 0x13B8   (0x0010)  
	ADropBox_LP_C*                                     LootPoingBag;                                               // 0x13C8   (0x0008)  
	TWeakObjectPtr<UFMODEvent*>                        CarDoorOpenSound;                                           // 0x13D0   (0x0030)  
	bool                                               bPlayingAgressiveSound;                                     // 0x1400   (0x0001)  
	unsigned char                                      UnknownData30_5[0x7];                                       // 0x1401   (0x0007)  MISSED
	double                                             AttackSuccessCheckDistance;                                 // 0x1408   (0x0008)  
	TArray<int32_t>                                    Witch_LootChances_1_2_3;                                    // 0x1410   (0x0010)  
	TArray<int32_t>                                    SWAT_LootChances_1_2_3;                                     // 0x1420   (0x0010)  
	FTimerHandle                                       ScreamingPlayingTimer;                                      // 0x1430   (0x0008)  
	bool                                               bSleepingModeOn;                                            // 0x1438   (0x0001)  
	bool                                               DebugIsReplicatingMovement;                                 // 0x1439   (0x0001)  
	unsigned char                                      UnknownData31_5[0x2];                                       // 0x143A   (0x0002)  MISSED
	float                                              WalkMovementTickrate;                                       // 0x143C   (0x0004)  
	float                                              SprintMovementTickrate;                                     // 0x1440   (0x0004)  
	bool                                               bMovement_High_Tickrate;                                    // 0x1444   (0x0001)  
	unsigned char                                      UnknownData32_5[0x3];                                       // 0x1445   (0x0003)  MISSED
	double                                             Movement_Tickrate_LOD_Multiplier;                           // 0x1448   (0x0008)  
	float                                              LowMovementTickrate;                                        // 0x1450   (0x0004)  
	unsigned char                                      UnknownData33_5[0x4];                                       // 0x1454   (0x0004)  MISSED
	FTimerHandle                                       LowerTickrateTimer;                                         // 0x1458   (0x0008)  
	float                                              Pure_Net_Update_Frequency;                                  // 0x1460   (0x0004)  
	unsigned char                                      UnknownData34_5[0x4];                                       // 0x1464   (0x0004)  MISSED
	double                                             Net_Update_Frequency_LOD_Divider;                           // 0x1468   (0x0008)  
	int32_t                                            SavedMeshType;                                              // 0x1470   (0x0004)  
	float                                              LowNetUpdateFrequency;                                      // 0x1474   (0x0004)  
	float                                              HighNetUpdateFrequency;                                     // 0x1478   (0x0004)  
	bool                                               DebugIsReseted;                                             // 0x147C   (0x0001)  
	bool                                               bJustInitialized;                                           // 0x147D   (0x0001)  
	unsigned char                                      UnknownData35_5[0x2];                                       // 0x147E   (0x0002)  MISSED
	TMap<TEnumAsByte, double>                          SoldierLimbsDurability;                                     // 0x1480   (0x0050)  
	TArray<int32_t>                                    Soldier_LootChances_1_2_3;                                  // 0x14D0   (0x0010)  
	float                                              RotationZ_After_Scream;                                     // 0x14E0   (0x0004)  
	bool                                               bHittedByKnife;                                             // 0x14E4   (0x0001)  
	bool                                               bOverlappingWater;                                          // 0x14E5   (0x0001)  
	unsigned char                                      UnknownData36_5[0x2];                                       // 0x14E6   (0x0002)  MISSED
	FTimerHandle                                       CheckDrownTimer;                                            // 0x14E8   (0x0008)  
	bool                                               bShouldStopInWater;                                         // 0x14F0   (0x0001)  
	unsigned char                                      UnknownData37_5[0x7];                                       // 0x14F1   (0x0007)  MISSED
	double                                             WaterSurfaceZ;                                              // 0x14F8   (0x0008)  
	double                                             DrownHeightDifference;                                      // 0x1500   (0x0008)  
	bool                                               Drown;                                                      // 0x1508   (0x0001)  
	unsigned char                                      UnknownData38_5[0x7];                                       // 0x1509   (0x0007)  MISSED
	double                                             RagdollStopVelocityLimit;                                   // 0x1510   (0x0008)  
	double                                             HeadDamageMultiplier;                                       // 0x1518   (0x0008)  
	bool                                               bIsCityZombie;                                              // 0x1520   (0x0001)  
	unsigned char                                      UnknownData39_5[0x7];                                       // 0x1521   (0x0007)  MISSED
	TMap<TEnumAsByte, double>                          ClownLimbsDurability;                                       // 0x1528   (0x0050)  
	UDataTable*                                        Clown_ZombieLootTable;                                      // 0x1578   (0x0008)  


	/// Functions
	// Function /Game/AI/Zombie/Zombie.Zombie_C.IsZombie?!
	void IsZombie?!(bool& IsZombie?);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.IsBandit?
	void IsBandit?(bool& IsBandit?);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.IsZombie?
	void IsZombie?(bool& IsZombie?, APawn*& Zombie);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.IsDead?
	void IsDead?(bool& IsDead?);                                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetXP
	void GetXP(double& XP);                                                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ClownZombieParams
	void ClownZombieParams();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AttachLootPoint
	void AttachLootPoint(AActor* LootPoint);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckDrown
	void CheckDrown();                                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetupCheckDrownTimer
	void SetupCheckDrownTimer();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SoldierZombieParams
	void SoldierZombieParams();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.UnsetJustInitialized
	void UnsetJustInitialized();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AdjustNetUpdateFrequency
	void AdjustNetUpdateFrequency(float Net Update Frequency);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetLowMovementTickrate
	void SetLowMovementTickrate();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckRepairInvisibleZombie
	void CheckRepairInvisibleZombie();                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Adjust Server Movement Tickrate
	void Adjust Server Movement Tickrate(bool High tickrate);                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Set Loot Point
	void Set Loot Point(AZombieDeadBodyLootPoint_C* LootPoint);                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckIsUnderFloor
	void CheckIsUnderFloor();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetPseudoSurfaceTypeByBone
	void GetPseudoSurfaceTypeByBone(FName BoneName, TEnumAsByte<EPhysicalSurface>& ResultSurface);                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnRep_LootPoingBag
	void OnRep_LootPoingBag();                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GenerateRandomLootOfType
	void GenerateRandomLootOfType(TEnumAsByte<ELootTypes> Type, TEnumAsByte<SlotRarity> LootTier, FName& ID, bool& Canstack, int32_t& MaxCountStack, ATDB_GameMode_C*& AsTDB Game Mode); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GenerateLootFromTables
	void GenerateLootFromTables(TArray<FName>& ItemsToSpawn, TArray<FDefaultItemInfo>& OldContainerItems, TArray<FDefaultItemInfo>& NewContainerItems); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.VertexPaintOnAllMeshes
	void VertexPaintOnAllMeshes(FVertexPaintAtLocationStruct InputPin);                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ApplyWoundsAfterDismemberment
	void ApplyWoundsAfterDismemberment(UPrimitiveComponent* MeshComponent, TArray<FVertexDetectAndPaintFundementalsStruct>& WoundsArray); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetWoundedMeshByBone
	void GetWoundedMeshByBone(FName BoneName, FVertexDetectAndPaintFundementalsStruct& WoundToArray, USkeletalMeshComponent*& WoundedMesh); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckPlayerIsNear
	void CheckPlayerIsNear();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ClearAttackTimer
	void ClearAttackTimer();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AttackInProgress
	void AttackInProgress();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetupAttackTimer
	void SetupAttackTimer(TEnumAsByte<E_AttackingArm> AttackingArm);                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckForHalfHPStunAnimation
	bool CheckForHalfHPStunAnimation();                                                                                      // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.PreDamageAnimationPhase
	void PreDamageAnimationPhase(bool IgnoreVelocity, bool HeadShot, bool& Continue);                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.LoadSoundsFunction
	void LoadSoundsFunction();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetZombieTransform
	void SetZombieTransform(FVector& Location, FRotator& Rotation);                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.TypeConfiguration
	void TypeConfiguration();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AnimTypeConfiguration
	void AnimTypeConfiguration();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlockDoor
	void OnBlockDoor(bool bLocked);                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BeforePlayDamageMontage
	void BeforePlayDamageMontage();                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.On Completed Damage Montage
	void On Completed Damage Montage();                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.FilterQuests
	void FilterQuests(TSet<UQuest*>& LinkedQuestsSet, EZombieType ZombieType);                                               // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Get Agressive Montage Name
	void Get Agressive Montage Name(double angle, FString& SectionName);                                                     // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DelayedDisableSMTick
	void DelayedDisableSMTick();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ShowMeshes
	void ShowMeshes();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.KillZombie
	void KillZombie();                                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckLinkedQuests
	bool CheckLinkedQuests(UQuest*& Quest);                                                                                  // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetItemNamesForLoot
	TArray<FName> GetItemNamesForLoot(AController*& InstigatedBy);                                                           // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SpawnLootPoint
	void SpawnLootPoint(TArray<FName>& ItemsToSpawn);                                                                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetDeadBody
	AZombieDeadBody_C* GetDeadBody();                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CalculateDeathImpulse
	FVector CalculateDeathImpulse(AController*& InstigatedBy, double LastDamage, bool DiedByCar, FVector BodyImpulse);       // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.HeadDamageDismemberment
	void HeadDamageDismemberment(bool EnableHeadDismemberment, TWeakObjectPtr<USkeletalMesh*>& Mesh);                        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AfterDeath
	void AfterDeath();                                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetNavData
	void GetNavData();                                                                                                       // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnEndScreamingFunc
	void OnEndScreamingFunc();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DefineAdditiveDamageMontage
	void DefineAdditiveDamageMontage(FName BoneName, FVector HitLocation, int32_t& MontageType);                             // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RemoveLeftHandNiagara
	void RemoveLeftHandNiagara();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RemoveRightHandNiagara
	void RemoveRightHandNiagara();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RemoveLeftLegNiagara
	void RemoveLeftLegNiagara();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RemoveRightLegNiagara
	void RemoveRightLegNiagara();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RemoveHeadNiagara
	void RemoveHeadNiagara();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MakeBodyBleeding
	void MakeBodyBleeding();                                                                                                 // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RagdollStopChecker
	void RagdollStopChecker();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BloodNiagaraDeactivated
	void BloodNiagaraDeactivated();                                                                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MakeNoiseOnScream
	void MakeNoiseOnScream();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SoundsOnDeath
	void SoundsOnDeath(bool KilledInHead);                                                                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CarHitParticlesAndSound
	void CarHitParticlesAndSound(FVector HitLocation, FVector ImpactNormal);                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnRep_CurrentTarget
	void OnRep_CurrentTarget();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnSeenActor
	void OnSeenActor(AActor* SeenActor);                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetDead
	bool GetDead();                                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetSkeletalMeshesTickEnabled
	void SetSkeletalMeshesTickEnabled(bool bEnabled);                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.KillByZombieManager
	void KillByZombieManager(AController* InstigatedBy);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ExplosionDismemberment
	void ExplosionDismemberment(FVector ExplosionLocation);                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Start Dismemberment
	void Start Dismemberment(FName BoneName, double Damage, TEnumAsByte<BPE_Weapon_Type> WeaponType, FHitResult HitResult, FVector HitLocation, double HitAngle, bool& Start); // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetLowerBodyDismembermentMesh
	void GetLowerBodyDismembermentMesh(TWeakObjectPtr<USkeletalMesh*>& Mesh);                                                // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetUpperBodyDismembermentMesh
	void GetUpperBodyDismembermentMesh(TWeakObjectPtr<USkeletalMesh*>& Mesh);                                                // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetHeadDismembermentMesh
	void GetHeadDismembermentMesh(TWeakObjectPtr<USkeletalMesh*>& Mesh);                                                     // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.InitializeOnBeginPlayClient
	void InitializeOnBeginPlayClient();                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.IsSpecialZombie
	void IsSpecialZombie(bool& IsSpecial);                                                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.NightZombieParams
	void NightZombieParams();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.WitchZombieParams
	void WitchZombieParams();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DiedByMolotov
	void DiedByMolotov();                                                                                                    // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ZombieManagerNotify
	void ZombieManagerNotify();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckMeshStopped
	void CheckMeshStopped(double VelocityLimit, bool& MeshStopped);                                                          // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ArmoredZombieParams
	void ArmoredZombieParams();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DayZombieParams
	void DayZombieParams();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Initialize
	void Initialize(int32_t MeshType, EZombieType Type, EZombieAnimType AnimType, int32_t ZombieManagerIndex, FVector Location, FRotator Rotation); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ClearAllTimers
	void ClearAllTimers();                                                                                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BeginPlaySetup
	void BeginPlaySetup();                                                                                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.HideZombie
	void HideZombie();                                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Ragdoll Updating
	void Ragdoll Updating();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SpawnDeadBody
	void SpawnDeadBody();                                                                                                    // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ResetZombie
	void ResetZombie();                                                                                                      // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DamageAnimReset
	void DamageAnimReset();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetAllDecalHitBones
	void GetAllDecalHitBones();                                                                                              // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AddVertexBulletHole
	void AddVertexBulletHole(FHitResult& HitInfo);                                                                           // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ZombieDeathOnServer
	void ZombieDeathOnServer(FVector HitLocation, FVector DeathImpulse, FName BoneName, bool DiedByGrenade, bool DiedByCar, bool KilledInHead, AController*& InstigatedBy, bool DeadByTimer); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ZombieDeathOnClients
	void ZombieDeathOnClients(FVector HitLocation, FVector DeathImpulse, FName BoneName, bool DiedByGrenade, bool DiedByCar, bool KilledInHead, bool DeadByTimer); // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnDamageReaction
	void OnDamageReaction(double AttackAngle, FName BoneName, FVector HitLocation);                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.HeadDamageHandler
	void HeadDamageHandler(AActor*& DamageCauser, double HitAngle, FVector HitLocation, FName BoneName, AController* InstagatedBy, FHitResult& HitResult, double Damage, TEnumAsByte<BPE_Weapon_Type> WeaponType); // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DecalsLimitter
	void DecalsLimitter();                                                                                                   // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Decals Hit Checker
	void Decals Hit Checker();                                                                                               // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DetectAllLimbsHit
	void DetectAllLimbsHit();                                                                                                // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetDestinationToMove
	void GetDestinationToMove(UNavigationPath* Path, FVector& DestinationToMove);                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.PlayDismembermentSound
	void PlayDismembermentSound(TEnumAsByte<DismembermentPart> DismemberedLimb);                                             // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.On Point Damage
	void On Point Damage(double Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult HitInfo); // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SpawnChunksDecals
	void SpawnChunksDecals(TArray<FBasicParticleData>& Data);                                                                // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetDIsmemberedLimbBones
	void GetDIsmemberedLimbBones(TArray<FName>& DismemberedBones);                                                           // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SpawnDecalUnderLimb
	void SpawnDecalUnderLimb(FVector LimbLocation, FVector LimbDirectionAdjustment, UMaterialInterface* DecalToSpawn, int32_t DecalMinSize, int32_t DecalMaxSize, double DecalLifeSpan, TEnumAsByte<EDrawDebugTrace> DrawDebug, UDecalComponent*& SpawnedDecal); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Activate Dismember Emitter
	void Activate Dismember Emitter(TEnumAsByte<DismembermentPart> DismembermentPart);                                       // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SpawnFallBloodDecal
	void SpawnFallBloodDecal(TEnumAsByte<DismembermentPart> DismembermentPart);                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetupSounds
	void SetupSounds();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DefineDismemberPartsForExplosion
	void DefineDismemberPartsForExplosion(FVector ExplosionLocation, TArray<FName>& BonesToDismember);                       // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CheckDIsmemberDistance
	void CheckDIsmemberDistance(FVector ExplosionLocation, bool& CanBeDismembered);                                          // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CorrectDismembermentPart
	void CorrectDismembermentPart(TEnumAsByte<DismembermentPart> DismemberPart, TEnumAsByte<DismembermentPart>& DismembermentPart); // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.UpdateLimbDurability
	void UpdateLimbDurability(TEnumAsByte<DismembermentPart> DismemberPart, double Damage, bool& PartIsBroken);              // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DisableDismemberedBonesCollision
	void DisableDismemberedBonesCollision(TEnumAsByte<DismembermentState> DismembermentState);                               // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ChangeMeshByDismembermentPart
	void ChangeMeshByDismembermentPart(TEnumAsByte<DismembermentPart> DismembermentPart, USkeletalMesh* DismembermentMesh);  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.CouldBeDismembered
	void CouldBeDismembered(TEnumAsByte<DismembermentPart> DismembermentPart, bool& Yes);                                    // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetDismembermentMesh
	void GetDismembermentMesh(TEnumAsByte<DismembermentPart> DismembermentPart, TWeakObjectPtr<USkeletalMesh*>& DismembermentMesh); // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DefineDismembermentbyBone
	void DefineDismembermentbyBone(FName BoneName, TEnumAsByte<DismembermentPart>& DismembermentPart, bool& PartFounded);    // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DefineAngleForMontage
	void DefineAngleForMontage(double HitAngle, TEnumAsByte<AngleMontage>& AngleMontage);                                    // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ResetAttack
	void ResetAttack();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Get Degrees to Target
	void Get Degrees to Target(FVector TargetLocation, double& DesiredDegrees);                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.IsPlayingAttackMontage
	void IsPlayingAttackMontage(bool& IsPlaying?);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DealDamageToActor
	void DealDamageToActor(FHitResult& HitResult);                                                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.GetHitAngle
	void GetHitAngle(AController* InstigatedBy, double& HitAngle);                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF2691FABC5C30
	void OnLoaded_F5D7EA2A48A3AC0C34FF2691FABC5C30(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF2691B5452EEE
	void OnLoaded_F5D7EA2A48A3AC0C34FF2691B5452EEE(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF269100C6BDD3
	void OnLoaded_F5D7EA2A48A3AC0C34FF269100C6BDD3(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF2691C2501003
	void OnLoaded_F5D7EA2A48A3AC0C34FF2691C2501003(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_D46B79E94C7A53608075F692FA4836E1
	void OnNotifyEnd_D46B79E94C7A53608075F692FA4836E1(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_D46B79E94C7A53608075F692FA4836E1
	void OnNotifyBegin_D46B79E94C7A53608075F692FA4836E1(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_D46B79E94C7A53608075F692FA4836E1
	void OnInterrupted_D46B79E94C7A53608075F692FA4836E1(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_D46B79E94C7A53608075F692FA4836E1
	void OnBlendOut_D46B79E94C7A53608075F692FA4836E1(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_D46B79E94C7A53608075F692FA4836E1
	void OnCompleted_D46B79E94C7A53608075F692FA4836E1(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_B34E310B4038E7659CC67680B2E4A3F3
	void OnLoaded_B34E310B4038E7659CC67680B2E4A3F3(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_DBB4292043DA8186858E4F8829D5273F
	void OnLoaded_DBB4292043DA8186858E4F8829D5273F(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_8631FE044983DB50DFEC5FB6BBE69D2A
	void OnNotifyEnd_8631FE044983DB50DFEC5FB6BBE69D2A(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_8631FE044983DB50DFEC5FB6BBE69D2A
	void OnNotifyBegin_8631FE044983DB50DFEC5FB6BBE69D2A(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_8631FE044983DB50DFEC5FB6BBE69D2A
	void OnInterrupted_8631FE044983DB50DFEC5FB6BBE69D2A(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_8631FE044983DB50DFEC5FB6BBE69D2A
	void OnBlendOut_8631FE044983DB50DFEC5FB6BBE69D2A(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_8631FE044983DB50DFEC5FB6BBE69D2A
	void OnCompleted_8631FE044983DB50DFEC5FB6BBE69D2A(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_C114BC7346807B7E596B22B90E553AB9
	void OnNotifyEnd_C114BC7346807B7E596B22B90E553AB9(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_C114BC7346807B7E596B22B90E553AB9
	void OnNotifyBegin_C114BC7346807B7E596B22B90E553AB9(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_C114BC7346807B7E596B22B90E553AB9
	void OnInterrupted_C114BC7346807B7E596B22B90E553AB9(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_C114BC7346807B7E596B22B90E553AB9
	void OnBlendOut_C114BC7346807B7E596B22B90E553AB9(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_C114BC7346807B7E596B22B90E553AB9
	void OnCompleted_C114BC7346807B7E596B22B90E553AB9(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_3C8CD9D645799EC31D76F6A8A69E3B08
	void OnNotifyEnd_3C8CD9D645799EC31D76F6A8A69E3B08(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_3C8CD9D645799EC31D76F6A8A69E3B08
	void OnNotifyBegin_3C8CD9D645799EC31D76F6A8A69E3B08(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_3C8CD9D645799EC31D76F6A8A69E3B08
	void OnInterrupted_3C8CD9D645799EC31D76F6A8A69E3B08(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_3C8CD9D645799EC31D76F6A8A69E3B08
	void OnBlendOut_3C8CD9D645799EC31D76F6A8A69E3B08(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_3C8CD9D645799EC31D76F6A8A69E3B08
	void OnCompleted_3C8CD9D645799EC31D76F6A8A69E3B08(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_EC2DF73344E2FD8FE269889A8D65AA2C
	void OnNotifyEnd_EC2DF73344E2FD8FE269889A8D65AA2C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_EC2DF73344E2FD8FE269889A8D65AA2C
	void OnNotifyBegin_EC2DF73344E2FD8FE269889A8D65AA2C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_EC2DF73344E2FD8FE269889A8D65AA2C
	void OnInterrupted_EC2DF73344E2FD8FE269889A8D65AA2C(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_EC2DF73344E2FD8FE269889A8D65AA2C
	void OnBlendOut_EC2DF73344E2FD8FE269889A8D65AA2C(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_EC2DF73344E2FD8FE269889A8D65AA2C
	void OnCompleted_EC2DF73344E2FD8FE269889A8D65AA2C(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF2691995C9BC1
	void OnLoaded_F5D7EA2A48A3AC0C34FF2691995C9BC1(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF2691B9B66843
	void OnLoaded_F5D7EA2A48A3AC0C34FF2691B9B66843(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF269180C66D45
	void OnLoaded_F5D7EA2A48A3AC0C34FF269180C66D45(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_81E6BFD74680B821B7A1BA89A7E4B1AD
	void OnNotifyEnd_81E6BFD74680B821B7A1BA89A7E4B1AD(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_81E6BFD74680B821B7A1BA89A7E4B1AD
	void OnNotifyBegin_81E6BFD74680B821B7A1BA89A7E4B1AD(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_81E6BFD74680B821B7A1BA89A7E4B1AD
	void OnInterrupted_81E6BFD74680B821B7A1BA89A7E4B1AD(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_81E6BFD74680B821B7A1BA89A7E4B1AD
	void OnBlendOut_81E6BFD74680B821B7A1BA89A7E4B1AD(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_81E6BFD74680B821B7A1BA89A7E4B1AD
	void OnCompleted_81E6BFD74680B821B7A1BA89A7E4B1AD(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_7A74DE324CF2891674024C94AE2E3813
	void OnNotifyEnd_7A74DE324CF2891674024C94AE2E3813(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_7A74DE324CF2891674024C94AE2E3813
	void OnNotifyBegin_7A74DE324CF2891674024C94AE2E3813(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_7A74DE324CF2891674024C94AE2E3813
	void OnInterrupted_7A74DE324CF2891674024C94AE2E3813(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_7A74DE324CF2891674024C94AE2E3813
	void OnBlendOut_7A74DE324CF2891674024C94AE2E3813(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_7A74DE324CF2891674024C94AE2E3813
	void OnCompleted_7A74DE324CF2891674024C94AE2E3813(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_519674FD4362099F2E3B8182606E4D28
	void OnNotifyEnd_519674FD4362099F2E3B8182606E4D28(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_519674FD4362099F2E3B8182606E4D28
	void OnNotifyBegin_519674FD4362099F2E3B8182606E4D28(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_519674FD4362099F2E3B8182606E4D28
	void OnInterrupted_519674FD4362099F2E3B8182606E4D28(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_519674FD4362099F2E3B8182606E4D28
	void OnBlendOut_519674FD4362099F2E3B8182606E4D28(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_519674FD4362099F2E3B8182606E4D28
	void OnCompleted_519674FD4362099F2E3B8182606E4D28(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_24581C954244391560E0DD9333B07FE6
	void OnNotifyEnd_24581C954244391560E0DD9333B07FE6(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_24581C954244391560E0DD9333B07FE6
	void OnNotifyBegin_24581C954244391560E0DD9333B07FE6(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_24581C954244391560E0DD9333B07FE6
	void OnInterrupted_24581C954244391560E0DD9333B07FE6(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_24581C954244391560E0DD9333B07FE6
	void OnBlendOut_24581C954244391560E0DD9333B07FE6(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_24581C954244391560E0DD9333B07FE6
	void OnCompleted_24581C954244391560E0DD9333B07FE6(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_F5D7EA2A48A3AC0C34FF269103814709
	void OnLoaded_F5D7EA2A48A3AC0C34FF269103814709(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyEnd_2BB7CB5D4191C303A5A520B8D98ED5F0
	void OnNotifyEnd_2BB7CB5D4191C303A5A520B8D98ED5F0(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnNotifyBegin_2BB7CB5D4191C303A5A520B8D98ED5F0
	void OnNotifyBegin_2BB7CB5D4191C303A5A520B8D98ED5F0(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnInterrupted_2BB7CB5D4191C303A5A520B8D98ED5F0
	void OnInterrupted_2BB7CB5D4191C303A5A520B8D98ED5F0(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnBlendOut_2BB7CB5D4191C303A5A520B8D98ED5F0
	void OnBlendOut_2BB7CB5D4191C303A5A520B8D98ED5F0(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCompleted_2BB7CB5D4191C303A5A520B8D98ED5F0
	void OnCompleted_2BB7CB5D4191C303A5A520B8D98ED5F0(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_CA29CBE545C16BDD7AC33798DAEDE7DC
	void OnLoaded_CA29CBE545C16BDD7AC33798DAEDE7DC(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_11D6FA7749B490CE8E1A4AA589CA9047
	void OnLoaded_11D6FA7749B490CE8E1A4AA589CA9047(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_481E9FFB47FE4BE08A627E9D8FFE432F
	void OnLoaded_481E9FFB47FE4BE08A627E9D8FFE432F(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_7A871D3C42DF42B6EF8BF382A2CB9822
	void OnLoaded_7A871D3C42DF42B6EF8BF382A2CB9822(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_8A6E506A4A312AE6846B14B2D6124182
	void OnLoaded_8A6E506A4A312AE6846B14B2D6124182(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_839E2C0B402628950BCB4C889400C126
	void OnLoaded_839E2C0B402628950BCB4C889400C126(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_7DF9BE7C436B339D70C702A8A019FE69
	void OnLoaded_7DF9BE7C436B339D70C702A8A019FE69(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_D25AEA964E5920875498D4BF0EEE3D93
	void OnLoaded_D25AEA964E5920875498D4BF0EEE3D93(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnLoaded_9D069B3643019F44798A7D8DB754C908
	void OnLoaded_9D069B3643019F44798A7D8DB754C908(UObject* Loaded);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AIInteract
	void AIInteract(ABP_Door_C* Door, UArrowComponent* Arrow);                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.EndDoorAttack
	void EndDoorAttack();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.AvoidFire
	void AvoidFire();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerTriggerCarZombie
	void ServerTriggerCarZombie(AActor* InteractedActor);                                                                    // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.PlayHeadAdditiveDamage
	void PlayHeadAdditiveDamage(double HitAngle);                                                                            // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RemoveHelmet
	void RemoveHelmet(FVector& HitLocation);                                                                                 // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SpawnHelmetSpark
	void SpawnHelmetSpark(FHitResult& HitInfo);                                                                              // [0x2407bf0] Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.DecreaseHelmetDurability
	void DecreaseHelmetDurability();                                                                                         // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ZombieAttack_RPC
	void ZombieAttack_RPC(TEnumAsByte<E_AttackingArm> AttackingArm, bool MovingAttack, bool DoorAttack, bool CarAttack);     // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ReceivePointDamage
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector hitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastZombieDeath
	void MulticastZombieDeath(FVector HitLocation, FVector DeathImpulse, FName BoneName, bool DiedByGrenade, bool DiedByCar, bool KilledInHead, bool DeadByTimer); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ZombieDeath_RPC
	void ZombieDeath_RPC(FVector HitLocation, FName BoneName, AController*& InstigatedBy, bool DiedByGrenade, bool DiedByCar, bool KilledInHead, double LastDamage, FVector DeathImpulse, bool DeadByTimer); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ReceiveRadialDamage
	void ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser); // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastPlayReadyScreamMontage
	void MulticastPlayReadyScreamMontage();                                                                                  // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastStartChasingSound
	void MulticastStartChasingSound();                                                                                       // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastStopChasingSound
	void MulticastStopChasingSound();                                                                                        // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerApplyDismemberment
	void ServerApplyDismemberment(FName BoneName, double Damage, TEnumAsByte<BPE_Weapon_Type> WeaponType, FHitResult& HitInfo, FVector HitLocation, double HitAngle); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ReceiveParticleData
	void ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0x2407bf0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Spawn Decal for Blood
	void Spawn Decal for Blood(FName BoneName);                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastPlayDamagedMontage
	void MulticastPlayDamagedMontage(double AttackAngle, bool OneShotSWATAnimation, bool HitByKnife);                        // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnRadialDamgeDeath
	void OnRadialDamgeDeath(FVector HitLocation);                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastAddVertexBulletHole
	void MulticastAddVertexBulletHole(FHitResult& HitInfo);                                                                  // [0x2407bf0] Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetCoreMeshes
	void SetCoreMeshes();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastPlayAdditiveDamage
	void MulticastPlayAdditiveDamage(int32_t MontageType);                                                                   // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.StopIdleSound
	void StopIdleSound();                                                                                                    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.StopAgressiveSound
	void StopAgressiveSound();                                                                                               // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.InitializeZombie_RPC
	void InitializeZombie_RPC(int32_t MeshType, EZombieType Type, EZombieAnimType AnimType, int32_t ZombieManagerIndex, FVector Location, FRotator Rotation, TSet<UQuest*> Quests, ABP_Door_C*& ConnectedDoor, TArray<ATargetPoint*>& PatrollingPath, bool bIsCityZombie); // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.InitializeZombie
	void InitializeZombie(int32_t MeshType, EZombieType Type, EZombieAnimType AnimType, int32_t ZombieManagerIndex, FVector Location, FRotator Rotation); // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastAfterDeath
	void MulticastAfterDeath();                                                                                              // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.InitializeZombieController
	void InitializeZombieController();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastDismemberment
	void MulticastDismemberment(FHitResult& HitInfo, TEnumAsByte<DismembermentPart> DismembermentPart, TEnumAsByte<BPE_Weapon_Type> WeaponType, bool FullHeadDismemberment, bool DoubleDismemberment, double Damage); // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ChangeIdleSound
	void ChangeIdleSound();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ResetChangeIdleSound
	void ResetChangeIdleSound();                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerPlayDamagedMontage
	void ServerPlayDamagedMontage(double AttackAngle, bool IgnoreVelocity, bool DamageInHead);                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerPlayAdditiveDamage
	void ServerPlayAdditiveDamage(FName BoneName, FVector HitLocation);                                                      // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerStopChasingSound
	void ServerStopChasingSound();                                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerStartChasingSound
	void ServerStartChasingSound();                                                                                          // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerFullDismemberment
	void ServerFullDismemberment(FVector BodyImpulse, FVector LimbImpulse, AController*& InstigatedBy);                      // [0x2407bf0] Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastFullDismemberment
	void MulticastFullDismemberment(FVector LimbImpulse);                                                                    // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.PlayDeathMontage
	void PlayDeathMontage();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerPlayAgressiveMontage
	void ServerPlayAgressiveMontage(double angle);                                                                           // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastPlayAgressiveMontage
	void MulticastPlayAgressiveMontage(TWeakObjectPtr<UAnimMontage*>& AgressiveMontageToPlay, double angle);                 // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastPlayHitSound
	void MulticastPlayHitSound();                                                                                            // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ServerMuteZombie
	void ServerMuteZombie();                                                                                                 // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MulticastMuteZombie
	void MulticastMuteZombie();                                                                                              // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast Setup sounds
	void Multicast Setup sounds();                                                                                           // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RPC Multicast AddBlood
	void RPC Multicast AddBlood(FHitResult& hit);                                                                            // [0x2407bf0] Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RPC Multicast SetWoundsOnNewMesh
	void RPC Multicast SetWoundsOnNewMesh(USkeletalMeshComponent* MeshComponent);                                            // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RPC Server Setup Sounds
	void RPC Server Setup Sounds();                                                                                          // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.StopStateSounds
	void StopStateSounds();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RegisterAgressiveSound
	void RegisterAgressiveSound();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BndEvt__Zombie_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__Zombie_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Server RegChaseSound
	void Server RegChaseSound();                                                                                             // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast RegChaseSound
	void Multicast RegChaseSound();                                                                                          // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ReturnReplicateMovement
	void ReturnReplicateMovement();                                                                                          // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.RPC ReturnLaggedZombie
	void RPC ReturnLaggedZombie();                                                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast ReturnLaggedZombie
	void Multicast ReturnLaggedZombie();                                                                                     // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.SetLootPoint_Server
	void SetLootPoint_Server(AZombieDeadBodyLootPoint_C* LootPoint);                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.KillBuggedZombie
	void KillBuggedZombie();                                                                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BndEvt__Zombie_Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void BndEvt__Zombie_Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BndEvt__Zombie_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Zombie_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.BndEvt__Zombie_CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__Zombie_CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2407bf0] BlueprintEvent       
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Server ReplicateMovementSettings
	void Server ReplicateMovementSettings();                                                                                 // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast SetMovementSettings
	void Multicast SetMovementSettings(EMovementType CPPMovementType, double SprintMaxSpeed, double SprintAcceleration);     // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast ClearSoundsOnDrown
	void Multicast ClearSoundsOnDrown();                                                                                     // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast AttachLootPoint
	void Multicast AttachLootPoint(AActor* LootPoint);                                                                       // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.Multicast CarHitEffects
	void Multicast CarHitEffects(FVector HitLocation, FVector ImpactNormal);                                                 // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ExecuteUbergraph_Zombie
	void ExecuteUbergraph_Zombie(int32_t EntryPoint);                                                                        // [0x2407bf0] Final|HasDefaults    
	// Function /Game/AI/Zombie/Zombie.Zombie_C.HitRegistered__DelegateSignature
	void HitRegistered__DelegateSignature(bool Door);                                                                        // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnChangeAIState__DelegateSignature
	void OnChangeAIState__DelegateSignature(AZombie_C* Zombie, TEnumAsByte<E_ZombieAIState> FromState, TEnumAsByte<E_ZombieAIState> ToState); // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnCarShotHear__DelegateSignature
	void OnCarShotHear__DelegateSignature(AActor* SenseSourceActor);                                                         // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnEndScreaming__DelegateSignature
	void OnEndScreaming__DelegateSignature();                                                                                // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnSetTargetActor__DelegateSignature
	void OnSetTargetActor__DelegateSignature(AActor* TargetActor);                                                           // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnReset__DelegateSignature
	void OnReset__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.MoveAfterDamage__DelegateSignature
	void MoveAfterDamage__DelegateSignature();                                                                               // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.ContinueMovement__DelegateSignature
	void ContinueMovement__DelegateSignature();                                                                              // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnEndAttack__DelegateSignature
	void OnEndAttack__DelegateSignature();                                                                                   // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Zombie/Zombie.Zombie_C.OnDeath__DelegateSignature
	void OnDeath__DelegateSignature();                                                                                       // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Enum /Game/AI/Zombie/NewAnimation/AngleMontage.AngleMontage
/// Size: 0x10
enum AngleMontage : uint8_t
{
	AngleMontage__NewEnumerator00                                                    = 0,
	AngleMontage__NewEnumerator11                                                    = 1,
	AngleMontage__NewEnumerator22                                                    = 2,
	AngleMontage__NewEnumerator33                                                    = 3,
	AngleMontage__NewEnumerator44                                                    = 4,
	AngleMontage__NewEnumerator55                                                    = 5,
	AngleMontage__NewEnumerator66                                                    = 6,
	AngleMontage__NewEnumerator77                                                    = 7,
	AngleMontage__NewEnumerator88                                                    = 8,
	AngleMontage__AngleMontage_MAX9                                                  = 9
};

/// Enum /Game/AI/Zombie/DismembermentMeshes/DismembermentState.DismembermentState
/// Size: 0x10
enum DismembermentState : uint8_t
{
	DismembermentState__NewEnumerator00                                              = 0,
	DismembermentState__NewEnumerator11                                              = 1,
	DismembermentState__NewEnumerator22                                              = 2,
	DismembermentState__NewEnumerator33                                              = 3,
	DismembermentState__NewEnumerator64                                              = 4,
	DismembermentState__NewEnumerator75                                              = 5,
	DismembermentState__NewEnumerator86                                              = 6,
	DismembermentState__NewEnumerator97                                              = 7,
	DismembermentState__NewEnumerator108                                             = 8,
	DismembermentState__DismembermentState_MAX9                                      = 9
};

/// Enum /Game/AI/Zombie/DismembermentMeshes/DismembermentPart.DismembermentPart
/// Size: 0x08
enum DismembermentPart : uint8_t
{
	DismembermentPart__NewEnumerator00                                               = 0,
	DismembermentPart__NewEnumerator11                                               = 1,
	DismembermentPart__NewEnumerator22                                               = 2,
	DismembermentPart__NewEnumerator33                                               = 3,
	DismembermentPart__NewEnumerator44                                               = 4,
	DismembermentPart__NewEnumerator55                                               = 5,
	DismembermentPart__NewEnumerator66                                               = 6,
	DismembermentPart__DismembermentPart_MAX7                                        = 7
};

/// Enum /Game/AI/Zombie/AI/E_ZombieAIState.E_ZombieAIState
/// Size: 0x03
enum E_ZombieAIState : uint8_t
{
	E_ZombieAIState__NewEnumerator00                                                 = 0,
	E_ZombieAIState__NewEnumerator11                                                 = 1,
	E_ZombieAIState__E_MAX2                                                          = 2
};

/// Enum /Game/AI/Zombie/E_AttackingArm.E_AttackingArm
/// Size: 0x04
enum E_AttackingArm : uint8_t
{
	E_AttackingArm__NewEnumerator00                                                  = 0,
	E_AttackingArm__NewEnumerator11                                                  = 1,
	E_AttackingArm__NewEnumerator22                                                  = 2,
	E_AttackingArm__E_MAX3                                                           = 3
};

/// Enum /Game/AI/Zombie/ZombieSpawner/DeerSpawner/E_DeerSpawnType.E_DeerSpawnType
/// Size: 0x04
enum E_DeerSpawnType : uint8_t
{
	E_DeerSpawnType__NewEnumerator00                                                 = 0,
	E_DeerSpawnType__NewEnumerator11                                                 = 1,
	E_DeerSpawnType__NewEnumerator22                                                 = 2,
	E_DeerSpawnType__E_MAX3                                                          = 3
};

/// Enum /Game/AI/Zombie/AIMovementComponent/E_AIMovementType.E_AIMovementType
/// Size: 0x07
enum E_AIMovementType : uint8_t
{
	E_AIMovementType__NewEnumerator40                                                = 0,
	E_AIMovementType__NewEnumerator51                                                = 1,
	E_AIMovementType__NewEnumerator12                                                = 2,
	E_AIMovementType__NewEnumerator23                                                = 3,
	E_AIMovementType__NewEnumerator34                                                = 4,
	E_AIMovementType__NewEnumerator05                                                = 5,
	E_AIMovementType__E_MAX6                                                         = 6
};

/// Enum /Game/AI/Zombie/AI/Tasks/E_PathMovementState.E_PathMovementState
/// Size: 0x04
enum E_PathMovementState : uint8_t
{
	E_PathMovementState__NewEnumerator20                                             = 0,
	E_PathMovementState__NewEnumerator01                                             = 1,
	E_PathMovementState__NewEnumerator12                                             = 2,
	E_PathMovementState__E_MAX3                                                      = 3
};

/// Enum /Game/AI/Zombie/E_ZombieAnimType.E_ZombieAnimType
/// Size: 0x07
enum E_ZombieAnimType : uint8_t
{
	E_ZombieAnimType__NewEnumerator30                                                = 0,
	E_ZombieAnimType__NewEnumerator01                                                = 1,
	E_ZombieAnimType__NewEnumerator12                                                = 2,
	E_ZombieAnimType__NewEnumerator23                                                = 3,
	E_ZombieAnimType__NewEnumerator44                                                = 4,
	E_ZombieAnimType__NewEnumerator55                                                = 5,
	E_ZombieAnimType__E_MAX6                                                         = 6
};

/// Enum /Game/AI/E_PerceptionType.E_PerceptionType
/// Size: 0x05
enum E_PerceptionType : uint8_t
{
	E_PerceptionType__NewEnumerator30                                                = 0,
	E_PerceptionType__NewEnumerator11                                                = 1,
	E_PerceptionType__NewEnumerator02                                                = 2,
	E_PerceptionType__NewEnumerator23                                                = 3,
	E_PerceptionType__E_MAX4                                                         = 4
};

