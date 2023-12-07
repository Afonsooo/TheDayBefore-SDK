
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package InteractiveToolsFramework.

/// Struct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGizmoVec2ParameterChange
{ 
	FVector2D                                          InitialValue;                                               // 0x0000   (0x0010)  
	FVector2D                                          CurrentValue;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementColorAttribute
/// Size: 0x0014 (0x000000 - 0x000014)
struct FGizmoElementColorAttribute
{ 
	FLinearColor                                       Value;                                                      // 0x0000   (0x0010)  
	bool                                               bHasValue;                                                  // 0x0010   (0x0001)  
	bool                                               bOverridesChildState;                                       // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementMaterialAttribute
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGizmoElementMaterialAttribute
{ 
	TWeakObjectPtr<UMaterialInterface*>                Value;                                                      // 0x0000   (0x0008)  
	bool                                               bOverridesChildState;                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGizmoElementMeshRenderStateAttributes
{ 
	FGizmoElementMaterialAttribute                     Material;                                                   // 0x0000   (0x000C)  
	FGizmoElementMaterialAttribute                     HoverMaterial;                                              // 0x000C   (0x000C)  
	FGizmoElementMaterialAttribute                     InteractMaterial;                                           // 0x0018   (0x000C)  
	FGizmoElementColorAttribute                        VertexColor;                                                // 0x0024   (0x0014)  
	FGizmoElementColorAttribute                        HoverVertexColor;                                           // 0x0038   (0x0014)  
	FGizmoElementColorAttribute                        InteractVertexColor;                                        // 0x004C   (0x0014)  
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
/// Size: 0x003C (0x000000 - 0x00003C)
struct FGizmoElementLineRenderStateAttributes
{ 
	FGizmoElementColorAttribute                        LineColor;                                                  // 0x0000   (0x0014)  
	FGizmoElementColorAttribute                        HoverLineColor;                                             // 0x0014   (0x0014)  
	FGizmoElementColorAttribute                        InteractLineColor;                                          // 0x0028   (0x0014)  
};

/// Struct /Script/InteractiveToolsFramework.GizmoFloatParameterChange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGizmoFloatParameterChange
{ 
	float                                              InitialValue;                                               // 0x0000   (0x0004)  
	float                                              CurrentValue;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/InteractiveToolsFramework.BrushStampData
/// Size: 0x0128 (0x000000 - 0x000128)
struct FBrushStampData
{ 
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0000   (0x0128)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.BehaviorInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBehaviorInfo
{ 
	UInputBehavior*                                    Behavior;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.InputRayHit
/// Size: 0x0040 (0x000000 - 0x000040)
struct FInputRayHit
{ 
	bool                                               bHit;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             HitDepth;                                                   // 0x0008   (0x0008)  
	FVector                                            hitNormal;                                                  // 0x0010   (0x0018)  
	bool                                               bHasHitNormal;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            HitIdentifier;                                              // 0x002C   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0030   (0x0008)  MISSED
	TWeakObjectPtr<UObject*>                           HitObject;                                                  // 0x0038   (0x0008)  
};

/// Struct /Script/InteractiveToolsFramework.InputDeviceRay
/// Size: 0x0048 (0x000000 - 0x000048)
struct FInputDeviceRay
{ 
	FRay                                               WorldRay;                                                   // 0x0000   (0x0030)  
	bool                                               bHas2D;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector2D                                          ScreenPosition;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/InteractiveToolsFramework.ActiveGizmo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FActiveGizmo
{ 
	UInteractiveGizmo*                                 Gizmo;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AssetBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetBackedTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseComponent
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UGizmoBaseComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0568   (0x0010)  
	float                                              HoverSizeMultiplier;                                        // 0x0578   (0x0004)  
	float                                              PixelHitDistanceThreshold;                                  // 0x057C   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0580   (0x0008)  MISSED
	UGizmoViewContext*                                 GizmoViewContext;                                           // 0x0588   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0590   (0x0010)  MISSED


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	void UpdateWorldLocalState(bool bWorldIn);                                                                               // [0x4a5a810] Final|Native|Public  
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	void UpdateHoverState(bool bHoveringIn);                                                                                 // [0x4a5a620] Final|Native|Public  
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommandArguments
/// Size: 0x0008 (0x000028 - 0x000030)
class UInteractiveCommandArguments : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommandResult
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveCommandResult : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommand
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveCommand : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveGizmoBuilder : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolContextTransactionProvider : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AInternalToolFrameworkActor : public AActor : AActor
{ 
public:
	bool                                               bIsSelectableInEditor;                                      // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolFrameworkComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolFrameworkComponent : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolCameraFocusAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolCameraFocusAPI : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolNestedAcceptCancelAPI : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolExclusiveToolAPI : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MaterialProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMaterialProvider : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MeshDescriptionCommitter
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionCommitter : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MeshDescriptionProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionProvider : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseVec2ParameterSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
/// Size: 0x0030 (0x000048 - 0x000078)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource : UGizmoBaseVec2ParameterSource
{ 
public:
	FVector2D                                          Value;                                                      // 0x0048   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0058   (0x0020)  
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseFloatParameterSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
/// Size: 0x0148 (0x000048 - 0x000190)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource : UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0048   (0x0088)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x00D0   (0x0010)  
	TScriptInterface<Class>                            TransformSource;                                            // 0x00E0   (0x0010)  
	float                                              Parameter;                                                  // 0x00F0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector                                            CurTranslationAxis;                                         // 0x0100   (0x0018)  
	FVector                                            CurTranslationOrigin;                                       // 0x0118   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x0130   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
/// Size: 0x01D8 (0x000048 - 0x000220)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource : UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0048   (0x00C8)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0110   (0x0010)  
	TScriptInterface<Class>                            TransformSource;                                            // 0x0120   (0x0010)  
	FVector2D                                          Parameter;                                                  // 0x0130   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0140   (0x0020)  
	FVector                                            CurTranslationOrigin;                                       // 0x0160   (0x0018)  
	FVector                                            CurTranslationNormal;                                       // 0x0178   (0x0018)  
	FVector                                            CurTranslationAxisX;                                        // 0x0190   (0x0018)  
	FVector                                            CurTranslationAxisY;                                        // 0x01A8   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x01C0   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
/// Size: 0x0148 (0x000048 - 0x000190)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource : UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0048   (0x0088)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x00D0   (0x0010)  
	TScriptInterface<Class>                            TransformSource;                                            // 0x00E0   (0x0010)  
	float                                              angle;                                                      // 0x00F0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector                                            CurRotationAxis;                                            // 0x0100   (0x0018)  
	FVector                                            CurRotationOrigin;                                          // 0x0118   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x0130   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
/// Size: 0x0118 (0x000048 - 0x000160)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource : UGizmoBaseVec2ParameterSource
{ 
public:
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0048   (0x0010)  
	TScriptInterface<Class>                            TransformSource;                                            // 0x0058   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FVector2D                                          Parameter;                                                  // 0x0070   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0080   (0x0020)  
	FVector                                            CurScaleOrigin;                                             // 0x00A0   (0x0018)  
	FVector                                            CurScaleNormal;                                             // 0x00B8   (0x0018)  
	FVector                                            CurScaleAxisX;                                              // 0x00D0   (0x0018)  
	FVector                                            CurScaleAxisY;                                              // 0x00E8   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x0100   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
/// Size: 0x00C8 (0x000048 - 0x000110)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource : UGizmoBaseFloatParameterSource
{ 
public:
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0048   (0x0010)  
	TScriptInterface<Class>                            TransformSource;                                            // 0x0058   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0068   (0x0004)  
	bool                                               bClampToZero;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              Parameter;                                                  // 0x0070   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FVector                                            CurScaleAxis;                                               // 0x0080   (0x0018)  
	FVector                                            CurScaleOrigin;                                             // 0x0098   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x00B0   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
/// Size: 0x0168 (0x000048 - 0x0001B0)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource : UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0048   (0x0048)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0090   (0x0010)  
	TScriptInterface<Class>                            TransformSource;                                            // 0x00A0   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x00B0   (0x0004)  
	bool                                               bUseEqualScaling;                                           // 0x00B4   (0x0001)  
	bool                                               bClampToZero;                                               // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B6   (0x0002)  MISSED
	FVector2D                                          Parameter;                                                  // 0x00B8   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x00C8   (0x0020)  
	FVector                                            CurScaleOrigin;                                             // 0x00E8   (0x0018)  
	FVector                                            CurScaleNormal;                                             // 0x0100   (0x0018)  
	FVector                                            CurScaleAxisX;                                              // 0x0118   (0x0018)  
	FVector                                            CurScaleAxisY;                                              // 0x0130   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0148   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0150   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.PhysicsDataSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsDataSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UPrimitiveComponentBackedTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.SkeletalMeshBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalMeshBackedTarget : public UAssetBackedTarget : UAssetBackedTarget
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.StaticMeshBackedTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UStaticMeshBackedTarget : public UAssetBackedTarget : UAssetBackedTarget
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InputBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputBehavior : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
/// Size: 0x0050 (0x000030 - 0x000080)
class UAnyButtonInputBehavior : public UInputBehavior : UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ClickDragInputBehavior
/// Size: 0x00C0 (0x000080 - 0x000140)
class UClickDragInputBehavior : public UAnyButtonInputBehavior : UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0080   (0x00A0)  MISSED
	bool                                               bUpdateModifiersDuringDrag;                                 // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0121   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
/// Size: 0x0140 (0x000140 - 0x000280)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior : UClickDragInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0140   (0x0140)  MISSED
};

/// Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
/// Size: 0x0068 (0x000030 - 0x000098)
class UKeyAsModifierInputBehavior : public UInputBehavior : UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MouseHoverBehavior
/// Size: 0x0068 (0x000030 - 0x000098)
class UMouseHoverBehavior : public UInputBehavior : UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalMouseHoverBehavior
/// Size: 0x0148 (0x000098 - 0x0001E0)
class ULocalMouseHoverBehavior : public UMouseHoverBehavior : UMouseHoverBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0098   (0x0148)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MouseWheelInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior : UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0080   (0x00B0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior : UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0080   (0x00B0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class USingleClickInputBehavior : public UAnyButtonInputBehavior : UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0080   (0x0040)  MISSED
	bool                                               HitTestOnRelease;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6F];                                      // 0x00C1   (0x006F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalSingleClickInputBehavior
/// Size: 0x00D0 (0x000130 - 0x000200)
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior : USingleClickInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0130   (0x00D0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickOrDragInputBehavior
/// Size: 0x0100 (0x000080 - 0x000180)
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior : UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0080   (0x00A0)  MISSED
	bool                                               bBeginDragIfClickTargetNotHit;                              // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              ClickDistanceThreshold;                                     // 0x0124   (0x0004)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0128   (0x0058)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleKeyCaptureBehavior
/// Size: 0x00E0 (0x000030 - 0x000110)
class USingleKeyCaptureBehavior : public UInputBehavior : UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0030   (0x00E0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.WidgetBaseBehavior
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBaseBehavior : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmo
/// Size: 0x0010 (0x000028 - 0x000038)
class UInteractiveGizmo : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UInputBehaviorSet*                                 InputBehaviors;                                             // 0x0030   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmo
/// Size: 0x0198 (0x000038 - 0x0001D0)
class UAxisAngleGizmo : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0038   (0x0010)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0048   (0x0010)  
	TScriptInterface<Class>                            AngleSource;                                                // 0x0058   (0x0010)  
	TScriptInterface<Class>                            HitTarget;                                                  // 0x0068   (0x0010)  
	TScriptInterface<Class>                            StateTarget;                                                // 0x0078   (0x0010)  
	UClickDragInputBehavior*                           MouseBehavior;                                              // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_5[0x80];                                      // 0x0090   (0x0080)  MISSED
	bool                                               bInInteraction;                                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FVector                                            RotationOrigin;                                             // 0x0118   (0x0018)  
	FVector                                            RotationAxis;                                               // 0x0130   (0x0018)  
	FVector                                            RotationPlaneX;                                             // 0x0148   (0x0018)  
	FVector                                            RotationPlaneY;                                             // 0x0160   (0x0018)  
	FVector                                            InteractionStartPoint;                                      // 0x0178   (0x0018)  
	FVector                                            InteractionCurPoint;                                        // 0x0190   (0x0018)  
	float                                              InteractionStartAngle;                                      // 0x01A8   (0x0004)  
	float                                              InteractionCurAngle;                                        // 0x01AC   (0x0004)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x01B0   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmo
/// Size: 0x0188 (0x000038 - 0x0001C0)
class UAxisPositionGizmo : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0038   (0x0010)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0048   (0x0010)  
	TScriptInterface<Class>                            ParameterSource;                                            // 0x0058   (0x0010)  
	UGizmoViewContext*                                 GizmoViewContext;                                           // 0x0068   (0x0008)  
	TScriptInterface<Class>                            HitTarget;                                                  // 0x0070   (0x0010)  
	TScriptInterface<Class>                            StateTarget;                                                // 0x0080   (0x0010)  
	UClickDragInputBehavior*                           MouseBehavior;                                              // 0x0090   (0x0008)  
	bool                                               bEnableSignedAxis;                                          // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x0099   (0x0088)  MISSED
	bool                                               bInInteraction;                                             // 0x0121   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0122   (0x0006)  MISSED
	FVector                                            InteractionOrigin;                                          // 0x0128   (0x0018)  
	FVector                                            InteractionAxis;                                            // 0x0140   (0x0018)  
	FVector                                            InteractionStartPoint;                                      // 0x0158   (0x0018)  
	FVector                                            InteractionCurPoint;                                        // 0x0170   (0x0018)  
	float                                              InteractionStartParameter;                                  // 0x0188   (0x0004)  
	float                                              InteractionCurParameter;                                    // 0x018C   (0x0004)  
	float                                              ParameterSign;                                              // 0x0190   (0x0004)  
	unsigned char                                      UnknownData03_6[0x2C];                                      // 0x0194   (0x002C)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource
/// Size: 0x0038 (0x000028 - 0x000060)
class UGizmoConstantAxisSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x0018)  
	FVector                                            Direction;                                                  // 0x0048   (0x0018)  
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
/// Size: 0x0068 (0x000028 - 0x000090)
class UGizmoConstantFrameAxisSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x0018)  
	FVector                                            Direction;                                                  // 0x0048   (0x0018)  
	FVector                                            TangentX;                                                   // 0x0060   (0x0018)  
	FVector                                            TangentY;                                                   // 0x0078   (0x0018)  
};

/// Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource
/// Size: 0x0028 (0x000028 - 0x000050)
class UGizmoWorldAxisSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x0018)  
	int32_t                                            AxisIndex;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGizmoComponentAxisSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	USceneComponent*                                   Component;                                                  // 0x0030   (0x0008)  
	int32_t                                            AxisIndex;                                                  // 0x0038   (0x0004)  
	bool                                               bLocalAxes;                                                 // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicator
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UBrushStampIndicator : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	bool                                               bVisible;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              BrushRadius;                                                // 0x003C   (0x0004)  
	float                                              BrushFalloff;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            BrushPosition;                                              // 0x0048   (0x0018)  
	FVector                                            BrushNormal;                                                // 0x0060   (0x0018)  
	bool                                               bDrawIndicatorLines;                                        // 0x0078   (0x0001)  
	bool                                               bDrawRadiusCircle;                                          // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	int32_t                                            SampleStepCount;                                            // 0x007C   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0080   (0x0010)  
	float                                              LineThickness;                                              // 0x0090   (0x0004)  
	bool                                               bDepthTested;                                               // 0x0094   (0x0001)  
	bool                                               bDrawSecondaryLines;                                        // 0x0095   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0096   (0x0002)  MISSED
	float                                              SecondaryLineThickness;                                     // 0x0098   (0x0004)  
	FLinearColor                                       SecondaryLineColor;                                         // 0x009C   (0x0010)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	UPrimitiveComponent*                               AttachedComponent;                                          // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoActor
/// Size: 0x0000 (0x000298 - 0x000298)
class AGizmoActor : public AInternalToolFrameworkActor : AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoActor
/// Size: 0x0088 (0x000298 - 0x000320)
class ACombinedTransformGizmoActor : public AGizmoActor : AGizmoActor
{ 
public:
	UPrimitiveComponent*                               TranslateX;                                                 // 0x0298   (0x0008)  
	UPrimitiveComponent*                               TranslateY;                                                 // 0x02A0   (0x0008)  
	UPrimitiveComponent*                               TranslateZ;                                                 // 0x02A8   (0x0008)  
	UPrimitiveComponent*                               TranslateYZ;                                                // 0x02B0   (0x0008)  
	UPrimitiveComponent*                               TranslateXZ;                                                // 0x02B8   (0x0008)  
	UPrimitiveComponent*                               TranslateXY;                                                // 0x02C0   (0x0008)  
	UPrimitiveComponent*                               RotateX;                                                    // 0x02C8   (0x0008)  
	UPrimitiveComponent*                               RotateY;                                                    // 0x02D0   (0x0008)  
	UPrimitiveComponent*                               RotateZ;                                                    // 0x02D8   (0x0008)  
	UPrimitiveComponent*                               RotationSphere;                                             // 0x02E0   (0x0008)  
	UPrimitiveComponent*                               UniformScale;                                               // 0x02E8   (0x0008)  
	UPrimitiveComponent*                               AxisScaleX;                                                 // 0x02F0   (0x0008)  
	UPrimitiveComponent*                               AxisScaleY;                                                 // 0x02F8   (0x0008)  
	UPrimitiveComponent*                               AxisScaleZ;                                                 // 0x0300   (0x0008)  
	UPrimitiveComponent*                               PlaneScaleYZ;                                               // 0x0308   (0x0008)  
	UPrimitiveComponent*                               PlaneScaleXZ;                                               // 0x0310   (0x0008)  
	UPrimitiveComponent*                               PlaneScaleXY;                                               // 0x0318   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoBuilder
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmo
/// Size: 0x0368 (0x000038 - 0x0003A0)
class UCombinedTransformGizmo : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	UTransformProxy*                                   ActiveTarget;                                               // 0x0038   (0x0008)  
	bool                                               bSnapToWorldGrid;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	bool                                               bGridSizeIsExplicit;                                        // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector                                            ExplicitGridSize;                                           // 0x0048   (0x0018)  
	bool                                               bRotationGridSizeIsExplicit;                                // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FRotator                                           ExplicitRotationGridSize;                                   // 0x0068   (0x0018)  
	bool                                               bSnapToWorldRotGrid;                                        // 0x0080   (0x0001)  
	bool                                               bUseContextCoordinateSystem;                                // 0x0081   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                    // 0x0084   (0x0004)  
	bool                                               bUseContextGizmoMode;                                       // 0x0088   (0x0001)  
	EToolContextTransformGizmoMode                     ActiveGizmoMode;                                            // 0x0089   (0x0001)  
	unsigned char                                      UnknownData04_5[0x126];                                     // 0x008A   (0x0126)  MISSED
	TArray<UPrimitiveComponent*>                       ActiveComponents;                                           // 0x01B0   (0x0010)  
	TArray<UInteractiveGizmo*>                         ActiveGizmos;                                               // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData05_5[0x50];                                      // 0x01D0   (0x0050)  MISSED
	UGizmoConstantFrameAxisSource*                     CameraAxisSource;                                           // 0x0220   (0x0008)  
	UGizmoComponentAxisSource*                         AxisXSource;                                                // 0x0228   (0x0008)  
	UGizmoComponentAxisSource*                         AxisYSource;                                                // 0x0230   (0x0008)  
	UGizmoComponentAxisSource*                         AxisZSource;                                                // 0x0238   (0x0008)  
	UGizmoComponentAxisSource*                         UnitAxisXSource;                                            // 0x0240   (0x0008)  
	UGizmoComponentAxisSource*                         UnitAxisYSource;                                            // 0x0248   (0x0008)  
	UGizmoComponentAxisSource*                         UnitAxisZSource;                                            // 0x0250   (0x0008)  
	UGizmoTransformChangeStateTarget*                  StateTarget;                                                // 0x0258   (0x0008)  
	unsigned char                                      UnknownData06_6[0x140];                                     // 0x0260   (0x0140)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoArrowComponent
/// Size: 0x0020 (0x0005A0 - 0x0005C0)
class UGizmoArrowComponent : public UGizmoBaseComponent : UGizmoBaseComponent
{ 
public:
	FVector                                            Direction;                                                  // 0x0598   (0x0018)  
	float                                              Gap;                                                        // 0x05B0   (0x0004)  
	float                                              Length;                                                     // 0x05B4   (0x0004)  
	float                                              Thickness;                                                  // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x05BC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBoxComponent
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UGizmoBoxComponent : public UGizmoBaseComponent : UGizmoBaseComponent
{ 
public:
	FVector                                            Origin;                                                     // 0x0598   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x05B0   (0x0020)  
	FVector                                            Dimensions;                                                 // 0x05D0   (0x0018)  
	float                                              LineThickness;                                              // 0x05E8   (0x0004)  
	bool                                               bRemoveHiddenLines;                                         // 0x05EC   (0x0001)  
	bool                                               bEnableAxisFlip;                                            // 0x05ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoCircleComponent
/// Size: 0x0020 (0x0005A0 - 0x0005C0)
class UGizmoCircleComponent : public UGizmoBaseComponent : UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x0598   (0x0018)  
	float                                              Radius;                                                     // 0x05B0   (0x0004)  
	float                                              Thickness;                                                  // 0x05B4   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x05B8   (0x0004)  
	bool                                               bViewAligned;                                               // 0x05BC   (0x0001)  
	bool                                               bDrawFullCircle;                                            // 0x05BD   (0x0001)  
	bool                                               bOnlyAllowFrontFacingHits;                                  // 0x05BE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x05BF   (0x0001)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementBase
/// Size: 0x00E0 (0x000028 - 0x000108)
class UGizmoElementBase : public UObject : UObject
{ 
public:
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	bool                                               bEnabledForPerspectiveProjection;                           // 0x0029   (0x0001)  
	bool                                               bEnabledForOrthographicProjection;                          // 0x002A   (0x0001)  
	bool                                               bEnabledForDefaultState;                                    // 0x002B   (0x0001)  
	bool                                               bEnabledForHoveringState;                                   // 0x002C   (0x0001)  
	bool                                               bEnabledForInteractingState;                                // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002E   (0x0002)  MISSED
	uint32_t                                           PartIdentifier;                                             // 0x0030   (0x0004)  
	FGizmoElementMeshRenderStateAttributes             MeshRenderAttributes;                                       // 0x0034   (0x0060)  
	EGizmoElementState                                 ElementState;                                               // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	EGizmoElementInteractionState                      ElementInteractionState;                                    // 0x0098   (0x0004)  
	EGizmoElementViewDependentType                     ViewDependentType;                                          // 0x009C   (0x0004)  
	FVector                                            ViewDependentAxis;                                          // 0x00A0   (0x0018)  
	float                                              ViewDependentAngleTol;                                      // 0x00B8   (0x0004)  
	float                                              ViewDependentAxialMaxCosAngleTol;                           // 0x00BC   (0x0004)  
	float                                              ViewDependentPlanarMinCosAngleTol;                          // 0x00C0   (0x0004)  
	EGizmoElementViewAlignType                         ViewAlignType;                                              // 0x00C4   (0x0004)  
	FVector                                            ViewAlignAxis;                                              // 0x00C8   (0x0018)  
	FVector                                            ViewAlignNormal;                                            // 0x00E0   (0x0018)  
	float                                              ViewAlignAxialAngleTol;                                     // 0x00F8   (0x0004)  
	float                                              ViewAlignAxialMaxCosAngleTol;                               // 0x00FC   (0x0004)  
	float                                              PixelHitDistanceThreshold;                                  // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementLineBase
/// Size: 0x0050 (0x000108 - 0x000158)
class UGizmoElementLineBase : public UGizmoElementBase : UGizmoElementBase
{ 
public:
	FGizmoElementLineRenderStateAttributes             LineRenderAttributes;                                       // 0x0108   (0x003C)  
	float                                              LineThickness;                                              // 0x0144   (0x0004)  
	bool                                               bScreenSpaceLine;                                           // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              HoverLineThicknessMultiplier;                               // 0x014C   (0x0004)  
	float                                              InteractLineThicknessMultiplier;                            // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCircleBase
/// Size: 0x0070 (0x000158 - 0x0001C8)
class UGizmoElementCircleBase : public UGizmoElementLineBase : UGizmoElementLineBase
{ 
public:
	FVector                                            Center;                                                     // 0x0158   (0x0018)  
	FVector                                            Axis0;                                                      // 0x0170   (0x0018)  
	FVector                                            Axis1;                                                      // 0x0188   (0x0018)  
	double                                             Radius;                                                     // 0x01A0   (0x0008)  
	int32_t                                            NumSegments;                                                // 0x01A8   (0x0004)  
	EGizmoElementPartialType                           PartialType;                                                // 0x01AC   (0x0004)  
	double                                             PartialStartAngle;                                          // 0x01B0   (0x0008)  
	double                                             PartialEndAngle;                                            // 0x01B8   (0x0008)  
	double                                             PartialViewDependentMaxCosTol;                              // 0x01C0   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementArc
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UGizmoElementArc : public UGizmoElementCircleBase : UGizmoElementCircleBase
{ 
public:
	double                                             InnerRadius;                                                // 0x01C8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementArrow
/// Size: 0x0080 (0x000108 - 0x000188)
class UGizmoElementArrow : public UGizmoElementBase : UGizmoElementBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0108   (0x0008)  MISSED
	UGizmoElementCylinder*                             CylinderElement;                                            // 0x0110   (0x0008)  
	UGizmoElementCone*                                 ConeElement;                                                // 0x0118   (0x0008)  
	UGizmoElementBox*                                  BoxElement;                                                 // 0x0120   (0x0008)  
	FVector                                            base;                                                       // 0x0128   (0x0018)  
	FVector                                            Direction;                                                  // 0x0140   (0x0018)  
	FVector                                            SideDirection;                                              // 0x0158   (0x0018)  
	float                                              BodyLength;                                                 // 0x0170   (0x0004)  
	float                                              BodyRadius;                                                 // 0x0174   (0x0004)  
	float                                              HeadLength;                                                 // 0x0178   (0x0004)  
	float                                              HeadRadius;                                                 // 0x017C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0180   (0x0004)  
	EGizmoElementArrowHeadType                         HeadType;                                                   // 0x0184   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementBox
/// Size: 0x0060 (0x000108 - 0x000168)
class UGizmoElementBox : public UGizmoElementBase : UGizmoElementBase
{ 
public:
	FVector                                            Center;                                                     // 0x0108   (0x0018)  
	FVector                                            Dimensions;                                                 // 0x0120   (0x0018)  
	FVector                                            UpDirection;                                                // 0x0138   (0x0018)  
	FVector                                            SideDirection;                                              // 0x0150   (0x0018)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCircle
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UGizmoElementCircle : public UGizmoElementCircleBase : UGizmoElementCircleBase
{ 
public:
	bool                                               bDrawMesh;                                                  // 0x01C8   (0x0001)  
	bool                                               bDrawLine;                                                  // 0x01C9   (0x0001)  
	bool                                               bHitMesh;                                                   // 0x01CA   (0x0001)  
	bool                                               bHitLine;                                                   // 0x01CB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCone
/// Size: 0x0040 (0x000108 - 0x000148)
class UGizmoElementCone : public UGizmoElementBase : UGizmoElementBase
{ 
public:
	FVector                                            Origin;                                                     // 0x0108   (0x0018)  
	FVector                                            Direction;                                                  // 0x0120   (0x0018)  
	float                                              Height;                                                     // 0x0138   (0x0004)  
	float                                              Radius;                                                     // 0x013C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCylinder
/// Size: 0x0040 (0x000108 - 0x000148)
class UGizmoElementCylinder : public UGizmoElementBase : UGizmoElementBase
{ 
public:
	FVector                                            base;                                                       // 0x0108   (0x0018)  
	FVector                                            Direction;                                                  // 0x0120   (0x0018)  
	float                                              Height;                                                     // 0x0138   (0x0004)  
	float                                              Radius;                                                     // 0x013C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementGroup
/// Size: 0x0018 (0x000158 - 0x000170)
class UGizmoElementGroup : public UGizmoElementLineBase : UGizmoElementLineBase
{ 
public:
	bool                                               bConstantScale;                                             // 0x0158   (0x0001)  
	bool                                               bHitOwner;                                                  // 0x0159   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x015A   (0x0006)  MISSED
	TArray<UGizmoElementBase*>                         Elements;                                                   // 0x0160   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementHitTarget
/// Size: 0x0068 (0x000028 - 0x000090)
class UGizmoElementHitTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UGizmoElementBase*                                 GizmoElement;                                               // 0x0030   (0x0008)  
	UGizmoViewContext*                                 GizmoViewContext;                                           // 0x0038   (0x0008)  
	UTransformProxy*                                   GizmoTransformProxy;                                        // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementHitMultiTarget
/// Size: 0x0068 (0x000028 - 0x000090)
class UGizmoElementHitMultiTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UGizmoElementBase*                                 GizmoElement;                                               // 0x0030   (0x0008)  
	UGizmoViewContext*                                 GizmoViewContext;                                           // 0x0038   (0x0008)  
	UTransformProxy*                                   GizmoTransformProxy;                                        // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementRectangle
/// Size: 0x0058 (0x000158 - 0x0001B0)
class UGizmoElementRectangle : public UGizmoElementLineBase : UGizmoElementLineBase
{ 
public:
	FVector                                            Center;                                                     // 0x0158   (0x0018)  
	float                                              Width;                                                      // 0x0170   (0x0004)  
	float                                              Height;                                                     // 0x0174   (0x0004)  
	FVector                                            UpDirection;                                                // 0x0178   (0x0018)  
	FVector                                            SideDirection;                                              // 0x0190   (0x0018)  
	bool                                               bDrawMesh;                                                  // 0x01A8   (0x0001)  
	bool                                               bDrawLine;                                                  // 0x01A9   (0x0001)  
	bool                                               bHitMesh;                                                   // 0x01AA   (0x0001)  
	bool                                               bHitLine;                                                   // 0x01AB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementTorus
/// Size: 0x0010 (0x0001C8 - 0x0001D8)
class UGizmoElementTorus : public UGizmoElementCircleBase : UGizmoElementCircleBase
{ 
public:
	double                                             InnerRadius;                                                // 0x01C8   (0x0008)  
	int32_t                                            NumInnerSlices;                                             // 0x01D0   (0x0004)  
	bool                                               bEndCaps;                                                   // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01D5   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoTransformSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoAxisSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoClickTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoClickTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoClickMultiTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoClickMultiTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoRenderTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoRenderTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoRenderMultiTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoRenderMultiTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoStateTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoStateTarget : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoFloatParameterSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoVec2ParameterSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent
/// Size: 0x0040 (0x0005A0 - 0x0005E0)
class UGizmoLineHandleComponent : public UGizmoBaseComponent : UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x0598   (0x0018)  
	float                                              HandleSize;                                                 // 0x05B0   (0x0004)  
	float                                              Thickness;                                                  // 0x05B4   (0x0004)  
	FVector                                            Direction;                                                  // 0x05B8   (0x0018)  
	float                                              Length;                                                     // 0x05D0   (0x0004)  
	bool                                               bImageScale;                                                // 0x05D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x05D5   (0x000B)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoRectangleComponent
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UGizmoRectangleComponent : public UGizmoBaseComponent : UGizmoBaseComponent
{ 
public:
	FVector                                            DirectionX;                                                 // 0x0598   (0x0018)  
	FVector                                            DirectionY;                                                 // 0x05B0   (0x0018)  
	bool                                               bOrientYAccordingToCamera;                                  // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05C9   (0x0003)  MISSED
	float                                              OffsetX;                                                    // 0x05CC   (0x0004)  
	float                                              OffsetY;                                                    // 0x05D0   (0x0004)  
	float                                              LengthX;                                                    // 0x05D4   (0x0004)  
	float                                              LengthY;                                                    // 0x05D8   (0x0004)  
	float                                              Thickness;                                                  // 0x05DC   (0x0004)  
	char                                               SegmentFlags;                                               // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x05E1   (0x000F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoViewContext
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UGizmoViewContext : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B8];                                     // 0x0028   (0x01B8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGizmoLambdaHitTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget
/// Size: 0x00D8 (0x000028 - 0x000100)
class UGizmoComponentHitTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	UPrimitiveComponent*                               Component;                                                  // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC8];                                      // 0x0038   (0x00C8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoActor
/// Size: 0x0018 (0x000298 - 0x0002B0)
class AIntervalGizmoActor : public AGizmoActor : AGizmoActor
{ 
public:
	UGizmoLineHandleComponent*                         UpIntervalComponent;                                        // 0x0298   (0x0008)  
	UGizmoLineHandleComponent*                         DownIntervalComponent;                                      // 0x02A0   (0x0008)  
	UGizmoLineHandleComponent*                         ForwardIntervalComponent;                                   // 0x02A8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0028   (0x0098)  MISSED
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmo
/// Size: 0x01C8 (0x000038 - 0x000200)
class UIntervalGizmo : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	UGizmoTransformChangeStateTarget*                  StateTarget;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0040   (0x0058)  MISSED
	UTransformProxy*                                   TransformProxy;                                             // 0x0098   (0x0008)  
	TArray<UPrimitiveComponent*>                       ActiveComponents;                                           // 0x00A0   (0x0010)  
	TArray<UInteractiveGizmo*>                         ActiveGizmos;                                               // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00C0   (0x0018)  MISSED
	UGizmoComponentAxisSource*                         AxisYSource;                                                // 0x00D8   (0x0008)  
	UGizmoComponentAxisSource*                         AxisZSource;                                                // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x118];                                     // 0x00E8   (0x0118)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
/// Size: 0x0018 (0x000048 - 0x000060)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource : UGizmoBaseFloatParameterSource
{ 
public:
	TScriptInterface<Class>                            FloatParameterSource;                                       // 0x0048   (0x0010)  
	float                                              MinParameter;                                               // 0x0058   (0x0004)  
	float                                              MaxParameter;                                               // 0x005C   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
/// Size: 0x0010 (0x000048 - 0x000058)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource : UGizmoBaseFloatParameterSource
{ 
public:
	float                                              Value;                                                      // 0x0048   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x004C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmo
/// Size: 0x0238 (0x000038 - 0x000270)
class UPlanePositionGizmo : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0038   (0x0010)  MISSED
	TScriptInterface<Class>                            AxisSource;                                                 // 0x0048   (0x0010)  
	TScriptInterface<Class>                            ParameterSource;                                            // 0x0058   (0x0010)  
	TScriptInterface<Class>                            HitTarget;                                                  // 0x0068   (0x0010)  
	TScriptInterface<Class>                            StateTarget;                                                // 0x0078   (0x0010)  
	UClickDragInputBehavior*                           MouseBehavior;                                              // 0x0088   (0x0008)  
	bool                                               bEnableSignedAxis;                                          // 0x0090   (0x0001)  
	bool                                               bFlipX;                                                     // 0x0091   (0x0001)  
	bool                                               bFlipY;                                                     // 0x0092   (0x0001)  
	unsigned char                                      UnknownData01_5[0x8D];                                      // 0x0093   (0x008D)  MISSED
	bool                                               bInInteraction;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	FVector                                            InteractionOrigin;                                          // 0x0128   (0x0018)  
	FVector                                            InteractionNormal;                                          // 0x0140   (0x0018)  
	FVector                                            InteractionAxisX;                                           // 0x0158   (0x0018)  
	FVector                                            InteractionAxisY;                                           // 0x0170   (0x0018)  
	FVector                                            InteractionStartPoint;                                      // 0x0188   (0x0018)  
	FVector                                            InteractionCurPoint;                                        // 0x01A0   (0x0018)  
	FVector2D                                          InteractionStartParameter;                                  // 0x01B8   (0x0010)  
	FVector2D                                          InteractionCurParameter;                                    // 0x01C8   (0x0010)  
	FVector2D                                          ParameterSigns;                                             // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x88];                                      // 0x01E8   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.RepositionableTransformGizmoBuilder
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder : UCombinedTransformGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.RepositionableTransformGizmo
/// Size: 0x00A0 (0x0003A0 - 0x000440)
class URepositionableTransformGizmo : public UCombinedTransformGizmo : UCombinedTransformGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x03A0   (0x0090)  MISSED
	UGizmoTransformChangeStateTarget*                  RepositionStateTarget;                                      // 0x0430   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0438   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder : UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmo
/// Size: 0x00C8 (0x000038 - 0x000100)
class UScalableSphereGizmo : public UInteractiveGizmo : UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0038   (0x0048)  MISSED
	float                                              HitErrorThreshold;                                          // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FText                                              TransactionDescription;                                     // 0x0088   (0x0018)  
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	bool                                               bIsHovering;                                                // 0x00A4   (0x0001)  
	bool                                               bIsDragging;                                                // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00A6   (0x0002)  MISSED
	UTransformProxy*                                   ActiveTarget;                                               // 0x00A8   (0x0008)  
	FVector                                            ActiveAxis;                                                 // 0x00B0   (0x0018)  
	FVector                                            DragStartWorldPosition;                                     // 0x00C8   (0x0018)  
	FVector                                            DragCurrentPositionProjected;                               // 0x00E0   (0x0018)  
	float                                              InteractionStartParameter;                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior : UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0080   (0x0050)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoNilStateTarget
/// Size: 0x0008 (0x000028 - 0x000030)
class UGizmoNilStateTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGizmoLambdaStateTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0028   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
/// Size: 0x0038 (0x000028 - 0x000060)
class UGizmoObjectModifyStateTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0028   (0x0028)  MISSED
	TScriptInterface<Class>                            TransactionManager;                                         // 0x0050   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
/// Size: 0x0118 (0x000028 - 0x000140)
class UGizmoTransformChangeStateTarget : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0028   (0x0028)  MISSED
	TScriptInterface<Class>                            TransactionManager;                                         // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x0060   (0x00E0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoContextObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UCombinedTransformGizmoContextObject : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformProxy
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UTransformProxy : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x0028   (0x00A8)  MISSED
	bool                                               bRotatePerObject;                                           // 0x00D0   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1E];                                      // 0x00D2   (0x001E)  MISSED
	FTransform                                         SharedTransform;                                            // 0x00F0   (0x0060)  
	FTransform                                         InitialSharedTransform;                                     // 0x0150   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseTransformSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
/// Size: 0x0010 (0x000048 - 0x000058)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource : UGizmoBaseTransformSource
{ 
public:
	USceneComponent*                                   Component;                                                  // 0x0048   (0x0008)  
	bool                                               bModifyComponentOnTransform;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource
/// Size: 0x0098 (0x000048 - 0x0000E0)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource : UGizmoBaseTransformSource
{ 
public:
	TScriptInterface<Class>                            ChildTransformSource;                                       // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0058   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
/// Size: 0x0028 (0x000048 - 0x000070)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource : UGizmoBaseTransformSource
{ 
public:
	UTransformProxy*                                   Proxy;                                                      // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
/// Size: 0x0020 (0x000048 - 0x000068)
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource : UGizmoBaseTransformSource
{ 
public:
	TScriptInterface<Class>                            ScaledTransformSource;                                      // 0x0048   (0x0010)  
	TScriptInterface<Class>                            UnscaledTransformSource;                                    // 0x0058   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInteractiveToolPropertySet : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	TMap<FString, UInteractiveToolPropertySet*>        CachedPropertiesMap;                                        // 0x0038   (0x0050)  
	bool                                               bIsPropertySetEnabled;                                      // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0089   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BrushBaseProperties
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UBrushBaseProperties : public UInteractiveToolPropertySet : UInteractiveToolPropertySet
{ 
public:
	float                                              BrushSize;                                                  // 0x00A8   (0x0004)  
	bool                                               bSpecifyRadius;                                             // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              BrushRadius;                                                // 0x00B0   (0x0004)  
	float                                              BrushStrength;                                              // 0x00B4   (0x0004)  
	float                                              BrushFalloffAmount;                                         // 0x00B8   (0x0004)  
	bool                                               bShowStrength;                                              // 0x00BC   (0x0001)  
	bool                                               bShowFalloff;                                               // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00BE   (0x0002)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveTool
/// Size: 0x0070 (0x000028 - 0x000098)
class UInteractiveTool : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0028   (0x0038)  MISSED
	UInputBehaviorSet*                                 InputBehaviors;                                             // 0x0060   (0x0008)  
	TArray<UObject*>                                   ToolPropertyObjects;                                        // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0078   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleSelectionTool
/// Size: 0x0010 (0x000098 - 0x0000A8)
class USingleSelectionTool : public UInteractiveTool : UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	UToolTarget*                                       Target;                                                     // 0x00A0   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointTool
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UMeshSurfacePointTool : public USingleSelectionTool : USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x00A8   (0x0050)  MISSED
	TWeakObjectPtr<UWorld*>                            TargetWorld;                                                // 0x00F8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.BaseBrushTool
/// Size: 0x0180 (0x000100 - 0x000280)
class UBaseBrushTool : public UMeshSurfacePointTool : UMeshSurfacePointTool
{ 
public:
	UBrushBaseProperties*                              BrushProperties;                                            // 0x0100   (0x0008)  
	bool                                               bInBrushStroke;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              WorldToLocalScale;                                          // 0x010C   (0x0004)  
	FBrushStampData                                    LastBrushStamp;                                             // 0x0110   (0x0128)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0238   (0x0010)  MISSED
	TWeakObjectPtr<UClass*>                            PropertyClass;                                              // 0x0248   (0x0030)  
	UBrushStampIndicator*                              BrushStampIndicator;                                        // 0x0278   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolBuilder : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UClickDragToolBuilder : public UInteractiveToolBuilder : UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragTool
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UClickDragTool : public UInteractiveTool : UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder : UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder : UInteractiveToolWithToolTargetsBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USingleClickToolBuilder : public UInteractiveToolBuilder : UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickTool
/// Size: 0x0008 (0x000098 - 0x0000A0)
class USingleClickTool : public UInteractiveTool : UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ContextObjectStore
/// Size: 0x0010 (0x000028 - 0x000038)
class UContextObjectStore : public UObject : UObject
{ 
public:
	TArray<UObject*>                                   ContextObjects;                                             // 0x0028   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSet
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputBehaviorSet : public UObject : UObject
{ 
public:
	TArray<FBehaviorInfo>                              Behaviors;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputBehaviorSource : public UInterface : UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.LocalInputBehaviorSource
/// Size: 0x0048 (0x000028 - 0x000070)
class ULocalInputBehaviorSource : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InputRouter
/// Size: 0x0168 (0x000028 - 0x000190)
class UInputRouter : public UObject : UObject
{ 
public:
	bool                                               bAutoInvalidateOnHover;                                     // 0x0028   (0x0001)  
	bool                                               bAutoInvalidateOnCapture;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x002A   (0x000E)  MISSED
	UInputBehaviorSet*                                 ActiveInputBehaviors;                                       // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x150];                                     // 0x0040   (0x0150)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractionMechanic
/// Size: 0x0008 (0x000028 - 0x000030)
class UInteractionMechanic : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UInteractiveGizmoManager : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FActiveGizmo>                               ActiveGizmos;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	TMap<FString, UInteractiveGizmoBuilder*>           GizmoBuilders;                                              // 0x0058   (0x0050)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x00A8   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolManager
/// Size: 0x0170 (0x000028 - 0x000198)
class UInteractiveToolManager : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0028   (0x0030)  MISSED
	UInteractiveTool*                                  ActiveLeftTool;                                             // 0x0058   (0x0008)  
	UInteractiveTool*                                  ActiveRightTool;                                            // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_5[0x80];                                      // 0x0068   (0x0080)  MISSED
	TMap<FString, UInteractiveToolBuilder*>            ToolBuilders;                                               // 0x00E8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0138   (0x0060)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolsContext
/// Size: 0x0308 (0x000028 - 0x000330)
class UInteractiveToolsContext : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0028   (0x0030)  MISSED
	UInputRouter*                                      InputRouter;                                                // 0x0058   (0x0008)  
	UToolTargetManager*                                TargetManager;                                              // 0x0060   (0x0008)  
	UInteractiveToolManager*                           ToolManager;                                                // 0x0068   (0x0008)  
	UInteractiveGizmoManager*                          GizmoManager;                                               // 0x0070   (0x0008)  
	UContextObjectStore*                               ContextObjectStore;                                         // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_5[0x280];                                     // 0x0080   (0x0280)  MISSED
	TWeakObjectPtr<UClass*>                            ToolManagerClass;                                           // 0x0300   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.MultiSelectionTool
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMultiSelectionTool : public UInteractiveTool : UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<UToolTarget*>                               Targets;                                                    // 0x00A0   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.SceneSnappingManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USceneSnappingManager : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.SelectionSet
/// Size: 0x0018 (0x000028 - 0x000040)
class USelectionSet : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSelectionSet
/// Size: 0x0040 (0x000040 - 0x000080)
class UMeshSelectionSet : public USelectionSet : USelectionSet
{ 
public:
	TArray<int32_t>                                    Vertices;                                                   // 0x0040   (0x0010)  
	TArray<int32_t>                                    Edges;                                                      // 0x0050   (0x0010)  
	TArray<int32_t>                                    Faces;                                                      // 0x0060   (0x0010)  
	TArray<int32_t>                                    Groups;                                                     // 0x0070   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.ToolTargetManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UToolTargetManager : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<UToolTargetFactory*>                        Factories;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.ToolTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolTarget : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentToolTarget
/// Size: 0x0010 (0x000028 - 0x000038)
class UPrimitiveComponentToolTarget : public UToolTarget : UToolTarget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolTargetFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolTargetFactory : public UObject : UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory : UToolTargetFactory
{ 
public:
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementState
/// Size: 0x05
enum EGizmoElementState : uint8_t
{
	EGizmoElementState__None0                                                        = 0,
	EGizmoElementState__Visible1                                                     = 2,
	EGizmoElementState__Hittable2                                                    = 4,
	EGizmoElementState__VisibleAndHittable3                                          = 6,
	EGizmoElementState__EGizmoElementState_MAX4                                      = 7
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementInteractionState
/// Size: 0x04
enum EGizmoElementInteractionState : uint8_t
{
	EGizmoElementInteractionState__None0                                             = 0,
	EGizmoElementInteractionState__Hovering1                                         = 1,
	EGizmoElementInteractionState__Interacting2                                      = 2,
	EGizmoElementInteractionState__EGizmoElementInteractionState_MAX3                = 3
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementViewDependentType
/// Size: 0x04
enum EGizmoElementViewDependentType : uint8_t
{
	EGizmoElementViewDependentType__None0                                            = 0,
	EGizmoElementViewDependentType__Axis1                                            = 1,
	EGizmoElementViewDependentType__Plane2                                           = 2,
	EGizmoElementViewDependentType__EGizmoElementViewDependentType_MAX3              = 3
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementViewAlignType
/// Size: 0x06
enum EGizmoElementViewAlignType : uint8_t
{
	EGizmoElementViewAlignType__None0                                                = 0,
	EGizmoElementViewAlignType__PointOnly1                                           = 1,
	EGizmoElementViewAlignType__PointEye2                                            = 2,
	EGizmoElementViewAlignType__PointScreen3                                         = 3,
	EGizmoElementViewAlignType__Axial4                                               = 4,
	EGizmoElementViewAlignType__EGizmoElementViewAlignType_MAX5                      = 5
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementPartialType
/// Size: 0x04
enum EGizmoElementPartialType : uint8_t
{
	EGizmoElementPartialType__None0                                                  = 0,
	EGizmoElementPartialType__Partial1                                               = 1,
	EGizmoElementPartialType__PartialViewDependent2                                  = 2,
	EGizmoElementPartialType__EGizmoElementPartialType_MAX3                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
/// Size: 0x02
enum EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial0                              = 1,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX1                = 2
};

/// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
/// Size: 0x03
enum EToolContextCoordinateSystem : uint8_t
{
	EToolContextCoordinateSystem__World0                                             = 0,
	EToolContextCoordinateSystem__Local1                                             = 1,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX2                  = 2
};

/// Enum /Script/InteractiveToolsFramework.EToolContextTransformGizmoMode
/// Size: 0x06
enum EToolContextTransformGizmoMode : uint8_t
{
	EToolContextTransformGizmoMode__NoGizmo0                                         = 0,
	EToolContextTransformGizmoMode__Translation1                                     = 1,
	EToolContextTransformGizmoMode__Rotation2                                        = 2,
	EToolContextTransformGizmoMode__Scale3                                           = 3,
	EToolContextTransformGizmoMode__Combined4                                        = 8,
	EToolContextTransformGizmoMode__EToolContextTransformGizmoMode_MAX5              = 9
};

/// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
/// Size: 0x06
enum EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal0                                                     = 0,
	EToolMessageLevel__UserMessage1                                                  = 1,
	EToolMessageLevel__UserNotification2                                             = 2,
	EToolMessageLevel__UserWarning3                                                  = 3,
	EToolMessageLevel__UserError4                                                    = 4,
	EToolMessageLevel__EToolMessageLevel_MAX5                                        = 5
};

/// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
/// Size: 0x05
enum ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace0                                       = 0,
	ESelectedObjectsModificationType__Add1                                           = 1,
	ESelectedObjectsModificationType__Remove2                                        = 2,
	ESelectedObjectsModificationType__Clear3                                         = 3,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX4          = 4
};

/// Enum /Script/InteractiveToolsFramework.EViewInteractionState
/// Size: 0x04
enum EViewInteractionState : uint8_t
{
	EViewInteractionState__None0                                                     = 0,
	EViewInteractionState__Hovered1                                                  = 1,
	EViewInteractionState__Focused2                                                  = 2,
	EViewInteractionState__EViewInteractionState_MAX3                                = 3
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementArrowHeadType
/// Size: 0x03
enum EGizmoElementArrowHeadType : uint8_t
{
	EGizmoElementArrowHeadType__Cone0                                                = 0,
	EGizmoElementArrowHeadType__Cube1                                                = 1,
	EGizmoElementArrowHeadType__EGizmoElementArrowHeadType_MAX2                      = 2
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
/// Size: 0x06
enum EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None0                                                         = 0,
	EInputCaptureSide__Left1                                                         = 1,
	EInputCaptureSide__Right2                                                        = 2,
	EInputCaptureSide__Both3                                                         = 3,
	EInputCaptureSide__Any4                                                          = 99,
	EInputCaptureSide__EInputCaptureSide_MAX5                                        = 100
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
/// Size: 0x03
enum EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin0                                                 = 1,
	EInputCaptureRequestType__Ignore1                                                = 2,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX2                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureState
/// Size: 0x05
enum EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin0                                                       = 1,
	EInputCaptureState__Continue1                                                    = 2,
	EInputCaptureState__End2                                                         = 3,
	EInputCaptureState__Ignore3                                                      = 4,
	EInputCaptureState__EInputCaptureState_MAX4                                      = 5
};

/// Enum /Script/InteractiveToolsFramework.EInputDevices
/// Size: 0x09
enum EInputDevices : uint32_t
{
	EInputDevices__None0                                                             = 0,
	EInputDevices__Keyboard1                                                         = 1,
	EInputDevices__Mouse2                                                            = 2,
	EInputDevices__Gamepad3                                                          = 4,
	EInputDevices__OculusTouch4                                                      = 8,
	EInputDevices__HTCViveWands5                                                     = 16,
	EInputDevices__AnySpatialDevice6                                                 = 24,
	EInputDevices__TabletFingers7                                                    = 1024,
	EInputDevices__EInputDevices_MAX8                                                = 1025
};

/// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
/// Size: 0x26
enum ETransformGizmoSubElements : uint32_t
{
	ETransformGizmoSubElements__None0                                                = 0,
	ETransformGizmoSubElements__TranslateAxisX1                                      = 2,
	ETransformGizmoSubElements__TranslateAxisY2                                      = 4,
	ETransformGizmoSubElements__TranslateAxisZ3                                      = 8,
	ETransformGizmoSubElements__TranslateAllAxes4                                    = 14,
	ETransformGizmoSubElements__TranslatePlaneXY5                                    = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ6                                    = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ7                                    = 64,
	ETransformGizmoSubElements__TranslateAllPlanes8                                  = 112,
	ETransformGizmoSubElements__RotateAxisX9                                         = 128,
	ETransformGizmoSubElements__RotateAxisY10                                        = 256,
	ETransformGizmoSubElements__RotateAxisZ11                                        = 512,
	ETransformGizmoSubElements__RotateAllAxes12                                      = 896,
	ETransformGizmoSubElements__ScaleAxisX13                                         = 1024,
	ETransformGizmoSubElements__ScaleAxisY14                                         = 2048,
	ETransformGizmoSubElements__ScaleAxisZ15                                         = 4096,
	ETransformGizmoSubElements__ScaleAllAxes16                                       = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ17                                       = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ18                                       = 16384,
	ETransformGizmoSubElements__ScalePlaneXY19                                       = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes20                                     = 57344,
	ETransformGizmoSubElements__ScaleUniform21                                       = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate22                            = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale23                        = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale24                           = 131070,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX25                     = 131071
};

/// Enum /Script/InteractiveToolsFramework.EToolShutdownType
/// Size: 0x04
enum EToolShutdownType : uint8_t
{
	EToolShutdownType__Completed0                                                    = 0,
	EToolShutdownType__Accept1                                                       = 1,
	EToolShutdownType__Cancel2                                                       = 2,
	EToolShutdownType__EToolShutdownType_MAX3                                        = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolSide
/// Size: 0x04
enum EToolSide : uint8_t
{
	EToolSide__Left0                                                                 = 1,
	EToolSide__Mouse1                                                                = 1,
	EToolSide__Right2                                                                = 2,
	EToolSide__EToolSide_MAX3                                                        = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
/// Size: 0x04
enum EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking0                                       = 1,
	EToolChangeTrackingMode__UndoToExit1                                             = 2,
	EToolChangeTrackingMode__FullUndoRedo2                                           = 3,
	EToolChangeTrackingMode__EToolChangeTrackingMode_MAX3                            = 4
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
/// Size: 0x03
enum ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position0                                                   = 1,
	ESceneSnapQueryType__Rotation1                                                   = 2,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX2                                    = 3
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
/// Size: 0x06
enum ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None0                                                 = 0,
	ESceneSnapQueryTargetType__MeshVertex1                                           = 1,
	ESceneSnapQueryTargetType__MeshEdge2                                             = 2,
	ESceneSnapQueryTargetType__Grid3                                                 = 4,
	ESceneSnapQueryTargetType__All4                                                  = 7,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX5                        = 8
};

