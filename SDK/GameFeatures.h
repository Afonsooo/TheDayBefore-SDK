
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameFeatures.

/// Struct /Script/GameFeatures.GameFeatureComponentEntry
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGameFeatureComponentEntry
{ 
	TWeakObjectPtr<UClass*>                            ActorClass;                                                 // 0x0000   (0x0030)  
	TWeakObjectPtr<UClass*>                            ComponentClass;                                             // 0x0030   (0x0030)  
	bool                                               bClientComponent : 1;                                       // 0x0060:0 (0x0001)  
	bool                                               bServerComponent : 1;                                       // 0x0060:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/GameFeatures.DataRegistrySourceToAdd
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDataRegistrySourceToAdd
{ 
	FName                                              RegistryToAddTo;                                            // 0x0000   (0x0008)  
	int32_t                                            AssetPriority;                                              // 0x0008   (0x0004)  
	bool                                               bClientSource : 1;                                          // 0x000C:0 (0x0001)  
	bool                                               bServerSource : 1;                                          // 0x000C:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x000D   (0x0003)  MISSED
	TWeakObjectPtr<UDataTable*>                        DataTableToAdd;                                             // 0x0010   (0x0030)  
	TWeakObjectPtr<UCurveTable*>                       CurveTableToAdd;                                            // 0x0040   (0x0030)  
};

/// Struct /Script/GameFeatures.GameFeaturePluginStateMachineProperties
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FGameFeaturePluginStateMachineProperties
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
	UGameFeatureData*                                  GameFeatureData;                                            // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0090   (0x0038)  MISSED
};

/// Struct /Script/GameFeatures.GameFeaturePluginIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameFeaturePluginIdentifier
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameFeatures.InstallBundlePluginProtocolMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInstallBundlePluginProtocolMetaData
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction : public UObject : UObject
{ 
public:
};

/// Class /Script/GameFeatures.GameFeatureStateChangeObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureStateChangeObserver : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GameFeatures.GameFeatureAction_AddCheats
/// Size: 0x0038 (0x000028 - 0x000060)
class UGameFeatureAction_AddCheats : public UGameFeatureAction : UGameFeatureAction
{ 
public:
	TArray<TWeakObjectPtr>                             CheatManagers;                                              // 0x0028   (0x0010)  
	bool                                               bLoadCheatManagersAsync;                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0039   (0x000F)  MISSED
	TArray<TWeakObjectPtr>                             SpawnedCheatManagers;                                       // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_AddComponents
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AddComponents : public UGameFeatureAction : UGameFeatureAction
{ 
public:
	TArray<FGameFeatureComponentEntry>                 ComponentList;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_AddWPContent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddWPContent : public UGameFeatureAction : UGameFeatureAction
{ 
public:
	UContentBundleDescriptor*                          ContentBundleDescriptor;                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistry
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistry : public UGameFeatureAction : UGameFeatureAction
{ 
public:
	TArray<TWeakObjectPtr>                             RegistriesToAdd;                                            // 0x0028   (0x0010)  
	bool                                               bPreloadInEditor;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistrySource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction : UGameFeatureAction
{ 
public:
	TArray<FDataRegistrySourceToAdd>                   SourcesToAdd;                                               // 0x0028   (0x0010)  
	bool                                               bPreloadInEditor;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/GameFeatures.GameFeatureData
/// Size: 0x0020 (0x000030 - 0x000050)
class UGameFeatureData : public UPrimaryDataAsset : UPrimaryDataAsset
{ 
public:
	TArray<UGameFeatureAction*>                        Actions;                                                    // 0x0030   (0x0010)  
	TArray<FPrimaryAssetTypeInfo>                      PrimaryAssetTypesToScan;                                    // 0x0040   (0x0010)  
};

/// Class /Script/GameFeatures.GameFeaturePluginStateMachine
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UGameFeaturePluginStateMachine : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FGameFeaturePluginStateMachineProperties           StateProperties;                                            // 0x0030   (0x00C8)  
	unsigned char                                      UnknownData01_6[0xE8];                                      // 0x00F8   (0x00E8)  MISSED
};

/// Class /Script/GameFeatures.GameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeaturesProjectPolicies : public UObject : UObject
{ 
public:
};

/// Class /Script/GameFeatures.DefaultGameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies : UGameFeaturesProjectPolicies
{ 
public:
};

/// Class /Script/GameFeatures.GameFeaturesSubsystem
/// Size: 0x0120 (0x000030 - 0x000150)
class UGameFeaturesSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	TMap<FGameFeaturePluginIdentifier, UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;            // 0x0030   (0x0050)  
	TArray<UGameFeaturePluginStateMachine*>            TerminalGameFeaturePluginStateMachines;                     // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x0090   (0x00A0)  MISSED
	TArray<UObject*>                                   Observers;                                                  // 0x0130   (0x0010)  
	UGameFeaturesProjectPolicies*                      GameSpecificPolicies;                                       // 0x0140   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/GameFeatures.GameFeaturesSubsystemSettings
/// Size: 0x0060 (0x000038 - 0x000098)
class UGameFeaturesSubsystemSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	FSoftClassPath                                     GameFeaturesManagerClassName;                               // 0x0038   (0x0020)  
	TArray<FString>                                    DisabledPlugins;                                            // 0x0058   (0x0010)  
	TArray<FString>                                    AdditionalPluginMetadataKeys;                               // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED
};

/// Enum /Script/GameFeatures.EGameFeatureTargetState
/// Size: 0x06
enum EGameFeatureTargetState : uint8_t
{
	EGameFeatureTargetState__Installed0                                              = 0,
	EGameFeatureTargetState__Registered1                                             = 1,
	EGameFeatureTargetState__Loaded2                                                 = 2,
	EGameFeatureTargetState__Active3                                                 = 3,
	EGameFeatureTargetState__Count4                                                  = 4,
	EGameFeatureTargetState__EGameFeatureTargetState_MAX5                            = 5
};

