
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkInterface.

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectPreset
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLiveLinkSubjectPreset
{ 
	FLiveLinkSubjectKey                                Key;                                                        // 0x0000   (0x0018)  
	UClass*                                            Role;                                                       // 0x0018   (0x0008)  
	ULiveLinkSubjectSettings*                          Settings;                                                   // 0x0020   (0x0008)  
	ULiveLinkVirtualSubject*                           VirtualSubject;                                             // 0x0028   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectKey
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLiveLinkSubjectKey
{ 
	FGuid                                              Source;                                                     // 0x0000   (0x0010)  
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectName
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLiveLinkSubjectName
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceHandle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLiveLinkSourceHandle
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseStaticData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkBaseStaticData
{ 
	TArray<FName>                                      PropertyNames;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
/// Size: 0x0020 (0x000010 - 0x000030)
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0010   (0x0010)  
	TArray<int32_t>                                    BoneParents;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseFrameData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FLiveLinkBaseFrameData
{ 
	FLiveLinkWorldTime                                 WorldTime;                                                  // 0x0000   (0x0010)  
	FLiveLinkMetaData                                  Metadata;                                                   // 0x0010   (0x0060)  
	TArray<float>                                      PropertyValues;                                             // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0080   (0x0020)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkMetaData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FLiveLinkMetaData
{ 
	TMap<FName, FString>                               StringMetaData;                                             // 0x0000   (0x0050)  
	FQualifiedFrameTime                                SceneTime;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkWorldTime
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkWorldTime
{ 
	double                                             Time;                                                       // 0x0000   (0x0008)  
	double                                             Offset;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkAnimationFrameData
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x00A0   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseBlueprintData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLiveLinkBaseBlueprintData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
/// Size: 0x00B0 (0x000008 - 0x0000B8)
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkBaseStaticData                            StaticData;                                                 // 0x0008   (0x0010)  
	FLiveLinkBaseFrameData                             FrameData;                                                  // 0x0018   (0x00A0)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformStaticData
/// Size: 0x0008 (0x000010 - 0x000018)
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData
{ 
	bool                                               bIsLocationSupported;                                       // 0x0010   (0x0001)  
	bool                                               bIsRotationSupported;                                       // 0x0011   (0x0001)  
	bool                                               bIsScaleSupported;                                          // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0013   (0x0005)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraStaticData
/// Size: 0x0010 (0x000018 - 0x000028)
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
{ 
	bool                                               bIsFieldOfViewSupported;                                    // 0x0018   (0x0001)  
	bool                                               bIsAspectRatioSupported;                                    // 0x0019   (0x0001)  
	bool                                               bIsFocalLengthSupported;                                    // 0x001A   (0x0001)  
	bool                                               bIsProjectionModeSupported;                                 // 0x001B   (0x0001)  
	float                                              FilmBackWidth;                                              // 0x001C   (0x0004)  
	float                                              FilmBackHeight;                                             // 0x0020   (0x0004)  
	bool                                               bIsApertureSupported;                                       // 0x0024   (0x0001)  
	bool                                               bIsFocusDistanceSupported;                                  // 0x0025   (0x0001)  
	bool                                               bIsDepthOfFieldSupported;                                   // 0x0026   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0027   (0x0001)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformFrameData
/// Size: 0x0060 (0x0000A0 - 0x000100)
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData
{ 
	FTransform                                         Transform;                                                  // 0x00A0   (0x0060)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraFrameData
/// Size: 0x0020 (0x000100 - 0x000120)
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData
{ 
	float                                              FieldOfView;                                                // 0x0100   (0x0004)  
	float                                              AspectRatio;                                                // 0x0104   (0x0004)  
	float                                              FocalLength;                                                // 0x0108   (0x0004)  
	float                                              Aperture;                                                   // 0x010C   (0x0004)  
	float                                              FocusDistance;                                              // 0x0110   (0x0004)  
	ELiveLinkCameraProjectionMode                      ProjectionMode;                                             // 0x0114   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0115   (0x000B)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
/// Size: 0x0148 (0x000008 - 0x000150)
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkCameraStaticData                          StaticData;                                                 // 0x0008   (0x0028)  
	FLiveLinkCameraFrameData                           FrameData;                                                  // 0x0030   (0x0120)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightStaticData
/// Size: 0x0010 (0x000018 - 0x000028)
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData
{ 
	bool                                               bIsTemperatureSupported;                                    // 0x0018   (0x0001)  
	bool                                               bIsIntensitySupported;                                      // 0x0019   (0x0001)  
	bool                                               bIsLightColorSupported;                                     // 0x001A   (0x0001)  
	bool                                               bIsInnerConeAngleSupported;                                 // 0x001B   (0x0001)  
	bool                                               bIsOuterConeAngleSupported;                                 // 0x001C   (0x0001)  
	bool                                               bIsAttenuationRadiusSupported;                              // 0x001D   (0x0001)  
	bool                                               bIsSourceLenghtSupported;                                   // 0x001E   (0x0001)  
	bool                                               bIsSourceRadiusSupported;                                   // 0x001F   (0x0001)  
	bool                                               bIsSoftSourceRadiusSupported;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightFrameData
/// Size: 0x0030 (0x000100 - 0x000130)
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData
{ 
	float                                              Temperature;                                                // 0x0100   (0x0004)  
	float                                              Intensity;                                                  // 0x0104   (0x0004)  
	FColor                                             LightColor;                                                 // 0x0108   (0x0004)  
	float                                              InnerConeAngle;                                             // 0x010C   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x0110   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0114   (0x0004)  
	float                                              SourceRadius;                                               // 0x0118   (0x0004)  
	float                                              SoftSourceRadius;                                           // 0x011C   (0x0004)  
	float                                              SourceLength;                                               // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0124   (0x000C)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightBlueprintData
/// Size: 0x0158 (0x000008 - 0x000160)
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkLightStaticData                           StaticData;                                                 // 0x0008   (0x0028)  
	FLiveLinkLightFrameData                            FrameData;                                                  // 0x0030   (0x0130)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourcePreset
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLiveLinkSourcePreset
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	ULiveLinkSourceSettings*                           Settings;                                                   // 0x0010   (0x0008)  
	FText                                              SourceType;                                                 // 0x0018   (0x0018)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkRefSkeleton
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLiveLinkRefSkeleton
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
	TArray<int32_t>                                    BoneParents;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkSubjectRepresentation
{ 
	FLiveLinkSubjectName                               Subject;                                                    // 0x0000   (0x0008)  
	UClass*                                            Role;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
/// Size: 0x0118 (0x000008 - 0x000120)
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkTransformStaticData                       StaticData;                                                 // 0x0008   (0x0018)  
	FLiveLinkTransformFrameData                        FrameData;                                                  // 0x0020   (0x0100)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLiveLinkCurveConversionSettings
{ 
	TMap<FString, FSoftObjectPath>                     CurveConversionAssetMap;                                    // 0x0000   (0x0050)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FLiveLinkSourceBufferManagementSettings
{ 
	bool                                               bValidEngineTimeEnabled;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ValidEngineTime;                                            // 0x0004   (0x0004)  
	float                                              EngineTimeOffset;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             EngineTimeClockOffset;                                      // 0x0010   (0x0008)  
	double                                             SmoothEngineTimeOffset;                                     // 0x0018   (0x0008)  
	bool                                               bGenerateSubFrame;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FFrameRate                                         DetectedFrameRate;                                          // 0x0024   (0x0008)  
	bool                                               bUseTimecodeSmoothLatest;                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FFrameRate                                         SourceTimecodeFrameRate;                                    // 0x0030   (0x0008)  
	bool                                               bValidTimecodeFrameEnabled;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            ValidTimecodeFrame;                                         // 0x003C   (0x0004)  
	float                                              TimecodeFrameOffset;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	double                                             TimecodeClockOffset;                                        // 0x0048   (0x0008)  
	int32_t                                            LatestOffset;                                               // 0x0050   (0x0004)  
	int32_t                                            MaxNumberOfFrameToBuffered;                                 // 0x0054   (0x0004)  
	bool                                               bKeepAtLeastOneFrame;                                       // 0x0058   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkSourceDebugInfo
{ 
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0000   (0x0008)  
	int32_t                                            SnapshotIndex;                                              // 0x0008   (0x0004)  
	int32_t                                            NumberOfBufferAtSnapshot;                                   // 0x000C   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLiveLinkTimeSynchronizationSettings
{ 
	FFrameRate                                         FrameRate;                                                  // 0x0000   (0x0008)  
	FFrameNumber                                       FrameOffset;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkInterpolationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLiveLinkInterpolationSettings
{ 
	bool                                               bUseInterpolation;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InterpolationOffset;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTime
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLiveLinkTime
{ 
	double                                             WorldTime;                                                  // 0x0000   (0x0008)  
	FQualifiedFrameTime                                SceneTime;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameRate
/// Size: 0x0000 (0x000008 - 0x000008)
struct FLiveLinkFrameRate : FFrameRate
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkTimeCode_Base_DEPRECATED
{ 
	int32_t                                            Seconds;                                                    // 0x0000   (0x0004)  
	int32_t                                            Frames;                                                     // 0x0004   (0x0004)  
	FLiveLinkFrameRate                                 FrameRate;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode
/// Size: 0x0000 (0x000010 - 0x000010)
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveElement
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLiveLinkCurveElement
{ 
	FName                                              CurveName;                                                  // 0x0000   (0x0008)  
	float                                              CurveValue;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FLiveLinkFrameData
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)  
	TArray<FLiveLinkCurveElement>                      CurveElements;                                              // 0x0010   (0x0010)  
	FLiveLinkWorldTime                                 WorldTime;                                                  // 0x0020   (0x0010)  
	FLiveLinkMetaData                                  Metadata;                                                   // 0x0030   (0x0060)  
};

/// Struct /Script/LiveLinkInterface.SubjectMetadata
/// Size: 0x0070 (0x000000 - 0x000070)
struct FSubjectMetadata
{ 
	TMap<FName, FString>                               StringMetaData;                                             // 0x0000   (0x0050)  
	FTimecode                                          SceneTimecode;                                              // 0x0050   (0x0014)  
	FFrameRate                                         SceneFramerate;                                             // 0x0064   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/LiveLinkInterface.CachedSubjectFrame
/// Size: 0x0160 (0x000000 - 0x000160)
struct FCachedSubjectFrame
{ 
	unsigned char                                      UnknownData00_1[0x160];                                     // 0x0000   (0x0160)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransform
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLiveLinkTransform
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LiveLinkInterface.SubjectFrameHandle
/// Size: 0x0010 (0x000008 - 0x000018)
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFrameInterpolationProcessor : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkVirtualSubject
/// Size: 0x0138 (0x000028 - 0x000160)
class ULiveLinkVirtualSubject : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UClass*                                            Role;                                                       // 0x0030   (0x0008)  
	TArray<FLiveLinkSubjectName>                       Subjects;                                                   // 0x0038   (0x0010)  
	TArray<ULiveLinkFrameTranslator*>                  FrameTranslators;                                           // 0x0048   (0x0010)  
	bool                                               bRebroadcastSubject;                                        // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x107];                                     // 0x0059   (0x0107)  MISSED
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkSourceFactory : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceSettings
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULiveLinkSourceSettings : public UObject : UObject
{ 
public:
	ELiveLinkSourceMode                                Mode;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FLiveLinkSourceBufferManagementSettings            BufferSettings;                                             // 0x0030   (0x0060)  
	FString                                            ConnectionString;                                           // 0x0090   (0x0010)  
	UClass*                                            Factory;                                                    // 0x00A0   (0x0008)  
};

/// Class /Script/LiveLinkInterface.LiveLinkFramePreProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFramePreProcessor : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFrameTranslator : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkController
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkController : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRole : public UObject : UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings : ULiveLinkSourceSettings
{ 
public:
	FLiveLinkCurveConversionSettings                   CurveConversionSettings;                                    // 0x00A8   (0x0050)  
};

/// Class /Script/LiveLinkInterface.LiveLinkSubjectSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class ULiveLinkSubjectSettings : public UObject : UObject
{ 
public:
	TArray<ULiveLinkFramePreProcessor*>                PreProcessors;                                              // 0x0028   (0x0010)  
	ULiveLinkFrameInterpolationProcessor*              InterpolationProcessor;                                     // 0x0038   (0x0008)  
	TArray<ULiveLinkFrameTranslator*>                  Translators;                                                // 0x0040   (0x0010)  
	UClass*                                            Role;                                                       // 0x0050   (0x0008)  
	FFrameRate                                         FrameRate;                                                  // 0x0058   (0x0008)  
	bool                                               bRebroadcastSubject;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/LiveLinkInterface.LiveLinkBasicRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBasicRole : public ULiveLinkRole : ULiveLinkRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkAnimationRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkAnimationRole : public ULiveLinkBasicRole : ULiveLinkBasicRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkTransformRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkTransformRole : public ULiveLinkBasicRole : ULiveLinkBasicRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkCameraRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkCameraRole : public ULiveLinkTransformRole : ULiveLinkTransformRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkLightRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkLightRole : public ULiveLinkTransformRole : ULiveLinkTransformRole
{ 
public:
};

/// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
/// Size: 0x03
enum ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective0                                      = 0,
	ELiveLinkCameraProjectionMode__Orthographic1                                     = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX2                = 2
};

/// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode
/// Size: 0x04
enum ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest0                                                     = 0,
	ELiveLinkSourceMode__EngineTime1                                                 = 1,
	ELiveLinkSourceMode__Timecode2                                                   = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX3                                    = 3
};

