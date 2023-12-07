
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Constraints.

/// Struct /Script/Constraints.ConstraintAndActiveChannel
/// Size: 0x0138 (0x000000 - 0x000138)
struct FConstraintAndActiveChannel
{ 
	TWeakObjectPtr<UTickableConstraint*>               Constraint;                                                 // 0x0000   (0x0030)  
	FMovieSceneConstraintChannel                       ActiveChannel;                                              // 0x0030   (0x0100)  
	UTickableConstraint*                               ConstraintCopyToSpawn;                                      // 0x0130   (0x0008)  
};

/// Struct /Script/Constraints.MovieSceneConstraintChannel
/// Size: 0x0000 (0x000100 - 0x000100)
struct FMovieSceneConstraintChannel : FMovieSceneBoolChannel
{ 
};

/// Struct /Script/Constraints.ConstraintTickFunction
/// Size: 0x0018 (0x000028 - 0x000040)
struct FConstraintTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/Constraints.TransformableHandle
/// Size: 0x0030 (0x000028 - 0x000058)
class UTransformableHandle : public UObject : UObject
{ 
public:
	FMovieSceneObjectBindingID                         ConstraintBindingID;                                        // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/Constraints.ConstraintsActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AConstraintsActor : public AActor : AActor
{ 
public:
	UConstraintsManager*                               ConstraintsManager;                                         // 0x0290   (0x0008)  
};

/// Class /Script/Constraints.TickableConstraint
/// Size: 0x0048 (0x000028 - 0x000070)
class UTickableConstraint : public UObject : UObject
{ 
public:
	FConstraintTickFunction                            ConstraintTick;                                             // 0x0028   (0x0040)  
	bool                                               Active;                                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/Constraints.ConstraintsManager
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstraintsManager : public UObject : UObject
{ 
public:
	FMulticastSparseDelegate                           OnConstraintAdded_BP;                                       // 0x0028   (0x0001)  
	FMulticastSparseDelegate                           OnConstraintRemoved_BP;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x002A   (0x000E)  MISSED
	TArray<UTickableConstraint*>                       Constraints;                                                // 0x0038   (0x0010)  
};

/// Class /Script/Constraints.ConstraintsScriptingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Constraints.TransformableComponentHandle
/// Size: 0x0010 (0x000058 - 0x000068)
class UTransformableComponentHandle : public UTransformableHandle : UTransformableHandle
{ 
public:
	TWeakObjectPtr<USceneComponent*>                   Component;                                                  // 0x0058   (0x0008)  
	FName                                              SocketName;                                                 // 0x0060   (0x0008)  
};

/// Class /Script/Constraints.TickableTransformConstraint
/// Size: 0x0020 (0x000070 - 0x000090)
class UTickableTransformConstraint : public UTickableConstraint : UTickableConstraint
{ 
public:
	UTransformableHandle*                              ParentTRSHandle;                                            // 0x0070   (0x0008)  
	UTransformableHandle*                              ChildTRSHandle;                                             // 0x0078   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bDynamicOffset;                                             // 0x0088   (0x0001)  
	ETransformConstraintType                           Type;                                                       // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Class /Script/Constraints.TickableTranslationConstraint
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UTickableTranslationConstraint : public UTickableTransformConstraint : UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	FVector                                            OffsetTranslation;                                          // 0x0098   (0x0018)  
	FFilterOptionPerAxis                               AxisFilter;                                                 // 0x00B0   (0x0003)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00B3   (0x0005)  MISSED
};

/// Class /Script/Constraints.TickableRotationConstraint
/// Size: 0x0040 (0x000090 - 0x0000D0)
class UTickableRotationConstraint : public UTickableTransformConstraint : UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0090   (0x0010)  MISSED
	FQuat                                              OffsetRotation;                                             // 0x00A0   (0x0020)  
	FFilterOptionPerAxis                               AxisFilter;                                                 // 0x00C0   (0x0003)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x00C3   (0x000D)  MISSED
};

/// Class /Script/Constraints.TickableScaleConstraint
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UTickableScaleConstraint : public UTickableTransformConstraint : UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	FVector                                            OffsetScale;                                                // 0x0098   (0x0018)  
	FFilterOptionPerAxis                               AxisFilter;                                                 // 0x00B0   (0x0003)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00B3   (0x0005)  MISSED
};

/// Class /Script/Constraints.TickableParentConstraint
/// Size: 0x0080 (0x000090 - 0x000110)
class UTickableParentConstraint : public UTickableTransformConstraint : UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0090   (0x0010)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x00A0   (0x0060)  
	bool                                               bScaling;                                                   // 0x0100   (0x0001)  
	FTransformFilter                                   TransformFilter;                                            // 0x0101   (0x0009)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x010A   (0x0006)  MISSED
};

/// Class /Script/Constraints.TickableLookAtConstraint
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UTickableLookAtConstraint : public UTickableTransformConstraint : UTickableTransformConstraint
{ 
public:
	FVector                                            Axis;                                                       // 0x0090   (0x0018)  
};

/// Enum /Script/Constraints.EHandleEvent
/// Size: 0x04
enum EHandleEvent : uint8_t
{
	EHandleEvent__LocalTransformUpdated0                                             = 0,
	EHandleEvent__GlobalTransformUpdated1                                            = 1,
	EHandleEvent__ComponentUpdated2                                                  = 2,
	EHandleEvent__Max3                                                               = 3
};

