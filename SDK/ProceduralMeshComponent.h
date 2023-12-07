
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ProceduralMeshComponent.

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x0018)  
	bool                                               bFlipTangentY;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0098 (0x000000 - 0x000098)
struct FProcMeshVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0030   (0x0020)  
	FColor                                             Color;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector2D                                          UV0;                                                        // 0x0058   (0x0010)  
	FVector2D                                          UV1;                                                        // 0x0068   (0x0010)  
	FVector2D                                          UV2;                                                        // 0x0078   (0x0010)  
	FVector2D                                          UV3;                                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0060 (0x000000 - 0x000060)
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x0038)  
	bool                                               bEnableCollision;                                           // 0x0058   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0080 (0x0005A0 - 0x000620)
class UProceduralMeshComponent : public UMeshComponent : UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x05A0   (0x0008)  MISSED
	bool                                               bUseComplexAsSimpleCollision;                               // 0x05A8   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x05A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x05AA   (0x0006)  MISSED
	UBodySetup*                                        ProcMeshBodySetup;                                          // 0x05B0   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x05B8   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x05C8   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x05D8   (0x0038)  
	TArray<UBodySetup*>                                AsyncBodySetupQueue;                                        // 0x0610   (0x0010)  


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bSRGBConversion); // [0x14dde30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0x14ddb60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0x14dd740] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0x14dd690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	int32_t GetNumSections();                                                                                                // [0x14dcea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion); // [0x14dc700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x14dc390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	void ClearMeshSection(int32_t SectionIndex);                                                                             // [0x14dac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	void ClearCollisionConvexMeshes();                                                                                       // [0x14dac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	void ClearAllMeshSections();                                                                                             // [0x14dac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0x14da8d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x04
enum EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap0                                                  = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap1                                 = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap2                                   = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX3                            = 3
};

