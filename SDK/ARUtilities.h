
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ARUtilities.

/// Struct /Script/ARUtilities.ARKitPoseTrackingConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FARKitPoseTrackingConfig
{ 
	FVector                                            HumanForward;                                               // 0x0000   (0x0018)  
	FVector                                            MeshForward;                                                // 0x0018   (0x0018)  
};

/// Class /Script/ARUtilities.ARLiveLinkRetargetAsset
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UARLiveLinkRetargetAsset : public ULiveLinkRetargetAsset : ULiveLinkRetargetAsset
{ 
public:
	EARLiveLinkSourceType                              SourceType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TMap<FName, FName>                                 BoneMap;                                                    // 0x0030   (0x0050)  
	FARKitPoseTrackingConfig                           ARKitPoseTrackingConfig;                                    // 0x0080   (0x0030)  
};

/// Class /Script/ARUtilities.ARPassthroughManager
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AARPassthroughManager : public AActor : AActor
{ 
public:
	TArray<UClass*>                                    ARComponentClasses;                                         // 0x0290   (0x0010)  
	UPassthroughMaterialUpdateComponent*               PassthroughUpdateComponent;                                 // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/ARUtilities.ARPassthroughManager.GetPassthroughMaterialUpdateComponent
	UPassthroughMaterialUpdateComponent* GetPassthroughMaterialUpdateComponent();                                            // [0x14c6c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ARUtilities.ARUtilitiesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARUtilitiesFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/ARUtilities.PassthroughMaterialUpdateComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPassthroughMaterialUpdateComponent : public UActorComponent : UActorComponent
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	UMaterialInterface*                                PassthroughMaterial;                                        // 0x00A8   (0x0008)  
	UMaterialInterface*                                PassthroughMaterialExternalTexture;                         // 0x00B0   (0x0008)  
	FLinearColor                                       PassthroughDebugColor;                                      // 0x00B8   (0x0010)  
	TArray<UPrimitiveComponent*>                       AffectedComponents;                                         // 0x00C8   (0x0010)  
	TArray<UPrimitiveComponent*>                       PendingComponents;                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/ARUtilities.PassthroughMaterialUpdateComponent.SetPassthroughDebugColor
	void SetPassthroughDebugColor(FLinearColor NewDebugColor);                                                               // [0x14c6dd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ARUtilities.PassthroughMaterialUpdateComponent.RemoveAffectedComponent
	void RemoveAffectedComponent(UPrimitiveComponent* InComponent);                                                          // [0x14c6c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ARUtilities.PassthroughMaterialUpdateComponent.AddAffectedComponent
	void AddAffectedComponent(UPrimitiveComponent* InComponent);                                                             // [0x14c6b70] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/ARUtilities.EARLiveLinkSourceType
/// Size: 0x03
enum EARLiveLinkSourceType : uint8_t
{
	EARLiveLinkSourceType__None0                                                     = 0,
	EARLiveLinkSourceType__ARKitPoseTracking1                                        = 1,
	EARLiveLinkSourceType__EARLiveLinkSourceType_MAX2                                = 2
};

