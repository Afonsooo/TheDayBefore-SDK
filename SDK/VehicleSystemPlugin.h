
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VehicleSystemPlugin.

/// Struct /Script/VehicleSystemPlugin.NetState
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNetState
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              localtimestamp;                                             // 0x0004   (0x0004)  
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0038   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0050   (0x0018)  
};

/// Struct /Script/VehicleSystemPlugin.VehicleGear
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVehicleGear
{ 
	float                                              EndSpeed;                                                   // 0x0000   (0x0004)  
	float                                              StartSpeed;                                                 // 0x0004   (0x0004)  
	float                                              UpShift;                                                    // 0x0008   (0x0004)  
	float                                              DownShift;                                                  // 0x000C   (0x0004)  
	float                                              HighRPM;                                                    // 0x0010   (0x0004)  
	float                                              LowRPM;                                                     // 0x0014   (0x0004)  
	float                                              MaxTorque;                                                  // 0x0018   (0x0004)  
	float                                              MinTorque;                                                  // 0x001C   (0x0004)  
};

/// Struct /Script/VehicleSystemPlugin.DebugForce
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDebugForce
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Force;                                                      // 0x0018   (0x0018)  
	EWheelMode                                         WheelMode;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/VehicleSystemPlugin.AVS_Inputs
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAVS_Inputs
{ 
	float                                              Steering;                                                   // 0x0000   (0x0004)  
	float                                              Throttle;                                                   // 0x0004   (0x0004)  
	float                                              Brake;                                                      // 0x0008   (0x0004)  
	bool                                               Handbrake;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Torque;                                                     // 0x0010   (0x0004)  
	bool                                               ReverseTorque;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/VehicleSystemPlugin.AVS1_Wheel_State
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAVS1_Wheel_State
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/VehicleSystemPlugin.AVS1_Wheel_Output
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FAVS1_Wheel_Output
{ 
	FHitResult                                         LastTrace;                                                  // 0x0000   (0x00E8)  
	float                                              AngularVelocity;                                            // 0x00E8   (0x0004)  
	float                                              CurrentSpringLength;                                        // 0x00EC   (0x0004)  
};

/// Struct /Script/VehicleSystemPlugin.AVS1_Wheel_Config
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FAVS1_Wheel_Config
{ 
	FTransform                                         WheelLocalTransform;                                        // 0x0000   (0x0060)  
	bool                                               IsLocked;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	UPrimitiveComponent*                               WheelPrim;                                                  // 0x0068   (0x0008)  
	EWheelMode                                         WheelMode;                                                  // 0x0070   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0072   (0x0006)  MISSED
	TArray<AActor*>                                    TraceIgnoreActors;                                          // 0x0078   (0x0010)  
	float                                              WheelMass;                                                  // 0x0088   (0x0004)  
	bool                                               AutoWheelRadius;                                            // 0x008C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              WheelRadius;                                                // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FVector2D                                          TireFriction;                                               // 0x0098   (0x0010)  
	bool                                               IsDrivingWheel;                                             // 0x00A8   (0x0001)  
	bool                                               IsSteerableWheel;                                           // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              MaxSteeringAngle;                                           // 0x00AC   (0x0004)  
	bool                                               InvertTorque;                                               // 0x00B0   (0x0001)  
	bool                                               InvertSteering;                                             // 0x00B1   (0x0001)  
	bool                                               IsBrakingWheel;                                             // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x00B3   (0x0001)  MISSED
	float                                              BrakePressure;                                              // 0x00B4   (0x0004)  
	float                                              RollingResistance;                                          // 0x00B8   (0x0004)  
	bool                                               IsHandbrakeWheel;                                           // 0x00BC   (0x0001)  
	bool                                               EditorPreview;                                              // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x00BE   (0x0002)  MISSED
	float                                              SpringLength;                                               // 0x00C0   (0x0004)  
	float                                              SpringStrength;                                             // 0x00C4   (0x0004)  
	float                                              SpringDamping;                                              // 0x00C8   (0x0004)  
	float                                              WheelRadiusM;                                               // 0x00CC   (0x0004)  
	float                                              Inertia;                                                    // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData07_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
};

/// Class /Script/VehicleSystemPlugin.VehicleComponent
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UVehicleComponent : public USceneComponent : USceneComponent
{ 
public:
};

/// Class /Script/VehicleSystemPlugin.VehicleConstraint
/// Size: 0x0000 (0x000570 - 0x000570)
class UVehicleConstraint : public UPhysicsConstraintComponent : UPhysicsConstraintComponent
{ 
public:
};

/// Class /Script/VehicleSystemPlugin.VehicleSystemBase
/// Size: 0x0248 (0x000318 - 0x000560)
class AVehicleSystemBase : public APawn : APawn
{ 
public:
	TArray<UVehicleWheelBase*>                         VehicleWheels;                                              // 0x0318   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0328   (0x0008)  MISSED
	TArray<UPrimitiveComponent*>                       ContactModMeshes;                                           // 0x0330   (0x0010)  
	unsigned char                                      UnknownData01_5[0x15];                                      // 0x0340   (0x0015)  MISSED
	bool                                               ReplicateMovement;                                          // 0x0355   (0x0001)  
	bool                                               SyncLocation;                                               // 0x0356   (0x0001)  
	bool                                               SyncRotation;                                               // 0x0357   (0x0001)  
	float                                              NetSendRate;                                                // 0x0358   (0x0004)  
	float                                              NetTimeBehind;                                              // 0x035C   (0x0004)  
	float                                              NetLerpStart;                                               // 0x0360   (0x0004)  
	float                                              NetPositionTolerance;                                       // 0x0364   (0x0004)  
	float                                              NetSmoothing;                                               // 0x0368   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	FNetState                                          RestState;                                                  // 0x0370   (0x0068)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x03D8   (0x0001)  MISSED
	bool                                               NetworkAtRest;                                              // 0x03D9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x03DA   (0x0002)  MISSED
	float                                              RestTimer;                                                  // 0x03DC   (0x0004)  
	unsigned char                                      UnknownData05_5[0x88];                                      // 0x03E0   (0x0088)  MISSED
	float                                              ChaosDeltaTime;                                             // 0x0468   (0x0004)  
	FAVS_Inputs                                        InputsForPhysicsThread;                                     // 0x046C   (0x0018)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0484   (0x0004)  MISSED
	TArray<FHitResult>                                 DebugTraces;                                                // 0x0488   (0x0010)  
	TArray<FDebugForce>                                DebugForces;                                                // 0x0498   (0x0010)  
	UStaticMeshComponent*                              VehicleMesh;                                                // 0x04A8   (0x0008)  
	bool                                               PassiveMode;                                                // 0x04B0   (0x0001)  
	bool                                               PassiveTickGatekeeping;                                     // 0x04B1   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x04B2   (0x0002)  MISSED
	float                                              RestVelocityThreshold;                                      // 0x04B4   (0x0004)  
	bool                                               LocalVehicleAtRest;                                         // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x04B9   (0x0007)  MISSED
	FRuntimeFloatCurve                                 SteeringCurve;                                              // 0x04C0   (0x0088)  
	SteeringSmoothingType                              SteeringInputSmoothing;                                     // 0x0548   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x0549   (0x0003)  MISSED
	float                                              SteeringSpeed;                                              // 0x054C   (0x0004)  
	TArray<FVehicleGear>                               Gears;                                                      // 0x0550   (0x0010)  


	/// Functions
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.WakeWheelsForMovement
	void WakeWheelsForMovement();                                                                                            // [0x1642e60] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.UpdateInternalWheelArray
	void UpdateInternalWheelArray();                                                                                         // [0x1642e00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.TeleportWheels
	void TeleportWheels();                                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.SetShouldSyncWithServer
	void SetShouldSyncWithServer(bool ShouldSync);                                                                           // [0x1642a30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.SetArrayDisabledCollisions
	bool SetArrayDisabledCollisions(TArray<UPrimitiveComponent*> Meshes);                                                    // [0x1642590] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.Server_ReceiveRestState
	void Server_ReceiveRestState(FNetState State);                                                                           // [0x16422e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.Server_ReceiveNetState
	void Server_ReceiveNetState(FNetState State);                                                                            // [0x1642160] Net|Native|Event|Protected|NetServer|NetValidate 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.PhysicsThreadInputs
	void PhysicsThreadInputs(FAVS_Inputs NewInputs);                                                                         // [0x1641c90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.PassiveTickBP
	void PassiveTickBP(float DeltaTime);                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.PassiveStateChanged
	void PassiveStateChanged(bool NewPassiveState);                                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.OwnerChanged
	void OwnerChanged();                                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.OnRep_RestState
	void OnRep_RestState();                                                                                                  // [0x1641c30] Final|Native|Protected 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.NetStateSend
	void NetStateSend();                                                                                                     // [0x1641c10] Final|Native|Protected 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.Multicast_ChangedOwner
	void Multicast_ChangedOwner();                                                                                           // [0x1641bc0] Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.GetMaxSteeringFromCurve
	float GetMaxSteeringFromCurve(float Speed);                                                                              // [0x1641100] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.DeterminePassiveState
	bool DeterminePassiveState();                                                                                            // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.Client_ReceiveNetState
	void Client_ReceiveNetState(FNetState State);                                                                            // [0x1640f10] Net|Native|Event|NetMulticast|Protected|NetValidate 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.BlueprintDebugMessage
	void BlueprintDebugMessage(FString Text);                                                                                // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleSystemBase.AVS_Tick
	void AVS_Tick(float DeltaTime);                                                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
};

/// Class /Script/VehicleSystemPlugin.VehicleSystemFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleSystemFunctions : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/VehicleSystemPlugin.VehicleWheelBase
/// Size: 0x0240 (0x0002A0 - 0x0004E0)
class UVehicleWheelBase : public USceneComponent : USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x02A0   (0x0004)  MISSED
	bool                                               SimulateSuspension;                                         // 0x02A4   (0x0001)  
	bool                                               isAttached;                                                 // 0x02A5   (0x0001)  
	bool                                               IsLocked;                                                   // 0x02A6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x02A7   (0x0001)  MISSED
	float                                              TargetAngVel;                                               // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	UStaticMesh*                                       WheelStaticMesh;                                            // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FAVS1_Wheel_Config                                 WheelConfig;                                                // 0x02C0   (0x00E0)  
	bool                                               ConnectToBone;                                              // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x03A1   (0x0003)  MISSED
	FName                                              BoneName;                                                   // 0x03A4   (0x0008)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x03AC   (0x0004)  MISSED
	FAVS1_Wheel_Output                                 WheelData;                                                  // 0x03B0   (0x00F0)  
	FRotator                                           WheelRotation;                                              // 0x04A0   (0x0018)  
	UPrimitiveComponent*                               WheelMeshComponent;                                         // 0x04B8   (0x0008)  
	bool                                               HasSpring;                                                  // 0x04C0   (0x0001)  
	bool                                               SpringHardLock;                                             // 0x04C1   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x04C2   (0x0006)  MISSED
	double                                             PhysicsDownforce;                                           // 0x04C8   (0x0008)  
	float                                              SteeringInput;                                              // 0x04D0   (0x0004)  
	unsigned char                                      UnknownData07_6[0xC];                                       // 0x04D4   (0x000C)  MISSED


	/// Functions
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.UpdateWheelRadius
	void UpdateWheelRadius();                                                                                                // [0x1642e40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.UpdateLocalTransformCache
	void UpdateLocalTransformCache();                                                                                        // [0x1642e20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.SetWheelMode
	void SetWheelMode(EWheelMode NewMode);                                                                                   // [0x1642d80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.SetWheelMeshComponent
	void SetWheelMeshComponent(UPrimitiveComponent* NewComponent);                                                           // [0x1642bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.SetSteeringInput
	void SetSteeringInput(float Steering, bool InvertSteering);                                                              // [0x1642ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.SetRaycastWheelMass
	void SetRaycastWheelMass(float NewMass);                                                                                 // [0x1642980] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.SetIsSimulatingSuspension
	void SetIsSimulatingSuspension(bool NewSimulate);                                                                        // [0x1642690] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.ResetWheelCollisions
	void ResetWheelCollisions();                                                                                             // [0x1641f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetWheelVelocity
	FVector GetWheelVelocity(bool Local);                                                                                    // [0x1641a40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetWheelMode
	EWheelMode GetWheelMode();                                                                                               // [0x1641a20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetWheelAngVelInRadians
	float GetWheelAngVelInRadians();                                                                                         // [0x1641870] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetSteeringInput
	float GetSteeringInput();                                                                                                // [0x16416c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetSteeringAngle
	float GetSteeringAngle();                                                                                                // [0x1641690] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetIsSimulatingSuspension
	bool GetIsSimulatingSuspension();                                                                                        // [0x16410e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetIsAttached
	bool GetIsAttached();                                                                                                    // [0x16410c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleSystemPlugin.VehicleWheelBase.GetHasContact
	bool GetHasContact();                                                                                                    // [0x1641090] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/VehicleSystemPlugin.NetworkRoles
/// Size: 0x06
enum NetworkRoles : uint8_t
{
	NetworkRoles__None0                                                              = 0,
	NetworkRoles__Owner1                                                             = 1,
	NetworkRoles__Server2                                                            = 2,
	NetworkRoles__Client3                                                            = 3,
	NetworkRoles__ClientSpawned4                                                     = 4,
	NetworkRoles__NetworkRoles_MAX5                                                  = 5
};

/// Enum /Script/VehicleSystemPlugin.SteeringSmoothingType
/// Size: 0x04
enum SteeringSmoothingType : uint8_t
{
	SteeringSmoothingType__Instant0                                                  = 0,
	SteeringSmoothingType__Constant1                                                 = 1,
	SteeringSmoothingType__Ease2                                                     = 2,
	SteeringSmoothingType__SteeringSmoothingType_MAX3                                = 3
};

/// Enum /Script/VehicleSystemPlugin.EWheelMode
/// Size: 0x03
enum EWheelMode : uint8_t
{
	EWheelMode__Raycast0                                                             = 0,
	EWheelMode__Physics1                                                             = 1,
	EWheelMode__EWheelMode_MAX2                                                      = 2
};

