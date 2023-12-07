
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EasyFog.

/// Class /Game/EasyFog/Blueprints/BP_EasyFog.BP_EasyFog_C
/// Size: 0x0075 (0x000290 - 0x000305)
class ABP_EasyFog_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              FogCard;                                                    // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	UTexture*                                          Base_Color_Map;                                             // 0x02A0   (0x0008)  
	UTexture*                                          Opacity_Map;                                                // 0x02A8   (0x0008)  
	UTexture*                                          Normal_Map;                                                 // 0x02B0   (0x0008)  
	UMaterialInstanceDynamic*                          Fog_Material_Instance;                                      // 0x02B8   (0x0008)  
	FLinearColor                                       Base_Color_Tint;                                            // 0x02C0   (0x0010)  
	float                                              BaseColorContrast;                                          // 0x02D0   (0x0004)  
	float                                              Base_Color_Intensity;                                       // 0x02D4   (0x0004)  
	float                                              Emissive_Intensity;                                         // 0x02D8   (0x0004)  
	float                                              Normal_Map_Intensity;                                       // 0x02DC   (0x0004)  
	float                                              Fog_Density;                                                // 0x02E0   (0x0004)  
	float                                              Geometry_Fading_Distance;                                   // 0x02E4   (0x0004)  
	float                                              Camera_Fading_Distance;                                     // 0x02E8   (0x0004)  
	float                                              Wind___Yes_No;                                              // 0x02EC   (0x0004)  
	float                                              Wind_Speed_Y;                                               // 0x02F0   (0x0004)  
	float                                              Wind_Speed_X;                                               // 0x02F4   (0x0004)  
	float                                              Wind_Noise_Tiling;                                          // 0x02F8   (0x0004)  
	float                                              Wind_Noise_Contrast;                                        // 0x02FC   (0x0004)  
	float                                              View_Angle_Fade;                                            // 0x0300   (0x0004)  
	bool                                               Cast_Shadow_;                                               // 0x0304   (0x0001)  


	/// Functions
	// Function /Game/EasyFog/Blueprints/BP_EasyFog.BP_EasyFog_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
};

