
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Chaos.

/// Struct /Script/Chaos.ManagedArrayCollection
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FManagedArrayCollection
{ 
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/Chaos.ClosestPhysicsObjectResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClosestPhysicsObjectResult
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/Chaos.ChaosSolverConfiguration
/// Size: 0x0068 (0x000000 - 0x000068)
struct FChaosSolverConfiguration
{ 
	int32_t                                            PositionIterations;                                         // 0x0000   (0x0004)  
	int32_t                                            VelocityIterations;                                         // 0x0004   (0x0004)  
	int32_t                                            ProjectionIterations;                                       // 0x0008   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x000C   (0x0004)  
	float                                              CollisionMarginMax;                                         // 0x0010   (0x0004)  
	float                                              CollisionCullDistance;                                      // 0x0014   (0x0004)  
	float                                              CollisionMaxPushOutVelocity;                                // 0x0018   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x001C   (0x0004)  
	EClusterUnionMethod                                ClusterUnionConnectionType;                                 // 0x0020   (0x0001)  
	bool                                               bGenerateCollisionData;                                     // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0024   (0x0010)  
	bool                                               bGenerateBreakData;                                         // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x0038   (0x0010)  
	bool                                               bGenerateTrailingData;                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x004C   (0x0010)  
	int32_t                                            Iterations;                                                 // 0x005C   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0060   (0x0004)  
	bool                                               bGenerateContactGraph;                                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/Chaos.SolverTrailingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSolverTrailingFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinVolume;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverBreakingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSolverBreakingFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinVolume;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverCollisionFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSolverCollisionFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverCollisionData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FSolverCollisionData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            AccumulatedImpulse;                                         // 0x0018   (0x0018)  
	FVector                                            Normal;                                                     // 0x0030   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0048   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0060   (0x0018)  
	FVector                                            AngularVelocity1;                                           // 0x0078   (0x0018)  
	FVector                                            AngularVelocity2;                                           // 0x0090   (0x0018)  
	float                                              Mass1;                                                      // 0x00A8   (0x0004)  
	float                                              Mass2;                                                      // 0x00AC   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x00B0   (0x0004)  
	int32_t                                            LevelsetIndex;                                              // 0x00B4   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x00B8   (0x0004)  
	int32_t                                            LevelsetIndexMesh;                                          // 0x00BC   (0x0004)  
};

/// Struct /Script/Chaos.SolverBreakingData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSolverBreakingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/Chaos.SolverTrailingData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSolverTrailingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/Chaos.RecordedFrame
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FRecordedFrame
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)  
	TArray<int32_t>                                    TransformIndices;                                           // 0x0010   (0x0010)  
	TArray<int32_t>                                    PreviousTransformIndices;                                   // 0x0020   (0x0010)  
	TArray<bool>                                       DisabledFlags;                                              // 0x0030   (0x0010)  
	TArray<FSolverCollisionData>                       Collisions;                                                 // 0x0040   (0x0010)  
	TArray<FSolverBreakingData>                        Breakings;                                                  // 0x0050   (0x0010)  
	TSet<FSolverTrailingData>                          Trailings;                                                  // 0x0060   (0x0050)  
	float                                              Timestamp;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/Chaos.RecordedTransformTrack
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRecordedTransformTrack
{ 
	TArray<FRecordedFrame>                             Records;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Chaos.SolverRemovalFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSolverRemovalFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinVolume;                                                  // 0x0008   (0x0004)  
};

/// Enum /Script/Chaos.ChaosDeformableSimSpace
/// Size: 0x04
enum ChaosDeformableSimSpace : uint8_t
{
	World0                                                                           = 0,
	ComponentXf1                                                                     = 1,
	bone2                                                                            = 2,
	ChaosDeformableSimSpace_MAX3                                                     = 3
};

/// Enum /Script/Chaos.ESetMaskConditionType
/// Size: 0x05
enum ESetMaskConditionType : uint8_t
{
	Field_Set_Always0                                                                = 0,
	Field_Set_IFF_NOT_Interior1                                                      = 1,
	Field_Set_IFF_NOT_Exterior2                                                      = 2,
	Field_MaskCondition_Max3                                                         = 3,
	Field_MAX4                                                                       = 4
};

