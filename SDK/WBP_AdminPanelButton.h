
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WBP_AdminPanelButton.

/// Class /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C
/// Size: 0x0048 (0x000280 - 0x0002C8)
class UWBP_AdminPanelButton_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UButton*                                           Button;                                                     // 0x0288   (0x0008)  
	UImage*                                            Image;                                                      // 0x0290   (0x0008)  
	UTextBlock*                                        Text;                                                       // 0x0298   (0x0008)  
	FText                                              Name;                                                       // 0x02A0   (0x0018)  
	FMulticastInlineDelegate                           ButtonPushed;                                               // 0x02B8   (0x0010)  


	/// Functions
	// Function /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C.BndEvt__WBP_AdminPanelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WBP_AdminPanelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();         // [0x2407bf0] BlueprintEvent       
	// Function /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C.BndEvt__WBP_AdminPanelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WBP_AdminPanelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();           // [0x2407bf0] BlueprintEvent       
	// Function /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C.BndEvt__WBP_AdminPanelButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WBP_AdminPanelButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();           // [0x2407bf0] BlueprintEvent       
	// Function /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C.ExecuteUbergraph_WBP_AdminPanelButton
	void ExecuteUbergraph_WBP_AdminPanelButton(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
	// Function /Game/WBP_AdminPanelButton.WBP_AdminPanelButton_C.ButtonPushed__DelegateSignature
	void ButtonPushed__DelegateSignature(UWBP_AdminPanelButton_C* TargetButton);                                             // [0x2407bf0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

