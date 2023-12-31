
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveLinkComponents.

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0006 (0x000000 - 0x000006)
struct FLiveLinkTransformControllerData
{ 
	bool                                               bWorldTransform;                                            // 0x0000   (0x0001)  
	bool                                               bUseLocation;                                               // 0x0001   (0x0001)  
	bool                                               bUseRotation;                                               // 0x0002   (0x0001)  
	bool                                               bUseScale;                                                  // 0x0003   (0x0001)  
	bool                                               bSweep;                                                     // 0x0004   (0x0001)  
	bool                                               bTeleport;                                                  // 0x0005   (0x0001)  
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class ULiveLinkComponentSettings : public UObject : UObject
{ 
public:
	TMap<UClass*, UClass*>                             DefaultControllerForRole;                                   // 0x0028   (0x0050)  
};

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0040 (0x000028 - 0x000068)
class ULiveLinkControllerBase : public UObject : UObject
{ 
public:
	FComponentReference                                ComponentPicker;                                            // 0x0028   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0000 (0x000068 - 0x000068)
class ULiveLinkLightController : public ULiveLinkControllerBase : ULiveLinkControllerBase
{ 
public:
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0008 (0x000068 - 0x000070)
class ULiveLinkTransformController : public ULiveLinkControllerBase : ULiveLinkControllerBase
{ 
public:
	FLiveLinkTransformControllerData                   TransformData;                                              // 0x0068   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006E   (0x0002)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class ULiveLinkComponentController : public UActorComponent : UActorComponent
{ 
public:
	FLiveLinkSubjectRepresentation                     SubjectRepresentation;                                      // 0x00A0   (0x0010)  
	TMap<UClass*, ULiveLinkControllerBase*>            ControllerMap;                                              // 0x00B0   (0x0050)  
	bool                                               bUpdateInEditor;                                            // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnControllerMapUpdatedDelegate;                             // 0x0118   (0x0010)  
	bool                                               bDisableEvaluateLiveLinkWhenSpawnable;                      // 0x0128   (0x0001)  
	bool                                               bEvaluateLiveLink;                                          // 0x0129   (0x0001)  
	bool                                               bUpdateInPreviewEditor;                                     // 0x012A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1D];                                      // 0x012B   (0x001D)  MISSED


	/// Functions
	// Function /Script/LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
	void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation);                                   // [0x148f610] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
	FLiveLinkSubjectRepresentation GetSubjectRepresentation();                                                               // [0x148f5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

