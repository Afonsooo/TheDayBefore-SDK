
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AugmentedReality.

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTrackedGeometryGroup
{ 
	AARActor*                                          ARActor;                                                    // 0x0000   (0x0008)  
	UARComponent*                                      ARComponent;                                                // 0x0008   (0x0008)  
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UMaterialInterface*                                DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	UMaterialInterface*                                DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	FVector                                            Center;                                                     // 0x0080   (0x0018)  
	FVector                                            Extents;                                                    // 0x0098   (0x0018)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x00B0   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (0x000000 - 0x000001)
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x0018)  
	FVector                                            RightEyePosition;                                           // 0x0030   (0x0018)  
	FVector                                            LookAtTarget;                                               // 0x0048   (0x0018)  
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	UARCandidateImage*                                 DetectedImage;                                              // 0x0080   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	FVector                                            Extents;                                                    // 0x0080   (0x0018)  
	FString                                            QRCode;                                                     // 0x0098   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0070 (0x000000 - 0x000070)
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0060   (0x0010)  
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0090 (0x000000 - 0x000090)
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	float                                              Longitude;                                                  // 0x0080   (0x0004)  
	float                                              Latitude;                                                   // 0x0084   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0088   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	FString                                            AnchorName;                                                 // 0x0090   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0090 (0x000000 - 0x000090)
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0060)  
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (0x000000 - 0x00000C)
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (0x000000 - 0x000048)
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (0x000000 - 0x000050)
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0028 (0x000000 - 0x000028)
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0010)  
	FVector2D                                          PrincipalPoint;                                             // 0x0018   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
class UARTexture : public UTexture : UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01C9   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x01CC   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x01D0   (0x0010)  
	FVector2D                                          Size;                                                       // 0x01E0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UARTextureCameraImage : public UARTexture : UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UARTextureCameraDepth : public UARTexture : UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x01F0   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x01F1   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x01F2   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x01F3   (0x000D)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0030 (0x000260 - 0x000290)
class UAREnvironmentCaptureProbeTexture : public UTextureCube : UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x0264   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0268   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0278   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0138 (0x000028 - 0x000160)
class UARTrackedGeometry : public UObject : UObject
{ 
public:
	FGuid                                              UniqueId;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0060)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x00A0   (0x0060)  
	EARTrackingState                                   TrackingState;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0101   (0x000F)  MISSED
	UMRMeshComponent*                                  UnderlyingMesh;                                             // 0x0110   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0118   (0x0001)  
	EARSpatialMeshUsageFlags                           SpatialMeshUsageFlags;                                      // 0x0119   (0x0001)  
	unsigned char                                      UnknownData02_5[0x16];                                      // 0x011A   (0x0016)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x0130   (0x0004)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x0134   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x0140   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0148   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	bool IsTracked();                                                                                                        // [0x334f140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);                                                           // [0x334ebc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	UMRMeshComponent* GetUnderlyingMesh();                                                                                   // [0x334e940] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	EARTrackingState GetTrackingState();                                                                                     // [0x334e920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	EARObjectClassification GetObjectClassification();                                                                       // [0x334db40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	FString GetName();                                                                                                       // [0x334da10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform();                                                                                   // [0x334d780] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform();                                                                                // [0x334d350] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	float GetLastUpdateTimestamp();                                                                                          // [0x334d210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	int32_t GetLastUpdateFrameNumber();                                                                                      // [0x334d1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	FName GetDebugName();                                                                                                    // [0x334ccf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0020 (0x000160 - 0x000180)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x0158   (0x0018)  
	UAREnvironmentCaptureProbeTexture*                 EnvironmentCaptureTexture;                                  // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0178   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	FVector GetExtent();                                                                                                     // [0x334cf20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                       // [0x15a4be0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARGeoTrackingSupport : public UObject : UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0000 (0x000160 - 0x000160)