/// Enum /Script/Chaos.EWaveFunctionType
/// Size: 0x05
enum EWaveFunctionType : uint8_t
{
	Field_Wave_Cosine0                                                               = 0,
	Field_Wave_Gaussian1                                                             = 1,
	Field_Wave_Falloff2                                                              = 2,
	Field_Wave_Decay3                                                                = 3,
	Field_Wave_Max4                                                                  = 4
};

/// Enum /Script/Chaos.EFieldOperationType
/// Size: 0x05
enum EFieldOperationType : uint8_t
{
	Field_Multiply0                                                                  = 0,
	Field_Divide1                                                                    = 1,
	Field_Add2                                                                       = 2,
	Field_Substract3                                                                 = 3,
	Field_Operation_Max4                                                             = 4
};

/// Enum /Script/Chaos.EFieldCullingOperationType
/// Size: 0x04
enum EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside0                                                            = 0,
	Field_Culling_Outside1                                                           = 1,
	Field_Culling_Operation_Max2                                                     = 2,
	Field_Culling_MAX3                                                               = 3
};

/// Enum /Script/Chaos.EFieldResolutionType
/// Size: 0x04
enum EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal0                                                        = 0,
	Field_Resolution_DisabledParents1                                                = 1,
	Field_Resolution_Maximum2                                                        = 2,
	Field_Resolution_Max3                                                            = 3
};

/// Enum /Script/Chaos.EFieldFilterType
/// Size: 0x07
enum EFieldFilterType : uint8_t
{
	Field_Filter_Dynamic0                                                            = 0,
	Field_Filter_Kinematic1                                                          = 1,
	Field_Filter_Static2                                                             = 2,
	Field_Filter_All3                                                                = 3,
	Field_Filter_Sleeping4                                                           = 4,
	Field_Filter_Disabled5                                                           = 5,
	Field_Filter_Max6                                                                = 6
};

/// Enum /Script/Chaos.EFieldObjectType
/// Size: 0x06
enum EFieldObjectType : uint8_t
{
	Field_Object_Rigid0                                                              = 0,
	Field_Object_Cloth1                                                              = 1,
	Field_Object_Destruction2                                                        = 2,
	Field_Object_Character3                                                          = 3,
	Field_Object_All4                                                                = 4,
	Field_Object_Max5                                                                = 5
};

/// Enum /Script/Chaos.EFieldPositionType
/// Size: 0x03
enum EFieldPositionType : uint8_t
{
	Field_Position_CenterOfMass0                                                     = 0,
	Field_Position_PivotPoint1                                                       = 1,
	Field_Position_Max2                                                              = 2
};

/// Enum /Script/Chaos.EFieldFalloffType
/// Size: 0x06
enum EFieldFalloffType : uint8_t
{
	Field_FallOff_None0                                                              = 0,
	Field_Falloff_Linear1                                                            = 1,
	Field_Falloff_Inverse2                                                           = 2,
	Field_Falloff_Squared3                                                           = 3,
	Field_Falloff_Logarithmic4                                                       = 4,
	Field_Falloff_Max5                                                               = 5
};

/// Enum /Script/Chaos.EFieldPhysicsType
/// Size: 0x21
enum EFieldPhysicsType : uint8_t
{
	Field_None0                                                                      = 0,
	Field_DynamicState1                                                              = 1,
	Field_LinearForce2                                                               = 2,
	Field_ExternalClusterStrain3                                                     = 3,
	Field_Kill4                                                                      = 4,
	Field_LinearVelocity5                                                            = 5,
	Field_AngularVelociy6                                                            = 6,
	Field_AngularTorque7                                                             = 7,
	Field_InternalClusterStrain8                                                     = 8,
	Field_DisableThreshold9                                                          = 9,
	Field_SleepingThreshold10                                                        = 10,
	Field_PositionStatic11                                                           = 11,
	Field_PositionAnimated12                                                         = 12,
	Field_PositionTarget13                                                           = 13,
	Field_DynamicConstraint14                                                        = 14,
	Field_CollisionGroup15                                                           = 15,
	Field_ActivateDisabled16                                                         = 16,
	Field_InitialLinearVelocity17                                                    = 17,
	Field_InitialAngularVelocity18                                                   = 18,
	Field_LinearImpulse19                                                            = 19,
	Field_PhysicsType_Max20                                                          = 20
};

