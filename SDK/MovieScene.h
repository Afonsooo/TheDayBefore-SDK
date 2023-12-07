
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieScene.

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneSequenceInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationOperand
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneEvaluationOperand
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSequenceID
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneChannel
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMovieSceneChannel
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneFloatChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0050   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FFrameNumber>                               Times;                                                      // 0x0058   (0x0010)  
	TArray<FMovieSceneFloatValue>                      Values;                                                     // 0x0068   (0x0010)  
	float                                              DefaultValue;                                               // 0x0078   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0080   (0x0088)  
	FFrameRate                                         TickResolution;                                             // 0x0108   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneKeyHandleMap
/// Size: 0x0000 (0x000088 - 0x000088)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{ 
};

/// Struct /Script/MovieScene.MovieSceneFloatValue
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneFloatValue
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	FMovieSceneTangentData                             Tangent;                                                    // 0x0004   (0x0014)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0018   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0019   (0x0001)  
	char                                               PaddingByte;                                                // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTangentData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTangentData
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	float                                              ArriveTangentWeight;                                        // 0x0008   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x000C   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneByteChannel
/// Size: 0x00B8 (0x000050 - 0x000108)
struct FMovieSceneByteChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	char                                               DefaultValue;                                               // 0x0060   (0x0001)  
	bool                                               bHasDefaultValue;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	TArray<char>                                       Values;                                                     // 0x0068   (0x0010)  
	UEnum*                                             Enum;                                                       // 0x0078   (0x0008)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0080   (0x0088)  
};

/// Struct /Script/MovieScene.MovieSceneIntegerChannel
/// Size: 0x00B0 (0x000050 - 0x000100)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	int32_t                                            DefaultValue;                                               // 0x0060   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<int32_t>                                    Values;                                                     // 0x0068   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0078   (0x0088)  
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplateBase
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvalTemplateBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplate
/// Size: 0x0010 (0x000010 - 0x000020)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{ 
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	TWeakObjectPtr<UMovieSceneSection*>                SourceSectionPtr;                                           // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneBoolChannel
/// Size: 0x00B0 (0x000050 - 0x000100)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	bool                                               DefaultValue;                                               // 0x0060   (0x0001)  
	bool                                               bHasDefaultValue;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	TArray<bool>                                       Values;                                                     // 0x0068   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0078   (0x0088)  
};

/// Struct /Script/MovieScene.MovieScenePropertyBinding
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieScenePropertyBinding
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	FName                                              PropertyPath;                                               // 0x0008   (0x0008)  
	bool                                               bCanUseClassLookup;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementation
/// Size: 0x0000 (0x000010 - 0x000010)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{ 
};

/// Struct /Script/MovieScene.MovieScenePropertySectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScenePropertySectionData                     PropertyData;                                               // 0x0020   (0x0018)  
};

/// Struct /Script/MovieScene.MovieScenePropertySectionData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieScenePropertySectionData
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	FString                                            PropertyPath;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingID
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneObjectBindingID
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	int32_t                                            SequenceID;                                                 // 0x0010   (0x0004)  
	int32_t                                            ResolveParentIndex;                                         // 0x0014   (0x0004)  
};

