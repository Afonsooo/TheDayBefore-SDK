
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCache.

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (0x000000 - 0x000009)
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_1[0x9];                                       // 0x0000   (0x0009)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraGeometryCacheReference
{ 
	UGeometryCache*                                    GeometryCache;                                              // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       GeometryCacheUserParamBinding;                              // 0x0008   (0x0020)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0048 (0x000028 - 0x000070)
class UGeometryCache : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<UMaterialInterface*>                        Materials;                                                  // 0x0030   (0x0010)  
	TArray<UGeometryCacheTrack*>                       Tracks;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)  
	uint64_t                                           Hash;                                                       // 0x0068   (0x0008)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGeometryCacheActor : public AActor : AActor
{ 
public:
	UGeometryCacheComponent*                           GeometryCacheComponent;                                     // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	UGeometryCacheComponent* GetGeometryCacheComponent();                                                                    // [0x18f6430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject : UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase : UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase : UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0090 (0x0005A0 - 0x000630)
class UGeometryCacheComponent : public UMeshComponent : UMeshComponent
{ 
public:
	UGeometryCache*                                    GeometryCache;                                              // 0x05A0   (0x0008)  
	bool                                               bRunning;                                                   // 0x05A8   (0x0001)  
	bool                                               bLooping;                                                   // 0x05A9   (0x0001)  
	bool                                               bExtrapolateFrames;                                         // 0x05AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x05AB   (0x0001)  MISSED
	float                                              StartTimeOffset;                                            // 0x05AC   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x05B0   (0x0004)  
	float                                              MotionVectorScale;                                          // 0x05B4   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x05B8   (0x0004)  
	float                                              ElapsedTime;                                                // 0x05BC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4C];                                      // 0x05C0   (0x004C)  MISSED
	float                                              Duration;                                                   // 0x060C   (0x0004)  
	bool                                               bManualTick;                                                // 0x0610   (0x0001)  
	bool                                               bOverrideWireframeColor;                                    // 0x0611   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0612   (0x0002)  MISSED
	FLinearColor                                       WireframeOverrideColor;                                     // 0x0614   (0x0010)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0624   (0x000C)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x1b05e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	void Stop();                                                                                                             // [0x1b05e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	void SetWireframeOverrideColor(FLinearColor Color);                                                                      // [0x1b05d80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x1b05cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x1b05c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	void SetOverrideWireframeColor(bool bOverride);                                                                          // [0x1b05b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x1b05ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	void SetLooping(bool bNewLooping);                                                                                       // [0x1b057d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	bool SetGeometryCache(UGeometryCache* NewGeomCache);                                                                     // [0x1b05730] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x1b056a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversedFromEnd();                                                                                              // [0x1b05640] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayReversed();                                                                                                     // [0x1b055f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	void PlayFromStart();                                                                                                    // [0x1b05590] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	void Play();                                                                                                             // [0x1b05540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	void Pause();                                                                                                            // [0x1b05510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlayingReversed();                                                                                                // [0x1b054d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0x1b054b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	bool IsLooping();                                                                                                        // [0x1b05490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	bool IsExtrapolatingFrames();                                                                                            // [0x1b05470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	FLinearColor GetWireframeOverrideColor();                                                                                // [0x1b05440] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetStartTimeOffset();                                                                                              // [0x1b05420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackSpeed();                                                                                                // [0x1b053e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	float GetPlaybackDirection();                                                                                            // [0x1b053c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	bool GetOverrideWireframeColor();                                                                                        // [0x1b053a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	int32_t GetNumberOfFrames();                                                                                             // [0x1b05360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	float GetMotionVectorScale();                                                                                            // [0x1b05320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	float GetDuration();                                                                                                     // [0x1b05300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	float GetAnimationTime();                                                                                                // [0x1b052b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject : UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack : UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	void AddMeshSample(FGeometryCacheMeshData& meshData, float SampleTime);                                                  // [0x1b04fb0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack : UGeometryCacheTrack
{ 
public:
	UGeometryCacheCodecBase*                           Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x68];                                      // 0x0060   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack : UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack : UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x0288 (0x0000E0 - 0x000368)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraGeometryCacheReference>             GeometryCaches;                                             // 0x00E0   (0x0010)  
	bool                                               bIsLooping;                                                 // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	uint32_t                                           ComponentCountLimit;                                        // 0x00F4   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RotationBinding;                                            // 0x0150   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x01A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ElapsedTimeBinding;                                         // 0x0200   (0x0058)  
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0258   (0x0058)  
	FNiagaraVariableAttributeBinding                   ArrayIndexBinding;                                          // 0x02B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0308   (0x0058)  
	int32_t                                            RendererVisibility;                                         // 0x0360   (0x0004)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x0364   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0365   (0x0003)  MISSED
};

