
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CustomMotionBlur.

/// Class /Game/CustomMotionBlur/MotionBlurCage/Resources/BP_MotionBlurCage.BP_MotionBlurCage_C
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ABP_MotionBlurCage_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              SelectionHelper;                                            // 0x0298   (0x0008)  
	UStaticMeshComponent*                              BlurCage;                                                   // 0x02A0   (0x0008)  
	double                                             Strength;                                                   // 0x02A8   (0x0008)  
	UMaterialInstanceDynamic*                          Mid;                                                        // 0x02B0   (0x0008)  
	bool                                               UseDepthStencil;                                            // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	int32_t                                            DepthStencilValue;                                          // 0x02BC   (0x0004)  
	bool                                               DoubleSamples;                                              // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	double                                             Fuzz;                                                       // 0x02C8   (0x0008)  


	/// Functions
	// Function /Game/CustomMotionBlur/MotionBlurCage/Resources/BP_MotionBlurCage.BP_MotionBlurCage_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/CustomMotionBlur/MotionBlurCage/Resources/BP_MotionBlurCage.BP_MotionBlurCage_C.SetStrength
	void SetStrength(double Strength);                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CustomMotionBlur/MotionBlurCage/Resources/BP_MotionBlurCage.BP_MotionBlurCage_C.SetFuzz
	void SetFuzz(double Fuzz);                                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CustomMotionBlur/MotionBlurCage/Resources/BP_MotionBlurCage.BP_MotionBlurCage_C.ExecuteUbergraph_BP_MotionBlurCage
	void ExecuteUbergraph_BP_MotionBlurCage(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/CustomMotionBlur/MotionBlurCage/BP_LinearMotionBlurCage.BP_LinearMotionBlurCage_C
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class ABP_LinearMotionBlurCage_C : public ABP_MotionBlurCage_C : ABP_MotionBlurCage_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  


	/// Functions
	// Function /Game/CustomMotionBlur/MotionBlurCage/BP_LinearMotionBlurCage.BP_LinearMotionBlurCage_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/CustomMotionBlur/MotionBlurCage/BP_LinearMotionBlurCage.BP_LinearMotionBlurCage_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/CustomMotionBlur/MotionBlurCage/BP_LinearMotionBlurCage.BP_LinearMotionBlurCage_C.ExecuteUbergraph_BP_LinearMotionBlurCage
	void ExecuteUbergraph_BP_LinearMotionBlurCage(int32_t EntryPoint);                                                       // [0x2407bf0] Final                
};

