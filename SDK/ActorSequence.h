
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ActorSequence.

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (0x000000 - 0x000028)
struct FActorSequenceObjectReference
{ 
	EActorSequenceObjectReferenceType                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGuid                                              ActorId;                                                    // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            PathToComponent;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
struct FActorSequenceObjectReferences
{ 
	TArray<FActorSequenceObjectReference>              Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FActorSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FActorSequenceObjectReferences>             References;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0028 (0x000068 - 0x000090)
class UActorSequence : public UMovieSceneSequence : UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0068   (0x0008)  
	FActorSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0070   (0x0020)  
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UActorSequenceComponent : public UActorComponent : UActorComponent
{ 
public:
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x00A0   (0x0020)  
	UActorSequence*                                    Sequence;                                                   // 0x00C0   (0x0008)  
	UActorSequencePlayer*                              SequencePlayer;                                             // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/ActorSequence.ActorSequenceComponent.StopSequence
	void StopSequence();                                                                                                     // [0x1b73240] Final|Native|Public|BlueprintCallable 
	// Function /Script/ActorSequence.ActorSequenceComponent.PlaySequence
	void PlaySequence();                                                                                                     // [0x1b73210] Final|Native|Public|BlueprintCallable 
	// Function /Script/ActorSequence.ActorSequenceComponent.PauseSequence
	void PauseSequence();                                                                                                    // [0x1b731e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class UActorSequencePlayer : public UMovieSceneSequencePlayer : UMovieSceneSequencePlayer
{ 
public:
};

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x04
enum EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor0                                 = 0,
	EActorSequenceObjectReferenceType__ExternalActor1                                = 1,
	EActorSequenceObjectReferenceType__Component2                                    = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX3        = 3
};

