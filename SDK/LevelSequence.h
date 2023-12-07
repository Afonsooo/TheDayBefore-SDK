
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LevelSequence.

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                  // 0x0001   (0x0001)  
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceAnimSequenceLinkItem
{ 
	FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)  
	FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0020)  
	bool                                               bExportTransforms;                                          // 0x0030   (0x0001)  
	bool                                               bExportMorphTargets;                                        // 0x0031   (0x0001)  
	bool                                               bExportAttributeCurves;                                     // 0x0032   (0x0001)  
	bool                                               bExportMaterialCurves;                                      // 0x0033   (0x0001)  
	EAnimInterpolationType                             Interpolation;                                              // 0x0034   (0x0001)  
	TEnumAsByte<ERichCurveInterpMode>                  CurveInterpolation;                                         // 0x0035   (0x0001)  
	bool                                               bRecordInWorldSpace;                                        // 0x0036   (0x0001)  
	bool                                               bEvaluateAllSkeletalMeshComponents;                         // 0x0037   (0x0001)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0040 (0x000000 - 0x000040)
struct FLevelSequenceBindingReference
{ 
	FString                                            PackageName;                                                // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0020)  
	FString                                            ObjectPath;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FLevelSequenceBindingReferences
{ 
	TMap<FGuid, FLevelSequenceBindingReferenceArray>   BindingIdToReferences;                                      // 0x0000   (0x0050)  
	TSet<FGuid>                                        AnimSequenceInstances;                                      // 0x0050   (0x0050)  
	TSet<FGuid>                                        PostProcessInstances;                                       // 0x00A0   (0x0050)  
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceObject
{ 
	TLazyObjectPtr<UObject*>                           ObjectOrOwner;                                              // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0020   (0x0010)  
	TWeakObjectPtr<UObject*>                           CachedComponent;                                            // 0x0030   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLevelSequenceSnapshotSettings
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FLevelSequencePlayerSnapshot
{ 
	FString                                            RootName;                                                   // 0x0000   (0x0010)  
	FQualifiedFrameTime                                RootTime;                                                   // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	FString                                            CurrentShotName;                                            // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	FString                                            SourceTimecode;                                             // 0x0060   (0x0010)  
	TWeakObjectPtr<UCameraComponent*>                  CameraComponent;                                            // 0x0070   (0x0030)  
	ULevelSequence*                                    ActiveShot;                                                 // 0x00A0   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FString                                            MasterName;                                                 // 0x00B0   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x00C0   (0x0010)  
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01B8 (0x000068 - 0x000220)
class ULevelSequence : public UMovieSceneSequence : UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	UMovieScene*                                       MovieScene;                                                 // 0x0070   (0x0008)  
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0078   (0x0050)  
	FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x00C8   (0x00F0)  
	TMap<FString, FLevelSequenceObject>                PossessedObjects;                                           // 0x01B8   (0x0050)  
	UClass*                                            DirectorClass;                                              // 0x0208   (0x0008)  
	TArray<UAssetUserData*>                            AssetUserData;                                              // 0x0210   (0x0010)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	void RemoveMetaDataByClass(UClass* InClass);                                                                             // [0x1b2a540] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	UObject* FindOrAddMetaDataByClass(UClass* InClass);                                                                      // [0x3c66700] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	UObject* FindMetaDataByClass(UClass* InClass);                                                                           // [0x3c66700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	UObject* CopyMetaData(UObject* InMetaData);                                                                              // [0x3c66700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDefaultLevelSequenceInstanceData : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	AActor*                                            TransformOriginActor;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0060)  
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceMetaData : public UInterface : UInterface
{ 
public:
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0030 (0x000028 - 0x000058)
class UAnimSequenceLevelSequenceLink : public UAssetUserData : UAssetUserData
{ 
public:
	FGuid                                              SkelTrackGuid;                                              // 0x0028   (0x0010)  
	FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0038   (0x0020)  
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceBurnInInitSettings : public UObject : UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0030 (0x000028 - 0x000058)
class ULevelSequenceBurnInOptions : public UObject : UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0020)  
	ULevelSequenceBurnInInitSettings*                  Settings;                                                   // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x3c67d50] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0078 (0x000290 - 0x000308)
class ALevelSequenceActor : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0290   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02A0   (0x0020)  
	ULevelSequencePlayer*                              SequencePlayer;                                             // 0x02C0   (0x0008)  
	ULevelSequence*                                    LevelSequenceAsset;                                         // 0x02C8   (0x0008)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x02D0   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02D2   (0x0006)  MISSED
	ULevelSequenceBurnInOptions*                       BurnInOptions;                                              // 0x02D8   (0x0008)  
	UMovieSceneBindingOverrides*                       BindingOverrides;                                           // 0x02E0   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x02E8:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x02E8:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x02E8:2 (0x0001)  
	unsigned char                                      UnknownData02_4[0x7];                                       // 0x02E9   (0x0007)  MISSED
	UObject*                                           DefaultInstanceData;                                        // 0x02F0   (0x0008)  
	ULevelSequenceBurnIn*                              BurnInInstance;                                             // 0x02F8   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x0300   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0301   (0x0007)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	void ShowBurnin();                                                                                                       // [0x3c67fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	void SetSequence(ULevelSequence* InSequence);                                                                            // [0x3c67f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x3c67e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x3c67c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x3c67ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	void ResetBindings();                                                                                                    // [0x3c67a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x3c679b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	void RemoveBindingByTag(FName Tag, AActor* Actor);                                                                       // [0x3c678e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);                                                   // [0x3c677e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x2407bf0] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
	ULevelSequence* LoadSequence();                                                                                          // [0x3c67580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	void HideBurnin();                                                                                                       // [0x3c676b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	ULevelSequencePlayer* GetSequencePlayer();                                                                               // [0x3c67630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	ULevelSequence* GetSequence();                                                                                           // [0x3c67580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                         // [0x3c66bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                                  // [0x3c66ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);                                     // [0x3c665f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);                        // [0x3c664a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.ReplicatedLevelSequenceActor
/// Size: 0x0000 (0x000308 - 0x000308)
class AReplicatedLevelSequenceActor : public ALevelSequenceActor : ALevelSequenceActor
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceAnimSequenceLink : public UAssetUserData : UAssetUserData
{ 
public:
	TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0028   (0x0010)  
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00D8 (0x000280 - 0x000358)
class ULevelSequenceBurnIn : public UUserWidget : UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0280   (0x00D0)  
	ALevelSequenceActor*                               LevelSequenceActor;                                         // 0x0350   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	void SetSettings(UObject* InSettings);                                                                                   // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	UClass* GetSettingsClass();                                                                                              // [0x3c67670] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceDirector : public UObject : UObject
{ 
public:
	ULevelSequencePlayer*                              Player;                                                     // 0x0028   (0x0008)  
	int32_t                                            SubSequenceID;                                              // 0x0030   (0x0004)  
	int32_t                                            MovieScenePlayerIndex;                                      // 0x0034   (0x0004)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	void OnCreated();                                                                                                        // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	UMovieSceneSequence* GetSequence();                                                                                      // [0x3c675a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetRootSequenceTime
	FQualifiedFrameTime GetRootSequenceTime();                                                                               // [0x3c67540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
	FQualifiedFrameTime GetMasterSequenceTime();                                                                             // [0x3c67500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetCurrentTime
	FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x3c67380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x3c671d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                       // [0x3c67090] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x3c66ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                         // [0x3c66d50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint : UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0130 (0x0004B8 - 0x0005E8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer : UMovieSceneSequencePlayer
{ 
public:
	FMulticastInlineDelegate                           OnCameraCut;                                                // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x120];                                     // 0x04C8   (0x0120)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	UCameraComponent* GetActiveCameraComponent();                                                                            // [0x3c66d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor); // [0x3c66780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000038 - 0x000068)
class ULevelSequenceProjectSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               bDefaultLockEngineToDisplayRate;                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            DefaultDisplayRate;                                         // 0x0040   (0x0010)  
	FString                                            DefaultTickResolution;                                      // 0x0050   (0x0010)  
	EUpdateClockSource                                 DefaultClockSource;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ALevelSequenceMediaController : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	ALevelSequenceActor*                               Sequence;                                                   // 0x0298   (0x0008)  
	UMediaComponent*                                   MediaComponent;                                             // 0x02A0   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x02AC   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x3c68000] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	void Play();                                                                                                             // [0x3c676f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	void OnRep_ServerStartTimeSeconds();                                                                                     // [0x3c676d0] Final|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	ALevelSequenceActor* GetSequence();                                                                                      // [0xd0b6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	UMediaComponent* GetMediaComponent();                                                                                    // [0x14c6c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

