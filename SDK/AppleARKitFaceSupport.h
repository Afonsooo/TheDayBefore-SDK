
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AppleARKitFaceSupport.

/// Struct /Script/AppleARKitFaceSupport.NetQuantizeFaceCurve
/// Size: 0x0002 (0x000000 - 0x000002)
struct FNetQuantizeFaceCurve
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Class /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent
/// Size: 0x0100 (0x000620 - 0x000720)
class UAppleARKitFaceMeshComponent : public UProceduralMeshComponent : UProceduralMeshComponent
{ 
public:
	bool                                               bWantsMeshUpdates;                                          // 0x0620   (0x0001)  
	bool                                               bWantsCollision;                                            // 0x0621   (0x0001)  
	bool                                               bAutoBindToLocalFaceMesh;                                   // 0x0622   (0x0001)  
	EARFaceComponentTransformMixing                    TransformSetting;                                           // 0x0623   (0x0001)  
	bool                                               bFlipTrackedRotation;                                       // 0x0624   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0625   (0x0003)  MISSED
	UMaterialInterface*                                FaceMaterial;                                               // 0x0628   (0x0008)  
	FName                                              LiveLinkSubjectName;                                        // 0x0630   (0x0008)  
	TArray<FNetQuantizeFaceCurve>                      RemoteCurves;                                               // 0x0638   (0x0010)  
	unsigned char                                      UnknownData01_6[0xD8];                                      // 0x0648   (0x00D8)  MISSED


	/// Functions
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes
	void UpdateMeshFromBlendShapes();                                                                                        // [0x14cc330] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMesh
	void UpdateMesh(TArray<FVector>& Vertices);                                                                              // [0x14cc280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapes
	void SetBlendShapes(TMap<EARFaceBlendShape, float>& InBlendShapes);                                                      // [0x14cc0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapeAmount
	void SetBlendShapeAmount(EARFaceBlendShape BlendShape, float Amount);                                                    // [0x14cbf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetAutoBind
	void SetAutoBind(bool bAutoBind);                                                                                        // [0x14cbe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.ServerUpdateFaceCurves
	void ServerUpdateFaceCurves(TArray<FNetQuantizeFaceCurve> ClientCurves);                                                 // [0x14cbdc0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.PublishViaLiveLink
	void PublishViaLiveLink(FName SubjectName);                                                                              // [0x14cbcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.OnRep_RemoteCurves
	void OnRep_RemoteCurves();                                                                                               // [0x14cbcb0] Final|Native|Private 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetTransform
	FTransform GetTransform();                                                                                               // [0x14cbc50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp
	float GetLastUpdateTimestamp();                                                                                          // [0x14cbc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber
	int32_t GetLastUpdateFrameNumber();                                                                                      // [0x14cbc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount
	float GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape);                                                             // [0x14cbae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.CreateMesh
	void CreateMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UV0);                          // [0x14cb950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Enum /Script/AppleARKitFaceSupport.EARFaceComponentTransformMixing
/// Size: 0x05
enum EARFaceComponentTransformMixing : uint8_t
{
	EARFaceComponentTransformMixing__ComponentOnly0                                  = 0,
	EARFaceComponentTransformMixing__ComponentLocationTrackedRotation1               = 1,
	EARFaceComponentTransformMixing__ComponentWithTracked2                           = 2,
	EARFaceComponentTransformMixing__TrackingOnly3                                   = 3,
	EARFaceComponentTransformMixing__EARFaceComponentTransformMixing_MAX4            = 4
};

