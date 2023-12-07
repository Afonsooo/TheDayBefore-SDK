
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ProceduralDecalTools.

/// Class /Game/ProceduralDecalTools/SharedBlueprints/SharedDecalFunctions_FL.SharedDecalFunctions_FL_C
/// Size: 0x0000 (0x000028 - 0x000028)
class USharedDecalFunctions_FL_C : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C
/// Size: 0x00E0 (0x000290 - 0x000370)
class ABasicDecals_BP_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UDecalComponent*                                   Decal;                                                      // 0x0298   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x02A0   (0x0008)  
	UMaterialInterface*                                ParentMaterial;                                             // 0x02A8   (0x0008)  
	UMaterialInstanceDynamic*                          MaterialInstance;                                           // 0x02B0   (0x0008)  
	bool                                               Use_POM;                                                    // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B9   (0x0007)  MISSED
	double                                             MinSteps;                                                   // 0x02C0   (0x0008)  
	double                                             MaxSteps;                                                   // 0x02C8   (0x0008)  
	double                                             POMDepth;                                                   // 0x02D0   (0x0008)  
	UTexture*                                          Color___Alpha;                                              // 0x02D8   (0x0008)  
	UTexture*                                          Normal;                                                     // 0x02E0   (0x0008)  
	UTexture*                                          Stack;                                                      // 0x02E8   (0x0008)  
	bool                                               UseMetalnessMask;                                           // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02F1   (0x0007)  MISSED
	double                                             AOContribution;                                             // 0x02F8   (0x0008)  
	bool                                               UseAngleFade;                                               // 0x0300   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0301   (0x0007)  MISSED
	double                                             SurfaceAngleFade;                                           // 0x0308   (0x0008)  
	double                                             UVScaler;                                                   // 0x0310   (0x0008)  
	bool                                               AlignToSurface;                                             // 0x0318   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0319   (0x0007)  MISSED
	double                                             HeightReferencePlane;                                       // 0x0320   (0x0008)  
	bool                                               LockAspectRatio;                                            // 0x0328   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0329   (0x0007)  MISSED
	double                                             DebugArrowScale;                                            // 0x0330   (0x0008)  
	int32_t                                            SortOrder;                                                  // 0x0338   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	double                                             NormalFlatten;                                              // 0x0340   (0x0008)  
	double                                             Rougness;                                                   // 0x0348   (0x0008)  
	double                                             Metallic;                                                   // 0x0350   (0x0008)  
	FLinearColor                                       AddColor;                                                   // 0x0358   (0x0010)  
	double                                             Specular;                                                   // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C.UpdateTransforms
	void UpdateTransforms();                                                                                                 // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C.SetParams
	void SetParams();                                                                                                        // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C.UpdateDecal
	void UpdateDecal();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/ProceduralDecalTools/DecalBlueprints/BasicDecals/BasicDecals_BP.BasicDecals_BP_C.ExecuteUbergraph_BasicDecals_BP
	void ExecuteUbergraph_BasicDecals_BP(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

