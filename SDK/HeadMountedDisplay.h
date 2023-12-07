
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HeadMountedDisplay.

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0040   (0x0020)  
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (0x000000 - 0x000120)
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x001F   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              GripRotation;                                               // 0x0040   (0x0020)  
	FVector                                            AimPosition;                                                // 0x0060   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              AimRotation;                                                // 0x0080   (0x0020)  
	FVector                                            PalmPosition;                                               // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FQuat                                              PalmRotation;                                               // 0x00C0   (0x0020)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x00E0   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x00F0   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0100   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData05_6[0xF];                                       // 0x0111   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (0x000000 - 0x00000C)
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UHandKeypointConversion : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0130 (0x000570 - 0x0006A0)
class UMotionControllerComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0568   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x056C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x056D   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0570   (0x0008)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0578:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0579   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x057C   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x057D   (0x000B)  MISSED
	bool                                               bDisplayDeviceModel;                                        // 0x0588   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0589   (0x0003)  MISSED
	FName                                              DisplayModelSource;                                         // 0x058C   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	UStaticMesh*                                       CustomDisplayMesh;                                          // 0x0598   (0x0008)  
	TArray<UMaterialInterface*>                        DisplayMeshMaterialOverrides;                               // 0x05A0   (0x0010)  
	UPrimitiveComponent*                               DisplayComponent;                                           // 0x05B0   (0x0008)  
	unsigned char                                      UnknownData05_6[0xE8];                                      // 0x05B8   (0x00E8)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x3367730] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetTrackingMotionSource(FName NewSource);                                                                           // [0x33675b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x3367090] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x3366ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);                                                                  // [0x3366910] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x3366740] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	void OnMotionControllerUpdated();                                                                                        // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	bool IsTracked();                                                                                                        // [0x33665f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	EControllerHand GetTrackingSource();                                                                                     // [0x3365890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x3364be0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x3364440] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UVRNotificationsComponent : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;      // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           HMDTrackingInitializedDelegate;                             // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           HMDRecenteredDelegate;                                      // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           HMDLostDelegate;                                            // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           HMDReconnectedDelegate;                                     // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           HMDConnectCanceledDelegate;                                 // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           HMDPutOnHeadDelegate;                                       // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           HMDRemovedFromHeadDelegate;                                 // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           VRControllerRecenteredDelegate;                             // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           XRTrackingOriginChangedDelegate;                            // 0x0130   (0x0010)  
	FMulticastInlineDelegate                           XRPlayAreaChangedDelegate;                                  // 0x0140   (0x0010)  
	FMulticastInlineDelegate                           XRInteractionProfileChangedDelegate;                        // 0x0150   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnModelLoaded;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnLoadFailure;                                              // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	UPrimitiveComponent*                               SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent); // [0x3361be0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent); // [0x33611a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRDeviceVisualizationComponent
