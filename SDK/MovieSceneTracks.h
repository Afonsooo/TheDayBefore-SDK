
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieSceneTracks.

/// Struct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	TArray<FScalarParameterNameAndCurve>               Scalars;                                                    // 0x0020   (0x0010)  
	TArray<FBoolParameterNameAndCurve>                 Bools;                                                      // 0x0030   (0x0010)  
	TArray<FVector2DParameterNameAndCurves>            Vector2Ds;                                                  // 0x0040   (0x0010)  
	TArray<FVectorParameterNameAndCurves>              Vectors;                                                    // 0x0050   (0x0010)  
	TArray<FColorParameterNameAndCurves>               Colors;                                                     // 0x0060   (0x0010)  
	TArray<FTransformParameterNameAndCurves>           Transforms;                                                 // 0x0070   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.TransformParameterNameAndCurves
/// Size: 0x0998 (0x000000 - 0x000998)
struct FTransformParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            Translation;                                                // 0x0008   (0x0330)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0338   (0x0330)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x0668   (0x0330)  
};

/// Struct /Script/MovieSceneTracks.ColorParameterNameAndCurves
/// Size: 0x0448 (0x000000 - 0x000448)
struct FColorParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            RedCurve;                                                   // 0x0008   (0x0110)  
	FMovieSceneFloatChannel                            GreenCurve;                                                 // 0x0118   (0x0110)  
	FMovieSceneFloatChannel                            BlueCurve;                                                  // 0x0228   (0x0110)  
	FMovieSceneFloatChannel                            AlphaCurve;                                                 // 0x0338   (0x0110)  
};

/// Struct /Script/MovieSceneTracks.VectorParameterNameAndCurves
/// Size: 0x0338 (0x000000 - 0x000338)
struct FVectorParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0008   (0x0110)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x0118   (0x0110)  
	FMovieSceneFloatChannel                            ZCurve;                                                     // 0x0228   (0x0110)  
};

/// Struct /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
/// Size: 0x0228 (0x000000 - 0x000228)
struct FVector2DParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0008   (0x0110)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x0118   (0x0110)  
};

/// Struct /Script/MovieSceneTracks.BoolParameterNameAndCurve
/// Size: 0x0108 (0x000000 - 0x000108)
struct FBoolParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneBoolChannel                             ParameterCurve;                                             // 0x0008   (0x0100)  
};

