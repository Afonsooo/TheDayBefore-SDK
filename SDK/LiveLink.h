
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLink.

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLiveLinkRetargetAssetReference
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0040 (0x000000 - 0x000040)
struct FProviderPollResult
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            MachineName;                                                // 0x0020   (0x0010)  
	double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)  
	bool                                               bIsValidProvider;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLiveLinkRoleProjectSetting
{ 
	UClass*                                            Role;                                                       // 0x0000   (0x0008)  
	UClass*                                            SettingClass;                                               // 0x0008   (0x0008)  
	UClass*                                            FrameInterpolationProcessor;                                // 0x0010   (0x0008)  
	TArray<UClass*>                                    FramePreProcessors;                                         // 0x0018   (0x0010)  
};

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor : ULiveLinkFrameInterpolationProcessor
{ 
public:
	bool                                               bInterpolatePropertyValues;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0029   (0x0017)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0010 (0x000040 - 0x000050)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor : ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0008 (0x000160 - 0x000168)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject : ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0160   (0x0001)  MISSED
	bool                                               bAppendSubjectNameToBones;                                  // 0x0161   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0162   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULiveLinkComponent : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0x148b260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0x148b060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);                         // [0x148aef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                              // [0x14895d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class ULiveLinkDrivenComponent : public UActorComponent : UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00A0   (0x0008)  
	FName                                              ActorTransformBone;                                         // 0x00A8   (0x0008)  
	bool                                               bModifyActorTransform;                                      // 0x00B0   (0x0001)  
	bool                                               bSetRelativeLocation;                                       // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkMessageBusFinder : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory : ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings : ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0028 (0x000028 - 0x000050)
class ULiveLinkPreset : public UObject : UObject
{ 
public:
	TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0028   (0x0010)  
	TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	void BuildFromClient();                                                                                                  // [0x14882b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClientLatent
	void ApplyToClientLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo);                                     // [0x14880d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	bool ApplyToClient();                                                                                                    // [0x14880a0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	bool AddToClient(bool bRecreatePresets);                                                                                 // [0x1488000] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/LiveLink.LiveLinkUserSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class ULiveLinkUserSettings : public UObject : UObject
{ 
public:
	FDirectoryPath                                     PresetSaveDir;                                              // 0x0028   (0x0010)  
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULiveLinkSettings : public UObject : UObject
{ 
public:
	TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0028   (0x0010)  
	UClass*                                            FrameInterpolationProcessor;                                // 0x0038   (0x0008)  
	TWeakObjectPtr<ULiveLinkPreset*>                   DefaultLiveLinkPreset;                                      // 0x0040   (0x0030)  
	float                                              ClockOffsetCorrectionStep;                                  // 0x0070   (0x0004)  
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	double                                             MessageBusPingRequestFrequency;                             // 0x0078   (0x0008)  
	double                                             MessageBusHeartbeatFrequency;                               // 0x0080   (0x0008)  
	double                                             MessageBusHeartbeatTimeout;                                 // 0x0088   (0x0008)  
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x0090   (0x0008)  
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x0098   (0x0008)  
	FLinearColor                                       ValidColor;                                                 // 0x00A0   (0x0010)  
	FLinearColor                                       InvalidColor;                                               // 0x00B0   (0x0010)  
	char                                               TextSizeSource;                                             // 0x00C0   (0x0001)  
	char                                               TextSizeSubject;                                            // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x0090 (0x000030 - 0x0000C0)
class ULiveLinkTimecodeProvider : public UTimecodeProvider : UTimecodeProvider
{ 
public:
	FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0030   (0x0018)  
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0048   (0x0004)  
	bool                                               bOverrideFrameRate;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         OverrideFrameRate;                                          // 0x0050   (0x0008)  
	int32_t                                            BufferSize;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x64];                                      // 0x005C   (0x0064)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource : UTimeSynchronizationSource
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings : ULiveLinkSourceSettings
{ 
public:
	FName                                              SourceName;                                                 // 0x00A8   (0x0008)  
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0048 (0x000028 - 0x000070)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor : ULiveLinkFramePreProcessor
{ 
public:
	ELiveLinkAxis                                      FrontAxis;                                                  // 0x0028   (0x0001)  
	ELiveLinkAxis                                      RightAxis;                                                  // 0x0029   (0x0001)  
	ELiveLinkAxis                                      UpAxis;                                                     // 0x002A   (0x0001)  
	bool                                               bUseOffsetPosition;                                         // 0x002B   (0x0001)  
	bool                                               bUseOffsetOrientation;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FVector                                            OffsetPosition;                                             // 0x0030   (0x0018)  
	FRotator                                           OffsetOrientation;                                          // 0x0048   (0x0018)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0000 (0x000070 - 0x000070)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor : ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator : ULiveLinkFrameTranslator
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0028 (0x000160 - 0x000188)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject : ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0160   (0x0028)  MISSED
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04
enum ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp0                                   = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest1                                = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest2                                 = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX3 = 3
};

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x07
enum ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X0                                                                = 0,
	ELiveLinkAxis__Y1                                                                = 1,
	ELiveLinkAxis__Z2                                                                = 2,
	ELiveLinkAxis__XNeg3                                                             = 3,
	ELiveLinkAxis__YNeg4                                                             = 4,
	ELiveLinkAxis__ZNeg5                                                             = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX6                                                = 6
};

