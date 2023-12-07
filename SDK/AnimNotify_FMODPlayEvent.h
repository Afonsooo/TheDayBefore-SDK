
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimNotify_FMODPlayEvent.

/// Class /FMODStudio/AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C
/// Size: 0x0020 (0x000038 - 0x000058)
class UAnimNotify_FMODPlayEvent_C : public UAnimNotify : UAnimNotify
{ 
public:
	bool                                               bFollow;                                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AttachName;                                                 // 0x0040   (0x0010)  
	UFMODEvent*                                        Event;                                                      // 0x0050   (0x0008)  


	/// Functions
	// Function /FMODStudio/AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C.GetNotifyName
	FString GetNotifyName();                                                                                                 // [0x2407bf0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /FMODStudio/AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C.Received_Notify
	bool Received_Notify(USkeletalMeshComponent* meshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x2407bf0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