/// Struct /Script/MovieSceneTracks.ScalarParameterNameAndCurve
/// Size: 0x0118 (0x000000 - 0x000118)
struct FScalarParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            ParameterCurve;                                             // 0x0008   (0x0110)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
struct FMovieSceneStringChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	TArray<FString>                                    Values;                                                     // 0x0060   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0070   (0x0010)  
	bool                                               bHasDefaultValue;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0088   (0x0088)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneBaseCacheParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneBaseCacheParams
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneBaseCacheSectionTemplateParameters
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0000   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieScenePreAnimatedMaterialParameters
{ 
	UMaterialInterface*                                PreviousMaterial;                                           // 0x0000   (0x0008)  
	UMaterialInterface*                                PreviousParameterContainer;                                 // 0x0008   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneCameraShakeSourceTrigger
{ 
	UClass*                                            ShakeClass;                                                 // 0x0000   (0x0008)  
	float                                              PlayScale;                                                  // 0x0008   (0x0004)  
	ECameraShakePlaySpace                              PlaySpace;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0010   (0x0018)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneCameraShakeSourceTrigger>        KeyValues;                                                  // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
/// Size: 0x0018 (0x000050 - 0x000068)
struct FMovieSceneDoublePerlinNoiseChannel : FMovieSceneChannel
{ 
	FPerlinNoiseParams                                 PerlinNoiseParams;                                          // 0x0050   (0x0018)  
};

/// Struct /Script/MovieSceneTracks.PerlinNoiseParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPerlinNoiseParams
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	double                                             Amplitude;                                                  // 0x0008   (0x0008)  
	float                                              Offset;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPayloadVariable
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEventPayloadVariable
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPtrs
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEventPtrs
{ 
	UFunction*                                         Function;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEvent
{ 
	FMovieSceneEventPtrs                               Ptrs;                                                       // 0x0000   (0x0028)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneEventChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneEvent>                           KeyValues;                                                  // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
/// Size: 0x0018 (0x000050 - 0x000068)
struct FMovieSceneFloatPerlinNoiseChannel : FMovieSceneChannel
{ 
	FPerlinNoiseParams                                 PerlinNoiseParams;                                          // 0x0050   (0x0018)  
};

/// Struct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
/// Size: 0x0130 (0x000020 - 0x000150)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneObjectBindingID                         PathBindingID;                                              // 0x0020   (0x0018)  
	FMovieSceneFloatChannel                            TimingCurve;                                                // 0x0038   (0x0110)  
	MovieScene3DPathSection_Axis                       FrontAxisEnum;                                              // 0x0148   (0x0001)  
	MovieScene3DPathSection_Axis                       UpAxisEnum;                                                 // 0x0149   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x014A   (0x0002)  MISSED
	bool                                               bFollow : 1;                                                // 0x014C:0 (0x0001)  
	bool                                               bReverse : 1;                                               // 0x014C:1 (0x0001)  
	bool                                               bForceUpright : 1;                                          // 0x014C:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x014D   (0x0003)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
/// Size: 0x0138 (0x000020 - 0x000158)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScenePropertySectionData                     PropertyData;                                               // 0x0020   (0x0018)  
	FMovieSceneActorReferenceData                      ActorReferenceData;                                         // 0x0038   (0x0120)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceData
/// Size: 0x00D0 (0x000050 - 0x000120)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	FMovieSceneActorReferenceKey                       DefaultValue;                                               // 0x0060   (0x0028)  
	TArray<FMovieSceneActorReferenceKey>               KeyValues;                                                  // 0x0088   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0098   (0x0088)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceKey
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneActorReferenceKey
{ 
	FMovieSceneObjectBindingID                         Object;                                                     // 0x0000   (0x0018)  
	FName                                              ComponentName;                                              // 0x0018   (0x0008)  
	FName                                              SocketName;                                                 // 0x0020   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{ 
	UMovieSceneAudioSection*                           AudioSection;                                               // 0x0020   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneCameraShakeSectionData                  SourceData;                                                 // 0x0020   (0x0028)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0048   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x004C   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneCameraShakeSectionData
{ 
	UClass*                                            ShakeClass;                                                 // 0x0000   (0x0008)  
	float                                              PlayScale;                                                  // 0x0008   (0x0004)  
	ECameraShakePlaySpace                              PlaySpace;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0010   (0x0018)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate
{ 
	TArray<FFrameNumber>                               TriggerTimes;                                               // 0x0020   (0x0010)  
	TArray<FMovieSceneCameraShakeSourceTrigger>        TriggerValues;                                              // 0x0030   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneCameraShakeSectionData                  SourceData;                                                 // 0x0020   (0x0028)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorSectionTemplate
/// Size: 0x0448 (0x000038 - 0x000480)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            Curves;                                                     // 0x0038   (0x0440)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x0478   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0479   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
/// Size: 0x0100 (0x000020 - 0x000120)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneEventSectionData                        EventData;                                                  // 0x0020   (0x00F8)  
	bool                                               bFireEventsWhenForwards : 1;                                // 0x0118:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards : 1;                               // 0x0118:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionData
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	TArray<FEventPayload>                              KeyValues;                                                  // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
};

/// Struct /Script/MovieSceneTracks.EventPayload
/// Size: 0x0038 (0x000000 - 0x000038)
struct FEventPayload
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
	FMovieSceneEventParameters                         Parameters;                                                 // 0x0008   (0x0030)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEventParameters
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneObjectPropertyTemplate
/// Size: 0x0138 (0x000038 - 0x000170)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneObjectPathChannel                       ObjectChannel;                                              // 0x0038   (0x0138)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
/// Size: 0x0108 (0x000020 - 0x000128)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneParticleChannel                         ParticleKeys;                                               // 0x0020   (0x0108)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleChannel
/// Size: 0x0000 (0x000108 - 0x000108)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{ 
};

/// Struct /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
/// Size: 0x0100 (0x000038 - 0x000138)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x0038   (0x0100)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringPropertySectionTemplate
/// Size: 0x0110 (0x000038 - 0x000148)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneStringChannel                           StringCurve;                                                // 0x0038   (0x0110)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
/// Size: 0x0110 (0x000020 - 0x000130)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneFloatChannel                            SlomoCurve;                                                 // 0x0020   (0x0110)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate
/// Size: 0x0000 (0x000138 - 0x000138)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{ 
};

/// Struct /Script/MovieSceneTracks.LevelVisibilityComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLevelVisibilityComponentData
{ 
	UMovieSceneLevelVisibilitySection*                 Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneDataLayerComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneDataLayerComponentData
{ 
	UMovieSceneDataLayerSection*                       Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.ConstraintComponentData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConstraintComponentData
{ 
	FName                                              ConstraintName;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneSkeletalAnimationComponentData
{ 
	UMovieSceneSkeletalAnimationSection*               Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
/// Size: 0x0038 (0x000008 - 0x000040)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FFrameNumber                                       Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0024   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
/// Size: 0x0038 (0x000008 - 0x000040)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{ 
	FRotator                                           Rotation;                                                   // 0x0008   (0x0018)  
	FFrameNumber                                       Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0024   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{ 
	FVector3f                                          Scale;                                                      // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
/// Size: 0x0058 (0x000008 - 0x000060)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x0018)  
	FVector3f                                          Scale;                                                      // 0x0038   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0044   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorKeyStruct
/// Size: 0x0030 (0x000008 - 0x000038)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{ 
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       Time;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x001C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneConsoleVariableCollection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneConsoleVariableCollection
{ 
	TScriptInterface<Class>                            Interface;                                                  // 0x0000   (0x0010)  
	bool                                               bOnlyIncludeChecked;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCVarOverrides
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMovieSceneCVarOverrides
{ 
	TMap<FString, FString>                             ValuesByCVar;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
/// Size: 0x0150 (0x000000 - 0x000150)
struct FMovieSceneSkeletalAnimationParams
{ 
	UAnimSequenceBase*                                 Animation;                                                  // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	UMirrorDataTable*                                  MirrorDataTable;                                            // 0x0028   (0x0008)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0030   (0x0110)  
	bool                                               bSkipAnimNotifiers;                                         // 0x0140   (0x0001)  
	bool                                               bForceCustomMode;                                           // 0x0141   (0x0001)  
	ESwapRootBone                                      SwapRootBone;                                               // 0x0142   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0143   (0x0001)  MISSED
	float                                              StartOffset;                                                // 0x0144   (0x0004)  
	float                                              EndOffset;                                                  // 0x0148   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneFloatVectorKeyStructBase : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2fKeyStruct
/// Size: 0x0008 (0x000028 - 0x000030)
struct FMovieSceneVector2fKeyStruct : FMovieSceneFloatVectorKeyStructBase
{ 
	FVector2f                                          Vector;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector3fKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
struct FMovieSceneVector3fKeyStruct : FMovieSceneFloatVectorKeyStructBase
{ 
	FVector3f                                          Vector;                                                     // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4fKeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
struct FMovieSceneVector4fKeyStruct : FMovieSceneFloatVectorKeyStructBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector4f                                          Vector;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneDoubleVectorKeyStructBase : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
struct FMovieSceneVector2DKeyStruct : FMovieSceneDoubleVectorKeyStructBase
{ 
	FVector2D                                          Vector;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector3dKeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
struct FMovieSceneVector3dKeyStruct : FMovieSceneDoubleVectorKeyStructBase
{ 
	FVector3d                                          Vector;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4dKeyStruct
/// Size: 0x0028 (0x000028 - 0x000050)
struct FMovieSceneVector4dKeyStruct : FMovieSceneDoubleVectorKeyStructBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector4d                                          Vector;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventTriggerData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMovieSceneEventTriggerData
{ 
	FMovieSceneEventPtrs                               Ptrs;                                                       // 0x0000   (0x0028)  
	FGuid                                              ObjectBindingID;                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{ 
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSection
/// Size: 0x0068 (0x0000F0 - 0x000158)
class UMovieSceneParameterSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	TArray<FBoolParameterNameAndCurve>                 BoolParameterNamesAndCurves;                                // 0x00F8   (0x0010)  
	TArray<FScalarParameterNameAndCurve>               ScalarParameterNamesAndCurves;                              // 0x0108   (0x0010)  
	TArray<FVector2DParameterNameAndCurves>            Vector2DParameterNamesAndCurves;                            // 0x0118   (0x0010)  
	TArray<FVectorParameterNameAndCurves>              VectorParameterNamesAndCurves;                              // 0x0128   (0x0010)  
	TArray<FColorParameterNameAndCurves>               ColorParameterNamesAndCurves;                               // 0x0138   (0x0010)  
	TArray<FTransformParameterNameAndCurves>           TransformParameterNamesAndCurves;                           // 0x0148   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	bool RemoveVectorParameter(FName InParameterName);                                                                       // [0x3945440] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	bool RemoveVector2DParameter(FName InParameterName);                                                                     // [0x3945310] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	bool RemoveTransformParameter(FName InParameterName);                                                                    // [0x39451f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	bool RemoveScalarParameter(FName InParameterName);                                                                       // [0x39450d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	bool RemoveColorParameter(FName InParameterName);                                                                        // [0x3944fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	bool RemoveBoolParameter(FName InParameterName);                                                                         // [0x3944ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	void GetParameterNames(TSet<FName>& ParameterNames);                                                                     // [0x3944440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);                                 // [0x39442e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);                             // [0x39441c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, FTransform& InValue);                          // [0x3944030] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);                                   // [0x3943f20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);                             // [0x3943e00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);                                      // [0x3943cf0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	UMovieSceneSection*                                SectionToKey;                                               // 0x0098   (0x0008)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00B8   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseCacheSection
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UMovieSceneBaseCacheSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOrigin
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTransformOrigin : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneConsoleVariableTrackInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDecomposerTestObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UMovieSceneDecomposerTestObject : public UObject : UObject
{ 
public:
	float                                              FloatProperty;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneTestSequence
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieSceneTestSequence : public UMovieSceneSequence : UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0068   (0x0008)  
	TArray<UObject*>                                   BoundObjects;                                               // 0x0070   (0x0010)  
	TArray<FGuid>                                      BindingGuids;                                               // 0x0080   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer : UMovieSceneChannelOverrideContainer
{ 
public:
	FMovieSceneDoublePerlinNoiseChannel                PerlinNoiseChannel;                                         // 0x0058   (0x0068)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer : UMovieSceneChannelOverrideContainer
{ 
public:
	FMovieSceneFloatPerlinNoiseChannel                 PerlinNoiseChannel;                                         // 0x0058   (0x0068)  
};

/// Class /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
/// Size: 0x01B0 (0x000040 - 0x0001F0)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B0];                                     // 0x0040   (0x01B0)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeEvaluator
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCameraShakeEvaluator : public UObject : UObject
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieScene3DConstraintSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FGuid                                              ConstraintId;                                               // 0x00F0   (0x0010)  
	FMovieSceneObjectBindingID                         ConstraintBindingID;                                        // 0x0100   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	void SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID);                                          // [0x38cedc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	FMovieSceneObjectBindingID GetConstraintBindingID();                                                                     // [0x38ce830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
/// Size: 0x0020 (0x000118 - 0x000138)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection : UMovieScene3DConstraintSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0118   (0x0008)  MISSED
	FName                                              AttachSocketName;                                           // 0x0120   (0x0008)  
	FName                                              AttachComponentName;                                        // 0x0128   (0x0008)  
	EAttachmentRule                                    AttachmentLocationRule;                                     // 0x0130   (0x0001)  
	EAttachmentRule                                    AttachmentRotationRule;                                     // 0x0131   (0x0001)  
	EAttachmentRule                                    AttachmentScaleRule;                                        // 0x0132   (0x0001)  
	EDetachmentRule                                    DetachmentLocationRule;                                     // 0x0133   (0x0001)  
	EDetachmentRule                                    DetachmentRotationRule;                                     // 0x0134   (0x0001)  
	EDetachmentRule                                    DetachmentScaleRule;                                        // 0x0135   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0136   (0x0002)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathSection
/// Size: 0x0118 (0x000118 - 0x000230)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection : UMovieScene3DConstraintSection
{ 
public:
	FMovieSceneFloatChannel                            TimingCurve;                                                // 0x0118   (0x0110)  
	MovieScene3DPathSection_Axis                       FrontAxisEnum;                                              // 0x0228   (0x0001)  
	MovieScene3DPathSection_Axis                       UpAxisEnum;                                                 // 0x0229   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x022A   (0x0002)  MISSED
	bool                                               bFollow : 1;                                                // 0x022C:0 (0x0001)  
	bool                                               bReverse : 1;                                               // 0x022C:1 (0x0001)  
	bool                                               bForceUpright : 1;                                          // 0x022C:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x022D   (0x0003)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSectionConstraints
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieScene3DTransformSectionConstraints : public UObject : UObject
{ 
public:
	TArray<FConstraintAndActiveChannel>                ConstraintsChannels;                                        // 0x0028   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
/// Size: 0x0B48 (0x0000F0 - 0x000C38)
class UMovieScene3DTransformSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00F0   (0x0040)  MISSED
	FMovieSceneTransformMask                           TransformMask;                                              // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FMovieSceneDoubleChannel                           Translation;                                                // 0x0138   (0x0348)  
	FMovieSceneDoubleChannel                           Rotation;                                                   // 0x0480   (0x0348)  
	FMovieSceneDoubleChannel                           Scale;                                                      // 0x07C8   (0x0348)  
	FMovieSceneFloatChannel                            ManualWeight;                                               // 0x0B10   (0x0110)  
	UMovieSceneSectionChannelOverrideRegistry*         OverrideRegistry;                                           // 0x0C20   (0x0008)  
	UMovieScene3DTransformSectionConstraints*          Constraints;                                                // 0x0C28   (0x0008)  
	bool                                               bUseQuaternionInterpolation;                                // 0x0C30   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0C31   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
/// Size: 0x01B0 (0x0000F0 - 0x0002A0)
class UMovieSceneActorReferenceSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneActorReferenceData                      ActorReferenceData;                                         // 0x00F0   (0x0120)  
	FIntegralCurve                                     ActorGuidIndexCurve;                                        // 0x0210   (0x0080)  
	TArray<FString>                                    ActorGuidStrings;                                           // 0x0290   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSection
/// Size: 0x0530 (0x0000F0 - 0x000620)
class UMovieSceneAudioSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	USoundBase*                                        Sound;                                                      // 0x00F0   (0x0008)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x00F8   (0x0004)  
	float                                              StartOffset;                                                // 0x00FC   (0x0004)  
	float                                              AudioStartTime;                                             // 0x0100   (0x0004)  
	float                                              AudioDilationFactor;                                        // 0x0104   (0x0004)  
	float                                              AudioVolume;                                                // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FMovieSceneFloatChannel                            SoundVolume;                                                // 0x0110   (0x0110)  
	FMovieSceneFloatChannel                            PitchMultiplier;                                            // 0x0220   (0x0110)  
	TMap<FName, FMovieSceneFloatChannel>               Inputs_Float;                                               // 0x0330   (0x0050)  
	TMap<FName, FMovieSceneStringChannel>              Inputs_String;                                              // 0x0380   (0x0050)  
	TMap<FName, FMovieSceneBoolChannel>                Inputs_Bool;                                                // 0x03D0   (0x0050)  
	TMap<FName, FMovieSceneIntegerChannel>             Inputs_Int;                                                 // 0x0420   (0x0050)  
	TMap<FName, FMovieSceneAudioTriggerChannel>        Inputs_Trigger;                                             // 0x0470   (0x0050)  
	FMovieSceneActorReferenceData                      AttachActorData;                                            // 0x04C0   (0x0120)  
	bool                                               bLooping;                                                   // 0x05E0   (0x0001)  
	bool                                               bSuppressSubtitles;                                         // 0x05E1   (0x0001)  
	bool                                               bOverrideAttenuation;                                       // 0x05E2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x05E3   (0x0005)  MISSED
	USoundAttenuation*                                 AttenuationSettings;                                        // 0x05E8   (0x0008)  
	FDelegateProperty                                  OnQueueSubtitles;                                           // 0x05F0   (0x0010)  
	FMulticastInlineDelegate                           OnAudioFinished;                                            // 0x0600   (0x0010)  
	FMulticastInlineDelegate                           OnAudioPlaybackPercent;                                     // 0x0610   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	void SetStartOffset(FFrameNumber InStartOffset);                                                                         // [0x38cf3e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSound
	void SetSound(USoundBase* InSound);                                                                                      // [0x38cf350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	FFrameNumber GetStartOffset();                                                                                           // [0x38cea90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSound
	USoundBase* GetSound();                                                                                                  // [0x38cea70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneByteSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneByteSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneByteChannel                             ByteCurve;                                                  // 0x00F8   (0x0108)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
/// Size: 0x00B0 (0x0000F0 - 0x0001A0)
class UMovieSceneCameraCutSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	bool                                               bLockPreviousCamera;                                        // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FGuid                                              CameraGuid;                                                 // 0x00FC   (0x0010)  
	FMovieSceneObjectBindingID                         CameraBindingID;                                            // 0x010C   (0x0018)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0124   (0x000C)  MISSED
	FTransform                                         InitialCameraCutTransform;                                  // 0x0130   (0x0060)  
	bool                                               bHasInitialCameraCutTransform;                              // 0x0190   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0191   (0x000F)  MISSED


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	void SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID);                                                  // [0x38ced00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	FMovieSceneObjectBindingID GetCameraBindingID();                                                                         // [0x38ce800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
/// Size: 0x0050 (0x0000F0 - 0x000140)
class UMovieSceneCameraShakeSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSectionData                  ShakeData;                                                  // 0x00F0   (0x0028)  
	UClass*                                            ShakeClass;                                                 // 0x0118   (0x0008)  
	float                                              PlayScale;                                                  // 0x0120   (0x0004)  
	ECameraShakePlaySpace                              PlaySpace;                                                  // 0x0124   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0128   (0x0018)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSectionData                  ShakeData;                                                  // 0x00F0   (0x0028)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
/// Size: 0x00F8 (0x0000F0 - 0x0001E8)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSourceTriggerChannel         Channel;                                                    // 0x00F0   (0x00F8)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
/// Size: 0x0028 (0x000138 - 0x000160)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection : UMovieSceneSubSection
{ 
public:
	FString                                            ShotDisplayName;                                            // 0x0138   (0x0010)  
	FText                                              DisplayName;                                                // 0x0148   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	void SetShotDisplayName(FString InShotDisplayName);                                                                      // [0x38cf250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	FString GetShotDisplayName();                                                                                            // [0x38ce960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneColorSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneColorSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            RedCurve;                                                   // 0x00F8   (0x0110)  
	FMovieSceneFloatChannel                            GreenCurve;                                                 // 0x0208   (0x0110)  
	FMovieSceneFloatChannel                            BlueCurve;                                                  // 0x0318   (0x0110)  
	FMovieSceneFloatChannel                            AlphaCurve;                                                 // 0x0428   (0x0110)  
};

/// Class /Script/MovieSceneTracks.MovieSceneConstrainedSection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneConstrainedSection : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarSection
/// Size: 0x0068 (0x0000F0 - 0x000158)
class UMovieSceneCVarSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	TArray<FMovieSceneConsoleVariableCollection>       ConsoleVariableCollections;                                 // 0x00F8   (0x0010)  
	FMovieSceneCVarOverrides                           ConsoleVariables;                                           // 0x0108   (0x0050)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCVarSection.SetFromString
	void SetFromString(FString InString);                                                                                    // [0x38cf130] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCVarSection.GetString
	FString GetString();                                                                                                     // [0x38ceab0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneDataLayerSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	TArray<FActorDataLayer>                            DataLayers;                                                 // 0x00F8   (0x0010)  
	TArray<UDataLayerAsset*>                           DataLayerAssets;                                            // 0x0108   (0x0010)  
	EDataLayerRuntimeState                             DesiredState;                                               // 0x0118   (0x0001)  
	EDataLayerRuntimeState                             PrerollState;                                               // 0x0119   (0x0001)  
	bool                                               bFlushOnUnload;                                             // 0x011A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x011B   (0x0005)  MISSED


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
	void SetPrerollState(EDataLayerRuntimeState InPrerollState);                                                             // [0x38cf1d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
	void SetFlushOnUnload(bool bFlushOnUnload);                                                                              // [0x38cf0a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
	void SetDesiredState(EDataLayerRuntimeState InDesiredState);                                                             // [0x38cf020] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
	void SetDataLayers(TArray<FActorDataLayer>& InDataLayers);                                                               // [0x38cef70] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
	void SetDataLayerAssets(TArray<UDataLayerAsset*>& InDataLayerAssets);                                                    // [0x38cee80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
	EDataLayerRuntimeState GetPrerollState();                                                                                // [0x38ce940] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
	bool GetFlushOnUnload();                                                                                                 // [0x38ce920] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
	EDataLayerRuntimeState GetDesiredState();                                                                                // [0x334db40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
	TArray<FActorDataLayer> GetDataLayers();                                                                                 // [0x38ce8f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
	TArray<UDataLayerAsset*> GetDataLayerAssets();                                                                           // [0x38ce860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleSection
/// Size: 0x0120 (0x0000F0 - 0x000210)
class UMovieSceneDoubleSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneDoubleChannel                           DoubleCurve;                                                // 0x00F8   (0x0118)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneEnumSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneByteChannel                             EnumCurve;                                                  // 0x00F8   (0x0108)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSectionBase
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMovieSceneEventSectionBase : public UMovieSceneSection : UMovieSceneSection
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase : UMovieSceneEventSectionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneEvent                                   Event;                                                      // 0x00F8   (0x0028)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSection
/// Size: 0x0170 (0x0000F0 - 0x000260)
class UMovieSceneEventSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FNameCurve                                         Events;                                                     // 0x00F0   (0x0078)  
	FMovieSceneEventSectionData                        EventData;                                                  // 0x0168   (0x00F8)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase : UMovieSceneEventSectionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneEventChannel                            EventChannel;                                               // 0x00F8   (0x00F8)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSection
/// Size: 0x0130 (0x0000F0 - 0x000220)
class UMovieSceneFadeSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x00F8   (0x0110)  
	FLinearColor                                       FadeColor;                                                  // 0x0208   (0x0010)  
	bool                                               bFadeAudio : 1;                                             // 0x0218:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0219   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatSection
/// Size: 0x0128 (0x0000F0 - 0x000218)
class UMovieSceneFloatSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00F0   (0x0010)  MISSED
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x0100   (0x0110)  
	UMovieSceneSectionChannelOverrideRegistry*         OverrideRegistry;                                           // 0x0210   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneIntegerSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneIntegerChannel                          IntegerCurve;                                               // 0x00F8   (0x0100)  
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	ELevelVisibility                                   Visibility;                                                 // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TArray<FName>                                      LevelNames;                                                 // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	void SetVisibility(ELevelVisibility InVisibility);                                                                       // [0x3945630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	void SetLevelNames(TArray<FName>& InLevelNames);                                                                         // [0x3945580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	ELevelVisibility GetVisibility();                                                                                        // [0x39446a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	TArray<FName> GetLevelNames();                                                                                           // [0x3944410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertySection
/// Size: 0x0138 (0x0000F0 - 0x000228)
class UMovieSceneObjectPropertySection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneObjectPathChannel                       ObjectChannel;                                              // 0x00F0   (0x0138)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSectionExtender
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneParameterSectionExtender : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneParticleSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneParticleChannel                         ParticleKeys;                                               // 0x00F0   (0x0108)  
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection
/// Size: 0x0140 (0x0000F0 - 0x000230)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneObjectPathChannel                       MaterialChannel;                                            // 0x00F8   (0x0138)  
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
/// Size: 0x0270 (0x0000F0 - 0x000360)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneSkeletalAnimationParams                 Params;                                                     // 0x00F8   (0x0150)  
	UAnimSequence*                                     AnimSequence;                                               // 0x0248   (0x0008)  
	UAnimSequenceBase*                                 Animation;                                                  // 0x0250   (0x0008)  
	float                                              StartOffset;                                                // 0x0258   (0x0004)  
	float                                              EndOffset;                                                  // 0x025C   (0x0004)  
	float                                              PlayRate;                                                   // 0x0260   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0264:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0265   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x0268   (0x0008)  
	FVector                                            StartLocationOffset;                                        // 0x0270   (0x0018)  
	FRotator                                           StartRotationOffset;                                        // 0x0288   (0x0018)  
	bool                                               bMatchWithPrevious;                                         // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	FName                                              MatchedBoneName;                                            // 0x02A4   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	FVector                                            MatchedLocationOffset;                                      // 0x02B0   (0x0018)  
	FRotator                                           MatchedRotationOffset;                                      // 0x02C8   (0x0018)  
	bool                                               bMatchTranslation;                                          // 0x02E0   (0x0001)  
	bool                                               bMatchIncludeZHeight;                                       // 0x02E1   (0x0001)  
	bool                                               bMatchRotationYaw;                                          // 0x02E2   (0x0001)  
	bool                                               bMatchRotationPitch;                                        // 0x02E3   (0x0001)  
	bool                                               bMatchRotationRoll;                                         // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7B];                                      // 0x02E5   (0x007B)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneSlomoSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x00F0   (0x0110)  
};

/// Class /Script/MovieSceneTracks.MovieSceneStringSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneStringSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	FMovieSceneStringChannel                           StringCurve;                                                // 0x00F0   (0x0110)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorSection
/// Size: 0x0450 (0x0000F0 - 0x000540)
class UMovieSceneFloatVectorSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            Curves;                                                     // 0x00F8   (0x0440)  
	int32_t                                            ChannelsUsed;                                               // 0x0538   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x053C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorSection
/// Size: 0x0470 (0x0000F0 - 0x000560)
class UMovieSceneDoubleVectorSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneDoubleChannel                           Curves;                                                     // 0x00F8   (0x0460)  
	int32_t                                            ChannelsUsed;                                               // 0x0558   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x055C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.BoolChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.ByteChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.DoubleChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.FloatChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.IntegerChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScenePropertySystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	UMovieScenePropertyInstantiatorSystem*             InstantiatorSystem;                                         // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBytePropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x190];                                     // 0x0040   (0x0190)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialSystem
/// Size: 0x0160 (0x000040 - 0x0001A0)
class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x160];                                     // 0x0040   (0x0160)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
/// Size: 0x01F0 (0x000040 - 0x000230)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x1F0];                                     // 0x0040   (0x01F0)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentTransformSystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneConstraintSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerSystem
/// Size: 0x0090 (0x000040 - 0x0000D0)
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0040   (0x0090)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneDoublePropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem : UMovieSceneEventSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem : UMovieSceneEventSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostEvalEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem : UMovieSceneEventSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneFadeSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneInitialValueSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
/// Size: 0x0168 (0x000040 - 0x0001A8)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0040   (0x0168)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterSystem
/// Size: 0x0318 (0x000040 - 0x000358)
class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x310];                                     // 0x0040   (0x0310)  MISSED
	UMovieScenePiecewiseDoubleBlenderSystem*           DoubleBlenderSystem;                                        // 0x0350   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem : UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem : UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
/// Size: 0x00C8 (0x000068 - 0x000130)
class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem : UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0068   (0x00C8)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem : UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem : UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0068   (0x0048)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
/// Size: 0x0050 (0x000030 - 0x000080)
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           Result;                                                     // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           Failure;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	UMovieSceneSequencePlayer*                         SequencePlayer;                                             // 0x0060   (0x0008)  
	USceneComponent*                                   SceneComponent;                                             // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
	UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds); // [0x3944c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
	UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime); // [0x3944ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
	UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds); // [0x3944880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
	UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime); // [0x39446c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneTracks.MovieScenePredictionSystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0040   (0x0090)  MISSED
	TArray<UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;                                         // 0x00D0   (0x0010)  
	TArray<UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;                                      // 0x00E0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
/// Size: 0x0208 (0x000040 - 0x000248)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x208];                                     // 0x0040   (0x0208)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionBlenderSystem
/// Size: 0x0070 (0x000068 - 0x0000D8)
class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem : UMovieSceneBlenderSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0068   (0x0070)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSystem
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0040   (0x00A0)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginSystem
/// Size: 0x0038 (0x000040 - 0x000078)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0040   (0x0038)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem : UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.ObjectPathChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
/// Size: 0x0040 (0x000040 - 0x000080)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0040   (0x0038)  MISSED
	UWeightAndEasingEvaluatorSystem*                   EvaluatorSystem;                                            // 0x0078   (0x0008)  
};

/// Class /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
/// Size: 0x0078 (0x000050 - 0x0000C8)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance : UMovieSceneTrackInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0050   (0x0078)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarTrackInstance
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance : UMovieSceneTrackInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0050   (0x0050)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack : UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        ConstraintSections;                                         // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack : UMovieScene3DConstraintTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack : UMovieScene3DConstraintTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformTrack
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C8   (0x0008)  MISSED
	UClass*                                            BlenderSystemClass;                                         // 0x00D0   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        AudioSections;                                              // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneByteTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	UEnum*                                             Enum;                                                       // 0x00C8   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	bool                                               bCanBlend;                                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        CameraShakeSections;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack : UMovieSceneTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        CameraShakeSections;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack : UMovieSceneSubTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	bool                                               bIsSlateColor;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneCVarTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	UEnum*                                             Enum;                                                       // 0x00C8   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0098   (0x0010)  MISSED
	bool                                               bFireEventsWhenForwards : 1;                                // 0x00A8:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards : 1;                               // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00A9   (0x0003)  MISSED
	EFireEventsAtPosition                              EventPosition;                                              // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00B0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack : UMovieSceneFloatTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack : UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00A8   (0x0010)  MISSED
	UMaterialParameterCollection*                      MPC;                                                        // 0x00B8   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack : UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00A8   (0x0010)  MISSED
	int32_t                                            MaterialIndex;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C8   (0x0008)  MISSED
	UClass*                                            PropertyClass;                                              // 0x00D0   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UMovieSceneSection*>                        ParticleSections;                                           // 0x00A0   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	int32_t                                            MaterialIndex;                                              // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
/// Size: 0x00A8 (0x000098 - 0x000140)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        AnimationSections;                                          // 0x0098   (0x0010)  
	bool                                               bUseLegacySectionIndexBlend;                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FMovieSceneSkeletalAnimRootMotionTrackParams       RootMotionParams;                                           // 0x00B0   (0x0080)  
	bool                                               bBlendFirstChildOfRoot;                                     // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack : UMovieSceneFloatTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneStringTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	int32_t                                            NumChannelsUsed;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack : UMovieScenePropertyTrack
{ 
public:
	int32_t                                            NumChannelsUsed;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack : UMovieSceneBoolTrack
{ 
public:
};

/// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
/// Size: 0x07
enum MovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X0                                                 = 0,
	MovieScene3DPathSection_Axis__Y1                                                 = 1,
	MovieScene3DPathSection_Axis__Z2                                                 = 2,
	MovieScene3DPathSection_Axis__NEG_X3                                             = 3,
	MovieScene3DPathSection_Axis__NEG_Y4                                             = 4,
	MovieScene3DPathSection_Axis__NEG_Z5                                             = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX6                       = 6
};

/// Enum /Script/MovieSceneTracks.ELevelVisibility
/// Size: 0x03
enum ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible0                                                       = 0,
	ELevelVisibility__Hidden1                                                        = 1,
	ELevelVisibility__ELevelVisibility_MAX2                                          = 2
};

/// Enum /Script/MovieSceneTracks.EParticleKey
/// Size: 0x04
enum EParticleKey : uint8_t
{
	EParticleKey__Activate0                                                          = 0,
	EParticleKey__Deactivate1                                                        = 1,
	EParticleKey__Trigger2                                                           = 2,
	EParticleKey__EParticleKey_MAX3                                                  = 3
};

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x04
enum EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation0                                      = 0,
	EFireEventsAtPosition__AtEndOfEvaluation1                                        = 1,
	EFireEventsAtPosition__AfterSpawn2                                               = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX3                                = 3
};

