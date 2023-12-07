
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayCameras.

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                              // 0x0008   (0x0001)  
	EOscillatorWaveform                                Waveform;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (0x000000 - 0x000024)
struct FROscillator
{ 
	FFOscillator                                       Pitch;                                                      // 0x0000   (0x000C)  
	FFOscillator                                       Yaw;                                                        // 0x000C   (0x000C)  
	FFOscillator                                       Roll;                                                       // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (0x000000 - 0x000024)
struct FVOscillator
{ 
	FFOscillator                                       X;                                                          // 0x0000   (0x000C)  
	FFOscillator                                       Y;                                                          // 0x000C   (0x000C)  
	FFOscillator                                       Z;                                                          // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.CameraAnimationParams
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCameraAnimationParams
{ 
	float                                              PlayRate;                                                   // 0x0000   (0x0004)  
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	ECameraAnimationEasingType                         EaseInType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              EaseInDuration;                                             // 0x000C   (0x0004)  
	ECameraAnimationEasingType                         EaseOutType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              EaseOutDuration;                                            // 0x0014   (0x0004)  
	bool                                               bLoop;                                                      // 0x0018   (0x0001)  
	bool                                               bRandomStartTime;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              DurationOverride;                                           // 0x001C   (0x0004)  
	ECameraAnimationPlaySpace                          PlaySpace;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FRotator                                           UserPlaySpaceRot;                                           // 0x0028   (0x0018)  
};

/// Struct /Script/GameplayCameras.CameraAnimationHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCameraAnimationHandle
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/GameplayCameras.ActiveCameraAnimationInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FActiveCameraAnimationInfo
{ 
	UCameraAnimationSequence*                          Sequence;                                                   // 0x0000   (0x0008)  
	FCameraAnimationParams                             Params;                                                     // 0x0008   (0x0040)  
	FCameraAnimationHandle                             Handle;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	UCameraAnimationSequencePlayer*                    Player;                                                     // 0x0050   (0x0008)  
	UCameraAnimationSequenceCameraStandIn*             CameraStandIn;                                              // 0x0058   (0x0008)  
	float                                              EaseInCurrentTime;                                          // 0x0060   (0x0004)  
	float                                              EaseOutCurrentTime;                                         // 0x0064   (0x0004)  
	bool                                               bIsEasingIn;                                                // 0x0068   (0x0001)  
	bool                                               bIsEasingOut;                                               // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPerlinNoiseShaker
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
struct FWaveOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	EInitialWaveOscillatorOffsetType                   InitialOffsetType;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GameplayCameras.LegacyCameraShake
/// Size: 0x0120 (0x0000F0 - 0x000210)
class ULegacyCameraShake : public UCameraShakeBase : UCameraShakeBase
{ 
public:
	float                                              OscillationDuration;                                        // 0x00E8   (0x0004)  
	float                                              OscillationBlendInTime;                                     // 0x00EC   (0x0004)  
	float                                              OscillationBlendOutTime;                                    // 0x00F0   (0x0004)  
	FROscillator                                       RotOscillation;                                             // 0x00F4   (0x0024)  
	FVOscillator                                       LocOscillation;                                             // 0x0118   (0x0024)  
	FFOscillator                                       FOVOscillation;                                             // 0x013C   (0x000C)  
	float                                              AnimPlayRate;                                               // 0x0148   (0x0004)  
	float                                              AnimScale;                                                  // 0x014C   (0x0004)  
	float                                              AnimBlendInTime;                                            // 0x0150   (0x0004)  
	float                                              AnimBlendOutTime;                                           // 0x0154   (0x0004)  
	float                                              RandomAnimSegmentDuration;                                  // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	UCameraAnimationSequence*                          AnimSequence;                                               // 0x0160   (0x0008)  
	bool                                               bRandomAnimSegment : 1;                                     // 0x0168:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0169   (0x0003)  MISSED
	float                                              OscillatorTimeRemaining;                                    // 0x016C   (0x0004)  
	unsigned char                                      UnknownData02_5[0x70];                                      // 0x0170   (0x0070)  MISSED
	USequenceCameraShakePattern*                       SequenceShakePattern;                                       // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x01E8   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	ULegacyCameraShake* StartLegacyCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0xbfabe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	ULegacyCameraShake* StartLegacyCameraShake(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0xbfa9d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveStopShake
	void ReceiveStopShake(bool bImmediately);                                                                                // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceivePlayShake
	void ReceivePlayShake(float Scale);                                                                                      // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	bool ReceiveIsFinished();                                                                                                // [0xbfa9a0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	void BlueprintUpdateCameraShake(float DeltaTime, float alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.LegacyCameraShakePattern
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakePattern : public UCameraShakePattern : UCameraShakePattern
{ 
public:
};

/// Class /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayCameras.CameraAnimationCameraModifier
/// Size: 0x0018 (0x000048 - 0x000060)
class UCameraAnimationCameraModifier : public UCameraModifier : UCameraModifier
{ 
public:
	TArray<FActiveCameraAnimationInfo>                 ActiveAnimations;                                           // 0x0048   (0x0010)  
	uint16_t                                           NextInstanceSerialNumber;                                   // 0x0058   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	void StopCameraAnimation(FCameraAnimationHandle& Handle, bool bImmediate);                                               // [0xbfb180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	void StopAllCameraAnimationsOf(UCameraAnimationSequence* Sequence, bool bImmediate);                                     // [0xbfaf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	void StopAllCameraAnimations(bool bImmediate);                                                                           // [0xbfadf0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	FCameraAnimationHandle PlayCameraAnimation(UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);           // [0xbfa0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	bool IsCameraAnimationActive(FCameraAnimationHandle& Handle);                                                            // [0xbf9e60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(APlayerController* PlayerController); // [0xbf9da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(UObject* WorldContextObject, int32_t ControllerId); // [0xbf9ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(UObject* WorldContextObject, int32_t PlayerIndex);      // [0xbf9ba0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0020 (0x000028 - 0x000048)
class UCompositeCameraShakePattern : public UCameraShakePattern : UCameraShakePattern
{ 
public:
	TArray<UCameraShakePattern*>                       ChildPatterns;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UDefaultCameraShakeBase : public UCameraShakeBase : UCameraShakeBase
{ 
public:
};

/// Class /Script/GameplayCameras.GameplayCamerasSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameplayCamerasSubsystem : public UWorldSubsystem : UWorldSubsystem
{ 
public:
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0010 (0x000028 - 0x000038)
class USimpleCameraShakePattern : public UCameraShakePattern : UCameraShakePattern
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	float                                              BlendInTime;                                                // 0x002C   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern : USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0038   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x003C   (0x0004)  
	FPerlinNoiseShaker                                 X;                                                          // 0x0040   (0x0008)  
	FPerlinNoiseShaker                                 Y;                                                          // 0x0048   (0x0008)  
	FPerlinNoiseShaker                                 Z;                                                          // 0x0050   (0x0008)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0058   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x005C   (0x0004)  
	FPerlinNoiseShaker                                 Pitch;                                                      // 0x0060   (0x0008)  
	FPerlinNoiseShaker                                 Yaw;                                                        // 0x0068   (0x0008)  
	FPerlinNoiseShaker                                 Roll;                                                       // 0x0070   (0x0008)  
	FPerlinNoiseShaker                                 FOV;                                                        // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UTestCameraShake : public UCameraShakeBase : UCameraShakeBase
{ 
public:
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0030 (0x000038 - 0x000068)
class UConstantCameraShakePattern : public USimpleCameraShakePattern : USimpleCameraShakePattern
{ 
public:
	FVector                                            LocationOffset;                                             // 0x0038   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0050   (0x0018)  
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern : USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0038   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x003C   (0x0004)  
	FWaveOscillator                                    X;                                                          // 0x0040   (0x000C)  
	FWaveOscillator                                    Y;                                                          // 0x004C   (0x000C)  
	FWaveOscillator                                    Z;                                                          // 0x0058   (0x000C)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0064   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x0068   (0x0004)  
	FWaveOscillator                                    Pitch;                                                      // 0x006C   (0x000C)  
	FWaveOscillator                                    Yaw;                                                        // 0x0078   (0x000C)  
	FWaveOscillator                                    Roll;                                                       // 0x0084   (0x000C)  
	FWaveOscillator                                    FOV;                                                        // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x009C   (0x003C)  MISSED
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x03
enum EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave0                                                   = 0,
	EOscillatorWaveform__PerlinNoise1                                                = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX2                                    = 2
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x03
enum EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom0                                                                = 0,
	EOO_OffsetZero1                                                                  = 1,
	EOO_MAX2                                                                         = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
/// Size: 0x04
enum ECameraAnimationPlaySpace : uint8_t
{
	ECameraAnimationPlaySpace__CameraLocal0                                          = 0,
	ECameraAnimationPlaySpace__World1                                                = 1,
	ECameraAnimationPlaySpace__UserDefined2                                          = 2,
	ECameraAnimationPlaySpace__ECameraAnimationPlaySpace_MAX3                        = 3
};

/// Enum /Script/GameplayCameras.ECameraAnimationEasingType
/// Size: 0x09
enum ECameraAnimationEasingType : uint8_t
{
	ECameraAnimationEasingType__Linear0                                              = 0,
	ECameraAnimationEasingType__Sinusoidal1                                          = 1,
	ECameraAnimationEasingType__Quadratic2                                           = 2,
	ECameraAnimationEasingType__Cubic3                                               = 3,
	ECameraAnimationEasingType__Quartic4                                             = 4,
	ECameraAnimationEasingType__Quintic5                                             = 5,
	ECameraAnimationEasingType__Exponential6                                         = 6,
	ECameraAnimationEasingType__Circular7                                            = 7,
	ECameraAnimationEasingType__ECameraAnimationEasingType_MAX8                      = 8
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x03
enum EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random0                                        = 0,
	EInitialWaveOscillatorOffsetType__Zero1                                          = 1,
	EInitialWaveOscillatorOffsetType__EInitialWaveOscillatorOffsetType_MAX2          = 2
};