/// Struct /Script/MovieScene.ActorForWorldTransforms
/// Size: 0x0018 (0x000000 - 0x000018)
struct FActorForWorldTransforms
{ 
	TWeakObjectPtr<AActor*>                            Actor;                                                      // 0x0000   (0x0008)  
	TWeakObjectPtr<USceneComponent*>                   Component;                                                  // 0x0008   (0x0008)  
	FName                                              SocketName;                                                 // 0x0010   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneDeterminismData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneDeterminismData
{ 
	TArray<FFrameTime>                                 Fences;                                                     // 0x0000   (0x0010)  
	bool                                               bParentSequenceRequiresLowerFence;                          // 0x0010   (0x0001)  
	bool                                               bParentSequenceRequiresUpperFence;                          // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEmptyStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneEmptyStruct
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationKey
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
	uint32_t                                           SectionIndex;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneTrackIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackIdentifier
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneKeyStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneKeyStruct
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.GeneratedMovieSceneKeyStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGeneratedMovieSceneKeyStruct
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneKeyTimeStruct
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSectionParameters
/// Size: 0x0024 (0x000000 - 0x000024)
struct FMovieSceneSectionParameters
{ 
	FFrameNumber                                       StartFrameOffset;                                           // 0x0000   (0x0004)  
	bool                                               bCanLoop;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FFrameNumber                                       EndFrameOffset;                                             // 0x0008   (0x0004)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x000C   (0x0004)  
	float                                              TimeScale;                                                  // 0x0010   (0x0004)  
	int32_t                                            HierarchicalBias;                                           // 0x0014   (0x0004)  
	float                                              StartOffset;                                                // 0x0018   (0x0004)  
	float                                              PrerollTime;                                                // 0x001C   (0x0004)  
	float                                              PostrollTime;                                               // 0x0020   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSegmentIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSegmentIdentifier
{ 
	int32_t                                            IdentifierIndex;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.SectionEvaluationData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSectionEvaluationData
{ 
	int32_t                                            ImplIndex;                                                  // 0x0000   (0x0004)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSegment
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMovieSceneSegment
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceLoopCount
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSequenceLoopCount
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneSequencePlaybackSettings
{ 
	bool                                               bAutoPlay : 1;                                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMovieSceneSequenceLoopCount                       LoopCount;                                                  // 0x0004   (0x0004)  
	FMovieSceneSequenceTickInterval                    TickInterval;                                               // 0x0008   (0x000C)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	float                                              StartTime;                                                  // 0x0018   (0x0004)  
	bool                                               bRandomStartTime : 1;                                       // 0x001C:0 (0x0001)  
	bool                                               bRestoreState : 1;                                          // 0x001C:1 (0x0001)  
	bool                                               bDisableMovementInput : 1;                                  // 0x001C:2 (0x0001)  
	bool                                               bDisableLookAtInput : 1;                                    // 0x001C:3 (0x0001)  
	bool                                               bHidePlayer : 1;                                            // 0x001C:4 (0x0001)  
	bool                                               bHideHud : 1;                                               // 0x001C:5 (0x0001)  
	bool                                               bDisableCameraCuts : 1;                                     // 0x001C:6 (0x0001)  
	bool                                               bPauseAtEnd : 1;                                            // 0x001C:7 (0x0001)  
	bool                                               bInheritTickIntervalFromOwner : 1;                          // 0x001D:0 (0x0001)  
	bool                                               bDynamicWeighting : 1;                                      // 0x001D:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceTickInterval
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneSequenceTickInterval
{ 
	float                                              TickIntervalSeconds;                                        // 0x0000   (0x0004)  
	float                                              EvaluationBudgetMicroseconds;                               // 0x0004   (0x0004)  
	bool                                               bTickWhenPaused;                                            // 0x0008   (0x0001)  
	bool                                               bAllowRounding;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTimeTransform
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneTimeTransform
{ 
	float                                              TimeScale;                                                  // 0x0000   (0x0004)  
	FFrameTime                                         Offset;                                                     // 0x0004   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneAudioTriggerChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneAudioTriggerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	TArray<bool>                                       Values;                                                     // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
};

/// Struct /Script/MovieScene.MovieSceneDoubleValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneDoubleValue
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
	FMovieSceneTangentData                             Tangent;                                                    // 0x0008   (0x0014)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x001C   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x001D   (0x0001)  
	char                                               PaddingByte;                                                // 0x001E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001F   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneDoubleChannel
/// Size: 0x00C8 (0x000050 - 0x000118)
struct FMovieSceneDoubleChannel : FMovieSceneChannel
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0050   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FFrameNumber>                               Times;                                                      // 0x0058   (0x0010)  
	TArray<FMovieSceneDoubleValue>                     Values;                                                     // 0x0068   (0x0010)  
	double                                             DefaultValue;                                               // 0x0078   (0x0008)  
	bool                                               bHasDefaultValue;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0088   (0x0088)  
	FFrameRate                                         TickResolution;                                             // 0x0110   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneObjectPathChannelKeyValue
{ 
	TWeakObjectPtr<UObject*>                           SoftPtr;                                                    // 0x0000   (0x0030)  
	UObject*                                           HardPtr;                                                    // 0x0030   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannel
/// Size: 0x00E8 (0x000050 - 0x000138)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{ 
	UClass*                                            PropertyClass;                                              // 0x0050   (0x0008)  
	TArray<FFrameNumber>                               Times;                                                      // 0x0058   (0x0010)  
	TArray<FMovieSceneObjectPathChannelKeyValue>       Values;                                                     // 0x0068   (0x0010)  
	FMovieSceneObjectPathChannelKeyValue               DefaultValue;                                               // 0x0078   (0x0038)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x00B0   (0x0088)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceCompilerMaskStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneSequenceCompilerMaskStruct
{ 
	bool                                               bHierarchy : 1;                                             // 0x0000:0 (0x0001)  
	bool                                               bEvaluationTemplate : 1;                                    // 0x0000:1 (0x0001)  
	bool                                               bEvaluationTemplateField : 1;                               // 0x0000:2 (0x0001)  
	bool                                               bEntityComponentField : 1;                                  // 0x0000:3 (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneCompiledSequenceFlagStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneCompiledSequenceFlagStruct
{ 
	bool                                               bParentSequenceRequiresLowerFence : 1;                      // 0x0000:0 (0x0001)  
	bool                                               bParentSequenceRequiresUpperFence : 1;                      // 0x0000:1 (0x0001)  
};

/// Struct /Script/MovieScene.EasingComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FEasingComponentData
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceComponent
{ 
	UMovieSceneSection*                                Owner;                                                      // 0x0000   (0x0008)  
	UClass*                                            TrackInstanceClass;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookComponent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneEvaluationHookComponent
{ 
	TScriptInterface<Class>                            Interface;                                                  // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.TrackInstanceInputComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTrackInstanceInputComponent
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
	int32_t                                            OutputIndex;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNode
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEntitySystemGraphNode
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	UMovieSceneEntitySystem*                           System;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNodes
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEntitySystemGraphNodes
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraph
/// Size: 0x0150 (0x000000 - 0x000150)
struct FMovieSceneEntitySystemGraph
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
	FMovieSceneEntitySystemGraphNodes                  Nodes;                                                      // 0x0080   (0x0038)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x00B8   (0x0098)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEvaluationHookEvent
{ 
	FMovieSceneEvaluationHookComponent                 Hook;                                                       // 0x0000   (0x0020)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookEventContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationHookEventContainer
{ 
	TArray<FMovieSceneEvaluationHookEvent>             Events;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationInstanceKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneEvaluationInstanceKey
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceInput
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceInput
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceEntry
{ 
	UObject*                                           BoundObject;                                                // 0x0000   (0x0008)  
	UMovieSceneTrackInstance*                          TrackInstance;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/MovieScene.OptionalMovieSceneBlendType
/// Size: 0x0002 (0x000000 - 0x000002)
struct FOptionalMovieSceneBlendType
{ 
	EMovieSceneBlendType                               BlendType;                                                  // 0x0000   (0x0001)  
	bool                                               bIsValid;                                                   // 0x0001   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplatePtr
/// Size: 0x0088 (0x000000 - 0x000088)
struct FMovieSceneEvalTemplatePtr
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationFieldEntityKey
{ 
	TWeakObjectPtr<UObject*>                           EntityOwner;                                                // 0x0000   (0x0008)  
	uint32_t                                           EntityID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntity
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationFieldEntity
{ 
	FMovieSceneEvaluationFieldEntityKey                Key;                                                        // 0x0000   (0x000C)  
	int32_t                                            SharedMetaDataIndex;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneEvaluationFieldEntityMetaData
{ 
	FString                                            OverrideBoundPropertyPath;                                  // 0x0000   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0010   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0014   (0x0001)  
	bool                                               bEvaluateInSequencePreRoll : 1;                             // 0x0015:0 (0x0001)  
	bool                                               bEvaluateInSequencePostRoll : 1;                            // 0x0015:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityTree
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneEvaluationFieldEntityTree
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntityComponentField
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMovieSceneEntityComponentField
{ 
	FMovieSceneEvaluationFieldEntityTree               PersistentEntityTree;                                       // 0x0000   (0x0060)  
	FMovieSceneEvaluationFieldEntityTree               OneShotEntityTree;                                          // 0x0060   (0x0060)  
	TArray<FMovieSceneEvaluationFieldEntity>           Entities;                                                   // 0x00C0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldEntityMetaData>   EntityMetaData;                                             // 0x00D0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                         // 0x00E0   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSegmentIdentifier                       SegmentID;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneFieldEntry_EvaluationTrack
{ 
	FMovieSceneEvaluationFieldTrackPtr                 TrackPtr;                                                   // 0x0000   (0x0008)  
	uint16_t                                           NumChildren;                                                // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneFieldEntry_ChildTemplate
{ 
	uint16_t                                           ChildIndex;                                                 // 0x0000   (0x0002)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneEvaluationGroupLUTIndex
{ 
	int32_t                                            NumInitPtrs;                                                // 0x0000   (0x0004)  
	int32_t                                            NumEvalPtrs;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroup
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEvaluationGroup
{ 
	TArray<FMovieSceneEvaluationGroupLUTIndex>         LUTIndices;                                                 // 0x0000   (0x0010)  
	TArray<FMovieSceneFieldEntry_EvaluationTrack>      TrackLUT;                                                   // 0x0010   (0x0010)  
	TArray<FMovieSceneFieldEntry_ChildTemplate>        SectionLUT;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneOrderedEvaluationKey
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneOrderedEvaluationKey
{ 
	FMovieSceneEvaluationKey                           Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           SetupIndex;                                                 // 0x000C   (0x0002)  
	uint16_t                                           TearDownIndex;                                              // 0x000E   (0x0002)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneEvaluationMetaData
{ 
	TArray<FMovieSceneSequenceID>                      ActiveSequences;                                            // 0x0000   (0x0010)  
	TArray<FMovieSceneOrderedEvaluationKey>            ActiveEntities;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationField
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEvaluationField
{ 
	TArray<FMovieSceneFrameRange>                      Ranges;                                                     // 0x0000   (0x0010)  
	TArray<FMovieSceneEvaluationGroup>                 Groups;                                                     // 0x0010   (0x0010)  
	TArray<FMovieSceneEvaluationMetaData>              Metadata;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneFrameRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneFrameRange
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTemplateGenerationLedger
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FMovieSceneTemplateGenerationLedger
{ 
	FMovieSceneTrackIdentifier                         LastTrackIdentifier;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TMap<FGuid, FMovieSceneTrackIdentifier>            TrackSignatureToTrackIdentifier;                            // 0x0008   (0x0050)  
	TMap<FGuid, FMovieSceneFrameRange>                 SubSectionRanges;                                           // 0x0058   (0x0050)  
};

/// Struct /Script/MovieScene.MovieSceneSubSectionData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneSubSectionData
{ 
	TWeakObjectPtr<UMovieSceneSubSection*>             Section;                                                    // 0x0000   (0x0008)  
	FGuid                                              ObjectBindingID;                                            // 0x0008   (0x0010)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplateSerialNumber
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneEvaluationTemplateSerialNumber
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplate
/// Size: 0x0160 (0x000000 - 0x000160)
struct FMovieSceneEvaluationTemplate
{ 
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;                                           // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0050   (0x0050)  MISSED
	FGuid                                              SequenceSignature;                                          // 0x00A0   (0x0010)  
	FMovieSceneEvaluationTemplateSerialNumber          TemplateSerialNumber;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FMovieSceneTemplateGenerationLedger                TemplateLedger;                                             // 0x00B8   (0x00A8)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTrack
/// Size: 0x0078 (0x000000 - 0x000078)
struct FMovieSceneEvaluationTrack
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
	uint16_t                                           EvaluationPriority;                                         // 0x0010   (0x0002)  
	EEvaluationMethod                                  EvaluationMethod;                                           // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0013   (0x0001)  MISSED
	TWeakObjectPtr<UMovieSceneTrack*>                  SourceTrack;                                                // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FMovieSceneEvalTemplatePtr>                 ChildTemplates;                                             // 0x0020   (0x0010)  
	FMovieSceneTrackImplementationPtr                  TrackTemplate;                                              // 0x0030   (0x0038)  
	FName                                              EvaluationGroup;                                            // 0x0068   (0x0008)  
	bool                                               bEvaluateInPreroll : 1;                                     // 0x0070:0 (0x0001)  
	bool                                               bEvaluateInPostroll : 1;                                    // 0x0070:1 (0x0001)  
	bool                                               bTearDownPriority : 1;                                      // 0x0070:2 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementationPtr
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneTrackImplementationPtr
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
/// Size: 0x0088 (0x000000 - 0x000088)
struct FMovieSceneRootEvaluationTemplateInstance
{ 
	TWeakObjectPtr<UMovieSceneSequence*>               WeakRootSequence;                                           // 0x0000   (0x0008)  
	UMovieSceneCompiledDataManager*                    CompiledDataManager;                                        // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0010   (0x0018)  MISSED
	UMovieSceneEntitySystemLinker*                     EntitySystemLinker;                                         // 0x0028   (0x0008)  
	TMap<FMovieSceneSequenceID, UObject*>              DirectorInstances;                                          // 0x0030   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FMovieSceneSubSequenceData
{ 
	FSoftObjectPath                                    Sequence;                                                   // 0x0000   (0x0020)  
	FMovieSceneSequenceTransform                       OuterToInnerTransform;                                      // 0x0020   (0x0020)  
	FMovieSceneSequenceTransform                       RootToSequenceTransform;                                    // 0x0040   (0x0020)  
	FFrameRate                                         TickResolution;                                             // 0x0060   (0x0008)  
	FMovieSceneSequenceID                              DeterministicSequenceID;                                    // 0x0068   (0x0004)  
	FMovieSceneFrameRange                              ParentPlayRange;                                            // 0x006C   (0x0010)  
	FFrameNumber                                       ParentStartFrameOffset;                                     // 0x007C   (0x0004)  
	FFrameNumber                                       ParentEndFrameOffset;                                       // 0x0080   (0x0004)  
	FFrameNumber                                       ParentFirstLoopStartFrameOffset;                            // 0x0084   (0x0004)  
	bool                                               bCanLoop;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FMovieSceneFrameRange                              PlayRange;                                                  // 0x008C   (0x0010)  
	FMovieSceneFrameRange                              FullPlayRange;                                              // 0x009C   (0x0010)  
	FMovieSceneFrameRange                              UnwarpedPlayRange;                                          // 0x00AC   (0x0010)  
	FMovieSceneFrameRange                              PreRollRange;                                               // 0x00BC   (0x0010)  
	FMovieSceneFrameRange                              PostRollRange;                                              // 0x00CC   (0x0010)  
	int16_t                                            HierarchicalBias;                                           // 0x00DC   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00DE   (0x0002)  MISSED
	FMovieSceneSequenceInstanceDataPtr                 InstanceData;                                               // 0x00E0   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FGuid                                              SubSectionSignature;                                        // 0x0100   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceDataPtr
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSequenceInstanceDataPtr
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceTransform
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FMovieSceneNestedSequenceTransform>         NestedTransforms;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneNestedSequenceTransform
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneNestedSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	FMovieSceneTimeWarping                             Warping;                                                    // 0x000C   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneTimeWarping
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneTimeWarping
{ 
	FFrameNumber                                       Start;                                                      // 0x0000   (0x0004)  
	FFrameNumber                                       End;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchyNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSequenceHierarchyNode
{ 
	FMovieSceneSequenceID                              ParentID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMovieSceneSequenceID>                      Children;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTreeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSubSequenceTreeEntry
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTree
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneSubSequenceTree
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchy
/// Size: 0x0118 (0x000000 - 0x000118)
struct FMovieSceneSequenceHierarchy
{ 
	FMovieSceneSequenceHierarchyNode                   RootNode;                                                   // 0x0000   (0x0018)  
	FMovieSceneSubSequenceTree                         Tree;                                                       // 0x0018   (0x0060)  
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;                                          // 0x0078   (0x0050)  
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;                                       // 0x00C8   (0x0050)  
};

/// Struct /Script/MovieScene.MovieSceneWarpCounter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneWarpCounter
{ 
	TArray<uint32_t>                                   WarpCounts;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneExpansionState
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneExpansionState
{ 
	bool                                               bExpanded;                                                  // 0x0000   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneMarkedFrame
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneMarkedFrame
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Label;                                                      // 0x0008   (0x0010)  
	bool                                               bIsDeterminismFence;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEditorData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMovieSceneEditorData
{ 
	TMap<FString, FMovieSceneExpansionState>           ExpansionStates;                                            // 0x0000   (0x0050)  
	TArray<FString>                                    PinnedNodes;                                                // 0x0050   (0x0010)  
	double                                             ViewStart;                                                  // 0x0060   (0x0008)  
	double                                             ViewEnd;                                                    // 0x0068   (0x0008)  
	double                                             WorkStart;                                                  // 0x0070   (0x0008)  
	double                                             WorkEnd;                                                    // 0x0078   (0x0008)  
	TSet<FFrameNumber>                                 MarkedFrames;                                               // 0x0080   (0x0050)  
	FFloatRange                                        WorkingRange;                                               // 0x00D0   (0x0010)  
	FFloatRange                                        ViewRange;                                                  // 0x00E0   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneTrackLabels
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackLabels
{ 
	TArray<FString>                                    Strings;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingIDs
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneObjectBindingIDs
{ 
	TArray<FMovieSceneObjectBindingID>                 IDs;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSectionGroup
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneSectionGroup
{ 
	TArray<TWeakObjectPtr>                             Sections;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneBinding
{ 
	FGuid                                              ObjectGuid;                                                 // 0x0000   (0x0010)  
	FString                                            BindingName;                                                // 0x0010   (0x0010)  
	TArray<UMovieSceneTrack*>                          Tracks;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneBindingOverrideData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMovieSceneBindingOverrideData
{ 
	FMovieSceneObjectBindingID                         ObjectBindingID;                                            // 0x0000   (0x0018)  
	TWeakObjectPtr<UObject*>                           Object;                                                     // 0x0018   (0x0030)  
	bool                                               bOverridesDefault;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneBindingProxy
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneBindingProxy
{ 
	FGuid                                              BindingId;                                                  // 0x0000   (0x0010)  
	UMovieSceneSequence*                               Sequence;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/MovieScene.MovieScenePossessable
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMovieScenePossessable
{ 
	TArray<FName>                                      Tags;                                                       // 0x0000   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0010   (0x0010)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	FGuid                                              ParentGuid;                                                 // 0x0030   (0x0010)  
	FMovieSceneObjectBindingID                         SpawnableObjectBindingID;                                   // 0x0040   (0x0018)  
};

/// Struct /Script/MovieScene.MovieSceneSectionEvalOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMovieSceneSectionEvalOptions
{ 
	bool                                               bCanEditCompletionMode;                                     // 0x0000   (0x0001)  
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneEasingSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEasingSettings
{ 
	int32_t                                            AutoEaseInDuration;                                         // 0x0000   (0x0004)  
	int32_t                                            AutoEaseOutDuration;                                        // 0x0004   (0x0004)  
	TScriptInterface<Class>                            EaseIn;                                                     // 0x0008   (0x0010)  
	bool                                               bManualEaseIn;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ManualEaseInDuration;                                       // 0x001C   (0x0004)  
	TScriptInterface<Class>                            EaseOut;                                                    // 0x0020   (0x0010)  
	bool                                               bManualEaseOut;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ManualEaseOutDuration;                                      // 0x0034   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneTimecodeSource
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTimecodeSource
{ 
	FTimecode                                          Timecode;                                                   // 0x0000   (0x0014)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceReplProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneSequenceReplProperties
{ 
	FFrameTime                                         LastKnownPosition;                                          // 0x0000   (0x0008)  
	TEnumAsByte<EMovieScenePlayerStatus>               LastKnownStatus;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            LastKnownNumLoops;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneSequencePlaybackParams
{ 
	FFrameTime                                         Frame;                                                      // 0x0000   (0x0008)  
	float                                              Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            MarkedFrame;                                                // 0x0010   (0x0010)  
	EMovieScenePositionType                            PositionType;                                               // 0x0020   (0x0001)  
	EUpdatePositionMethod                              UpdateMethod;                                               // 0x0021   (0x0001)  
	bool                                               bHasJumped;                                                 // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0023   (0x0005)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequencePlayToParams
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneSequencePlayToParams
{ 
	bool                                               bExclusive;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneSpawnable
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FMovieSceneSpawnable
{ 
	FTransform                                         SpawnTransform;                                             // 0x0000   (0x0060)  
	TArray<FName>                                      Tags;                                                       // 0x0060   (0x0010)  
	bool                                               bContinuouslyRespawn;                                       // 0x0070   (0x0001)  
	bool                                               bNetAddressableName;                                        // 0x0071   (0x0001)  
	bool                                               bEvaluateTracksWhenNotSpawned;                              // 0x0072   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0073   (0x0001)  MISSED
	FGuid                                              Guid;                                                       // 0x0074   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0088   (0x0010)  
	UObject*                                           ObjectTemplate;                                             // 0x0098   (0x0008)  
	TArray<FGuid>                                      ChildPossessables;                                          // 0x00A0   (0x0010)  
	ESpawnOwnership                                    Ownership;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FName                                              LevelName;                                                  // 0x00B4   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackEvalOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackEvalOptions
{ 
	bool                                               bCanEvaluateNearestSection : 1;                             // 0x0000:0 (0x0001)  
	bool                                               bEvalNearestSection : 1;                                    // 0x0000:1 (0x0001)  
	bool                                               bEvaluateInPreroll : 1;                                     // 0x0000:2 (0x0001)  
	bool                                               bEvaluateInPostroll : 1;                                    // 0x0000:3 (0x0001)  
	bool                                               bEvaluateNearestSection : 1;                                // 0x0000:4 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackDisplayOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackDisplayOptions
{ 
	bool                                               bShowVerticalFrames : 1;                                    // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneTrackEvaluationFieldEntry
{ 
	UMovieSceneSection*                                Section;                                                    // 0x0000   (0x0008)  
	FFrameNumberRange                                  Range;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0018   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001D   (0x0001)  MISSED
	int16_t                                            LegacySortOrder;                                            // 0x001E   (0x0002)  
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationField
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackEvaluationField
{ 
	TArray<FMovieSceneTrackEvaluationFieldEntry>       Entries;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.TestMovieSceneEvalTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{ 
};

/// Class /Script/MovieScene.MovieSceneSignedObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UMovieSceneSignedObject : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0028   (0x0004)  MISSED
	FGuid                                              Signature;                                                  // 0x002C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x003C   (0x001C)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSequence
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneSequence : public UMovieSceneSignedObject : UMovieSceneSignedObject
{ 
public:
	UMovieSceneCompiledData*                           CompiledData;                                               // 0x0058   (0x0008)  
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                      // 0x0060   (0x0001)  
	bool                                               bParentContextsAreSignificant;                              // 0x0061   (0x0001)  
	bool                                               bPlayableDirectly;                                          // 0x0062   (0x0001)  
	EMovieSceneSequenceFlags                           SequenceFlags;                                              // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
	FMovieSceneTimecodeSource GetEarliestTimecodeSource();                                                                   // [0x36ad900] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequence.FindBindingsByTag
	TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);                                               // [0x36ad560] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequence.FindBindingByTag
	FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);                                                        // [0x36ad4b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneSection
/// Size: 0x0098 (0x000058 - 0x0000F0)
class UMovieSceneSection : public UMovieSceneSignedObject : UMovieSceneSignedObject
{ 
public:
	FMovieSceneSectionEvalOptions                      EvalOptions;                                                // 0x0058   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	FMovieSceneEasingSettings                          Easing;                                                     // 0x0060   (0x0038)  
	FMovieSceneFrameRange                              SectionRange;                                               // 0x0098   (0x0010)  
	FFrameNumber                                       PreRollFrames;                                              // 0x00A8   (0x0004)  
	FFrameNumber                                       PostRollFrames;                                             // 0x00AC   (0x0004)  
	int32_t                                            RowIndex;                                                   // 0x00B0   (0x0004)  
	int32_t                                            OverlapPriority;                                            // 0x00B4   (0x0004)  
	bool                                               bIsActive : 1;                                              // 0x00B8:0 (0x0001)  
	bool                                               bIsLocked : 1;                                              // 0x00B8:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x00BC   (0x0004)  
	float                                              EndTime;                                                    // 0x00C0   (0x0004)  
	float                                              PrerollTime;                                                // 0x00C4   (0x0004)  
	float                                              PostrollTime;                                               // 0x00C8   (0x0004)  
	bool                                               bIsInfinite : 1;                                            // 0x00CC:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00CD   (0x0003)  MISSED
	bool                                               bSupportsInfiniteRange;                                     // 0x00D0   (0x0001)  
	FOptionalMovieSceneBlendType                       BlendType;                                                  // 0x00D1   (0x0002)  
	unsigned char                                      UnknownData03_6[0x1D];                                      // 0x00D3   (0x001D)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSection.SetRowIndex
	void SetRowIndex(int32_t NewRowIndex);                                                                                   // [0x36af830] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetPreRollFrames
	void SetPreRollFrames(int32_t InPreRollFrames);                                                                          // [0x36af7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetPostRollFrames
	void SetPostRollFrames(int32_t InPostRollFrames);                                                                        // [0x36af710] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetOverlapPriority
	void SetOverlapPriority(int32_t NewPriority);                                                                            // [0x36af560] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetIsLocked
	void SetIsLocked(bool bInIsLocked);                                                                                      // [0x36af4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetIsActive
	void SetIsActive(bool bInIsActive);                                                                                      // [0x36af420] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetCompletionMode
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);                                                      // [0x36af0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetColorTint
	void SetColorTint(FColor& InColorTint);                                                                                  // [0x36af050] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetBlendType
	void SetBlendType(EMovieSceneBlendType InBlendType);                                                                     // [0x36aefd0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.IsLocked
	bool IsLocked();                                                                                                         // [0x36add60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.IsActive
	bool IsActive();                                                                                                         // [0x36add30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetRowIndex
	int32_t GetRowIndex();                                                                                                   // [0x36adae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetPreRollFrames
	int32_t GetPreRollFrames();                                                                                              // [0x20d1de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetPostRollFrames
	int32_t GetPostRollFrames();                                                                                             // [0x20ee2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetOverlapPriority
	int32_t GetOverlapPriority();                                                                                            // [0x36adac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetCompletionMode
	EMovieSceneCompletionMode GetCompletionMode();                                                                           // [0x36ad810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetColorTint
	FColor GetColorTint();                                                                                                   // [0x36ad7e0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetBlendType
	FOptionalMovieSceneBlendType GetBlendType();                                                                             // [0x36ad600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneTrack
/// Size: 0x0040 (0x000058 - 0x000098)
class UMovieSceneTrack : public UMovieSceneSignedObject : UMovieSceneSignedObject
{ 
public:
	FMovieSceneTrackEvalOptions                        EvalOptions;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x005C   (0x0001)  MISSED
	bool                                               bIsEvalDisabled;                                            // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	TArray<int32_t>                                    RowsDisabled;                                               // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0070   (0x0004)  MISSED
	FGuid                                              EvaluationFieldGuid;                                        // 0x0074   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FMovieSceneTrackEvaluationField                    EvaluationField;                                            // 0x0088   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneNameableTrack
/// Size: 0x0000 (0x000098 - 0x000098)
class UMovieSceneNameableTrack : public UMovieSceneTrack : UMovieSceneTrack
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEntitySystem
/// Size: 0x0018 (0x000028 - 0x000040)
class UMovieSceneEntitySystem : public UObject : UObject
{ 
public:
	UMovieSceneEntitySystemLinker*                     Linker;                                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEntityInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEntitySystemLinker
/// Size: 0x06D0 (0x000028 - 0x0006F8)
class UMovieSceneEntitySystemLinker : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x278];                                     // 0x0028   (0x0278)  MISSED
	FMovieSceneEntitySystemGraph                       SystemGraph;                                                // 0x02A0   (0x0150)  
	unsigned char                                      UnknownData01_6[0x308];                                     // 0x03F0   (0x0308)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSubSection
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UMovieSceneSubSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneSectionParameters                       Parameters;                                                 // 0x00F8   (0x0024)  
	float                                              StartOffset;                                                // 0x011C   (0x0004)  
	float                                              TimeScale;                                                  // 0x0120   (0x0004)  
	float                                              PrerollTime;                                                // 0x0124   (0x0004)  
	char                                               NetworkMask;                                                // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0129   (0x0007)  MISSED
	UMovieSceneSequence*                               SubSequence;                                                // 0x0130   (0x0008)  


	/// Functions
	// Function /Script/MovieScene.MovieSceneSubSection.SetSequence
	void SetSequence(UMovieSceneSequence* Sequence);                                                                         // [0x36be140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSubSection.GetSequence
	UMovieSceneSequence* GetSequence();                                                                                      // [0xc8eb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneSequencePlayer
/// Size: 0x0490 (0x000028 - 0x0004B8)
class UMovieSceneSequencePlayer : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x200];                                     // 0x0028   (0x0200)  MISSED
	TScriptInterface<Class>                            Observer;                                                   // 0x0228   (0x0010)  
	FMulticastInlineDelegate                           OnPlay;                                                     // 0x0238   (0x0010)  
	FMulticastInlineDelegate                           OnPlayReverse;                                              // 0x0248   (0x0010)  
	FMulticastInlineDelegate                           OnStop;                                                     // 0x0258   (0x0010)  
	FMulticastInlineDelegate                           OnPause;                                                    // 0x0268   (0x0010)  
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x0278   (0x0010)  
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                     // 0x0288   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0289   (0x0003)  MISSED
	bool                                               bReversePlayback : 1;                                       // 0x028C:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x028D   (0x0003)  MISSED
	UMovieSceneSequence*                               Sequence;                                                   // 0x0290   (0x0008)  
	FFrameNumber                                       StartTime;                                                  // 0x0298   (0x0004)  
	int32_t                                            DurationFrames;                                             // 0x029C   (0x0004)  
	float                                              DurationSubFrames;                                          // 0x02A0   (0x0004)  
	int32_t                                            CurrentNumLoops;                                            // 0x02A4   (0x0004)  
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02A8   (0x0020)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02C8   (0x0088)  
	unsigned char                                      UnknownData03_5[0x90];                                      // 0x0350   (0x0090)  MISSED
	FMovieSceneSequenceReplProperties                  NetSyncProps;                                               // 0x03E0   (0x0010)  
	TScriptInterface<Class>                            PlaybackClient;                                             // 0x03F0   (0x0010)  
	UMovieSceneSequenceTickManager*                    TickManager;                                                // 0x0400   (0x0008)  
	unsigned char                                      UnknownData04_6[0xB0];                                      // 0x0408   (0x00B0)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	void StopAtCurrentTime();                                                                                                // [0x36afbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Stop
	void Stop();                                                                                                             // [0x36afb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetWeight
	void SetWeight(double InWeight);                                                                                         // [0x36afaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetTimeRange
	void SetTimeRange(float StartTime, float Duration);                                                                      // [0x36af8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlayRate
	void SetPlayRate(float PlayRate);                                                                                        // [0x18f2730] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);                                              // [0x36af5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRate
	void SetFrameRate(FFrameRate FrameRate);                                                                                 // [0x36af2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRange
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);                                               // [0x36af1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	void SetDisableCameraCuts(bool bInDisableCameraCuts);                                                                    // [0x36af140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	void ScrubToSeconds(float TimeInSeconds);                                                                                // [0x36aef20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	bool ScrubToMarkedFrame(FString InLabel);                                                                                // [0x36aee10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	void ScrubToFrame(FFrameTime NewPosition);                                                                               // [0x36aed60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Scrub
	void Scrub();                                                                                                            // [0x36aed40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	void RPC_OnStopEvent(FFrameTime StoppedTime);                                                                            // [0x36aec00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
	void RPC_OnFinishPlaybackEvent(FFrameTime StoppedTime);                                                                  // [0x36aeb70] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);                               // [0x36aeaa0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RestoreState
	void RestoreState();                                                                                                     // [0x36aecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RemoveWeight
	void RemoveWeight();                                                                                                     // [0x36aec90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	void PlayToSeconds(float TimeInSeconds);                                                                                 // [0x36ae9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	bool PlayToMarkedFrame(FString InLabel);                                                                                 // [0x36ae8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToFrame
	void PlayToFrame(FFrameTime NewPosition);                                                                                // [0x36ae830] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayTo
	void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams, FMovieSceneSequencePlayToParams PlayToParams);             // [0x36ae490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayReverse
	void PlayReverse();                                                                                                      // [0x36ae470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayLooping
	void PlayLooping(int32_t NumLoops);                                                                                      // [0x36ae3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Play
	void Play();                                                                                                             // [0x36ae3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Pause
	void Pause();                                                                                                            // [0x36ae3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	void JumpToSeconds(float TimeInSeconds);                                                                                 // [0x36adfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	bool JumpToMarkedFrame(FString InLabel);                                                                                 // [0x36adea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToFrame
	void JumpToFrame(FFrameTime NewPosition);                                                                                // [0x36addf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsReversed
	bool IsReversed();                                                                                                       // [0x11e5ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPlaying
	bool IsPlaying();                                                                                                        // [0x36addc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPaused
	bool IsPaused();                                                                                                         // [0x36add90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	void GoToEndAndStop();                                                                                                   // [0x36adc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetStartTime
	FQualifiedFrameTime GetStartTime();                                                                                      // [0x36adbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequenceName
	FString GetSequenceName(bool bAddClientInfo);                                                                            // [0x36adb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequence
	UMovieSceneSequence* GetSequence();                                                                                      // [0x18f6430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlayRate
	float GetPlayRate();                                                                                                     // [0x18f16f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);                                                 // [0x36ad9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameRate
	FFrameRate GetFrameRate();                                                                                               // [0x36ad9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	int32_t GetFrameDuration();                                                                                              // [0x36ad990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetEndTime
	FQualifiedFrameTime GetEndTime();                                                                                        // [0x36ad940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDuration
	FQualifiedFrameTime GetDuration();                                                                                       // [0x36ad890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	bool GetDisableCameraCuts();                                                                                             // [0x36ad860] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x36ad830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x36ad630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	void ChangePlaybackDirection();                                                                                          // [0x36ad490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieScene.MovieSceneSubTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneHookSection
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UMovieSceneHookSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00F0   (0x0010)  MISSED
	bool                                               bRequiresRangedHook : 1;                                    // 0x0100:0 (0x0001)  
	bool                                               bRequiresTriggerHooks : 1;                                  // 0x0100:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieSceneBlenderSystemSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBlenderSystemSupport : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneChannelOverrideProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneChannelOverrideProvider : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneDeterminismSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneDeterminismSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEvaluationHook
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEvaluationHook : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieScenePlaybackClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePlaybackClient : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequencePlayerObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequencePlayerObserver : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBindingOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingOwnerInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneCachedTrack
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCachedTrack : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEasingFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEasingFunction : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneKeyProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneKeyProxy : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManagerClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequenceTickManagerClient : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneChannelOverrideContainer
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject : UMovieSceneSignedObject
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSectionChannelOverrideRegistry
/// Size: 0x0050 (0x000028 - 0x000078)
class UMovieSceneSectionChannelOverrideRegistry : public UObject : UObject
{ 
public:
	TMap<FName, UMovieSceneChannelOverrideContainer*>  Overrides;                                                  // 0x0028   (0x0050)  
};

/// Class /Script/MovieScene.MovieSceneTrackTemplateProducer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTrackTemplateProducer : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneCompiledData
/// Size: 0x03D0 (0x000028 - 0x0003F8)
class UMovieSceneCompiledData : public UObject : UObject
{ 
public:
	FMovieSceneEvaluationTemplate                      EvaluationTemplate;                                         // 0x0028   (0x0160)  
	FMovieSceneSequenceHierarchy                       Hierarchy;                                                  // 0x0188   (0x0118)  
	FMovieSceneEntityComponentField                    EntityComponentField;                                       // 0x02A0   (0x00F0)  
	FMovieSceneEvaluationField                         TrackTemplateField;                                         // 0x0390   (0x0030)  
	TArray<FFrameTime>                                 DeterminismFences;                                          // 0x03C0   (0x0010)  
	FGuid                                              CompiledSignature;                                          // 0x03D0   (0x0010)  
	FGuid                                              CompilerVersion;                                            // 0x03E0   (0x0010)  
	FMovieSceneSequenceCompilerMaskStruct              AccumulatedMask;                                            // 0x03F0   (0x0001)  
	FMovieSceneSequenceCompilerMaskStruct              AllocatedMask;                                              // 0x03F1   (0x0001)  
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                           // 0x03F2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x03F3   (0x0005)  MISSED
};

/// Class /Script/MovieScene.MovieSceneCompiledDataManager
/// Size: 0x0208 (0x000028 - 0x000230)
class UMovieSceneCompiledDataManager : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0028   (0x00B0)  MISSED
	TMap<int32_t, FMovieSceneSequenceHierarchy>        Hierarchies;                                                // 0x00D8   (0x0050)  
	TMap<int32_t, FMovieSceneEvaluationTemplate>       TrackTemplates;                                             // 0x0128   (0x0050)  
	TMap<int32_t, FMovieSceneEvaluationField>          TrackTemplateFields;                                        // 0x0178   (0x0050)  
	TMap<int32_t, FMovieSceneEntityComponentField>     EntityComponentFields;                                      // 0x01C8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0218   (0x0018)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEntityProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEntityProvider : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBlenderSystem
/// Size: 0x0028 (0x000040 - 0x000068)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Class /Script/MovieScene.MovieSceneGenericBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneValueDecomposer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneValueDecomposer : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEvalTimeSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEvaluationHookSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;   // 0x0040   (0x0050)  
};

/// Class /Script/MovieScene.MovieScenePreAnimatedStateSystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneRootInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSpawnablesSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneTrackInstance
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneTrackInstance : public UObject : UObject
{ 
public:
	UObject*                                           AnimatedObject;                                             // 0x0028   (0x0008)  
	bool                                               bIsRootTrackInstance;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	UMovieSceneEntitySystemLinker*                     PrivateLinker;                                              // 0x0038   (0x0008)  
	TArray<FMovieSceneTrackInstanceInput>              Inputs;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0040   (0x00B0)  MISSED
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceSystem
/// Size: 0x0008 (0x000040 - 0x000048)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem : UMovieSceneEntitySystem
{ 
public:
	UMovieSceneTrackInstanceInstantiator*              Instantiator;                                               // 0x0040   (0x0008)  
};

/// Class /Script/MovieScene.MovieSceneCustomClockSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCustomClockSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBuiltInEasingFunction
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneBuiltInEasingFunction : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	EMovieSceneBuiltInEasing                           Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEasingExternalCurve
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneEasingExternalCurve : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UCurveFloat*                                       Curve;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/MovieScene.NodeAndChannelMappings
/// Size: 0x0000 (0x000028 - 0x000028)
class UNodeAndChannelMappings : public UInterface : UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroup
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroup : public UObject : UObject
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroupCollection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroupCollection : public UObject : UObject
{ 
public:
};

/// Class /Script/MovieScene.MovieScene
/// Size: 0x0108 (0x000058 - 0x000160)
class UMovieScene : public UMovieSceneSignedObject : UMovieSceneSignedObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0058   (0x0008)  MISSED
	TArray<FMovieSceneSpawnable>                       Spawnables;                                                 // 0x0060   (0x0010)  
	TArray<FMovieScenePossessable>                     Possessables;                                               // 0x0070   (0x0010)  
	TArray<FMovieSceneBinding>                         ObjectBindings;                                             // 0x0080   (0x0010)  
	TMap<FName, FMovieSceneObjectBindingIDs>           BindingGroups;                                              // 0x0090   (0x0050)  
	TArray<UMovieSceneTrack*>                          Tracks;                                                     // 0x00E0   (0x0010)  
	UMovieSceneTrack*                                  CameraCutTrack;                                             // 0x00F0   (0x0008)  
	FMovieSceneFrameRange                              SelectionRange;                                             // 0x00F8   (0x0010)  
	FMovieSceneFrameRange                              PlaybackRange;                                              // 0x0108   (0x0010)  
	FFrameRate                                         TickResolution;                                             // 0x0118   (0x0008)  
	FFrameRate                                         DisplayRate;                                                // 0x0120   (0x0008)  
	EMovieSceneEvaluationType                          EvaluationType;                                             // 0x0128   (0x0001)  
	EUpdateClockSource                                 ClockSource;                                                // 0x0129   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x012A   (0x0006)  MISSED
	FSoftObjectPath                                    CustomClockSourcePath;                                      // 0x0130   (0x0020)  
	TArray<FMovieSceneMarkedFrame>                     MarkedFrames;                                               // 0x0150   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneBindingOverrides
/// Size: 0x0068 (0x000028 - 0x000090)
class UMovieSceneBindingOverrides : public UObject : UObject
{ 
public:
	TArray<FMovieSceneBindingOverrideData>             BindingData;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Class /Script/MovieScene.MovieSceneFolder
/// Size: 0x0050 (0x000028 - 0x000078)
class UMovieSceneFolder : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0028   (0x0004)  MISSED
	FName                                              FolderName;                                                 // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<UMovieSceneFolder*>                         ChildFolders;                                               // 0x0038   (0x0010)  
	TArray<UMovieSceneTrack*>                          ChildTracks;                                                // 0x0048   (0x0010)  
	TArray<FString>                                    ChildObjectBindingStrings;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManager
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovieSceneSequenceTickManager : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED
};

/// Class /Script/MovieScene.MovieSceneBoolSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneBoolSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	bool                                               DefaultValue;                                               // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x00F8   (0x0100)  
};

/// Class /Script/MovieScene.MovieSceneSpawnSection
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection : UMovieSceneBoolSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Class /Script/MovieScene.TestMovieSceneTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UTestMovieSceneTrack : public UMovieSceneTrack : UMovieSceneTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	bool                                               bHighPassFilter;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<UMovieSceneSection*>                        SectionArray;                                               // 0x00A8   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneSection
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UTestMovieSceneSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
};

/// Class /Script/MovieScene.TestMovieSceneSequence
/// Size: 0x0008 (0x000068 - 0x000070)
class UTestMovieSceneSequence : public UMovieSceneSequence : UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0068   (0x0008)  
};

/// Class /Script/MovieScene.TestMovieSceneSubTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack : UMovieSceneSubTrack
{ 
public:
	TArray<UMovieSceneSection*>                        SectionArray;                                               // 0x00A8   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneSubSection
/// Size: 0x0000 (0x000138 - 0x000138)
class UTestMovieSceneSubSection : public UMovieSceneSubSection : UMovieSceneSubSection
{ 
public:
};

/// Class /Script/MovieScene.TestMovieSceneEvalHookTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack : UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        SectionArray;                                               // 0x0098   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneEvalHookSection
/// Size: 0x0018 (0x000108 - 0x000120)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection : UMovieSceneHookSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0108   (0x0018)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSpawnTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UMovieSceneSpawnTrack : public UMovieSceneTrack : UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
	FGuid                                              ObjectGuid;                                                 // 0x00A8   (0x0010)  
};

/// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
/// Size: 0x06
enum EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto0                                               = 0,
	EMovieSceneKeyInterpolation__User1                                               = 1,
	EMovieSceneKeyInterpolation__Break2                                              = 2,
	EMovieSceneKeyInterpolation__Linear3                                             = 3,
	EMovieSceneKeyInterpolation__Constant4                                           = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX5                    = 5
};

/// Enum /Script/MovieScene.EMovieSceneCompletionMode
/// Size: 0x04
enum EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState0                                            = 0,
	EMovieSceneCompletionMode__RestoreState1                                         = 1,
	EMovieSceneCompletionMode__ProjectDefault2                                       = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX3                        = 3
};

/// Enum /Script/MovieScene.EMovieScenePlayerStatus
/// Size: 0x07
enum EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped0                                                = 0,
	EMovieScenePlayerStatus__Playing1                                                = 1,
	EMovieScenePlayerStatus__Scrubbing2                                              = 2,
	EMovieScenePlayerStatus__Jumping3                                                = 3,
	EMovieScenePlayerStatus__Stepping4                                               = 4,
	EMovieScenePlayerStatus__Paused5                                                 = 5,
	EMovieScenePlayerStatus__MAX6                                                    = 6
};

/// Enum /Script/MovieScene.EMovieSceneEvaluationType
/// Size: 0x03
enum EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked0                                          = 0,
	EMovieSceneEvaluationType__WithSubFrames1                                        = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX2                        = 2
};

/// Enum /Script/MovieScene.EUpdateClockSource
/// Size: 0x08
enum EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick0                                                        = 0,
	EUpdateClockSource__Platform1                                                    = 1,
	EUpdateClockSource__Audio2                                                       = 2,
	EUpdateClockSource__RelativeTimecode3                                            = 3,
	EUpdateClockSource__Timecode4                                                    = 4,
	EUpdateClockSource__PlayEveryFrame5                                              = 5,
	EUpdateClockSource__Custom6                                                      = 6,
	EUpdateClockSource__EUpdateClockSource_MAX7                                      = 7
};

/// Enum /Script/MovieScene.EMovieSceneSequenceFlags
/// Size: 0x06
enum EMovieSceneSequenceFlags : uint8_t
{
	EMovieSceneSequenceFlags__None0                                                  = 0,
	EMovieSceneSequenceFlags__Volatile1                                              = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation2                                    = 2,
	EMovieSceneSequenceFlags__DynamicWeighting3                                      = 4,
	EMovieSceneSequenceFlags__InheritedFlags4                                        = 1,
	EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX5                          = 5
};

/// Enum /Script/MovieScene.EMovieSceneServerClientMask
/// Size: 0x05
enum EMovieSceneServerClientMask : uint8_t
{
	EMovieSceneServerClientMask__None0                                               = 0,
	EMovieSceneServerClientMask__Server1                                             = 1,
	EMovieSceneServerClientMask__Client2                                             = 2,
	EMovieSceneServerClientMask__All3                                                = 3,
	EMovieSceneServerClientMask__EMovieSceneServerClientMask_MAX4                    = 4
};

/// Enum /Script/MovieScene.ESectionEvaluationFlags
/// Size: 0x04
enum ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None0                                                   = 0,
	ESectionEvaluationFlags__PreRoll1                                                = 1,
	ESectionEvaluationFlags__PostRoll2                                               = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX3                            = 3
};

/// Enum /Script/MovieScene.EMovieSceneBlendType
/// Size: 0x06
enum EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid0                                                   = 0,
	EMovieSceneBlendType__Absolute1                                                  = 1,
	EMovieSceneBlendType__Additive2                                                  = 2,
	EMovieSceneBlendType__Relative3                                                  = 4,
	EMovieSceneBlendType__AdditiveFromBase4                                          = 8,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX5                                  = 9
};

/// Enum /Script/MovieScene.EEvaluationMethod
/// Size: 0x03
enum EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static0                                                       = 0,
	EEvaluationMethod__Swept1                                                        = 1,
	EEvaluationMethod__EEvaluationMethod_MAX2                                        = 2
};

/// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
/// Size: 0x26
enum EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear0                                                = 0,
	EMovieSceneBuiltInEasing__SinIn1                                                 = 1,
	EMovieSceneBuiltInEasing__SinOut2                                                = 2,
	EMovieSceneBuiltInEasing__SinInOut3                                              = 3,
	EMovieSceneBuiltInEasing__QuadIn4                                                = 4,
	EMovieSceneBuiltInEasing__QuadOut5                                               = 5,
	EMovieSceneBuiltInEasing__QuadInOut6                                             = 6,
	EMovieSceneBuiltInEasing__Cubic7                                                 = 7,
	EMovieSceneBuiltInEasing__CubicIn8                                               = 8,
	EMovieSceneBuiltInEasing__CubicOut9                                              = 9,
	EMovieSceneBuiltInEasing__CubicInOut10                                           = 10,
	EMovieSceneBuiltInEasing__HermiteCubicInOut11                                    = 11,
	EMovieSceneBuiltInEasing__QuartIn12                                              = 12,
	EMovieSceneBuiltInEasing__QuartOut13                                             = 13,
	EMovieSceneBuiltInEasing__QuartInOut14                                           = 14,
	EMovieSceneBuiltInEasing__QuintIn15                                              = 15,
	EMovieSceneBuiltInEasing__QuintOut16                                             = 16,
	EMovieSceneBuiltInEasing__QuintInOut17                                           = 17,
	EMovieSceneBuiltInEasing__ExpoIn18                                               = 18,
	EMovieSceneBuiltInEasing__ExpoOut19                                              = 19,
	EMovieSceneBuiltInEasing__ExpoInOut20                                            = 20,
	EMovieSceneBuiltInEasing__CircIn21                                               = 21,
	EMovieSceneBuiltInEasing__CircOut22                                              = 22,
	EMovieSceneBuiltInEasing__CircInOut23                                            = 23,
	EMovieSceneBuiltInEasing__Custom24                                               = 24,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX25                         = 25
};

/// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
/// Size: 0x04
enum EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local0                                            = 0,
	EMovieSceneObjectBindingSpace__Root1                                             = 1,
	EMovieSceneObjectBindingSpace__Unused2                                           = 2,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX3                = 3
};

/// Enum /Script/MovieScene.EUpdatePositionMethod
/// Size: 0x04
enum EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play0                                                     = 0,
	EUpdatePositionMethod__Jump1                                                     = 1,
	EUpdatePositionMethod__Scrub2                                                    = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX3                                = 3
};

/// Enum /Script/MovieScene.EMovieScenePositionType
/// Size: 0x04
enum EMovieScenePositionType : uint8_t
{
	EMovieScenePositionType__Frame0                                                  = 0,
	EMovieScenePositionType__Time1                                                   = 1,
	EMovieScenePositionType__MarkedFrame2                                            = 2,
	EMovieScenePositionType__EMovieScenePositionType_MAX3                            = 3
};

/// Enum /Script/MovieScene.ESpawnOwnership
/// Size: 0x04
enum ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence0                                                  = 0,
	ESpawnOwnership__RootSequence1                                                   = 1,
	ESpawnOwnership__External2                                                       = 2,
	ESpawnOwnership__ESpawnOwnership_MAX3                                            = 3
};

