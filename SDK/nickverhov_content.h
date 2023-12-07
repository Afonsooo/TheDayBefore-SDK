
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package nickverhov_content.

/// Class /Game/nickverhov_content/coin_intro/Coin_Dummy.Coin_Dummy_C
/// Size: 0x0008 (0x000290 - 0x000298)
class ACoin_Dummy_C : public AActor : AActor
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0290   (0x0008)  
};

/// Class /Game/nickverhov_content/coin_intro/UI/WBP_CoinIntro.WBP_CoinIntro_C
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UWBP_CoinIntro_C : public UUserWidget : UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UWidgetAnimation*                                  ExpandFntasticLogo;                                         // 0x0288   (0x0008)  
	UWidgetAnimation*                                  ShowLogo;                                                   // 0x0290   (0x0008)  
	UImage*                                            Image_Fntastic;                                             // 0x0298   (0x0008)  
	UImage*                                            Image_MyTona;                                               // 0x02A0   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Logo;                                        // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/nickverhov_content/coin_intro/UI/WBP_CoinIntro.WBP_CoinIntro_C.ShowLogo_Fntastic
	void ShowLogo_Fntastic(bool bShow);                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/UI/WBP_CoinIntro.WBP_CoinIntro_C.ShowLogo_MyTona
	void ShowLogo_MyTona(bool bShow);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/UI/WBP_CoinIntro.WBP_CoinIntro_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2407bf0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/UI/WBP_CoinIntro.WBP_CoinIntro_C.ExecuteUbergraph_WBP_CoinIntro
	void ExecuteUbergraph_WBP_CoinIntro(int32_t EntryPoint);                                                                 // [0x2407bf0] Final                
};

/// Class /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C
/// Size: 0x0010 (0x000038 - 0x000048)
class ULS_CoinIntro_DirectorBP_C : public ULevelSequenceDirector : ULevelSequenceDirector
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0038   (0x0008)  
	UWBP_CoinIntro_C*                                  CoinIntro;                                                  // 0x0040   (0x0008)  


	/// Functions
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)
	void SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)();                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)
	void SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)();                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)
	void SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)();                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)
	void SequenceEvent__ENTRYPOINTLS_CoinIntro (Director BP)();                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.FntasticLogo_Show
	void FntasticLogo_Show();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.FntasticLogo_Hide
	void FntasticLogo_Hide();                                                                                                // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.MytonaLogo_Show
	void MytonaLogo_Show();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.MytonaLogo_Hide
	void MytonaLogo_Hide();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/nickverhov_content/coin_intro/LS_CoinIntro.LS_CoinIntro_DirectorBP_C.ExecuteUbergraph_LS_CoinIntro (Director BP)
	void ExecuteUbergraph_LS_CoinIntro (Director BP)(int32_t EntryPoint);                                                    // [0x2407bf0] Final                
};