/// Size: 0x0050 (0x000620 - 0x000670)
class UXRDeviceVisualizationComponent : public UStaticMeshComponent : UStaticMeshComponent
{ 
public:
	bool                                               bIsVisualizationActive;                                     // 0x0620   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0621   (0x0003)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0624   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x062C   (0x0004)  MISSED
	UStaticMesh*                                       CustomDisplayMesh;                                          // 0x0630   (0x0008)  
	TArray<UMaterialInterface*>                        DisplayMeshMaterialOverrides;                               // 0x0638   (0x0010)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0648   (0x0028)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsVisualizationActive
	void SetIsVisualizationActive(bool bNewVisualizationState);                                                              // [0x3366e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsRenderingActive
	void SetIsRenderingActive(bool bRenderingIsActive);                                                                      // [0x3366da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRDeviceVisualizationComponent.SetDisplayModelSource
	void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x3366b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRDeviceVisualizationComponent.SetCustomDisplayMesh
	void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);                                                                  // [0x3366a20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation0                                            = 0,
	EOrientPositionSelector__Position1                                               = 1,
	EOrientPositionSelector__OrientationAndPosition2                                 = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX3                            = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor0                                                       = 0,
	EHMDTrackingOrigin__Eye1                                                         = 1,
	EHMDTrackingOrigin__Stage2                                                       = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX3                                      = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum EHMDWornState : uint8_t
{
	EHMDWornState__Unknown0                                                          = 0,
	EHMDWornState__Worn1                                                             = 1,
	EHMDWornState__NotWorn2                                                          = 2,
	EHMDWornState__EHMDWornState_MAX3                                                = 3
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem0                                     = 0,
	EXRDeviceConnectionResult__FeatureNotSupported1                                  = 1,
	EXRDeviceConnectionResult__NoValidViewport2                                      = 2,
	EXRDeviceConnectionResult__MiscFailure3                                          = 3,
	EXRDeviceConnectionResult__Success4                                              = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX5                        = 5
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x06
enum EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags0                                                         = 0,
	EXRSystemFlags__IsAR1                                                            = 1,
	EXRSystemFlags__IsTablet2                                                        = 2,
	EXRSystemFlags__IsHeadMounted3                                                   = 4,
	EXRSystemFlags__SupportsHandTracking4                                            = 8,
	EXRSystemFlags__EXRSystemFlags_MAX5                                              = 9
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled0                                                  = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed1                                      = 1,
	ESpectatorScreenMode__Undistorted2                                               = 2,
	ESpectatorScreenMode__Distorted3                                                 = 3,
	ESpectatorScreenMode__SingleEye4                                                 = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill5                                    = 5,
	ESpectatorScreenMode__Texture6                                                   = 6,
	ESpectatorScreenMode__TexturePlusEye7                                            = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX8                                  = 8
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x08
enum EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay0                                        = 0,
	EXRTrackedDeviceType__Controller1                                                = 1,
	EXRTrackedDeviceType__TrackingReference2                                         = 2,
	EXRTrackedDeviceType__Tracker3                                                   = 3,
	EXRTrackedDeviceType__Other4                                                     = 4,
	EXRTrackedDeviceType__Invalid5                                                   = 254,
	EXRTrackedDeviceType__Any6                                                       = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX7                                  = 256
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x27
enum EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm0                                                             = 0,
	EHandKeypoint__Wrist1                                                            = 1,
	EHandKeypoint__ThumbMetacarpal2                                                  = 2,
	EHandKeypoint__ThumbProximal3                                                    = 3,
	EHandKeypoint__ThumbDistal4                                                      = 4,
	EHandKeypoint__ThumbTip5                                                         = 5,
	EHandKeypoint__IndexMetacarpal6                                                  = 6,
	EHandKeypoint__IndexProximal7                                                    = 7,
	EHandKeypoint__IndexIntermediate8                                                = 8,
	EHandKeypoint__IndexDistal9                                                      = 9,
	EHandKeypoint__IndexTip10                                                        = 10,
	EHandKeypoint__MiddleMetacarpal11                                                = 11,
	EHandKeypoint__MiddleProximal12                                                  = 12,
	EHandKeypoint__MiddleIntermediate13                                              = 13,
	EHandKeypoint__MiddleDistal14                                                    = 14,
	EHandKeypoint__MiddleTip15                                                       = 15,
	EHandKeypoint__RingMetacarpal16                                                  = 16,
	EHandKeypoint__RingProximal17                                                    = 17,
	EHandKeypoint__RingIntermediate18                                                = 18,
	EHandKeypoint__RingDistal19                                                      = 19,
	EHandKeypoint__RingTip20                                                         = 20,
	EHandKeypoint__LittleMetacarpal21                                                = 21,
	EHandKeypoint__LittleProximal22                                                  = 22,
	EHandKeypoint__LittleIntermediate23                                              = 23,
	EHandKeypoint__LittleDistal24                                                    = 24,
	EHandKeypoint__LittleTip25                                                       = 25,
	EHandKeypoint__EHandKeypoint_MAX26                                               = 26
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x03
enum EXRVisualType : uint8_t
{
	EXRVisualType__Controller0                                                       = 0,
	EXRVisualType__Hand1                                                             = 1,
	EXRVisualType__EXRVisualType_MAX2                                                = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked0                                                     = 0,
	ETrackingStatus__InertialOnly1                                                   = 1,
	ETrackingStatus__Tracked2                                                        = 2,
	ETrackingStatus__ETrackingStatus_MAX3                                            = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None0                                                  = 0,
	ESpatialInputGestureAxis__Manipulation1                                          = 1,
	ESpatialInputGestureAxis__Navigation2                                            = 2,
	ESpatialInputGestureAxis__NavigationRails3                                       = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX4                          = 4
};