/// Enum /Script/Chaos.EFieldVectorType
/// Size: 0x10
enum EFieldVectorType : uint8_t
{
	Vector_LinearForce0                                                              = 0,
	Vector_LinearVelocity1                                                           = 1,
	Vector_AngularVelocity2                                                          = 2,
	Vector_AngularTorque3                                                            = 3,
	Vector_PositionTarget4                                                           = 4,
	Vector_InitialLinearVelocity5                                                    = 5,
	Vector_InitialAngularVelocity6                                                   = 6,
	Vector_LinearImpulse7                                                            = 7,
	Vector_TargetMax8                                                                = 8,
	Vector_MAX9                                                                      = 9
};

/// Enum /Script/Chaos.EFieldScalarType
/// Size: 0x08
enum EFieldScalarType : uint8_t
{
	Scalar_ExternalClusterStrain0                                                    = 0,
	Scalar_Kill1                                                                     = 1,
	Scalar_DisableThreshold2                                                         = 2,
	Scalar_SleepingThreshold3                                                        = 3,
	Scalar_InternalClusterStrain4                                                    = 4,
	Scalar_DynamicConstraint5                                                        = 5,
	Scalar_TargetMax6                                                                = 6,
	Scalar_MAX7                                                                      = 7
};

/// Enum /Script/Chaos.EFieldIntegerType
/// Size: 0x07
enum EFieldIntegerType : uint8_t
{
	Integer_DynamicState0                                                            = 0,
	Integer_ActivateDisabled1                                                        = 1,
	Integer_CollisionGroup2                                                          = 2,
	Integer_PositionAnimated3                                                        = 3,
	Integer_PositionStatic4                                                          = 4,
	Integer_TargetMax5                                                               = 5,
	Integer_MAX6                                                                     = 6
};

/// Enum /Script/Chaos.EFieldOutputType
/// Size: 0x04
enum EFieldOutputType : uint8_t
{
	Field_Output_Vector0                                                             = 0,
	Field_Output_Scalar1                                                             = 1,
	Field_Output_Integer2                                                            = 2,
	Field_Output_Max3                                                                = 3
};

/// Enum /Script/Chaos.EFieldPhysicsDefaultFields
/// Size: 0x06
enum EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask0                                                             = 0,
	Field_RadialFalloff1                                                             = 1,
	Field_UniformVector2                                                             = 2,
	Field_RadialVector3                                                              = 3,
	Field_RadialVectorFalloff4                                                       = 4,
	Field_EFieldPhysicsDefaultFields_Max5                                            = 5
};

/// Enum /Script/Chaos.EConvexOverlapRemoval
/// Size: 0x05
enum EConvexOverlapRemoval : uint8_t
{
	EConvexOverlapRemoval__None0                                                     = 0,
	EConvexOverlapRemoval__All1                                                      = 1,
	EConvexOverlapRemoval__OnlyClusters2                                             = 2,
	EConvexOverlapRemoval__OnlyClustersVsClusters3                                   = 3,
	EConvexOverlapRemoval__EConvexOverlapRemoval_MAX4                                = 4
};

/// Enum /Script/Chaos.EProximityMethod
/// Size: 0x03
enum EProximityMethod : uint8_t
{
	EProximityMethod__Precise0                                                       = 0,
	EProximityMethod__ConvexHull1                                                    = 1,
	EProximityMethod__EProximityMethod_MAX2                                          = 2
};

/// Enum /Script/Chaos.EProximityContactMethod
/// Size: 0x02
enum EProximityContactMethod : uint8_t
{
	EProximityContactMethod__MinOverlapInProjectionToMajorAxes0                      = 0,
	EProximityContactMethod__EProximityContactMethod_MAX1                            = 1
};

/// Enum /Script/Chaos.ECollisionTypeEnum
/// Size: 0x03
enum ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric0                                            = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric1                                    = 1,
	ECollisionTypeEnum__Chaos_Max2                                                   = 2
};

