
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SPFR.

/// Class /Game/SPFR.SPFR_C
/// Size: 0x0107 (0x004DD1 - 0x004ED8)
class ASPFR_C : public ASurvivalPlayer_V2_C : ASurvivalPlayer_V2_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x4DD1   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x4DD8   (0x0008)  
	UStaticMeshComponent*                              Soda_SodaBody;                                              // 0x4DE0   (0x0008)  
	UArrowComponent*                                   Arrow2;                                                     // 0x4DE8   (0x0008)  
	ACameraDummy_C*                                    CameraDummy;                                                // 0x4DF0   (0x0008)  
	APositionDummy_C*                                  PositionDummy;                                              // 0x4DF8   (0x0008)  
	AFlashlightDummy_C*                                FlashlightDummy;                                            // 0x4E00   (0x0008)  
	AActor*                                            LootPoint1;                                                 // 0x4E08   (0x0008)  
	AActor*                                            LootPoint2;                                                 // 0x4E10   (0x0008)  
	TArray<FContainerPickupsInfo>                      Temp;                                                       // 0x4E18   (0x0010)  
	double                                             ClothBlendWeight;                                           // 0x4E28   (0x0008)  
	bool                                               Looting;                                                    // 0x4E30   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x4E31   (0x0007)  MISSED
	TMap<int32_t, UClass*>                             IntShakes;                                                  // 0x4E38   (0x0050)  
	TMap<UClass*, int32_t>                             ShakesInt;                                                  // 0x4E88   (0x0050)  


	/// Functions
	// Function /Game/SPFR.SPFR_C.PlayCameraShake
	void PlayCameraShake();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.ClientFunc_OnDistanceCloseContainer
	void ClientFunc_OnDistanceCloseContainer();                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.HighlightActor
	void HighlightActor();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.FlashlightEnable
	void FlashlightEnable(bool bNewVisibility);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/SPFR.SPFR_C.InpActEvt_ThumbMouseButton2_K2Node_InputKeyEvent
	void InpActEvt_ThumbMouseButton2_K2Node_InputKeyEvent(FKey Key);                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SPFR.SPFR_C.OnNotifyEnd_1BD2CF324A2B700B1CDA1280516FD26D
	void OnNotifyEnd_1BD2CF324A2B700B1CDA1280516FD26D(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnNotifyBegin_1BD2CF324A2B700B1CDA1280516FD26D
	void OnNotifyBegin_1BD2CF324A2B700B1CDA1280516FD26D(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnInterrupted_1BD2CF324A2B700B1CDA1280516FD26D
	void OnInterrupted_1BD2CF324A2B700B1CDA1280516FD26D(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnBlendOut_1BD2CF324A2B700B1CDA1280516FD26D
	void OnBlendOut_1BD2CF324A2B700B1CDA1280516FD26D(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnCompleted_1BD2CF324A2B700B1CDA1280516FD26D
	void OnCompleted_1BD2CF324A2B700B1CDA1280516FD26D(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnNotifyEnd_AC163B0B4250F4789333D3A89D35464A
	void OnNotifyEnd_AC163B0B4250F4789333D3A89D35464A(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnNotifyBegin_AC163B0B4250F4789333D3A89D35464A
	void OnNotifyBegin_AC163B0B4250F4789333D3A89D35464A(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnInterrupted_AC163B0B4250F4789333D3A89D35464A
	void OnInterrupted_AC163B0B4250F4789333D3A89D35464A(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnBlendOut_AC163B0B4250F4789333D3A89D35464A
	void OnBlendOut_AC163B0B4250F4789333D3A89D35464A(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnCompleted_AC163B0B4250F4789333D3A89D35464A
	void OnCompleted_AC163B0B4250F4789333D3A89D35464A(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.InpActEvt_G_K2Node_InputKeyEvent
	void InpActEvt_G_K2Node_InputKeyEvent(FKey Key);                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SPFR.SPFR_C.InpActEvt_G_K2Node_InputKeyEvent
	void InpActEvt_G_K2Node_InputKeyEvent(FKey Key);                                                                         // [0x2407bf0] BlueprintEvent       
	// Function /Game/SPFR.SPFR_C.OnNotifyEnd_3E23762F4C2309B1DD195BA646FC0F45
	void OnNotifyEnd_3E23762F4C2309B1DD195BA646FC0F45(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnNotifyBegin_3E23762F4C2309B1DD195BA646FC0F45
	void OnNotifyBegin_3E23762F4C2309B1DD195BA646FC0F45(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnInterrupted_3E23762F4C2309B1DD195BA646FC0F45
	void OnInterrupted_3E23762F4C2309B1DD195BA646FC0F45(FName NotifyName);                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnBlendOut_3E23762F4C2309B1DD195BA646FC0F45
	void OnBlendOut_3E23762F4C2309B1DD195BA646FC0F45(FName NotifyName);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OnCompleted_3E23762F4C2309B1DD195BA646FC0F45
	void OnCompleted_3E23762F4C2309B1DD195BA646FC0F45(FName NotifyName);                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OpenLootPoint1
	void OpenLootPoint1();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.OpenLootPoint2
	void OpenLootPoint2();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.AssignBlizzardController
	void AssignBlizzardController(bool FollowNow);                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.ShowInteractUI
	void ShowInteractUI();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.InteractUpdate
	void InteractUpdate();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.ShowF
	void ShowF(bool ShowF);                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.BleedWidget
	void BleedWidget(bool Show);                                                                                             // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/SPFR.SPFR_C.ExecuteUbergraph_SPFR
	void ExecuteUbergraph_SPFR(int32_t EntryPoint);                                                                          // [0x2407bf0] Final|HasDefaults    
};

