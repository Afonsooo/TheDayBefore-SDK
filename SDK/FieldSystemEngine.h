
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FieldSystemEngine.

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFieldObjectCommands
{ 
	TArray<FName>                                      TargetNames;                                                // 0x0000   (0x0010)  
	TArray<UFieldNodeBase*>                            RootNodes;                                                  // 0x0010   (0x0010)  
	TArray<UFieldSystemMetaData*>                      MetaDatas;                                                  // 0x0020   (0x0010)  
};

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AFieldSystemActor : public AActor : AActor
{ 
public:
	UFieldSystemComponent*                             FieldSystemComponent;                                       // 0x0290   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UFieldSystem : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x00D0 (0x000570 - 0x000640)
class UFieldSystemComponent : public UPrimitiveComponent : UPrimitiveComponent
{ 
public:
	UFieldSystem*                                      FieldSystem;                                                // 0x0568   (0x0008)  
	bool                                               bIsWorldField;                                              // 0x0570   (0x0001)  
	bool                                               bIsChaosField;                                              // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0572   (0x0006)  MISSED
	TArray<TWeakObjectPtr>                             SupportedSolvers;                                           // 0x0578   (0x0010)  
	FFieldObjectCommands                               ConstructionCommands;                                       // 0x0588   (0x0030)  
	FFieldObjectCommands                               BufferCommands;                                             // 0x05B8   (0x0030)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x05E8   (0x0058)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void ResetFieldSystem();                                                                                                 // [0x370e5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	void RemovePersistentFields();                                                                                           // [0x370e590] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);   // [0x370e250] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);                // [0x370dfc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);                                                // [0x370ddb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);                       // [0x370dac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);                                                  // [0x370d8c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* Metadata, UFieldNodeBase* Field); // [0x370d760] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                                 // [0x370d560] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField
	void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* Metadata, UFieldNodeBase* Field); // [0x370d400] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* Metadata, UFieldNodeBase* Field); // [0x370d2a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldSystemMetaData : public UActorComponent : UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData : UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                                 // [0x370eb70] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData : UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x370ec10] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData : UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldFilterType>                      FilterType;                                                 // 0x00A0   (0x0001)  
	TEnumAsByte<EFieldObjectType>                      ObjectType;                                                 // 0x00A1   (0x0001)  
	TEnumAsByte<EFieldPositionType>                    PositionType;                                               // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00A3   (0x0005)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType, TEnumAsByte<EFieldObjectType> ObjectType, TEnumAsByte<EFieldPositionType> PositionType); // [0x370ea60] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeBase : public UActorComponent : UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeInt : public UFieldNodeBase : UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeFloat : public UFieldNodeBase : UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeVector : public UFieldNodeBase : UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformInteger : public UFieldNodeInt : UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                                   // [0x370eb70] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class URadialIntMask : public UFieldNodeInt : UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00A8   (0x0018)  
	int32_t                                            InteriorValue;                                              // 0x00C0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00C4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x370f4d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformScalar : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	UUniformScalar* SetUniformScalar(float Magnitude);                                                                       // [0x370f790] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UWaveScalar : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00A8   (0x0018)  
	float                                              WaveLength;                                                 // 0x00C0   (0x0004)  
	float                                              Period;                                                     // 0x00C4   (0x0004)  
	TEnumAsByte<EWaveFunctionType>                     Function;                                                   // 0x00C8   (0x0001)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00CA   (0x0006)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar
	UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float WaveLength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff); // [0x370f8e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class URadialFalloff : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00B8   (0x0018)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x370f280] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UPlaneFalloff : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	float                                              Distance;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00B8   (0x0018)  
	FVector                                            Normal;                                                     // 0x00D0   (0x0018)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x370efe0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UBoxFalloff : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0111   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x370e6a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UNoiseField : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00A0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                                        // [0x370eca0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UUniformVector : public UFieldNodeVector : UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                                    // [0x370f6a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class URadialVector : public UFieldNodeVector : UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	URadialVector* SetRadialVector(float Magnitude, FVector Position);                                                       // [0x370f6a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class URandomVector : public UFieldNodeVector : UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	URandomVector* SetRandomVector(float Magnitude);                                                                         // [0x370f790] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UOperatorField : public UFieldNodeBase : UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	UFieldNodeBase*                                    RightField;                                                 // 0x00A8   (0x0008)  
	UFieldNodeBase*                                    LeftField;                                                  // 0x00B0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	UOperatorField* SetOperatorField(float Magnitude, UFieldNodeBase* LeftField, UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation); // [0x370ee70] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToIntegerField : public UFieldNodeInt : UFieldNodeInt
{ 
public:
	UFieldNodeFloat*                                   FloatField;                                                 // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	UToIntegerField* SetToIntegerField(UFieldNodeFloat* FloatField);                                                         // [0x370f840] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToFloatField : public UFieldNodeFloat : UFieldNodeFloat
{ 
public:
	UFieldNodeInt*                                     IntField;                                                   // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	UToFloatField* SetToFloatField(UFieldNodeInt* IntegerField);                                                             // [0x370f840] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCullingField : public UFieldNodeBase : UFieldNodeBase
{ 
public:
	UFieldNodeBase*                                    Culling;                                                    // 0x00A0   (0x0008)  
	UFieldNodeBase*                                    Field;                                                      // 0x00A8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	UCullingField* SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x370e940] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UReturnResultsTerminal : public UFieldNodeBase : UFieldNodeBase
{ 
public:
};

