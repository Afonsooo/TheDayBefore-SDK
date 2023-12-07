
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SequencerScripting.

/// Struct /Script/SequencerScripting.SequencerScriptingRange
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSequencerScriptingRange
{ 
	bool                                               bHasStart : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bHasEnd : 1;                                                // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            InclusiveStart;                                             // 0x0004   (0x0004)  
	int32_t                                            ExclusiveEnd;                                               // 0x0008   (0x0004)  
	FFrameRate                                         InternalRate;                                               // 0x000C   (0x0008)  
};

/// Class /Script/SequencerScripting.MovieSceneScriptingKey
/// Size: 0x0018 (0x000028 - 0x000040)
class UMovieSceneScriptingKey : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingChannel
/// Size: 0x0008 (0x000028 - 0x000030)
class UMovieSceneScriptingChannel : public UObject : UObject
{ 
public:
	FName                                              ChannelName;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActualFloatKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey : UMovieSceneScriptingFloatKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey : UMovieSceneScriptingFloatKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
/// Size: 0x0050 (0x000030 - 0x000080)
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringKey
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey : UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel : UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneBindingExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneFolderExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneMaterialTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneSectionExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SequencerScripting.SequencerScriptingRangeExtensions
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/SequencerScripting.ESequenceTimeUnit
/// Size: 0x03
enum ESequenceTimeUnit : uint8_t
{
	ESequenceTimeUnit__DisplayRate0                                                  = 0,
	ESequenceTimeUnit__TickResolution1                                               = 1,
	ESequenceTimeUnit__ESequenceTimeUnit_MAX2                                        = 2
};

