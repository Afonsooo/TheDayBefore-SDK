
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Utilities.

/// Struct /Game/Utilities/S_AudioCheckStruct.S_AudioCheckStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FS_AudioCheckStruct
{ 
	UFMODAudioComponent*                               PlayingSound_7_85553D8F4E4AD9BEB35D058A74824AD9;            // 0x0000   (0x0008)  
	double                                             Distance_8_942A56064BA6196570C5F080E4B742A7;                // 0x0008   (0x0008)  
};

/// Class /Game/Utilities/BFL_Utilities.BFL_Utilities_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBFL_Utilities_C : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UAudioCheckerComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	FTimerHandle                                       CullDistanceTimer;                                          // 0x00A8   (0x0008)  
	TArray<UFMODAudioComponent*>                       PlayingSoundArray;                                          // 0x00B0   (0x0010)  
	float                                              TimerFrequency;                                             // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<UFMODEvent*>                                FMODEventArray;                                             // 0x00C8   (0x0010)  
	TArray<double>                                     DistanceArray;                                              // 0x00D8   (0x0010)  
	TMap<UFMODEvent*, FS_AudioCheckStruct>             Data;                                                       // 0x00E8   (0x0050)  


	/// Functions
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.RegisterSoftSound
	void RegisterSoftSound(TWeakObjectPtr<UFMODEvent*>& FMODEvent, double CullDistance);                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.UnregisterSoftSound
	void UnregisterSoftSound(TWeakObjectPtr<UFMODEvent*>& FMODEvent);                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.CheckCullDistance
	void CheckCullDistance();                                                                                                // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.UnregisterSound
	void UnregisterSound(UFMODEvent*& FMODEvent);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.RegisterSound
	void RegisterSound(UFMODEvent*& FMODEvent, double CullDistance);                                                         // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/Utilities/AudioCheckerComponent.AudioCheckerComponent_C.ExecuteUbergraph_AudioCheckerComponent
	void ExecuteUbergraph_AudioCheckerComponent(int32_t EntryPoint);                                                         // [0x2407bf0] Final|HasDefaults    
};

