
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AppleARKit.

/// Struct /Script/AppleARKit.AppleARKitCamera
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FAppleARKitCamera
{ 
	EARTrackingQuality                                 TrackingQuality;                                            // 0x0000   (0x0001)  
	EARTrackingQualityReason                           TrackingQualityReason;                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0002   (0x000E)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FQuat                                              Orientation;                                                // 0x0070   (0x0020)  
	FVector                                            Translation;                                                // 0x0090   (0x0018)  
	FVector2D                                          ImageResolution;                                            // 0x00A8   (0x0010)  
	FVector2D                                          FocalLength;                                                // 0x00B8   (0x0010)  
	FVector2D                                          PrincipalPoint;                                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/AppleARKit.AppleARKitFrame
/// Size: 0x0160 (0x000000 - 0x000160)
struct FAppleARKitFrame
{ 
	unsigned char                                      UnknownData00_1[0x160];                                     // 0x0000   (0x0160)  MISSED
};

/// Struct /Script/AppleARKit.AppleARKitLightEstimate
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAppleARKitLightEstimate
{ 
	bool                                               bIsValid;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AmbientIntensity;                                           // 0x0004   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x0008   (0x0004)  
};

/// Class /Script/AppleARKit.AppleARKitSettings
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UAppleARKitSettings : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	bool                                               bRequireARKitSupport;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            FaceTrackingLogDir;                                         // 0x0038   (0x0010)  
	TArray<ELivelinkTrackingType>                      LivelinkTrackingTypes;                                      // 0x0048   (0x0010)  
	bool                                               bFaceTrackingLogData;                                       // 0x0058   (0x0001)  
	bool                                               bFaceTrackingWriteEachFrame;                                // 0x0059   (0x0001)  
	EARFaceTrackingFileWriterType                      FaceTrackingFileWriterType;                                 // 0x005A   (0x0001)  
	bool                                               bShouldWriteCameraImagePerFrame;                            // 0x005B   (0x0001)  
	float                                              WrittenCameraImageScale;                                    // 0x005C   (0x0004)  
	int32_t                                            WrittenCameraImageQuality;                                  // 0x0060   (0x0004)  
	ETextureRotationDirection                          WrittenCameraImageRotation;                                 // 0x0064   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	int32_t                                            LiveLinkPublishingPort;                                     // 0x0068   (0x0004)  
	FName                                              DefaultFaceTrackingLiveLinkSubjectName;                     // 0x006C   (0x0008)  
	FName                                              DefaultPoseTrackingLiveLinkSubjectName;                     // 0x0074   (0x0008)  
	EARFaceTrackingDirection                           DefaultFaceTrackingDirection;                               // 0x007C   (0x0001)  
	bool                                               bAdjustThreadPrioritiesDuringARSession;                     // 0x007D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x007E   (0x0002)  MISSED
	int32_t                                            GameThreadPriorityOverride;                                 // 0x0080   (0x0004)  
	int32_t                                            RenderThreadPriorityOverride;                               // 0x0084   (0x0004)  
	FString                                            ARKitTimecodeProvider;                                      // 0x0088   (0x0010)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x0098   (0x0028)  MISSED
};

/// Class /Script/AppleARKit.AppleARKitTextureCameraImage
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UAppleARKitTextureCameraImage : public UARTextureCameraImage : UARTextureCameraImage
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/AppleARKit.AppleARKitTextureCameraDepth
/// Size: 0x0000 (0x000200 - 0x000200)
class UAppleARKitTextureCameraDepth : public UARTextureCameraDepth : UARTextureCameraDepth
{ 
public:
};

/// Class /Script/AppleARKit.AppleARKitEnvironmentCaptureProbeTexture
/// Size: 0x0000 (0x000290 - 0x000290)
class UAppleARKitEnvironmentCaptureProbeTexture : public UAREnvironmentCaptureProbeTexture : UAREnvironmentCaptureProbeTexture
{ 
public:
};

/// Class /Script/AppleARKit.AppleARKitOcclusionTexture
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UAppleARKitOcclusionTexture : public UARTexture : UARTexture
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/AppleARKit.AppleARKitCameraVideoTexture
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UAppleARKitCameraVideoTexture : public UARTextureCameraImage : UARTextureCameraImage
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/AppleARKit.AppleARKitTimecodeProvider
/// Size: 0x0008 (0x000030 - 0x000038)
class UAppleARKitTimecodeProvider : public UTimecodeProvider : UTimecodeProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/AppleARKit.AppleARKitEnvironmentCaptureProbe
/// Size: 0x0000 (0x000180 - 0x000180)
class UAppleARKitEnvironmentCaptureProbe : public UAREnvironmentCaptureProbe : UAREnvironmentCaptureProbe
{ 
public:
};

/// Class /Script/AppleARKit.ARKitCameraOverlayMaterialLoader
/// Size: 0x0028 (0x000028 - 0x000050)
class UARKitCameraOverlayMaterialLoader : public UObject : UObject
{ 
public:
	UMaterialInterface*                                DefaultCameraOverlayMaterial;                               // 0x0028   (0x0008)  
	UMaterialInterface*                                DepthOcclusionOverlayMaterial;                              // 0x0030   (0x0008)  
	UMaterialInterface*                                MatteOcclusionOverlayMaterial;                              // 0x0038   (0x0008)  
	UMaterialInterface*                                SceneDepthOcclusionMaterial;                                // 0x0040   (0x0008)  
	UMaterialInterface*                                SceneDepthColorationMaterial;                               // 0x0048   (0x0008)  
};

/// Class /Script/AppleARKit.ARKitGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARKitGeoTrackingSupport : public UARGeoTrackingSupport : UARGeoTrackingSupport
{ 
public:
};

/// Class /Script/AppleARKit.ARKitMeshGeometry
/// Size: 0x0000 (0x000160 - 0x000160)
class UARKitMeshGeometry : public UARMeshGeometry : UARMeshGeometry
{ 
public:
};

/// Class /Script/AppleARKit.MaterialExpressionARKitPassthroughCamera
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UMaterialExpressionARKitPassthroughCamera : public UMaterialExpression : UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	uint32_t                                           ConstCoordinate;                                            // 0x00D8   (0x0004)  
	TEnumAsByte<EARKitTextureType>                     TextureType;                                                // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
};

/// Enum /Script/AppleARKit.EARFaceTrackingFileWriterType
/// Size: 0x04
enum EARFaceTrackingFileWriterType : uint8_t
{
	EARFaceTrackingFileWriterType__None0                                             = 0,
	EARFaceTrackingFileWriterType__CSV1                                              = 1,
	EARFaceTrackingFileWriterType__JSON2                                             = 2,
	EARFaceTrackingFileWriterType__EARFaceTrackingFileWriterType_MAX3                = 3
};

/// Enum /Script/AppleARKit.ELivelinkTrackingType
/// Size: 0x03
enum ELivelinkTrackingType : uint8_t
{
	ELivelinkTrackingType__FaceTracking0                                             = 0,
	ELivelinkTrackingType__PoseTracking1                                             = 1,
	ELivelinkTrackingType__ELivelinkTrackingType_MAX2                                = 2
};

/// Enum /Script/AppleARKit.EARKitTextureType
/// Size: 0x03
enum EARKitTextureType : uint8_t
{
	TextureY0                                                                        = 0,
	TextureCbCr1                                                                     = 1,
	EARKitTextureType_MAX2                                                           = 2
};