class UARMeshGeometry : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AARActor : public AActor : AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (0x000050 - 0x000080)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);                                           // [0x3349eb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0070   (0x0040)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent); // [0x3349ca0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0080 (0x0002A0 - 0x000320)
class UARComponent : public USceneComponent : USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x02B0   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02E1   (0x0007)  MISSED
	UMaterialInterface*                                DefaultMeshMaterial;                                        // 0x02E8   (0x0008)  
	UMaterialInterface*                                DefaultWireframeMeshMaterial;                               // 0x02F0   (0x0008)  
	UMRMeshComponent*                                  MRMeshComponent;                                            // 0x02F8   (0x0008)  
	UARTrackedGeometry*                                MyTrackedGeometry;                                          // 0x0300   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0308   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	void UpdateVisualization();                                                                                              // [0xc8f040] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	void SetNativeID(FGuid NativeID);                                                                                        // [0x3351bd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	void ReceiveRemove();                                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	void OnRep_Payload();                                                                                                    // [0x334f660] Native|Protected     
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	UMRMeshComponent* GetMRMesh();                                                                                           // [0x334d9d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x00D0 (0x000320 - 0x0003F0)
class UARPlaneComponent : public UARComponent : UARComponent
{ 
public:
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x0320   (0x00D0)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                                  // [0x3351db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0x3351c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                              // [0x3350990] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                      // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                         // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0x334df50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0010 (0x000320 - 0x000330)
class UARPointComponent : public UARComponent : UARComponent
{ 
public:
	FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0321   (0x000F)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                              // [0x3350b00] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                      // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                         // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0090 (0x000320 - 0x0003B0)
class UARFaceComponent : public UARComponent : UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x0320   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x0321   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x0322   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0323   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x0328   (0x0060)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0388   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                    // [0x33517a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                               // [0x33504f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                       // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                          // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x00A0 (0x000320 - 0x0003C0)
class UARImageComponent : public UARComponent : UARComponent
{ 
public:
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x0320   (0x00A0)  


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                                  // [0x3351b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                              // [0x3350720] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                      // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                         // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x00B0 (0x000320 - 0x0003D0)
class UARQRCodeComponent : public UARComponent : UARComponent
{ 
public:
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x0320   (0x00B0)  


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                                // [0x3352060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                             // [0x3350cf0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                     // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                        // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0070 (0x000320 - 0x000390)
class UARPoseComponent : public UARComponent : UARComponent
{ 
public:
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x0320   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                    // [0x3351e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                               // [0x3350bb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                       // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                          // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0060 (0x000320 - 0x000380)
class UAREnvironmentProbeComponent : public UARComponent : UARComponent
{ 
public:
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x0320   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                   // [0x33503e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                              // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0060 (0x000320 - 0x000380)
class UARObjectComponent : public UARComponent : UARComponent
{ 
public:
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x0320   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                             // [0x33503e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                     // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                        // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0090 (0x000320 - 0x0003B0)
class UARMeshComponent : public UARComponent : UARComponent
{ 
public:
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x0320   (0x0090)  


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                               // [0x3350860] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                       // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                          // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x00A0 (0x000320 - 0x0003C0)
class UARGeoAnchorComponent : public UARComponent : UARComponent
{ 
public:
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x0320   (0x00A0)  


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                          // [0x3351a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                          // [0x33505d0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                     // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UARDependencyHandler : public UObject : UObject
{ 
public:
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                               // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude); // [0x334b070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);         // [0x334afd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0070   (0x0038)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);          // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, FVector& WorldPosition); // [0x334d040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UARLifeCycleComponent : public USceneComponent : USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnARActorSpawnedDelegate;                                   // 0x02A0   (0x0010)  
	FMulticastInlineDelegate                           OnARActorToBeDestroyedDelegate;                             // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x02C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);                                                         // [0x33502c0] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	void ServerDestroyARActor(AARActor* Actor);                                                                              // [0x33501b0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(AARActor* Actor);                                           // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor);  // [0x2407bf0] MulticastDelegate|Public|Delegate|HasDefaults 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0x000028 - 0x000028)
class UARLightEstimate : public UObject : UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (0x000028 - 0x000040)
class UARBasicLightEstimate : public UARLightEstimate : UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientIntensityLumens();                                                                                       // [0x15aa260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	float GetAmbientColorTemperatureKelvin();                                                                                // [0x334c550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	FLinearColor GetAmbientColor();                                                                                          // [0x334c530] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AAROriginActor : public AActor : AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x0128 (0x000028 - 0x000150)
class UARPin : public UObject : UObject
{ 
public:
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0028   (0x0008)  
	USceneComponent*                                   PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0060)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x00A0   (0x0060)  
	EARTrackingState                                   TrackingState;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1F];                                      // 0x0101   (0x001F)  MISSED
	FMulticastInlineDelegate                           OnARTrackingStateChanged;                                   // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           OnARTransformUpdated;                                       // 0x0130   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	EARTrackingState GetTrackingState();                                                                                     // [0x334e920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	UARTrackedGeometry* GetTrackedGeometry();                                                                                // [0xc8b330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	USceneComponent* GetPinnedComponent();                                                                                   // [0xc8b350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform();                                                                                   // [0x334d560] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform();                                                                                // [0x334d350] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	FName GetDebugName();                                                                                                    // [0x334ccd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	void DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                                // [0x334b510] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x00E0 (0x000030 - 0x000110)
class UARSessionConfig : public UDataAsset : UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x003B   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	TArray<UARCandidateImage*>                         CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<UARCandidateObject*>                        CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x008F   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	UClass*                                            PlaneComponentClass;                                        // 0x00B0   (0x0008)  
	UClass*                                            PointComponentClass;                                        // 0x00B8   (0x0008)  
	UClass*                                            FaceComponentClass;                                         // 0x00C0   (0x0008)  
	UClass*                                            ImageComponentClass;                                        // 0x00C8   (0x0008)  
	UClass*                                            QRCodeComponentClass;                                       // 0x00D0   (0x0008)  
	UClass*                                            PoseComponentClass;                                         // 0x00D8   (0x0008)  
	UClass*                                            EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)  
	UClass*                                            ObjectComponentClass;                                       // 0x00E8   (0x0008)  
	UClass*                                            MeshComponentClass;                                         // 0x00F0   (0x0008)  
	UClass*                                            GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)  
	UMaterialInterface*                                DefaultMeshMaterial;                                        // 0x0100   (0x0008)  
	UMaterialInterface*                                DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetTrackedObjects();                                                                                        // [0x33524f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldResetCameraTracking();                                                                                        // [0x33524d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldRenderCameraOverlay();                                                                                        // [0x33524b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableCameraTracking();                                                                                       // [0x3352490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	bool ShouldEnableAutoFocus();                                                                                            // [0x3352470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0x3352340] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0x33522c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                   // [0x3352240] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetTrackedObjects(bool bNewValue);                                                                             // [0x33521b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetResetCameraTracking(bool bNewValue);                                                                             // [0x3352120] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0x33518e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0x3351860] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0x33515b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0x3351510] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0x3351420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	TArray<char> GetWorldMapData();                                                                                          // [0x334e980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	EARWorldAlignment GetWorldAlignment();                                                                                   // [0x334e960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	EARSessionType GetSessionType();                                                                                         // [0x334e210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	EARSceneReconstruction GetSceneReconstructionMethod();                                                                   // [0x334e0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0x334e020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x334d9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	EARLightEstimationMode GetLightEstimationMode();                                                                         // [0x334d260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0x334cfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0x334cfa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0x334cf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0x2f3ffc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0x20ee270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0x334cd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0x334cb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x334ca40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateObject(UARCandidateObject* CandidateObject);                                                            // [0x334a2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	void AddCandidateImage(UARCandidateImage* NewCandidateImage);                                                            // [0x334a200] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (0x000378 - 0x0003E0)
class AARSharedWorldGameMode : public AGameMode : AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0378   (0x0004)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x037C   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetPreviewImageData(TArray<char> ImageData);                                                                        // [0x3351f30] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARWorldSharingIsReady();                                                                                         // [0x3351190] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0x3350e50] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	AARSharedWorldGameState* GetARSharedWorldGameState();                                                                    // [0x334bcc0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (0x000308 - 0x000340)
class AARSharedWorldGameState : public AGameState : AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0308   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x0318   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x0328   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x032C   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x0330   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x0334   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0338   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	void K2_OnARWorldMapIsReady();                                                                                           // [0x2407bf0] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (0x000850 - 0x000858)
class AARSharedWorldPlayerController : public APlayerController : APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0850   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class AARSkyLight : public ASkyLight : ASkyLight
{ 
public:
	UAREnvironmentCaptureProbe*                        CaptureProbe;                                               // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);                                             // [0x33516c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultDummy : public UObject : UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARPlaneGeometry : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	FVector                                            Center;                                                     // 0x0160   (0x0018)  
	FVector                                            Extent;                                                     // 0x0178   (0x0018)  
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0190   (0x0010)  
	UARPlaneGeometry*                                  SubsumedBy;                                                 // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	UARPlaneGeometry* GetSubsumedBy();                                                                                       // [0x334e230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	EARPlaneOrientation GetOrientation();                                                                                    // [0x334df80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	FVector GetExtent();                                                                                                     // [0x334cf50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	FVector GetCenter();                                                                                                     // [0x334cb90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0x334c790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedPoint : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (0x000160 - 0x000170)
class UARTrackedImage : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
	UARCandidateImage*                                 DetectedImage;                                              // 0x0158   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0160   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	FVector2D GetEstimateSize();                                                                                             // [0x334cef0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	UARCandidateImage* GetDetectedImage();                                                                                   // [0x334cd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0020 (0x000170 - 0x000190)
class UARTrackedQRCode : public UARTrackedImage : UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x0170   (0x0010)  
	int32_t                                            Version;                                                    // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0184   (0x000C)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x0160 (0x000160 - 0x0002C0)
class UARFaceGeometry : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x0158   (0x0018)  
	bool                                               bIsTracked;                                                 // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x01C8   (0x0038)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0200   (0x0060)  
	FTransform                                         RightEyeTransform;                                          // 0x0260   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0x334eaf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0x334d280] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0x334c570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0x334c690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedObject : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	UARCandidateObject* GetDetectedObject();                                                                                 // [0x334cd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARTrackedPose : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x0158   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	FARPose3D GetTrackedPoseData();                                                                                          // [0x334e640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0010 (0x000160 - 0x000170)
class UARGeoAnchor : public UARTrackedGeometry : UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UARTrackableNotifyComponent : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnAddTrackedGeometry;                                       // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedGeometry;                                    // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedGeometry;                                    // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPlane;                                          // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPlane;                                       // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPlane;                                       // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPoint;                                          // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPoint;                                       // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPoint;                                       // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedImage;                                          // 0x0130   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedImage;                                       // 0x0140   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedImage;                                       // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedFace;                                           // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedFace;                                        // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedFace;                                        // 0x0180   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedEnvProbe;                                       // 0x0190   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedEnvProbe;                                    // 0x01A0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedEnvProbe;                                    // 0x01B0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedObject;                                         // 0x01C0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedObject;                                      // 0x01D0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedObject;                                      // 0x01E0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTypesDummyClass : public UObject : UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (0x000030 - 0x000058)
class UARCandidateImage : public UDataAsset : UDataAsset
{ 
public:
	UTexture2D*                                        CandidateTexture;                                           // 0x0030   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalWidth();                                                                                                // [0x1549c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	float GetPhysicalHeight();                                                                                               // [0x334e000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	EARCandidateImageOrientation GetOrientation();                                                                           // [0x16f0b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	FString GetFriendlyName();                                                                                               // [0x334cfe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	UTexture2D* GetCandidateTexture();                                                                                       // [0xc8b350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0058 (0x000030 - 0x000088)
class UARCandidateObject : public UDataAsset : UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x0038)  


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetFriendlyName(FString NewName);                                                                                   // [0x3351960] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0x3351370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0x33512c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	FString GetFriendlyName();                                                                                               // [0x334d010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	TArray<char> GetCandidateObjectData();                                                                                   // [0x334cad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	FBox GetBoundingBox();                                                                                                   // [0x334c850] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x05
enum EARTrackingState : uint8_t
{
	EARTrackingState__Unknown0                                                       = 0,
	EARTrackingState__Tracking1                                                      = 1,
	EARTrackingState__NotTracking2                                                   = 2,
	EARTrackingState__StoppedTracking3                                               = 3,
	EARTrackingState__EARTrackingState_MAX4                                          = 4
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x07
enum EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None0                                                     = 0,
	EARSessionConfigFlags__GenerateMeshData1                                         = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe2                                = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData3                             = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData4                               = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion5                                  = 16,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX6                                = 17
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x04
enum EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None0                                                  = 0,
	EPlaneComponentDebugMode__ShowNetworkRole1                                       = 1,
	EPlaneComponentDebugMode__ShowClassification2                                    = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX3                          = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x04
enum EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None0                                                   = 0,
	EFaceComponentDebugMode__ShowEyeVectors1                                         = 1,
	EFaceComponentDebugMode__ShowFaceMesh2                                           = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX3                            = 3
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x05
enum EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly0                                           = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation1                        = 1,
	EARFaceTransformMixing__ComponentWithTracked2                                    = 2,
	EARFaceTransformMixing__TrackingOnly3                                            = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX4                              = 4
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x03
enum EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None0                                                  = 0,
	EImageComponentDebugMode__ShowDetectedImage1                                     = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX2                          = 2
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x03
enum EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None0                                                 = 0,
	EQRCodeComponentDebugMode__ShowQRCode1                                           = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX2                        = 2
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x03
enum EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None0                                                   = 0,
	EPoseComponentDebugMode__ShowSkeleton1                                           = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX2                            = 2
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x03
enum EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None0                                              = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData1                                       = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX2                  = 2
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x08
enum EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError0                                            = 0,
	EARServiceAvailability__UnknownChecking1                                         = 1,
	EARServiceAvailability__UnknownTimedOut2                                         = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable3                             = 3,
	EARServiceAvailability__SupportedNotInstalled4                                   = 4,
	EARServiceAvailability__SupportedVersionTooOld5                                  = 5,
	EARServiceAvailability__SupportedInstalled6                                      = 6,
	EARServiceAvailability__EARServiceAvailability_MAX7                              = 7
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x05
enum EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed0                                       = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible1                             = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation2                        = 2,
	EARServiceInstallRequestResult__FatalError3                                      = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX4              = 4
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x03
enum EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted0                                      = 0,
	EARServicePermissionRequestResult__Denied1                                       = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX2        = 2
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x05
enum EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing0                                               = 0,
	EARGeoTrackingState__Localized1                                                  = 1,
	EARGeoTrackingState__Localizing2                                                 = 2,
	EARGeoTrackingState__NotAvailable3                                               = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX4                                    = 4
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x10
enum EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None0                                                 = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation1                               = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions2                              = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow3                                  = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable4                                = 4,
	EARGeoTrackingStateReason__WaitingForLocation5                                   = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded6                                     = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed7                             = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck8                          = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX9                        = 9
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x05
enum EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined0                                            = 0,
	EARGeoTrackingAccuracy__Low1                                                     = 1,
	EARGeoTrackingAccuracy__Medium2                                                  = 2,
	EARGeoTrackingAccuracy__High3                                                    = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX4                              = 4
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x04
enum EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity0                                                      = 0,
	EARWorldAlignment__GravityAndHeading1                                            = 1,
	EARWorldAlignment__Camera2                                                       = 2,
	EARWorldAlignment__EARWorldAlignment_MAX3                                        = 3
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x09
enum EARSessionType : uint8_t
{
	EARSessionType__None0                                                            = 0,
	EARSessionType__Orientation1                                                     = 1,
	EARSessionType__World2                                                           = 2,
	EARSessionType__Face3                                                            = 3,
	EARSessionType__Image4                                                           = 4,
	EARSessionType__ObjectScanning5                                                  = 5,
	EARSessionType__PoseTracking6                                                    = 6,
	EARSessionType__GeoTracking7                                                     = 7,
	EARSessionType__EARSessionType_MAX8                                              = 8
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x04
enum EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None0                                                     = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection1                                 = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection2                                   = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX3                                = 3
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x04
enum EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None0                                                    = 0,
	EARLightEstimationMode__AmbientLightEstimate1                                    = 1,
	EARLightEstimationMode__DirectionalLightEstimate2                                = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX3                              = 3
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x03
enum EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage0                                       = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage1                                    = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX2                                          = 2
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x04
enum EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None0                                            = 0,
	EAREnvironmentCaptureProbeType__Manual1                                          = 1,
	EAREnvironmentCaptureProbeType__Automatic2                                       = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX3              = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x03
enum EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo0                                             = 0,
	EARFaceTrackingUpdate__CurvesOnly1                                               = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX2                                = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x07
enum EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None0                                                 = 0,
	EARSessionTrackingFeature__PoseDetection2D1                                      = 1,
	EARSessionTrackingFeature__PersonSegmentation2                                   = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth3                          = 3,
	EARSessionTrackingFeature__SceneDepth4                                           = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth5                                   = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX6                        = 6
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x04
enum EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None0                                                    = 0,
	EARSceneReconstruction__MeshOnly1                                                = 1,
	EARSceneReconstruction__MeshWithClassification2                                  = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX3                              = 3
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x09
enum EARTextureType : uint8_t
{
	EARTextureType__Unknown0                                                         = 0,
	EARTextureType__CameraImage1                                                     = 1,
	EARTextureType__CameraDepth2                                                     = 2,
	EARTextureType__EnvironmentCapture3                                              = 3,
	EARTextureType__PersonSegmentationImage4                                         = 4,
	EARTextureType__PersonSegmentationDepth5                                         = 5,
	EARTextureType__SceneDepthMap6                                                   = 6,
	EARTextureType__SceneDepthConfidenceMap7                                         = 7,
	EARTextureType__EARTextureType_MAX8                                              = 8
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x04
enum EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown0                                                         = 0,
	EARDepthQuality__Low1                                                            = 1,
	EARDepthQuality__High2                                                           = 2,
	EARDepthQuality__EARDepthQuality_MAX3                                            = 3
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x04
enum EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown0                                                        = 0,
	EARDepthAccuracy__Approximate1                                                   = 1,
	EARDepthAccuracy__Accurate2                                                      = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX3                                          = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x03
enum EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative0                                          = 0,
	EARFaceTrackingDirection__FaceMirrored1                                          = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX2                          = 2
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x62
enum EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft0                                                 = 0,
	EARFaceBlendShape__EyeLookDownLeft1                                              = 1,
	EARFaceBlendShape__EyeLookInLeft2                                                = 2,
	EARFaceBlendShape__EyeLookOutLeft3                                               = 3,
	EARFaceBlendShape__EyeLookUpLeft4                                                = 4,
	EARFaceBlendShape__EyeSquintLeft5                                                = 5,
	EARFaceBlendShape__EyeWideLeft6                                                  = 6,
	EARFaceBlendShape__EyeBlinkRight7                                                = 7,
	EARFaceBlendShape__EyeLookDownRight8                                             = 8,
	EARFaceBlendShape__EyeLookInRight9                                               = 9,
	EARFaceBlendShape__EyeLookOutRight10                                             = 10,
	EARFaceBlendShape__EyeLookUpRight11                                              = 11,
	EARFaceBlendShape__EyeSquintRight12                                              = 12,
	EARFaceBlendShape__EyeWideRight13                                                = 13,
	EARFaceBlendShape__JawForward14                                                  = 14,
	EARFaceBlendShape__JawLeft15                                                     = 15,
	EARFaceBlendShape__JawRight16                                                    = 16,
	EARFaceBlendShape__JawOpen17                                                     = 17,
	EARFaceBlendShape__MouthClose18                                                  = 18,
	EARFaceBlendShape__MouthFunnel19                                                 = 19,
	EARFaceBlendShape__MouthPucker20                                                 = 20,
	EARFaceBlendShape__MouthLeft21                                                   = 21,
	EARFaceBlendShape__MouthRight22                                                  = 22,
	EARFaceBlendShape__MouthSmileLeft23                                              = 23,
	EARFaceBlendShape__MouthSmileRight24                                             = 24,
	EARFaceBlendShape__MouthFrownLeft25                                              = 25,
	EARFaceBlendShape__MouthFrownRight26                                             = 26,
	EARFaceBlendShape__MouthDimpleLeft27                                             = 27,
	EARFaceBlendShape__MouthDimpleRight28                                            = 28,
	EARFaceBlendShape__MouthStretchLeft29                                            = 29,
	EARFaceBlendShape__MouthStretchRight30                                           = 30,
	EARFaceBlendShape__MouthRollLower31                                              = 31,
	EARFaceBlendShape__MouthRollUpper32                                              = 32,
	EARFaceBlendShape__MouthShrugLower33                                             = 33,
	EARFaceBlendShape__MouthShrugUpper34                                             = 34,
	EARFaceBlendShape__MouthPressLeft35                                              = 35,
	EARFaceBlendShape__MouthPressRight36                                             = 36,
	EARFaceBlendShape__MouthLowerDownLeft37                                          = 37,
	EARFaceBlendShape__MouthLowerDownRight38                                         = 38,
	EARFaceBlendShape__MouthUpperUpLeft39                                            = 39,
	EARFaceBlendShape__MouthUpperUpRight40                                           = 40,
	EARFaceBlendShape__BrowDownLeft41                                                = 41,
	EARFaceBlendShape__BrowDownRight42                                               = 42,
	EARFaceBlendShape__BrowInnerUp43                                                 = 43,
	EARFaceBlendShape__BrowOuterUpLeft44                                             = 44,
	EARFaceBlendShape__BrowOuterUpRight45                                            = 45,
	EARFaceBlendShape__CheekPuff46                                                   = 46,
	EARFaceBlendShape__CheekSquintLeft47                                             = 47,
	EARFaceBlendShape__CheekSquintRight48                                            = 48,
	EARFaceBlendShape__NoseSneerLeft49                                               = 49,
	EARFaceBlendShape__NoseSneerRight50                                              = 50,
	EARFaceBlendShape__TongueOut51                                                   = 51,
	EARFaceBlendShape__HeadYaw52                                                     = 52,
	EARFaceBlendShape__HeadPitch53                                                   = 53,
	EARFaceBlendShape__HeadRoll54                                                    = 54,
	EARFaceBlendShape__LeftEyeYaw55                                                  = 55,
	EARFaceBlendShape__LeftEyePitch56                                                = 56,
	EARFaceBlendShape__LeftEyeRoll57                                                 = 57,
	EARFaceBlendShape__RightEyeYaw58                                                 = 58,
	EARFaceBlendShape__RightEyePitch59                                               = 59,
	EARFaceBlendShape__RightEyeRoll60                                                = 60,
	EARFaceBlendShape__MAX61                                                         = 61
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x03
enum EAREye : uint8_t
{
	EAREye__LeftEye0                                                                 = 0,
	EAREye__RightEye1                                                                = 1,
	EAREye__EAREye_MAX2                                                              = 2
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x06
enum EARCaptureType : uint8_t
{
	EARCaptureType__Camera0                                                          = 0,
	EARCaptureType__QRCode1                                                          = 1,
	EARCaptureType__SpatialMapping2                                                  = 2,
	EARCaptureType__SceneUnderstanding3                                              = 3,
	EARCaptureType__HandMesh4                                                        = 4,
	EARCaptureType__EARCaptureType_MAX5                                              = 5
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x06
enum EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None0                                                      = 0,
	EARLineTraceChannels__FeaturePoint1                                              = 1,
	EARLineTraceChannels__GroundPlane2                                               = 2,
	EARLineTraceChannels__PlaneUsingExtent3                                          = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon4                                 = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX5                                  = 9
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x04
enum EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking0                                                 = 0,
	EARTrackingQuality__OrientationOnly1                                             = 1,
	EARTrackingQuality__OrientationAndPosition2                                      = 2,
	EARTrackingQuality__EARTrackingQuality_MAX3                                      = 3
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x08
enum EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None0                                                  = 0,
	EARTrackingQualityReason__Initializing1                                          = 1,
	EARTrackingQualityReason__Relocalizing2                                          = 2,
	EARTrackingQualityReason__ExcessiveMotion3                                       = 3,
	EARTrackingQualityReason__InsufficientFeatures4                                  = 4,
	EARTrackingQualityReason__InsufficientLight5                                     = 5,
	EARTrackingQualityReason__BadState6                                              = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX7                          = 7
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x08
enum EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted0                                                    = 0,
	EARSessionStatus__Running1                                                       = 1,
	EARSessionStatus__NotSupported2                                                  = 2,
	EARSessionStatus__FatalError3                                                    = 3,
	EARSessionStatus__PermissionNotGranted4                                          = 4,
	EARSessionStatus__UnsupportedConfiguration5                                      = 5,
	EARSessionStatus__Other6                                                         = 6,
	EARSessionStatus__EARSessionStatus_MAX7                                          = 7
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x05
enum EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable0                                              = 0,
	EARWorldMappingState__StillMappingNotRelocalizable1                              = 1,
	EARWorldMappingState__StillMappingRelocalizable2                                 = 2,
	EARWorldMappingState__Mapped3                                                    = 3,
	EARWorldMappingState__EARWorldMappingState_MAX4                                  = 4
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x04
enum EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal0                                                 = 0,
	EARPlaneOrientation__Vertical1                                                   = 1,
	EARPlaneOrientation__Diagonal2                                                   = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX3                                    = 3
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x15
enum EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable0                                          = 0,
	EARObjectClassification__Unknown1                                                = 1,
	EARObjectClassification__Wall2                                                   = 2,
	EARObjectClassification__Ceiling3                                                = 3,
	EARObjectClassification__Floor4                                                  = 4,
	EARObjectClassification__Table5                                                  = 5,
	EARObjectClassification__Seat6                                                   = 6,
	EARObjectClassification__Face7                                                   = 7,
	EARObjectClassification__Image8                                                  = 8,
	EARObjectClassification__World9                                                  = 9,
	EARObjectClassification__SceneObject10                                           = 10,
	EARObjectClassification__HandMesh11                                              = 11,
	EARObjectClassification__Door12                                                  = 12,
	EARObjectClassification__Window13                                                = 13,
	EARObjectClassification__EARObjectClassification_MAX14                           = 14
};

/// Enum /Script/AugmentedReality.EARSpatialMeshUsageFlags
/// Size: 0x04
enum EARSpatialMeshUsageFlags : uint8_t
{
	EARSpatialMeshUsageFlags__NotApplicable0                                         = 0,
	EARSpatialMeshUsageFlags__Visible1                                               = 1,
	EARSpatialMeshUsageFlags__Collision2                                             = 2,
	EARSpatialMeshUsageFlags__EARSpatialMeshUsageFlags_MAX3                          = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x03
enum EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model0                                                   = 0,
	EARJointTransformSpace__ParentJoint1                                             = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX2                              = 2
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x05
enum EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise0                                                      = 0,
	EARAltitudeSource__Coarse1                                                       = 1,
	EARAltitudeSource__UserDefined2                                                  = 2,
	EARAltitudeSource__Unknown3                                                      = 3,
	EARAltitudeSource__EARAltitudeSource_MAX4                                        = 4
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x03
enum EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape0                                         = 0,
	EARCandidateImageOrientation__Portrait1                                          = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX2                  = 2
};

