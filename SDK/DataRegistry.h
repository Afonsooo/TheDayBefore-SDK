
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DataRegistry.

/// Struct /Script/DataRegistry.DataRegistryLookup
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDataRegistryLookup
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistryId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDataRegistryId
{ 
	FDataRegistryType                                  RegistryType;                                               // 0x0000   (0x0008)  
	FName                                              ItemName;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/DataRegistry.DataRegistryType
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDataRegistryType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/DataRegistry.DataRegistrySource_DataTableRules
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDataRegistrySource_DataTableRules
{ 
	bool                                               bPrecacheTable;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              CachedTableKeepSeconds;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/DataRegistry.DataRegistryIdFormat
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDataRegistryIdFormat
{ 
	FGameplayTag                                       BaseGameplayTag;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/DataRegistry.DataRegistryCachePolicy
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDataRegistryCachePolicy
{ 
	bool                                               bCacheIsAlwaysVolatile;                                     // 0x0000   (0x0001)  
	bool                                               bUseCurveTableCacheVersion;                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinNumberKept;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxNumberKept;                                              // 0x0008   (0x0004)  
	float                                              ForceKeepSeconds;                                           // 0x000C   (0x0004)  
	float                                              ForceReleaseSeconds;                                        // 0x0010   (0x0004)  
};

/// Struct /Script/DataRegistry.DataRegistrySourceItemId
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDataRegistrySourceItemId
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/DataRegistry.DataRegistrySettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UDataRegistrySettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	TArray<FDirectoryPath>                             DirectoriesToScan;                                          // 0x0038   (0x0010)  
	bool                                               bInitializeAllLoadedRegistries;                             // 0x0048   (0x0001)  
	bool                                               bIgnoreMissingCookedAssetRegistryData;                      // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/DataRegistry.DataRegistry
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UDataRegistry : public UObject : UObject
{ 
public:
	FName                                              RegistryType;                                               // 0x0028   (0x0008)  
	FDataRegistryIdFormat                              IdFormat;                                                   // 0x0030   (0x0008)  
	UScriptStruct*                                     ItemStruct;                                                 // 0x0038   (0x0008)  
	TArray<UDataRegistrySource*>                       DataSources;                                                // 0x0040   (0x0010)  
	TArray<UDataRegistrySource*>                       RuntimeSources;                                             // 0x0050   (0x0010)  
	float                                              TimerUpdateFrequency;                                       // 0x0060   (0x0004)  
	FDataRegistryCachePolicy                           DefaultCachePolicy;                                         // 0x0064   (0x0014)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0078   (0x0048)  MISSED
};

/// Class /Script/DataRegistry.DataRegistrySource
/// Size: 0x0010 (0x000028 - 0x000038)
class UDataRegistrySource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UDataRegistrySource*                               ParentSource;                                               // 0x0030   (0x0008)  
};

/// Class /Script/DataRegistry.MetaDataRegistrySource
/// Size: 0x00D0 (0x000038 - 0x000108)
class UMetaDataRegistrySource : public UDataRegistrySource : UDataRegistrySource
{ 
public:
	EMetaDataRegistrySourceAssetUsage                  AssetUsage;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FAssetManagerSearchRules                           SearchRules;                                                // 0x0040   (0x0050)  
	TMap<FName, UDataRegistrySource*>                  RuntimeChildren;                                            // 0x0090   (0x0050)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00E0   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.DataRegistrySource_CurveTable
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UDataRegistrySource_CurveTable : public UDataRegistrySource : UDataRegistrySource
{ 
public:
	TWeakObjectPtr<UCurveTable*>                       SourceTable;                                                // 0x0038   (0x0030)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0068   (0x0008)  
	UCurveTable*                                       CachedTable;                                                // 0x0070   (0x0008)  
	UCurveTable*                                       PreloadTable;                                               // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0080   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_CurveTable
/// Size: 0x0010 (0x000108 - 0x000118)
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource : UMetaDataRegistrySource
{ 
public:
	UClass*                                            CreatedSource;                                              // 0x0108   (0x0008)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0110   (0x0008)  
};

/// Class /Script/DataRegistry.DataRegistrySource_DataTable
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UDataRegistrySource_DataTable : public UDataRegistrySource : UDataRegistrySource
{ 
public:
	TWeakObjectPtr<UDataTable*>                        SourceTable;                                                // 0x0038   (0x0030)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0068   (0x0008)  
	UDataTable*                                        CachedTable;                                                // 0x0070   (0x0008)  
	UDataTable*                                        PreloadTable;                                               // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0080   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_DataTable
/// Size: 0x0010 (0x000108 - 0x000118)
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource : UMetaDataRegistrySource
{ 
public:
	UClass*                                            CreatedSource;                                              // 0x0108   (0x0008)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0110   (0x0008)  
};

/// Class /Script/DataRegistry.DataRegistrySubsystem
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UDataRegistrySubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0030   (0x0098)  MISSED
};

/// Enum /Script/DataRegistry.EDataRegistryAcquireStatus
/// Size: 0x08
enum EDataRegistryAcquireStatus : uint8_t
{
	EDataRegistryAcquireStatus__NotStarted0                                          = 0,
	EDataRegistryAcquireStatus__WaitingForInitialAcquire1                            = 1,
	EDataRegistryAcquireStatus__InitialAcquireFinished2                              = 2,
	EDataRegistryAcquireStatus__WaitingForResources3                                 = 3,
	EDataRegistryAcquireStatus__AcquireFinished4                                     = 4,
	EDataRegistryAcquireStatus__AcquireError5                                        = 5,
	EDataRegistryAcquireStatus__DoesNotExist6                                        = 6,
	EDataRegistryAcquireStatus__EDataRegistryAcquireStatus_MAX7                      = 7
};

/// Enum /Script/DataRegistry.EMetaDataRegistrySourceAssetUsage
/// Size: 0x05
enum EMetaDataRegistrySourceAssetUsage : uint8_t
{
	EMetaDataRegistrySourceAssetUsage__NoAssets0                                     = 0,
	EMetaDataRegistrySourceAssetUsage__SearchAssets1                                 = 1,
	EMetaDataRegistrySourceAssetUsage__RegisterAssets2                               = 2,
	EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets3                      = 3,
	EMetaDataRegistrySourceAssetUsage__EMetaDataRegistrySourceAssetUsage_MAX4        = 4
};

/// Enum /Script/DataRegistry.EDataRegistrySubsystemGetItemResult
/// Size: 0x03
enum EDataRegistrySubsystemGetItemResult : uint8_t
{
	EDataRegistrySubsystemGetItemResult__Found0                                      = 0,
	EDataRegistrySubsystemGetItemResult__NotFound1                                   = 1,
	EDataRegistrySubsystemGetItemResult__EDataRegistrySubsystemGetItemResult_MAX2    = 2
};

/// Enum /Script/DataRegistry.EDataRegistryAvailability
/// Size: 0x07
enum EDataRegistryAvailability : uint8_t
{
	EDataRegistryAvailability__DoesNotExist0                                         = 0,
	EDataRegistryAvailability__Unknown1                                              = 1,
	EDataRegistryAvailability__Remote2                                               = 2,
	EDataRegistryAvailability__OnDisk3                                               = 3,
	EDataRegistryAvailability__LocalAsset4                                           = 4,
	EDataRegistryAvailability__PreCached5                                            = 5,
	EDataRegistryAvailability__EDataRegistryAvailability_MAX6                        = 6
};

