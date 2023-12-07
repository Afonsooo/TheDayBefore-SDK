
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WBP_WeightSlots.

/// Class /Game/WBP_WeightSlots.WBP_WeightSlots_C
/// Size: 0x0060 (0x000280 - 0x0002E0)
class UWBP_WeightSlots_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UImage*                                            Image;                                                      // 0x0288   (0x0008)  
	UImage*                                            Image;                                                      // 0x0290   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x0298   (0x0008)  
	UTextBlock*                                        TextBlock_Slot;                                             // 0x02A0   (0x0008)  
	UTextBlock*                                        TextBlock_SlotMax;                                          // 0x02A8   (0x0008)  
	UTextBlock*                                        TextBlock_Weight;                                           // 0x02B0   (0x0008)  
	int32_t                                            CountSlots;                                                 // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	ASurvivalPlayer_C*                                 As_Survival_Player;                                         // 0x02C0   (0x0008)  
	UPaperSprite*                                      SlotImage;                                                  // 0x02C8   (0x0008)  
	double                                             HeightSizeImage;                                            // 0x02D0   (0x0008)  
	double                                             WidthSizeImage;                                             // 0x02D8   (0x0008)  


	/// Functions
	// Function /Game/WBP_WeightSlots.WBP_WeightSlots_C.UpdateWeightSlots
	void UpdateWeightSlots();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/WBP_WeightSlots.WBP_WeightSlots_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/WBP_WeightSlots.WBP_WeightSlots_C.ExecuteUbergraph_WBP_WeightSlots
	void ExecuteUbergraph_WBP_WeightSlots(int32_t EntryPoint);                                                               // [0x2407bf0] Final|HasDefaults    
};

