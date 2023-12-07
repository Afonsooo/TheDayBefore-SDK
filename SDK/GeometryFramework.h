
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryFramework.

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDynamicMeshChangeInfo
{ 
	EDynamicMeshChangeType                             Type;                                                       // 0x0000   (0x0001)  
	EDynamicMeshAttributeChangeFlags                   Flags;                                                      // 0x0001   (0x0001)  
	bool                                               bIsRevertChange;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1D];                                      // 0x0003   (0x001D)  MISSED
};

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCommandChangeTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReplacementCommandChangeTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshVertexCommandChangeTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x0070 (0x0005A0 - 0x000610)
class UBaseDynamicMeshComponent : public UMeshComponent : UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x05A0   (0x0020)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x05C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05C1   (0x0003)  MISSED
	FLinearColor                                       WireframeColor;                                             // 0x05C4   (0x0010)  
	EDynamicMeshComponentColorOverrideMode             ColorMode;                                                  // 0x05D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05D5   (0x0003)  MISSED
	FColor                                             ConstantColor;                                              // 0x05D8   (0x0004)  
	bool                                               bEnableFlatShading;                                         // 0x05DC   (0x0001)  
	bool                                               bEnableViewModeOverrides;                                   // 0x05DD   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x05DE   (0x0002)  MISSED
	UMaterialInterface*                                OverrideRenderMaterial;                                     // 0x05E0   (0x0008)  
	UMaterialInterface*                                SecondaryRenderMaterial;                                    // 0x05E8   (0x0008)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x05F0   (0x0001)  MISSED
	bool                                               bEnableRayTracing;                                          // 0x05F1   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x05F2   (0x0006)  MISSED
	TArray<UMaterialInterface*>                        BaseMaterials;                                              // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0608   (0x0008)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	void SetViewModeOverridesEnabled(bool bEnabled);                                                                         // [0x4a6e3b0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	void SetShadowsEnabled(bool bEnabled);                                                                                   // [0x4a6e290] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	void SetSecondaryRenderMaterial(UMaterialInterface* Material);                                                           // [0x4a6e200] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                    // [0x4a6e170] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	void SetOverrideRenderMaterial(UMaterialInterface* Material);                                                            // [0x4a6e0e0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	void SetEnableWireframeRenderPass(bool bEnable);                                                                         // [0x4a6e050] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	void SetEnableRaytracing(bool bSetEnabled);                                                                              // [0x4a6dfc0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	void SetEnableFlatShading(bool bEnable);                                                                                 // [0x4a6df30] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	void SetConstantOverrideColor(FColor NewColor);                                                                          // [0x4a6dbc0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                               // [0x4a6da70] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	bool HasOverrideRenderMaterial(int32_t K);                                                                               // [0x4a6d580] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	bool GetViewModeOverridesEnabled();                                                                                      // [0x4a6d550] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	bool GetShadowsEnabled();                                                                                                // [0x4a6d4d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	UMaterialInterface* GetSecondaryRenderMaterial();                                                                        // [0x4a6d4a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	bool GetSecondaryBuffersVisibility();                                                                                    // [0x4a6d470] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                                    // [0x4a6d3d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	bool GetFlatShadingEnabled();                                                                                            // [0x4a6d3a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	bool GetEnableWireframeRenderPass();                                                                                     // [0x4a6d370] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	bool GetEnableRaytracing();                                                                                              // [0x4a6d340] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	UDynamicMesh* GetDynamicMesh();                                                                                          // [0x4a6d310] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	FColor GetConstantOverrideColor();                                                                                       // [0x4a6d2d0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                           // [0x4a6d270] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	void ClearSecondaryRenderMaterial();                                                                                     // [0x4497380] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	void ClearOverrideRenderMaterial();                                                                                      // [0x4a6d030] Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0210 (0x000610 - 0x000820)
