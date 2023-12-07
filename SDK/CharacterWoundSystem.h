
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CharacterWoundSystem.

/// Class /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C
/// Size: 0x0069 (0x0000A0 - 0x000109)
class UWoundComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	TArray<FTransform>                                 RefPoseLocalBoneTransforms;                                 // 0x00A8   (0x0010)  
	UTextureRenderTarget2D*                            BloodMask;                                                  // 0x00B8   (0x0008)  
	int32_t                                            BloodMaskSize;                                              // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	UTextureRenderTarget2D*                            BloodMask_NotDilated;                                       // 0x00C8   (0x0008)  
	USceneCaptureComponent2D*                          SceneCaptureComponent2D;                                    // 0x00D0   (0x0008)  
	UMaterialInstanceDynamic*                          DilateMaterial;                                             // 0x00D8   (0x0008)  
	UMaterialInstanceDynamic*                          BloodRenderMaterial;                                        // 0x00E0   (0x0008)  
	TArray<UMaterialInterface*>                        OriginalMaterials;                                          // 0x00E8   (0x0010)  
	bool                                               DilateBloodMask;                                            // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	USkeletalMeshComponent*                            MeshReference;                                              // 0x0100   (0x0008)  
	bool                                               BloodMaskInitialized;                                       // 0x0108   (0x0001)  


	/// Functions
	// Function /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C.Init
	void Init(USkeletalMeshComponent* SkeletalMesh, USceneCaptureComponent2D* SceneCapture, bool SceneCaptureExists, TArray<UMaterialInstanceDynamic*>& OriginalMaterials); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C.TransformLocationByRefBoneTransform
	void TransformLocationByRefBoneTransform(FName BoneName, FVector WorldLocation, FVector& MeshLocalSpaceLocation);        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C.GetRefPoseBoneTransform
	void GetRefPoseBoneTransform(USkeletalMeshComponent* SkeletalMesh, FName BoneName, FTransform& MeshLocalSpaceTransform); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C.Initialize
	void Initialize(USkeletalMeshComponent* SkeletalMesh, USceneCaptureComponent2D* SceneCapture);                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C.TakeHit
	void TakeHit(FName BoneName, FVector WorldSpaceLocation, double WoundRadius);                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/CharacterWoundSystem/Blueprint/Components/WoundComponent.WoundComponent_C.ExecuteUbergraph_WoundComponent
	void ExecuteUbergraph_WoundComponent(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

