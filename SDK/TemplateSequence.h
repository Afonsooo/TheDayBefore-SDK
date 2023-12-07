
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TemplateSequence.

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0138 (0x000000 - 0x000138)
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x0110)  
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<UObject*>                           Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UTemplateSequence : public UMovieSceneSequence : UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0068   (0x0008)  
	TWeakObjectPtr<UClass*>                            BoundActorClass;                                            // 0x0070   (0x0030)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00A0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UCameraAnimationSequence : public UTemplateSequence : UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0818 (0x000028 - 0x000840)
class UCameraAnimationSequenceCameraStandIn : public UObject : UObject
{ 
public:
	float                                              FieldOfView;                                                // 0x0028   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x06E0)  
	float                                              PostProcessBlendWeight;                                     // 0x0720   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0724   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0730   (0x001C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x074C   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0750   (0x0068)  
	float                                              CurrentFocalLength;                                         // 0x07B8   (0x0004)  
	float                                              CurrentAperture;                                            // 0x07BC   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x7C];                                      // 0x07C4   (0x007C)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0368 (0x000028 - 0x000390)
class UCameraAnimationSequencePlayer : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x270];                                     // 0x0028   (0x0270)  MISSED
	UObject*                                           BoundObjectOverride;                                        // 0x0298   (0x0008)  
	UMovieSceneSequence*                               Sequence;                                                   // 0x02A0   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02A8   (0x0088)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0330   (0x0060)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x0000 (0x0006F8 - 0x0006F8)
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker : UMovieSceneEntitySystemLinker
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem : UWorldSubsystem
{ 
public:
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0010 (0x000138 - 0x000148)
class UTemplateSequenceSection : public UMovieSceneSubSection : UMovieSceneSubSection
{ 
public:
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0138   (0x0010)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0030 (0x000028 - 0x000058)
class USequenceCameraShakePattern : public UCameraShakePattern : UCameraShakePattern
{ 
public:
	UCameraAnimationSequence*                          Sequence;                                                   // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0040   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	UCameraAnimationSequencePlayer*                    Player;                                                     // 0x0048   (0x0008)  
	UCameraAnimationSequenceCameraStandIn*             CameraStandIn;                                              // 0x0050   (0x0008)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ATemplateSequenceActor : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0298   (0x0020)  
	UTemplateSequencePlayer*                           SequencePlayer;                                             // 0x02B8   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x02C0   (0x0020)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	void SetSequence(UTemplateSequence* InSequence);                                                                         // [0xc10210] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	void SetBinding(AActor* Actor, bool bOverridesDefault);                                                                  // [0xc10050] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	UTemplateSequence* LoadSequence();                                                                                       // [0xc0ffd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	UTemplateSequencePlayer* GetSequencePlayer();                                                                            // [0xc0ff90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	UTemplateSequence* GetSequence();                                                                                        // [0xc0ff10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x0004B8 - 0x0004C0)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer : UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04B8   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UTemplateSequenceTrack : public UMovieSceneSubTrack : UMovieSceneSubTrack
{ 
public:
};

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04
enum ETemplateSectionPropertyScaleType : uint8_t
{
	ETemplateSectionPropertyScaleType__FloatProperty0                                = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly1                = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly2                = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX3        = 3
};

