
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Water.

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x02D0 (0x000000 - 0x0002D0)
struct FSphericalPontoon
{ 
	FName                                              CenterSocket;                                               // 0x0000   (0x0008)  
	FVector                                            RelativeLocation;                                           // 0x0008   (0x0018)  
	float                                              Radius;                                                     // 0x0020   (0x0004)  
	bool                                               bFXEnabled;                                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            LocalForce;                                                 // 0x0028   (0x0018)  
	FVector                                            CenterLocation;                                             // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FQuat                                              SocketRotation;                                             // 0x0060   (0x0020)  
	FVector                                            Offset;                                                     // 0x0080   (0x0018)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0098   (0x0004)  MISSED
	float                                              WaterHeight;                                                // 0x009C   (0x0004)  
	float                                              WaterDepth;                                                 // 0x00A0   (0x0004)  
	float                                              ImmersionDepth;                                             // 0x00A4   (0x0004)  
	FVector                                            WaterPlaneLocation;                                         // 0x00A8   (0x0018)  
	FVector                                            WaterPlaneNormal;                                           // 0x00C0   (0x0018)  
	FVector                                            WaterSurfacePosition;                                       // 0x00D8   (0x0018)  
	FVector                                            WaterVelocity;                                              // 0x00F0   (0x0018)  
	int32_t                                            WaterBodyIndex;                                             // 0x0108   (0x0004)  
	bool                                               bIsInWater;                                                 // 0x010C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1AB];                                     // 0x010D   (0x01AB)  MISSED
	UWaterBodyComponent*                               CurrentWaterBodyComponent;                                  // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x02C0   (0x0010)  MISSED
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FBuoyancyData
{ 
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x0000   (0x0010)  
	bool                                               bCenterPontoonsOnCOM;                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              BuoyancyCoefficient;                                        // 0x0014   (0x0004)  
	float                                              BuoyancyDamp;                                               // 0x0018   (0x0004)  
	float                                              BuoyancyDamp2;                                              // 0x001C   (0x0004)  
	float                                              BuoyancyRampMinVelocity;                                    // 0x0020   (0x0004)  
	float                                              BuoyancyRampMaxVelocity;                                    // 0x0024   (0x0004)  
	float                                              BuoyancyRampMax;                                            // 0x0028   (0x0004)  
	float                                              MaxBuoyantForce;                                            // 0x002C   (0x0004)  
	bool                                               bApplyDragForcesInWater;                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              DragCoefficient;                                            // 0x0034   (0x0004)  
	float                                              DragCoefficient2;                                           // 0x0038   (0x0004)  
	float                                              AngularDragCoefficient;                                     // 0x003C   (0x0004)  
	float                                              MaxDragSpeed;                                               // 0x0040   (0x0004)  
	bool                                               bApplyRiverForces;                                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	int32_t                                            RiverPontoonIndex;                                          // 0x0048   (0x0004)  
	float                                              WaterShorePushFactor;                                       // 0x004C   (0x0004)  
	float                                              RiverTraversalPathWidth;                                    // 0x0050   (0x0004)  
	float                                              MaxShorePushForce;                                          // 0x0054   (0x0004)  
	float                                              WaterVelocityStrength;                                      // 0x0058   (0x0004)  
	float                                              MaxWaterForce;                                              // 0x005C   (0x0004)  
	bool                                               bAlwaysAllowLateralPush;                                    // 0x0060   (0x0001)  
	bool                                               bAllowCurrentWhenMovingFastUpstream;                        // 0x0061   (0x0001)  
	bool                                               bApplyDownstreamAngularRotation;                            // 0x0062   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	FVector                                            DownstreamAxisOfRotation;                                   // 0x0068   (0x0018)  
	float                                              DownstreamRotationStrength;                                 // 0x0080   (0x0004)  
	float                                              DownstreamRotationStiffness;                                // 0x0084   (0x0004)  
	float                                              DownstreamRotationAngularDamping;                           // 0x0088   (0x0004)  
	float                                              DownstreamMaxAcceleration;                                  // 0x008C   (0x0004)  
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWaterBodyWeightmapSettings
{ 
	float                                              FalloffWidth;                                               // 0x0000   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x0004   (0x0004)  
	UTexture2D*                                        ModulationTexture;                                          // 0x0008   (0x0008)  
	float                                              TextureTiling;                                              // 0x0010   (0x0004)  
	float                                              TextureInfluence;                                           // 0x0014   (0x0004)  
	float                                              Midpoint;                                                   // 0x0018   (0x0004)  
	float                                              FinalOpacity;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWaterCurveSettings
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UCurveFloat*                                       ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGerstnerWave
{ 
	float                                              WaveLength;                                                 // 0x0000   (0x0004)  
	float                                              Amplitude;                                                  // 0x0004   (0x0004)  
	float                                              Steepness;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x0010   (0x0018)  
	FVector2D                                          WaveVector;                                                 // 0x0028   (0x0010)  
	float                                              WaveSpeed;                                                  // 0x0038   (0x0004)  
	float                                              WKA;                                                        // 0x003C   (0x0004)  
	float                                              Q;                                                          // 0x0040   (0x0004)  
	float                                              PhaseOffset;                                                // 0x0044   (0x0004)  
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (0x000000 - 0x000014)
struct FGerstnerWaveOctave
{ 
	int32_t                                            NumWaves;                                                   // 0x0000   (0x0004)  
	float                                              AmplitudeScale;                                             // 0x0004   (0x0004)  
	float                                              MainDirection;                                              // 0x0008   (0x0004)  
	float                                              SpreadAngle;                                                // 0x000C   (0x0004)  
	bool                                               bUniformSpread;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0700 (0x000000 - 0x000700)
struct FUnderwaterPostProcessSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Priority;                                                   // 0x0004   (0x0004)  
	float                                              BlendRadius;                                                // 0x0008   (0x0004)  
	float                                              BlendWeight;                                                // 0x000C   (0x0004)  
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0010   (0x06E0)  
	UMaterialInterface*                                UnderwaterPostProcessMaterial;                              // 0x06F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06F8   (0x0008)  MISSED
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FWaterBodyHeightmapSettings
{ 
	EWaterBrushBlendType                               BlendMode;                                                  // 0x0000   (0x0001)  
	bool                                               bInvertShape;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FWaterFalloffSettings                              FalloffSettings;                                            // 0x0004   (0x0014)  
	FWaterBrushEffects                                 Effects;                                                    // 0x0018   (0x0060)  
	int32_t                                            Priority;                                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (0x000000 - 0x000060)
struct FWaterBrushEffects
{ 
	FWaterBrushEffectBlurring                          Blurring;                                                   // 0x0000   (0x0008)  
	FWaterBrushEffectCurlNoise                         CurlNoise;                                                  // 0x0008   (0x0010)  
	FWaterBrushEffectDisplacement                      Displacement;                                               // 0x0018   (0x0028)  
	FWaterBrushEffectSmoothBlending                    SmoothBlending;                                             // 0x0040   (0x0008)  
	FWaterBrushEffectTerracing                         Terracing;                                                  // 0x0048   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWaterBrushEffectTerracing
{ 
	float                                              TerraceAlpha;                                               // 0x0000   (0x0004)  
	float                                              TerraceSpacing;                                             // 0x0004   (0x0004)  
	float                                              TerraceSmoothness;                                          // 0x0008   (0x0004)  
	float                                              MaskLength;                                                 // 0x000C   (0x0004)  
	float                                              MaskStartOffset;                                            // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWaterBrushEffectSmoothBlending
{ 
	float                                              InnerSmoothDistance;                                        // 0x0000   (0x0004)  
	float                                              OuterSmoothDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
struct FWaterBrushEffectDisplacement
{ 
	float                                              DisplacementHeight;                                         // 0x0000   (0x0004)  
	float                                              DisplacementTiling;                                         // 0x0004   (0x0004)  
	UTexture2D*                                        Texture;                                                    // 0x0008   (0x0008)  
	float                                              Midpoint;                                                   // 0x0010   (0x0004)  
	FLinearColor                                       Channel;                                                    // 0x0014   (0x0010)  
	float                                              WeightmapInfluence;                                         // 0x0024   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWaterBrushEffectCurlNoise
{ 
	float                                              Curl1Amount;                                                // 0x0000   (0x0004)  
	float                                              Curl2Amount;                                                // 0x0004   (0x0004)  
	float                                              Curl1Tiling;                                                // 0x0008   (0x0004)  
	float                                              Curl2Tiling;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWaterBrushEffectBlurring
{ 
	bool                                               bBlurShape;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Radius;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWaterFalloffSettings
{ 
	EWaterBrushFalloffMode                             FalloffMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FalloffAngle;                                               // 0x0004   (0x0004)  
	float                                              FalloffWidth;                                               // 0x0008   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x000C   (0x0004)  
	float                                              ZOffset;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWaterBrushEffectCurves
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UCurveFloat*                                       ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWaterSplineCurveDefaults
{ 
	float                                              DefaultDepth;                                               // 0x0000   (0x0004)  
	float                                              DefaultWidth;                                               // 0x0004   (0x0004)  
	float                                              DefaultVelocity;                                            // 0x0008   (0x0004)  
	float                                              DefaultAudioIntensity;                                      // 0x000C   (0x0004)  
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UBuoyancyComponent : public UActorComponent : UActorComponent
{ 
public:
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           OnEnteredWaterDelegate;                                     // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           OnExitedWaterDelegate;                                      // 0x00C0   (0x0010)  
	FBuoyancyData                                      BuoyancyData;                                               // 0x00D0   (0x0090)  
	TArray<UWaterBodyComponent*>                       CurrentWaterBodyComponents;                                 // 0x0160   (0x0010)  
	UPrimitiveComponent*                               SimulatingComponent;                                        // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0178   (0x0090)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyComponent.OnPontoonExitedWater
	void OnPontoonExitedWater(FSphericalPontoon& Pontoon);                                                                   // [0xd0be80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.OnPontoonEnteredWater
	void OnPontoonEnteredWater(FSphericalPontoon& Pontoon);                                                                  // [0xd0bdb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.IsOverlappingWaterBody
	bool IsOverlappingWaterBody();                                                                                           // [0xd0bcd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.IsInWaterBody
	bool IsInWaterBody();                                                                                                    // [0xd0bca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, FVector& OutWaterVelocity); // [0xd0aee0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.GetCurrentWaterBodyComponents
	TArray<UWaterBodyComponent*> GetCurrentWaterBodyComponents();                                                            // [0xd0acb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.BuoyancyManager
/// Size: 0x00C8 (0x000290 - 0x000358)
class ABuoyancyManager : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0290   (0x0050)  MISSED
	TArray<UBuoyancyComponent*>                        BuoyancyComponents;                                         // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x02F0   (0x0068)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager
	bool GetBuoyancyComponentManager(UObject* WorldContextObject, ABuoyancyManager*& Manager);                               // [0xd0aa60] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest : UEnvQueryTest
{ 
public:
	bool                                               bIncludeWaves;                                              // 0x01F8   (0x0001)  
	bool                                               bSimpleWaves;                                               // 0x01F9   (0x0001)  
	bool                                               bIgnoreExclusionVolumes;                                    // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x01FB   (0x0005)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UGerstnerWaterWaveGeneratorBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0038 (0x000028 - 0x000060)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase : UGerstnerWaterWaveGeneratorBase
{ 
public:
	int32_t                                            NumWaves;                                                   // 0x0028   (0x0004)  
	int32_t                                            Seed;                                                       // 0x002C   (0x0004)  
	float                                              Randomness;                                                 // 0x0030   (0x0004)  
	float                                              MinWavelength;                                              // 0x0034   (0x0004)  
	float                                              MaxWavelength;                                              // 0x0038   (0x0004)  
	float                                              WavelengthFalloff;                                          // 0x003C   (0x0004)  
	float                                              MinAmplitude;                                               // 0x0040   (0x0004)  
	float                                              MaxAmplitude;                                               // 0x0044   (0x0004)  
	float                                              AmplitudeFalloff;                                           // 0x0048   (0x0004)  
	float                                              WindAngleDeg;                                               // 0x004C   (0x0004)  
	float                                              DirectionAngularSpreadDeg;                                  // 0x0050   (0x0004)  
	float                                              SmallWaveSteepness;                                         // 0x0054   (0x0004)  
	float                                              LargeWaveSteepness;                                         // 0x0058   (0x0004)  
	float                                              SteepnessFalloff;                                           // 0x005C   (0x0004)  
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0018 (0x000028 - 0x000040)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase : UGerstnerWaterWaveGeneratorBase
{ 
public:
	EWaveSpectrumType                                  SpectrumType;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FGerstnerWaveOctave>                        Octaves;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWavesBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWaves : public UWaterWavesBase : UWaterWavesBase
{ 
public:
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0020 (0x000028 - 0x000048)
class UGerstnerWaterWaves : public UWaterWaves : UWaterWaves
{ 
public:
	UGerstnerWaterWaveGeneratorBase*                   GerstnerWaveGenerator;                                      // 0x0028   (0x0008)  
	TArray<FGerstnerWave>                              GerstnerWaves;                                              // 0x0030   (0x0010)  
	float                                              MaxWaveHeight;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0020 (0x000570 - 0x000590)
class ULakeCollisionComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	UBodySetup*                                        CachedBodySetup;                                            // 0x0568   (0x0008)  
	FVector                                            BoxExtent;                                                  // 0x0570   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0588   (0x0008)  MISSED
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UWaterBodyComponent*                               SourceBodyComponent;                                        // 0x0038   (0x0008)  
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UOceanCollisionComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	UBodySetup*                                        CachedBodySetup;                                            // 0x0568   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0570   (0x0040)  MISSED
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0000 (0x0005B0 - 0x0005B0)
class UOceanBoxCollisionComponent : public UBoxComponent : UBoxComponent
{ 
public:
};

/// Class /Script/Water.WaterBody
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AWaterBody : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	UWaterSplineComponent*                             SplineComp;                                                 // 0x0298   (0x0008)  
	UWaterSplineMetadata*                              WaterSplineMetadata;                                        // 0x02A0   (0x0008)  
	UWaterBodyComponent*                               WaterBodyComponent;                                         // 0x02A8   (0x0008)  
	int32_t                                            WaterBodyIndex;                                             // 0x02B0   (0x0004)  
	EWaterBodyType                                     WaterBodyType;                                              // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B5   (0x0003)  MISSED
	UWaterWavesBase*                                   WaterWaves;                                                 // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBody.SetWaterWaves
	void SetWaterWaves(UWaterWavesBase* InWaterWaves);                                                                       // [0xd0c770] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.SetWaterMaterial
	void SetWaterMaterial(UMaterialInterface* InMaterial);                                                                   // [0xd0c6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.OnWaterBodyChanged
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);                                   // [0xd0bf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
	FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);                                                             // [0xd0bb90] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterVelocityAtSplineInputKey
	float GetWaterVelocityAtSplineInputKey(float InKey);                                                                     // [0xd0ba50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterSpline
	UWaterSplineComponent* GetWaterSpline();                                                                                 // [0xd0b6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterMaterialInstance
	UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                                    // [0xd0b650] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterBodyType
	EWaterBodyType GetWaterBodyType();                                                                                       // [0xd0b580] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterBodyComponent
	UWaterBodyComponent* GetWaterBodyComponent();                                                                            // [0xd0b560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                                   // [0xd0b370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                                    // [0xd0b300] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetIslands
	TArray<AWaterBodyIsland*> GetIslands();                                                                                  // [0xd0ade0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetExclusionVolumes
	TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                                // [0xd0ace0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetAudioIntensityAtSplineInputKey
	float GetAudioIntensityAtSplineInputKey(float InKey);                                                                    // [0xd0a9c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterBodyGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyGenerator : public UObject : UObject
{ 
public:
};

/// Class /Script/Water.WaterBodyComponent
/// Size: 0x0FF0 (0x000570 - 0x001560)
class UWaterBodyComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	UPhysicalMaterial*                                 PhysicalMaterial;                                           // 0x0568   (0x0008)  
	float                                              TargetWaveMaskDepth;                                        // 0x0570   (0x0004)  
	float                                              MaxWaveHeightOffset;                                        // 0x0574   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0578   (0x0008)  MISSED
	FUnderwaterPostProcessSettings                     UnderwaterPostProcessSettings;                              // 0x0580   (0x0700)  
	FWaterCurveSettings                                CurveSettings;                                              // 0x0C80   (0x0020)  
	UMaterialInterface*                                WaterMaterial;                                              // 0x0CA0   (0x0008)  
	UMaterialInterface*                                WaterHLODMaterial;                                          // 0x0CA8   (0x0008)  
	UMaterialInterface*                                WaterLODMaterial;                                           // 0x0CB0   (0x0008)  
	UMaterialInterface*                                UnderwaterPostProcessMaterial;                              // 0x0CB8   (0x0008)  
	UMaterialInterface*                                WaterInfoMaterial;                                          // 0x0CC0   (0x0008)  
	FWaterBodyHeightmapSettings                        WaterHeightmapSettings;                                     // 0x0CC8   (0x0080)  
	float                                              ShapeDilation;                                              // 0x0D48   (0x0004)  
	float                                              CollisionHeightOffset;                                      // 0x0D4C   (0x0004)  
	bool                                               bAffectsLandscape;                                          // 0x0D50   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0D51   (0x0003)  MISSED
	int32_t                                            WaterBodyIndex;                                             // 0x0D54   (0x0004)  
	UStaticMesh*                                       WaterMeshOverride;                                          // 0x0D58   (0x0008)  
	bool                                               bAlwaysGenerateWaterMeshTiles;                              // 0x0D60   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0D61   (0x0003)  MISSED
	int32_t                                            OverlapMaterialPriority;                                    // 0x0D64   (0x0004)  
	UWaterSplineMetadata*                              WaterSplineMetadata;                                        // 0x0D68   (0x0008)  
	UMaterialInstanceDynamic*                          WaterMID;                                                   // 0x0D70   (0x0008)  
	UMaterialInstanceDynamic*                          WaterLODMID;                                                // 0x0D78   (0x0008)  
	UMaterialInstanceDynamic*                          UnderwaterPostProcessMID;                                   // 0x0D80   (0x0008)  
	UMaterialInstanceDynamic*                          WaterInfoMID;                                               // 0x0D88   (0x0008)  
	TArray<TWeakObjectPtr>                             WaterBodyIslands;                                           // 0x0D90   (0x0010)  
	TArray<TWeakObjectPtr>                             WaterBodyExclusionVolumes;                                  // 0x0DA0   (0x0010)  
	TWeakObjectPtr<ALandscapeProxy*>                   Landscape;                                                  // 0x0DB0   (0x0008)  
	TWeakObjectPtr<AWaterZone*>                        OwningWaterZone;                                            // 0x0DB8   (0x0030)  
	TWeakObjectPtr<AWaterZone*>                        WaterZoneOverride;                                          // 0x0DE8   (0x0030)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0E18   (0x0008)  MISSED
	FPostProcessSettings                               CurrentPostProcessSettings;                                 // 0x0E20   (0x06E0)  
	UClass*                                            WaterNavAreaClass;                                          // 0x1500   (0x0008)  
	unsigned char                                      UnknownData04_5[0x50];                                      // 0x1508   (0x0050)  MISSED
	double                                             FixedWaterDepth;                                            // 0x1558   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
	void SetWaterAndUnderWaterPostProcessMaterial(UMaterialInterface* InWaterMaterial, UMaterialInterface* InUnderWaterPostProcessMaterial); // [0xd0c2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.OnWaterBodyChanged
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);                                   // [0xd0c020] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterWaves
	UWaterWavesBase* GetWaterWaves();                                                                                        // [0xd0bc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
	float GetWaterVelocityAtSplineInputKey(float InKey);                                                                     // [0xd0baf0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
	void GetWaterSurfaceInfoAtLocation(FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // [0xd0b750] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterSpline
	UWaterSplineComponent* GetWaterSpline();                                                                                 // [0xd0b710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterMaterialInstance
	UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                                    // [0xd0b6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterMaterial
	UMaterialInterface* GetWaterMaterial();                                                                                  // [0xd0b630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterLODMaterialInstance
	UMaterialInstanceDynamic* GetWaterLODMaterialInstance();                                                                 // [0xd0b5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterInfoMaterialInstance
	UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();                                                                // [0xd0b5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterBodyActor
	AWaterBody* GetWaterBodyActor();                                                                                         // [0xd0b540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
	UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();                                                    // [0xd0b500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetStandardRenderableComponents
	TArray<UPrimitiveComponent*> GetStandardRenderableComponents();                                                          // [0xd0b480] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
	UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                                   // [0xd0b3b0] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
	UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                                    // [0xd0b340] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetMaxWaveHeight
	float GetMaxWaveHeight();                                                                                                // [0xd0b210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetIslands
	TArray<AWaterBodyIsland*> GetIslands();                                                                                  // [0xd0ae60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetExclusionVolumes
	TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                                // [0xd0ad60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetCollisionComponents
	TArray<UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents);                                      // [0xd0abd0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomMeshGenerator : public UWaterBodyGenerator : UWaterBodyGenerator
{ 
public:
	UStaticMeshComponent*                              meshComp;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AWaterBodyCustom : public AWaterBody : AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyCustomComponent
/// Size: 0x0010 (0x001560 - 0x001570)
class UWaterBodyCustomComponent : public UWaterBodyComponent : UWaterBodyComponent
{ 
public:
	UStaticMeshComponent*                              meshComp;                                                   // 0x1560   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1568   (0x0008)  MISSED
};

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0018 (0x0002D8 - 0x0002F0)
class AWaterBodyExclusionVolume : public APhysicsVolume : APhysicsVolume
{ 
public:
	bool                                               bExcludeAllOverlappingWaterBodies;                          // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02D9   (0x0007)  MISSED
	TArray<AWaterBody*>                                WaterBodiesToExclude;                                       // 0x02E0   (0x0010)  
};

/// Class /Script/Water.WaterBodyHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyHLODBuilder : public UHLODBuilder : UHLODBuilder
{ 
public:
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AWaterBodyIsland : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	UWaterSplineComponent*                             SplineComp;                                                 // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyIsland.GetWaterSpline
	UWaterSplineComponent* GetWaterSpline();                                                                                 // [0xd0b6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULakeGenerator : public UWaterBodyGenerator : UWaterBodyGenerator
{ 
public:
	UStaticMeshComponent*                              LakeMeshComp;                                               // 0x0028   (0x0008)  
	UBoxComponent*                                     LakeCollisionComp;                                          // 0x0030   (0x0008)  
	ULakeCollisionComponent*                           LakeCollision;                                              // 0x0038   (0x0008)  
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AWaterBodyLake : public AWaterBody : AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyLakeComponent
/// Size: 0x0010 (0x001560 - 0x001570)
class UWaterBodyLakeComponent : public UWaterBodyComponent : UWaterBodyComponent
{ 
public:
	UStaticMeshComponent*                              LakeMeshComp;                                               // 0x1560   (0x0008)  
	ULakeCollisionComponent*                           LakeCollision;                                              // 0x1568   (0x0008)  
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UOceanGenerator : public UWaterBodyGenerator : UWaterBodyGenerator
{ 
public:
	TArray<UOceanBoxCollisionComponent*>               CollisionBoxes;                                             // 0x0028   (0x0010)  
	TArray<UOceanCollisionComponent*>                  CollisionHullSets;                                          // 0x0038   (0x0010)  
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AWaterBodyOcean : public AWaterBody : AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyOceanComponent
/// Size: 0x0050 (0x001560 - 0x0015B0)
class UWaterBodyOceanComponent : public UWaterBodyComponent : UWaterBodyComponent
{ 
public:
	TArray<UOceanBoxCollisionComponent*>               CollisionBoxes;                                             // 0x1560   (0x0010)  
	TArray<UOceanCollisionComponent*>                  CollisionHullSets;                                          // 0x1570   (0x0010)  
	FVector2D                                          VisualExtents;                                              // 0x1580   (0x0010)  
	FVector                                            CollisionExtents;                                           // 0x1590   (0x0018)  
	float                                              HeightOffset;                                               // 0x15A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x15AC   (0x0004)  MISSED
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class URiverGenerator : public UWaterBodyGenerator : UWaterBodyGenerator
{ 
public:
	TArray<USplineMeshComponent*>                      SplineMeshComponents;                                       // 0x0028   (0x0010)  
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AWaterBodyRiver : public AWaterBody : AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyRiverComponent
/// Size: 0x0030 (0x001560 - 0x001590)
class UWaterBodyRiverComponent : public UWaterBodyComponent : UWaterBodyComponent
{ 
public:
	TArray<USplineMeshComponent*>                      SplineMeshComponents;                                       // 0x1560   (0x0010)  
	UMaterialInterface*                                LakeTransitionMaterial;                                     // 0x1570   (0x0008)  
	UMaterialInstanceDynamic*                          LakeTransitionMID;                                          // 0x1578   (0x0008)  
	UMaterialInterface*                                OceanTransitionMaterial;                                    // 0x1580   (0x0008)  
	UMaterialInstanceDynamic*                          OceanTransitionMID;                                         // 0x1588   (0x0008)  
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBrushActorInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x0120 (0x0005A0 - 0x0006C0)
class UWaterMeshComponent : public UMeshComponent : UMeshComponent
{ 
public:
	int32_t                                            ForceCollapseDensityLevel;                                  // 0x05A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x05A4   (0x0004)  MISSED
	UMaterialInterface*                                FarDistanceMaterial;                                        // 0x05A8   (0x0008)  
	float                                              FarDistanceMeshExtent;                                      // 0x05B0   (0x0004)  
	float                                              TileSize;                                                   // 0x05B4   (0x0004)  
	FIntPoint                                          ExtentInTiles;                                              // 0x05B8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x98];                                      // 0x05C0   (0x0098)  MISSED
	TSet<UMaterialInterface*>                          UsedMaterials;                                              // 0x0658   (0x0050)  
	bool                                               bUseFarMeshWithoutOcean;                                    // 0x06A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x06A9   (0x000F)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x06B8   (0x0004)  
	float                                              LODScale;                                                   // 0x06BC   (0x0004)  


	/// Functions
	// Function /Script/Water.WaterMeshComponent.IsEnabled
	bool IsEnabled();                                                                                                        // [0xd0bc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UWaterRuntimeSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannelForWaterTraces;                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TWeakObjectPtr<UMaterialParameterCollection*>      MaterialParameterCollection;                                // 0x0040   (0x0030)  
	float                                              WaterBodyIconWorldZOffset;                                  // 0x0070   (0x0004)  
	FName                                              DefaultWaterCollisionProfileName;                           // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TWeakObjectPtr<UMaterialInterface*>                DefaultWaterInfoMaterial;                                   // 0x0080   (0x0030)  
	UClass*                                            WaterBodyRiverComponentClass;                               // 0x00B0   (0x0008)  
	UClass*                                            WaterBodyLakeComponentClass;                                // 0x00B8   (0x0008)  
	UClass*                                            WaterBodyOceanComponentClass;                               // 0x00C0   (0x0008)  
	UClass*                                            WaterBodyCustomComponentClass;                              // 0x00C8   (0x0008)  
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0020 (0x000670 - 0x000690)
class UWaterSplineComponent : public USplineComponent : USplineComponent
{ 
public:
	FWaterSplineCurveDefaults                          WaterSplineDefaults;                                        // 0x0668   (0x0010)  
	FWaterSplineCurveDefaults                          PreviousWaterSplineDefaults;                                // 0x0678   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0688   (0x0008)  MISSED


	/// Functions
	// Function /Script/Water.WaterSplineComponent.K2_SynchronizeAndBroadcastDataChange
	void K2_SynchronizeAndBroadcastDataChange();                                                                             // [0xd0bd90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UWaterSplineMetadata : public USplineMetadata : USplineMetadata
{ 
public:
	FInterpCurveFloat                                  Depth;                                                      // 0x0028   (0x0018)  
	FInterpCurveFloat                                  WaterVelocityScalar;                                        // 0x0040   (0x0018)  
	FInterpCurveFloat                                  RiverWidth;                                                 // 0x0058   (0x0018)  
	FInterpCurveFloat                                  AudioIntensity;                                             // 0x0070   (0x0018)  
	FInterpCurveVector                                 WaterVelocity;                                              // 0x0088   (0x0018)  
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x00D0 (0x000040 - 0x000110)
class UWaterSubsystem : public UTickableWorldSubsystem : UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0040   (0x0038)  MISSED
	ABuoyancyManager*                                  BuoyancyManager;                                            // 0x0078   (0x0008)  
	FMulticastInlineDelegate                           OnCameraUnderwaterStateChanged;                             // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnWaterScalabilityChanged;                                  // 0x0090   (0x0010)  
	UStaticMesh*                                       DefaultRiverMesh;                                           // 0x00A0   (0x0008)  
	UStaticMesh*                                       DefaultLakeMesh;                                            // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x00B0   (0x0028)  MISSED
	UMaterialParameterCollection*                      MaterialParameterCollection;                                // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x00E0   (0x0030)  MISSED


	/// Functions
	// Function /Script/Water.WaterSubsystem.SetOceanFloodHeight
	void SetOceanFloodHeight(float InFloodHeight);                                                                           // [0xd0c1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.PrintToWaterLog
	void PrintToWaterLog(FString Message, bool bWarning);                                                                    // [0xd0c0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.IsWaterRenderingEnabled
	bool IsWaterRenderingEnabled();                                                                                          // [0xd0bd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	bool IsUnderwaterPostProcessEnabled();                                                                                   // [0xd0bd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	bool IsShallowWaterSimulationEnabled();                                                                                  // [0xd0bd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetWaterTimeSeconds
	float GetWaterTimeSeconds();                                                                                             // [0xd0ba20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	float GetSmoothedWorldTimeSeconds();                                                                                     // [0xd0b440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	int32_t GetShallowWaterSimulationRenderTargetSize();                                                                     // [0xd0b420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	int32_t GetShallowWaterMaxImpulseForces();                                                                               // [0xd0b400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	int32_t GetShallowWaterMaxDynamicForces();                                                                               // [0xd0b3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetOceanTotalHeight
	float GetOceanTotalHeight();                                                                                             // [0xd0b2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanFloodHeight
	float GetOceanFloodHeight();                                                                                             // [0xd0b2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanBaseHeight
	float GetOceanBaseHeight();                                                                                              // [0xd0b240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetCameraUnderwaterDepth
	float GetCameraUnderwaterDepth();                                                                                        // [0xd0abb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterWavesAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAsset : public UObject : UObject
{ 
public:
	UWaterWaves*                                       WaterWaves;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAssetReference : public UWaterWavesBase : UWaterWavesBase
{ 
public:
	UWaterWavesAsset*                                  WaterWavesAsset;                                            // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterZone
/// Size: 0x0090 (0x000290 - 0x000320)
class AWaterZone : public AActor : AActor
{ 
public:
	UTextureRenderTarget2D*                            WaterInfoTexture;                                           // 0x0290   (0x0008)  
	TArray<TWeakObjectPtr>                             OwnedWaterBodies;                                           // 0x0298   (0x0010)  
	FIntPoint                                          RenderTargetResolution;                                     // 0x02A8   (0x0008)  
	UWaterMeshComponent*                               WaterMesh;                                                  // 0x02B0   (0x0008)  
	FVector2D                                          ZoneExtent;                                                 // 0x02B8   (0x0010)  
	float                                              CaptureZOffset;                                             // 0x02C8   (0x0004)  
	bool                                               bHalfPrecisionTexture;                                      // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	int32_t                                            VelocityBlurRadius;                                         // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	FVector                                            TessellatedWaterMeshExtent;                                 // 0x02D8   (0x0018)  
	uint32_t                                           NonTessellatedLODSectionScale;                              // 0x02F0   (0x0004)  
	int32_t                                            OverlapPriority;                                            // 0x02F4   (0x0004)  
	bool                                               bEnableNonTessellatedLODMesh;                               // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x27];                                      // 0x02F9   (0x0027)  MISSED
};

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x03
enum EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody0                                                = 0,
	EBuoyancyEvent__ExitedWaterBody1                                                 = 1,
	EBuoyancyEvent__EBuoyancyEvent_MAX2                                              = 2
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x04
enum EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips0                                                     = 0,
	EWaveSpectrumType__PiersonMoskowitz1                                             = 1,
	EWaveSpectrumType__JONSWAP2                                                      = 2,
	EWaveSpectrumType__EWaveSpectrumType_MAX3                                        = 3
};

/// Enum /Script/Water.EWaterBrushBlendType
/// Size: 0x04
enum EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend0                                                = 0,
	EWaterBrushBlendType__Min1                                                       = 1,
	EWaterBrushBlendType__Max2                                                       = 2,
	EWaterBrushBlendType__Additive3                                                  = 3
};

/// Enum /Script/Water.EWaterBodyType
/// Size: 0x06
enum EWaterBodyType : uint8_t
{
	EWaterBodyType__River0                                                           = 0,
	EWaterBodyType__Lake1                                                            = 1,
	EWaterBodyType__Ocean2                                                           = 2,
	EWaterBodyType__Transition3                                                      = 3,
	EWaterBodyType__Num4                                                             = 4,
	EWaterBodyType__EWaterBodyType_MAX5                                              = 5
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x03
enum EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle0                                                   = 0,
	EWaterBrushFalloffMode__Width1                                                   = 1,
	EWaterBrushFalloffMode__EWaterBrushFalloffMode_MAX2                              = 2
};

