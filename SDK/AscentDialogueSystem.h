
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AscentDialogueSystem.

/// Class /Script/AscentDialogueSystem.ADSDialogue
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UADSDialogue : public UAGSGraph : UAGSGraph
{ 
public:
	FMulticastInlineDelegate                           OnDialogueStarted;                                          // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnDialogueEnded;                                            // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnDialogueNodeActivated;                                    // 0x00C8   (0x0010)  
	FGameplayTag                                       DialogueTag;                                                // 0x00D8   (0x0008)  
	TMap<FGameplayTag, UADSDialoguePartecipantComponent*> partecipantsRef;                                         // 0x00E0   (0x0050)  
	UADSGraphNode*                                     currentNode;                                                // 0x0130   (0x0008)  
	UADSStartDialogueNode*                             currentDialogueStart;                                       // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/AscentDialogueSystem.ADSDialogue.StartDialogue
	UAGSGraphNode* StartDialogue(APlayerController* InController, TArray<UADSDialoguePartecipantComponent*>& participants);  // [0xc8f2d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialogue.MoveToNextNode
	UADSDialogueNode* MoveToNextNode();                                                                                      // [0xc8f010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialogue.IsDialogueStarted
	bool IsDialogueStarted();                                                                                                // [0xc8ef60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialogue.HasPartecipant
	bool HasPartecipant(FGameplayTag& partecipantTag);                                                                       // [0xc8eeb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialogue.GetDialogueTag
	FGameplayTag GetDialogueTag();                                                                                           // [0xc8ec70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialogue.GetCurrentNode
	UADSGraphNode* GetCurrentNode();                                                                                         // [0xc8eb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialogue.GetAllButtonAnswersForCurrentNode
	TArray<UADSDialogueResponseNode*> GetAllButtonAnswersForCurrentNode();                                                   // [0xc8e950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialogue.FindPartecipant
	UADSDialoguePartecipantComponent* FindPartecipant(FGameplayTag partecipantTag);                                          // [0xc8e800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AscentDialogueSystem.ADSGraphNode
/// Size: 0x0070 (0x0000A8 - 0x000118)
class UADSGraphNode : public UAGSGraphNode : UAGSGraphNode
{ 
public:
	FGameplayTag                                       partecipantTag;                                             // 0x00A8   (0x0008)  
	TArray<UAGSAction*>                                ActivationActions;                                          // 0x00B0   (0x0010)  
	USoundCue*                                         SoundToPlay;                                                // 0x00C0   (0x0008)  
	UAnimMontage*                                      Animation;                                                  // 0x00C8   (0x0008)  
	FText                                              Text;                                                       // 0x00D0   (0x0018)  
	APlayerController*                                 Controller;                                                 // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00F0   (0x0018)  MISSED
	UADSDialoguePartecipantComponent*                  partecipant;                                                // 0x0108   (0x0008)  
	UAudioComponent*                                   audioPlayer;                                                // 0x0110   (0x0008)  


	/// Functions
	// Function /Script/AscentDialogueSystem.ADSGraphNode.IsLocalPlayerPartecipant
	bool IsLocalPlayerPartecipant();                                                                                         // [0xc8ef80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSGraphNode.GetSoundToPlay
	USoundCue* GetSoundToPlay();                                                                                             // [0xc8edb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSGraphNode.GetDialogueText
	FText GetDialogueText();                                                                                                 // [0xc8ec90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSGraphNode.GetDialogueParticipant
	UADSDialoguePartecipantComponent* GetDialogueParticipant();                                                              // [0xc8ec20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSGraphNode.CanBeActivated
	bool CanBeActivated(APlayerController* InController);                                                                    // [0xc8e630] Native|Public|BlueprintCallable 
};

/// Class /Script/AscentDialogueSystem.ADSDialogueNode
/// Size: 0x0000 (0x000118 - 0x000118)
class UADSDialogueNode : public UADSGraphNode : UADSGraphNode
{ 
public:
};

/// Class /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent
/// Size: 0x0060 (0x0002A0 - 0x000300)
class UADSDialoguePartecipantComponent : public USceneComponent : USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnDialogueStarted;                                          // 0x02A0   (0x0010)  
	FMulticastInlineDelegate                           OnDialogueEnded;                                            // 0x02B0   (0x0010)  
	TArray<UADSDialogue*>                              Dialogues;                                                  // 0x02C0   (0x0010)  
	FName                                              PartecipantName;                                            // 0x02D0   (0x0008)  
	FGameplayTag                                       partecipantTag;                                             // 0x02D8   (0x0008)  
	UTexture2D*                                        PartecipantIcon;                                            // 0x02E0   (0x0008)  
	FName                                              VoiceSpawningSocketName;                                    // 0x02E8   (0x0008)  
	USkeletalMeshComponent*                            SkeletalMesh;                                               // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.TryStartDialogueFromActors
	bool TryStartDialogueFromActors(TArray<AActor*>& participants, UADSDialogue* dialogueToStart);                           // [0xc8f500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.TryStartDialogue
	bool TryStartDialogue(TArray<UADSDialoguePartecipantComponent*>& participants, UADSDialogue* dialogueToStart);           // [0xc8f3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.SetParticipantSkeletalMesh
	void SetParticipantSkeletalMesh(USkeletalMeshComponent* Mesh);                                                           // [0xc8f1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.PlayAnimationOnCharacterOwner
	void PlayAnimationOnCharacterOwner(UAnimMontage* animationTag);                                                          // [0xc8f080] Native|Public|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.OnDialogueStartedEvent
	void OnDialogueStartedEvent();                                                                                           // [0xc8f060] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.OnDialogueEndedEvent
	void OnDialogueEndedEvent();                                                                                             // [0xc8f040] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.HandleDialogueStarted
	void HandleDialogueStarted();                                                                                            // [0xc8ee50] Final|Native|Private 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.HandleDialogueEnded
	void HandleDialogueEnded();                                                                                              // [0xc8edf0] Final|Native|Private 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.GetVoiceSpawningSocketName
	FName GetVoiceSpawningSocketName();                                                                                      // [0xc8edd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.GetParticipantTag
	FGameplayTag GetParticipantTag();                                                                                        // [0xc8ed90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.GetParticipantName
	FName GetParticipantName();                                                                                              // [0xc8ed70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.GetParticipantIcon
	UTexture2D* GetParticipantIcon();                                                                                        // [0xc8ed50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.GetOwnerMesh
	USkeletalMeshComponent* GetOwnerMesh();                                                                                  // [0xc8ed20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.GetDialogue
	UADSDialogue* GetDialogue(FGameplayTag DialogueTag);                                                                     // [0xc8eb20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.ChangeParticipantName
	void ChangeParticipantName(FName& NewName);                                                                              // [0xc8e760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AscentDialogueSystem.ADSDialoguePartecipantComponent.ChangeParticipantIcon
	void ChangeParticipantIcon(UTexture2D* Icon);                                                                            // [0xc8e6d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AscentDialogueSystem.ADSDialogueResponseNode
/// Size: 0x0008 (0x000118 - 0x000120)
class UADSDialogueResponseNode : public UADSDialogueNode : UADSDialogueNode
{ 
public:
	bool                                               bAllowedForEveryPlayer;                                     // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED


	/// Functions
	// Function /Script/AscentDialogueSystem.ADSDialogueResponseNode.ResponseSelected
	UADSDialogueNode* ResponseSelected();                                                                                    // [0xc8f110] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AscentDialogueSystem.ADSDialogueSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UADSDialogueSubsystem : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/AscentDialogueSystem.ADSDialogueWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UADSDialogueWidgetInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/AscentDialogueSystem.ADSGraphEdge
/// Size: 0x0010 (0x000040 - 0x000050)
class UADSGraphEdge : public UAGSGraphEdge : UAGSGraphEdge
{ 
public:
	TArray<UAGSCondition*>                             ActivationConditions;                                       // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/AscentDialogueSystem.ADSGraphEdge.CanBeActivated
	bool CanBeActivated(APlayerController* Controller);                                                                      // [0xc8e570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AscentDialogueSystem.ADSStartDialogueNode
/// Size: 0x0020 (0x000118 - 0x000138)
class UADSStartDialogueNode : public UADSDialogueNode : UADSDialogueNode
{ 
public:
	TArray<UAGSCondition*>                             ActivationConditions;                                       // 0x0118   (0x0010)  
	TArray<UAGSAction*>                                DialogueEndedActions;                                       // 0x0128   (0x0010)  
};