class UDynamicMeshComponent : public UBaseDynamicMeshComponent : UBaseDynamicMeshComponent
{ 
public:
	UDynamicMesh*                                      MeshObject;                                                 // 0x0610   (0x0008)  
	unsigned char                                      UnknownData00_5[0xF8];                                      // 0x0618   (0x00F8)  MISSED
	EDynamicMeshComponentTangentsMode                  TangentsType;                                               // 0x0710   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3F];                                      // 0x0711   (0x003F)  MISSED
	TEnumAsByte<ECollisionTraceFlag>                   CollisionType;                                              // 0x0750   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0751   (0x0001)  
	bool                                               bEnableComplexCollision;                                    // 0x0752   (0x0001)  
	bool                                               bDeferCollisionUpdates;                                     // 0x0753   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0754   (0x0004)  MISSED
	UBodySetup*                                        MeshBodySetup;                                              // 0x0758   (0x0008)  
	unsigned char                                      UnknownData03_5[0x38];                                      // 0x0760   (0x0038)  MISSED
	FKAggregateGeom                                    AggGeom;                                                    // 0x0798   (0x0068)  
	TArray<UBodySetup*>                                AsyncBodySetupQueue;                                        // 0x0800   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0810   (0x0010)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                               // [0x4a6e4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	void UpdateCollision(bool bOnlyIfPending);                                                                               // [0x4a6e440] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                                 // [0x4a6e320] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	void SetDynamicMesh(UDynamicMesh* NewMesh);                                                                              // [0x4a6dd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x4a6dc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x4a6daf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	EDynamicMeshComponentTangentsMode GetTangentsType();                                                                     // [0x4a6d500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	void EnableComplexAsSimpleCollision();                                                                                   // [0x4a6d130] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                                  // [0x4a6d050] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADynamicMeshActor : public AActor : AActor
{ 
public:
	UDynamicMeshComponent*                             DynamicMeshComponent;                                       // 0x0290   (0x0008)  
	bool                                               bEnableComputeMeshPool;                                     // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	UDynamicMeshPool*                                  DynamicMeshPool;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	bool ReleaseComputeMesh(UDynamicMesh* Mesh);                                                                             // [0x4a6d690] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	void ReleaseAllComputeMeshes();                                                                                          // [0x4a6d650] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	UDynamicMeshComponent* GetDynamicMeshComponent();                                                                        // [0x18f6430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	UDynamicMeshPool* GetComputeMeshPool();                                                                                  // [0x4a6d2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	void FreeAllComputeMeshes();                                                                                             // [0x4a6d1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	UDynamicMesh* AllocateComputeMesh();                                                                                     // [0x4a6cfc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicMeshGenerator : public UObject : UObject
{ 
public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UDynamicMesh : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0028   (0x0048)  MISSED
	FMulticastInlineDelegate                           MeshModifiedBPEvent;                                        // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0080   (0x0020)  MISSED
	UDynamicMeshGenerator*                             MeshGenerator;                                              // 0x00A0   (0x0008)  
	bool                                               bEnableMeshGenerator;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	UDynamicMesh* ResetToCube();                                                                                             // [0x4a6d820] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	UDynamicMesh* Reset();                                                                                                   // [0x4a6d7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	bool IsEmpty();                                                                                                          // [0x4a6d620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	int32_t GetTriangleCount();                                                                                              // [0x4a6d520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0020 (0x000028 - 0x000048)
class UDynamicMeshPool : public UObject : UObject
{ 
public:
	TArray<UDynamicMesh*>                              CachedMeshes;                                               // 0x0028   (0x0010)  
	TArray<UDynamicMesh*>                              AllCreatedMeshes;                                           // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	void ReturnMesh(UDynamicMesh* Mesh);                                                                                     // [0x4a6d970] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	void ReturnAllMeshes();                                                                                                  // [0x4a6d950] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	UDynamicMesh* RequestMesh();                                                                                             // [0x4a6d7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	void FreeAllMeshes();                                                                                                    // [0x4a6d210] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x04
enum EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents0                                   = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated1                               = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided2                           = 2,
	EDynamicMeshComponentTangentsMode__EDynamicMeshComponentTangentsMode_MAX3        = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x05
enum EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None0                                    = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors1                            = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups2                              = 2,
	EDynamicMeshComponentColorOverrideMode__Constant3                                = 3,
	EDynamicMeshComponentColorOverrideMode__EDynamicMeshComponentColorOverrideMode_MAX4 = 4
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x04
enum EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate0                                 = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate1                               = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate2                               = 2,
	EDynamicMeshComponentRenderUpdateMode__EDynamicMeshComponentRenderUpdateMode_MAX3 = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x07
enum EDynamicMeshChangeType : uint8_t
{
	EDynamicMeshChangeType__GeneralEdit0                                             = 0,
	EDynamicMeshChangeType__MeshChange1                                              = 1,
	EDynamicMeshChangeType__MeshReplacementChange2                                   = 2,
	EDynamicMeshChangeType__MeshVertexChange3                                        = 3,
	EDynamicMeshChangeType__DeformationEdit4                                         = 4,
	EDynamicMeshChangeType__AttributeEdit5                                           = 5,
	EDynamicMeshChangeType__EDynamicMeshChangeType_MAX6                              = 6
};

/// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
/// Size: 0x08
enum EDynamicMeshAttributeChangeFlags : uint8_t
{
	EDynamicMeshAttributeChangeFlags__Unknown0                                       = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology1                                  = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions2                               = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents3                               = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors4                                  = 8,
	EDynamicMeshAttributeChangeFlags__UVs5                                           = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups6                                = 32,
	EDynamicMeshAttributeChangeFlags__EDynamicMeshAttributeChangeFlags_MAX7          = 33
};