/// Enum /Script/Chaos.EImplicitTypeEnum
/// Size: 0x07
enum EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Box0                                           = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere1                                        = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule2                                       = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet3                                      = 3,
	EImplicitTypeEnum__Chaos_Implicit_None4                                          = 4,
	EImplicitTypeEnum__Chaos_Implicit_Convex5                                        = 5,
	EImplicitTypeEnum__Chaos_Max6                                                    = 6
};

/// Enum /Script/Chaos.EObjectStateTypeEnum
/// Size: 0x07
enum EObjectStateTypeEnum : uint8_t
{
	EObjectStateTypeEnum__Chaos_NONE0                                                = 0,
	EObjectStateTypeEnum__Chaos_Object_Sleeping1                                     = 1,
	EObjectStateTypeEnum__Chaos_Object_Kinematic2                                    = 2,
	EObjectStateTypeEnum__Chaos_Object_Static3                                       = 3,
	EObjectStateTypeEnum__Chaos_Object_Dynamic4                                      = 4,
	EObjectStateTypeEnum__Chaos_Object_UserDefined5                                  = 100,
	EObjectStateTypeEnum__Chaos_Max6                                                 = 101
};

/// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
/// Size: 0x14
enum EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity0                       = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState1                          = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity2                        = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity3                = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity4                 = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup5                        = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce6                           = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque7                         = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DisableThreshold8                      = 8,
	EGeometryCollectionPhysicsTypeEnum__Chaos_SleepingThreshold9                     = 9,
	EGeometryCollectionPhysicsTypeEnum__Chaos_ExternalClusterStrain10                = 10,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InternalClusterStrain11                = 11,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearImpulse12                        = 12,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max13                                  = 13
};

/// Enum /Script/Chaos.EInitialVelocityTypeEnum
/// Size: 0x03
enum EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined0                   = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None1                           = 1,
	EInitialVelocityTypeEnum__Chaos_Max2                                             = 2
};

/// Enum /Script/Chaos.EEmissionPatternTypeEnum
/// Size: 0x03
enum EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame0                    = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand1                      = 1,
	EEmissionPatternTypeEnum__Chaos_Max2                                             = 2
};

/// Enum /Script/Chaos.EChaosSolverTickMode
/// Size: 0x05
enum EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed0                                                     = 0,
	EChaosSolverTickMode__Variable1                                                  = 1,
	EChaosSolverTickMode__VariableCapped2                                            = 2,
	EChaosSolverTickMode__VariableCappedWithTarget3                                  = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX4                                  = 4
};

/// Enum /Script/Chaos.EChaosThreadingMode
/// Size: 0x06
enum EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread0                                            = 0,
	EChaosThreadingMode__TaskGraph1                                                  = 1,
	EChaosThreadingMode__SingleThread2                                               = 2,
	EChaosThreadingMode__Num3                                                        = 3,
	EChaosThreadingMode__Invalid4                                                    = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX5                                    = 5
};

/// Enum /Script/Chaos.EChaosBufferMode
/// Size: 0x05
enum EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double0                                                        = 0,
	EChaosBufferMode__Triple1                                                        = 1,
	EChaosBufferMode__Num2                                                           = 2,
	EChaosBufferMode__Invalid3                                                       = 3,
	EChaosBufferMode__EChaosBufferMode_MAX4                                          = 4
};

/// Enum /Script/Chaos.EClusterUnionMethod
/// Size: 0x07
enum EClusterUnionMethod : uint8_t
{
	EClusterUnionMethod__PointImplicit0                                              = 0,
	EClusterUnionMethod__DelaunayTriangulation1                                      = 1,
	EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation2                 = 2,
	EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay3                  = 3,
	EClusterUnionMethod__BoundsOverlapFilteredDelaunayTriangulation4                 = 4,
	EClusterUnionMethod__None5                                                       = 5,
	EClusterUnionMethod__EClusterUnionMethod_MAX6                                    = 6
};

/// Enum /Script/Chaos.EGeometryCollectionCacheType
/// Size: 0x05
enum EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None0                                              = 0,
	EGeometryCollectionCacheType__Record1                                            = 1,
	EGeometryCollectionCacheType__Play2                                              = 2,
	EGeometryCollectionCacheType__RecordAndPlay3                                     = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX4                  = 4
};

