
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MetasoundEngine.

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDefaultMetaSoundAssetAutoUpdateSettings
{ 
	FSoftObjectPath                                    Metasound;                                                  // 0x0000   (0x0020)  
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMetaSoundAssetDirectory
{ 
	FDirectoryPath                                     Directory;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMetaSoundAsyncAssetDependencies
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	UObject*                                           Metasound;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0048 (0x000028 - 0x000070)
class UMetasoundGeneratorHandle : public UObject : UObject
{ 
public:
	UAudioComponent*                                   AudioComponent;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0030   (0x0008)  MISSED
	UMetaSoundSource*                                  CachedMetasoundSource;                                      // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0040   (0x0030)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(UAudioComponent* OnComponent);                                 // [0x202cc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	bool ApplyParameterPack(UMetasoundParameterPack* Pack);                                                                  // [0x202c950] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0048 (0x000038 - 0x000080)
class UMetaSoundSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               bAutoUpdateEnabled;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FMetasoundFrontendClassName>                AutoUpdateDenylist;                                         // 0x0040   (0x0010)  
	TArray<FDefaultMetaSoundAssetAutoUpdateSettings>   AutoUpdateAssetDenylist;                                    // 0x0050   (0x0010)  
	bool                                               bAutoUpdateLogWarningOnDroppedConnection;                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<FDirectoryPath>                             DirectoriesToRegister;                                      // 0x0068   (0x0010)  
	int32_t                                            DenyListCacheChangeID;                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetasoundEditorGraphBase : public UEdGraph : UEdGraph
{ 
public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0330 (0x000028 - 0x000358)
class UMetaSoundPatch : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0028   (0x0068)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0090   (0x01C8)  
	TSet<FString>                                      ReferencedAssetClassKeys;                                   // 0x0258   (0x0050)  
	TSet<UObject*>                                     ReferencedAssetClassObjects;                                // 0x02A8   (0x0050)  
	TSet<FSoftObjectPath>                              ReferenceAssetClassCache;                                   // 0x02F8   (0x0050)  
	FGuid                                              AssetClassID;                                               // 0x0348   (0x0010)  
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UMetaSoundAssetSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FMetaSoundAsyncAssetDependencies>           LoadingDependencies;                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x198];                                     // 0x0048   (0x0198)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                 // [0x202cff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                   // [0x202ce30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x03A0 (0x0004A0 - 0x000840)
class UMetaSoundSource : public USoundWaveProcedural : USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x04A0   (0x0068)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0508   (0x01C8)  
	TSet<FString>                                      ReferencedAssetClassKeys;                                   // 0x06D0   (0x0050)  
	TSet<UObject*>                                     ReferencedAssetClassObjects;                                // 0x0720   (0x0050)  
	TSet<FSoftObjectPath>                              ReferenceAssetClassCache;                                   // 0x0770   (0x0050)  
	EMetasoundSourceAudioFormat                        OutputFormat;                                               // 0x07C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x07C1   (0x0003)  MISSED
	FGuid                                              AssetClassID;                                               // 0x07C4   (0x0010)  
	unsigned char                                      UnknownData02_6[0x6C];                                      // 0x07D4   (0x006C)  MISSED
};

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x04
enum EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error0                                                   = 0,
	EMetaSoundMessageLevel__Warning1                                                 = 1,
	EMetaSoundMessageLevel__Info2                                                    = 2,
	EMetaSoundMessageLevel__EMetaSoundMessageLevel_MAX3                              = 3
};

/// Enum /Script/MetasoundEngine.EMetasoundSourceAudioFormat
/// Size: 0x07
enum EMetasoundSourceAudioFormat : uint8_t
{
	EMetasoundSourceAudioFormat__Mono0                                               = 0,
	EMetasoundSourceAudioFormat__Stereo1                                             = 1,
	EMetasoundSourceAudioFormat__Quad2                                               = 2,
	EMetasoundSourceAudioFormat__FiveDotOne3                                         = 3,
	EMetasoundSourceAudioFormat__SevenDotOne4                                        = 4,
	EMetasoundSourceAudioFormat__COUNT5                                              = 5,
	EMetasoundSourceAudioFormat__EMetasoundSourceAudioFormat_MAX6                    = 6
};

