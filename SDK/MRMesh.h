
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MRMesh.

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x0002A0 - 0x000310)
class UMockDataMeshTrackerComponent : public USceneComponent : USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnMeshTrackerUpdated;                                       // 0x02A0   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x02B0   (0x0001)  
	bool                                               RequestNormals;                                             // 0x02B1   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x02B2   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x02B3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x02B8   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x02C8   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x02D8   (0x0010)  
	float                                              UpdateInterval;                                             // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	UMRMeshComponent*                                  MRMesh;                                                     // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x02F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x2407bf0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                    // [0x3325710] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                       // [0x3325650] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0208 (0x000028 - 0x000230)
class UMRMeshBodyHolder : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UBodySetup*                                        BodySetup;                                                  // 0x0030   (0x0008)  
	FBodyInstance                                      BodyInstance;                                               // 0x0038   (0x0190)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x01C8   (0x0068)  MISSED
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0080 (0x000570 - 0x0005F0)
class UMRMeshComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	UMaterialInterface*                                Material;                                                   // 0x0570   (0x0008)  
	UMaterialInterface*                                WireframeMaterial;                                          // 0x0578   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0580   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0581   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0582   (0x0001)  MISSED
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0583   (0x0001)  
	unsigned char                                      UnknownData01_5[0x44];                                      // 0x0584   (0x0044)  MISSED
	TArray<UMRMeshBodyHolder*>                         BodyHolders;                                                // 0x05C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x05D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	void SetWireframeMaterial(UMaterialInterface* InMaterial);                                                               // [0xa69710] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x3325ae0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	void SetUseWireframe(bool bUseWireframe);                                                                                // [0x3325a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x33258f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	void RequestNavMeshUpdate();                                                                                             // [0x33258b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	bool IsConnected();                                                                                                      // [0x3325850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	FLinearColor GetWireframeColor();                                                                                        // [0x3325820] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	bool GetUseWireframe();                                                                                                  // [0x3325800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	bool GetEnableMeshOcclusion();                                                                                           // [0x33257e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void ForceNavMeshUpdate();                                                                                               // [0x33257b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	void Clear();                                                                                                            // [0x3325620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject : UObject
{ 
public:
};

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None0                                               = 0,
	EMeshTrackerVertexColorMode__Confidence1                                         = 1,
	EMeshTrackerVertexColorMode__Block2                                              = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX3                    = 3
};

