
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Bunker.

/// Class /Game/Bunker/Square_lamp_Blueprint.Square_lamp_Blueprint_C
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ASquare_lamp_Blueprint_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USpotLightComponent*                               SpotLight;                                                  // 0x0298   (0x0008)  
	UStaticMeshComponent*                              StaticMeshComponent0;                                       // 0x02A0   (0x0008)  
	URectLightComponent*                               LightComponent1;                                            // 0x02A8   (0x0008)  
	USceneComponent*                                   SharedRoot;                                                 // 0x02B0   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/Bunker/Square_lamp_Blueprint.Square_lamp_Blueprint_C.SetLightColor
	void SetLightColor(FLinearColor Color);                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Bunker/Square_lamp_Blueprint.Square_lamp_Blueprint_C.ExecuteUbergraph_Square_lamp_Blueprint
	void ExecuteUbergraph_Square_lamp_Blueprint(int32_t EntryPoint);                                                         // [0x2407bf0] Final                
};

