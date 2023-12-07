
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosVehicles.

/// Struct /Script/ChaosVehicles.AnimNode_StageCoachWheelController
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
struct FAnimNode_StageCoachWheelController : FAnimNode_SkeletalControlBase
{ 
	int32_t                                            WheelSpokeCount;                                            // 0x00C8   (0x0004)  
	float                                              MaxAngularVelocity;                                         // 0x00CC   (0x0004)  
	float                                              ShutterSpeed;                                               // 0x00D0   (0x0004)  
	float                                              StageCoachBlend;                                            // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00D8   (0x0018)  MISSED
};

/// Struct /Script/ChaosVehicles.AnimNode_WheelController
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
struct FAnimNode_WheelController : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleReplicatedState
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVehicleReplicatedState
{ 
	float                                              SteeringInput;                                              // 0x0000   (0x0004)  
	float                                              ThrottleInput;                                              // 0x0004   (0x0004)  
	float                                              BrakeInput;                                                 // 0x0008   (0x0004)  
	float                                              PitchInput;                                                 // 0x000C   (0x0004)  
	float                                              RollInput;                                                  // 0x0010   (0x0004)  
	float                                              YawInput;                                                   // 0x0014   (0x0004)  
	float                                              HandbrakeInput;                                             // 0x0018   (0x0004)  
	int32_t                                            TargetGear;                                                 // 0x001C   (0x0004)  
	float                                              ThrottleUp;                                                 // 0x0020   (0x0004)  
	float                                              ThrottleDown;                                               // 0x0024   (0x0004)  
};

/// Struct /Script/ChaosVehicles.VehicleTorqueControlConfig
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVehicleTorqueControlConfig
{ 
	bool                                               Enabled;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              YawTorqueScaling;                                           // 0x0004   (0x0004)  
	float                                              YawFromSteering;                                            // 0x0008   (0x0004)  
	float                                              YawFromRollTorqueScaling;                                   // 0x000C   (0x0004)  
	float                                              PitchTorqueScaling;                                         // 0x0010   (0x0004)  
	float                                              RollTorqueScaling;                                          // 0x0014   (0x0004)  
	float                                              RollFromSteering;                                           // 0x0018   (0x0004)  
	float                                              RotationDamping;                                            // 0x001C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0020   (0x0020)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleTargetRotationControlConfig
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVehicleTargetRotationControlConfig
{ 
	bool                                               Enabled;                                                    // 0x0000   (0x0001)  
	bool                                               bRollVsSpeedEnabled;                                        // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RollControlScaling;                                         // 0x0004   (0x0004)  
	float                                              RollMaxAngle;                                               // 0x0008   (0x0004)  
	float                                              PitchControlScaling;                                        // 0x000C   (0x0004)  
	float                                              PitchMaxAngle;                                              // 0x0010   (0x0004)  
	float                                              RotationStiffness;                                          // 0x0014   (0x0004)  
	float                                              RotationDamping;                                            // 0x0018   (0x0004)  
	float                                              MaxAccel;                                                   // 0x001C   (0x0004)  
	float                                              AutoCentreRollStrength;                                     // 0x0020   (0x0004)  
	float                                              AutoCentrePitchStrength;                                    // 0x0024   (0x0004)  
	float                                              AutoCentreYawStrength;                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleStabilizeControlConfig
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVehicleStabilizeControlConfig
{ 
	bool                                               Enabled;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AltitudeHoldZ;                                              // 0x0004   (0x0004)  
	float                                              PositionHoldXY;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleInputRateConfig
/// Size: 0x0098 (0x000000 - 0x000098)
struct FVehicleInputRateConfig
{ 
	float                                              RiseRate;                                                   // 0x0000   (0x0004)  
	float                                              FallRate;                                                   // 0x0004   (0x0004)  
	EInputFunctionType                                 InputCurveFunction;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FRuntimeFloatCurve                                 UserCurve;                                                  // 0x0010   (0x0088)  
};

/// Struct /Script/ChaosVehicles.VehicleAerofoilConfig
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FVehicleAerofoilConfig
{ 
	EVehicleAerofoilType                               AerofoilType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              BoneName;                                                   // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Offset;                                                     // 0x0010   (0x0018)  
	FVector                                            UpAxis;                                                     // 0x0028   (0x0018)  
	float                                              Area;                                                       // 0x0040   (0x0004)  
	float                                              Camber;                                                     // 0x0044   (0x0004)  
	float                                              MaxControlAngle;                                            // 0x0048   (0x0004)  
	float                                              StallAngle;                                                 // 0x004C   (0x0004)  
	float                                              LiftMultiplier;                                             // 0x0050   (0x0004)  
	float                                              DragMultiplier;                                             // 0x0054   (0x0004)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0058   (0x0058)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleThrustConfig
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FVehicleThrustConfig
{ 
	EVehicleThrustType                                 ThrustType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              BoneName;                                                   // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Offset;                                                     // 0x0010   (0x0018)  
	FVector                                            ThrustAxis;                                                 // 0x0028   (0x0018)  
	float                                              MaxThrustForce;                                             // 0x0040   (0x0004)  
	float                                              MaxControlAngle;                                            // 0x0044   (0x0004)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0048   (0x0058)  MISSED
};

/// Struct /Script/ChaosVehicles.WheelStatus
/// Size: 0x0088 (0x000000 - 0x000088)
struct FWheelStatus
{ 
	bool                                               bInContact;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            ContactPoint;                                               // 0x0008   (0x0018)  
	FVector                                            HitLocation;                                                // 0x0020   (0x0018)  
	TWeakObjectPtr<UPhysicalMaterial*>                 PhysMaterial;                                               // 0x0038   (0x0008)  
	float                                              NormalizedSuspensionLength;                                 // 0x0040   (0x0004)  
	float                                              SpringForce;                                                // 0x0044   (0x0004)  
	float                                              SlipAngle;                                                  // 0x0048   (0x0004)  
	bool                                               bIsSlipping;                                                // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              SlipMagnitude;                                              // 0x0050   (0x0004)  
	bool                                               bIsSkidding;                                                // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              SkidMagnitude;                                              // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FVector                                            SkidNormal;                                                 // 0x0060   (0x0018)  
	float                                              DriveTorque;                                                // 0x0078   (0x0004)  
	float                                              BrakeTorque;                                                // 0x007C   (0x0004)  
	bool                                               bABSActivated;                                              // 0x0080   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleDifferentialConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVehicleDifferentialConfig
{ 
	EVehicleDifferential                               DifferentialType;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FrontRearSplit;                                             // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleEngineConfig
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FVehicleEngineConfig
{ 
	FRuntimeFloatCurve                                 TorqueCurve;                                                // 0x0000   (0x0088)  
	float                                              MaxTorque;                                                  // 0x0088   (0x0004)  
	float                                              MaxRPM;                                                     // 0x008C   (0x0004)  
	float                                              EngineIdleRPM;                                              // 0x0090   (0x0004)  
	float                                              EngineBrakeEffect;                                          // 0x0094   (0x0004)  
	float                                              EngineRevUpMOI;                                             // 0x0098   (0x0004)  
	float                                              EngineRevDownRate;                                          // 0x009C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00A0   (0x0028)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleTransmissionConfig
/// Size: 0x0070 (0x000000 - 0x000070)
struct FVehicleTransmissionConfig
{ 
	bool                                               bUseAutomaticGears;                                         // 0x0000   (0x0001)  
	bool                                               bUseAutoReverse;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FinalRatio;                                                 // 0x0004   (0x0004)  
	TArray<float>                                      ForwardGearRatios;                                          // 0x0008   (0x0010)  
	TArray<float>                                      ReverseGearRatios;                                          // 0x0018   (0x0010)  
	float                                              ChangeUpRPM;                                                // 0x0028   (0x0004)  
	float                                              ChangeDownRPM;                                              // 0x002C   (0x0004)  
	float                                              GearChangeTime;                                             // 0x0030   (0x0004)  
	float                                              TransmissionEfficiency;                                     // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0038   (0x0038)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleSteeringConfig
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FVehicleSteeringConfig
{ 
	ESteeringType                                      SteeringType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AngleRatio;                                                 // 0x0004   (0x0004)  
	FRuntimeFloatCurve                                 SteeringCurve;                                              // 0x0008   (0x0088)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0090   (0x0048)  MISSED
};

/// Struct /Script/ChaosVehicles.ChaosWheelSetup
/// Size: 0x0028 (0x000000 - 0x000028)
struct FChaosWheelSetup
{ 
	UClass*                                            WheelClass;                                                 // 0x0000   (0x0008)  
	FName                                              BoneName;                                                   // 0x0008   (0x0008)  
	FVector                                            AdditionalOffset;                                           // 0x0010   (0x0018)  
};

/// Struct /Script/ChaosVehicles.BaseSnapshotData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FBaseSnapshotData
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	FVector                                            LinearVelocity;                                             // 0x0060   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0078   (0x0018)  
};

/// Struct /Script/ChaosVehicles.WheelSnapshot
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWheelSnapshot
{ 
	float                                              SuspensionOffset;                                           // 0x0000   (0x0004)  
	float                                              WheelRotationAngle;                                         // 0x0004   (0x0004)  
	float                                              SteeringAngle;                                              // 0x0008   (0x0004)  
	float                                              WheelRadius;                                                // 0x000C   (0x0004)  
	float                                              WheelAngularVelocity;                                       // 0x0010   (0x0004)  
};

/// Struct /Script/ChaosVehicles.WheeledSnaphotData
/// Size: 0x0020 (0x000090 - 0x0000B0)
struct FWheeledSnaphotData : FBaseSnapshotData
{ 
	int32_t                                            SelectedGear;                                               // 0x0090   (0x0004)  
	float                                              EngineRPM;                                                  // 0x0094   (0x0004)  
	TArray<FWheelSnapshot>                             WheelSnapshots;                                             // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ChaosVehicles.VehicleAnimationInstanceProxy
/// Size: 0x0020 (0x000880 - 0x0008A0)
struct FVehicleAnimationInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0880   (0x0020)  MISSED
};

/// Class /Script/ChaosVehicles.ChaosVehicleMovementComponent
/// Size: 0x07C8 (0x000158 - 0x000920)
class UChaosVehicleMovementComponent : public UPawnMovementComponent : UPawnMovementComponent
{ 
public:
	bool                                               bReverseAsBrake : 1;                                        // 0x0158:0 (0x0001)  
	bool                                               bThrottleAsBrake : 1;                                       // 0x0158:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x015C   (0x0004)  
	bool                                               bEnableCenterOfMassOverride;                                // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	FVector                                            CenterOfMassOverride;                                       // 0x0168   (0x0018)  
	float                                              ChassisWidth;                                               // 0x0180   (0x0004)  
	float                                              ChassisHeight;                                              // 0x0184   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0188   (0x0004)  
	float                                              DownforceCoefficient;                                       // 0x018C   (0x0004)  
	float                                              DragArea;                                                   // 0x0190   (0x0004)  
	float                                              DebugDragMagnitude;                                         // 0x0194   (0x0004)  
	FVector                                            InertiaTensorScale;                                         // 0x0198   (0x0018)  
	float                                              SleepThreshold;                                             // 0x01B0   (0x0004)  
	float                                              SleepSlopeLimit;                                            // 0x01B4   (0x0004)  
	TArray<FVehicleAerofoilConfig>                     Aerofoils;                                                  // 0x01B8   (0x0010)  
	TArray<FVehicleThrustConfig>                       Thrusters;                                                  // 0x01C8   (0x0010)  
	FVehicleTorqueControlConfig                        TorqueControl;                                              // 0x01D8   (0x0040)  
	FVehicleTargetRotationControlConfig                TargetRotationControl;                                      // 0x0218   (0x0058)  
	FVehicleStabilizeControlConfig                     StabilizeControl;                                           // 0x0270   (0x0018)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0288   (0x0004)  MISSED
	bool                                               bRawHandbrakeInput : 1;                                     // 0x028C:0 (0x0001)  
	bool                                               bRawGearUpInput : 1;                                        // 0x028C:1 (0x0001)  
	bool                                               bRawGearDownInput : 1;                                      // 0x028C:2 (0x0001)  
	unsigned char                                      UnknownData03_3[0x3];                                       // 0x028D   (0x0003)  MISSED
	bool                                               bWasAvoidanceUpdated : 1;                                   // 0x0290:0 (0x0001)  
	unsigned char                                      UnknownData04_3[0x3];                                       // 0x0291   (0x0003)  MISSED
	bool                                               bParkEnabled : 1;                                           // 0x0294:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x33];                                      // 0x0295   (0x0033)  MISSED
	FVehicleReplicatedState                            ReplicatedState;                                            // 0x02C8   (0x0028)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x02F0   (0x0004)  MISSED
	float                                              RawSteeringInput;                                           // 0x02F4   (0x0004)  
	float                                              RawThrottleInput;                                           // 0x02F8   (0x0004)  
	float                                              RawBrakeInput;                                              // 0x02FC   (0x0004)  
	float                                              RawPitchInput;                                              // 0x0300   (0x0004)  
	float                                              RawRollInput;                                               // 0x0304   (0x0004)  
	float                                              RawYawInput;                                                // 0x0308   (0x0004)  
	float                                              SteeringInput;                                              // 0x030C   (0x0004)  
	float                                              ThrottleInput;                                              // 0x0310   (0x0004)  
	float                                              BrakeInput;                                                 // 0x0314   (0x0004)  
	float                                              PitchInput;                                                 // 0x0318   (0x0004)  
	float                                              RollInput;                                                  // 0x031C   (0x0004)  
	float                                              YawInput;                                                   // 0x0320   (0x0004)  
	float                                              HandbrakeInput;                                             // 0x0324   (0x0004)  
	bool                                               bRequiresControllerForInputs;                               // 0x0328   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0329   (0x0003)  MISSED
	float                                              IdleBrakeInput;                                             // 0x032C   (0x0004)  
	float                                              StopThreshold;                                              // 0x0330   (0x0004)  
	float                                              WrongDirectionThreshold;                                    // 0x0334   (0x0004)  
	FVehicleInputRateConfig                            ThrottleInputRate;                                          // 0x0338   (0x0098)  
	FVehicleInputRateConfig                            BrakeInputRate;                                             // 0x03D0   (0x0098)  
	FVehicleInputRateConfig                            SteeringInputRate;                                          // 0x0468   (0x0098)  
	FVehicleInputRateConfig                            HandbrakeInputRate;                                         // 0x0500   (0x0098)  
	FVehicleInputRateConfig                            PitchInputRate;                                             // 0x0598   (0x0098)  
	FVehicleInputRateConfig                            RollInputRate;                                              // 0x0630   (0x0098)  
	FVehicleInputRateConfig                            YawInputRate;                                               // 0x06C8   (0x0098)  
	unsigned char                                      UnknownData08_5[0x198];                                     // 0x0760   (0x0198)  MISSED
	AController*                                       OverrideController;                                         // 0x08F8   (0x0008)  
	unsigned char                                      UnknownData09_6[0x20];                                      // 0x0900   (0x0020)  MISSED


	/// Functions
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
	void SetYawInput(float Yaw);                                                                                             // [0x11e6d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
	void SetUseAutomaticGears(bool bUseAuto);                                                                                // [0x11e6cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
	void SetThrottleInput(float Throttle);                                                                                   // [0x11e6c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
	void SetTargetGear(int32_t GearNum, bool bImmediate);                                                                    // [0x11e6b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
	void SetSteeringInput(float Steering);                                                                                   // [0x11e6af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetSleeping
	void SetSleeping(bool bEnableSleep);                                                                                     // [0x11e6a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
	void SetRollInput(float Roll);                                                                                           // [0x11e69e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetRequiresControllerForInputs
	void SetRequiresControllerForInputs(bool bRequiresController);                                                           // [0x11e6950] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
	void SetPitchInput(float Pitch);                                                                                         // [0x11e68d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetParked
	void SetParked(bool bParked);                                                                                            // [0x11e6840] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
	void SetHandbrakeInput(bool bNewHandbrake);                                                                              // [0x11e67b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
	void SetChangeUpInput(bool bNewGearUp);                                                                                  // [0x11e6720] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
	void SetChangeDownInput(bool bNewGearDown);                                                                              // [0x11e6690] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
	void SetBrakeInput(float Brake);                                                                                         // [0x11e6610] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t InCurrentGear, float InRollInput, float InPitchInput, float InYawInput); // [0x11e6320] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.ResetVehicle
	void ResetVehicle();                                                                                                     // [0x11e6300] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.IsParked
	bool IsParked();                                                                                                         // [0x11e62d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
	void IncreaseThrottleInput(float ThrottleDelta);                                                                         // [0x11e6220] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
	bool GetUseAutoGears();                                                                                                  // [0x11e6190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetThrottleInput
	float GetThrottleInput();                                                                                                // [0x11e6170] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
	int32_t GetTargetGear();                                                                                                 // [0x11e6140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetSteeringInput
	float GetSteeringInput();                                                                                                // [0x11e60b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetHandbrakeInput
	bool GetHandbrakeInput();                                                                                                // [0x11e5ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
	float GetForwardSpeedMPH();                                                                                              // [0x11e5fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
	float GetForwardSpeed();                                                                                                 // [0x11e5f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
	int32_t GetCurrentGear();                                                                                                // [0x11e5f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.GetBrakeInput
	float GetBrakeInput();                                                                                                   // [0x11e5f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
	void EnableSelfRighting(bool InState);                                                                                   // [0x11e5e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
	void DecreaseThrottleInput(float ThrottleDelta);                                                                         // [0x11e5e10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosVehicles.ChaosVehicleWheel
/// Size: 0x02B8 (0x000028 - 0x0002E0)
class UChaosVehicleWheel : public UObject : UObject
{ 
public:
	UStaticMesh*                                       CollisionMesh;                                              // 0x0028   (0x0008)  
	EAxleType                                          AxleType;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Offset;                                                     // 0x0038   (0x0018)  
	float                                              WheelRadius;                                                // 0x0050   (0x0004)  
	float                                              WheelWidth;                                                 // 0x0054   (0x0004)  
	float                                              WheelMass;                                                  // 0x0058   (0x0004)  
	float                                              CorneringStiffness;                                         // 0x005C   (0x0004)  
	float                                              FrictionForceMultiplier;                                    // 0x0060   (0x0004)  
	float                                              SideSlipModifier;                                           // 0x0064   (0x0004)  
	float                                              SlipThreshold;                                              // 0x0068   (0x0004)  
	float                                              SkidThreshold;                                              // 0x006C   (0x0004)  
	float                                              MaxSteerAngle;                                              // 0x0070   (0x0004)  
	bool                                               bAffectedBySteering;                                        // 0x0074   (0x0001)  
	bool                                               bAffectedByBrake;                                           // 0x0075   (0x0001)  
	bool                                               bAffectedByHandbrake;                                       // 0x0076   (0x0001)  
	bool                                               bAffectedByEngine;                                          // 0x0077   (0x0001)  
	bool                                               bABSEnabled;                                                // 0x0078   (0x0001)  
	bool                                               bTractionControlEnabled;                                    // 0x0079   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	float                                              MaxWheelspinRotation;                                       // 0x007C   (0x0004)  
	ETorqueCombineMethod                               ExternalTorqueCombineMethod;                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FRuntimeFloatCurve                                 LateralSlipGraph;                                           // 0x0088   (0x0088)  
	FVector                                            SuspensionAxis;                                             // 0x0110   (0x0018)  
	FVector                                            SuspensionForceOffset;                                      // 0x0128   (0x0018)  
	float                                              SuspensionMaxRaise;                                         // 0x0140   (0x0004)  
	float                                              SuspensionMaxDrop;                                          // 0x0144   (0x0004)  
	float                                              SuspensionDampingRatio;                                     // 0x0148   (0x0004)  
	float                                              WheelLoadRatio;                                             // 0x014C   (0x0004)  
	float                                              SpringRate;                                                 // 0x0150   (0x0004)  
	float                                              SpringPreload;                                              // 0x0154   (0x0004)  
	int32_t                                            SuspensionSmoothing;                                        // 0x0158   (0x0004)  
	float                                              RollbarScaling;                                             // 0x015C   (0x0004)  
	ESweepShape                                        SweepShape;                                                 // 0x0160   (0x0001)  
	ESweepType                                         SweepType;                                                  // 0x0161   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0162   (0x0002)  MISSED
	float                                              MaxBrakeTorque;                                             // 0x0164   (0x0004)  
	float                                              MaxHandBrakeTorque;                                         // 0x0168   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	UChaosWheeledVehicleMovementComponent*             VehicleComponent;                                           // 0x0170   (0x0008)  
	int32_t                                            WheelIndex;                                                 // 0x0178   (0x0004)  
	float                                              DebugLongSlip;                                              // 0x017C   (0x0004)  
	float                                              DebugLatSlip;                                               // 0x0180   (0x0004)  
	float                                              DebugNormalizedTireLoad;                                    // 0x0184   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0188   (0x0004)  MISSED
	float                                              DebugWheelTorque;                                           // 0x018C   (0x0004)  
	float                                              DebugLongForce;                                             // 0x0190   (0x0004)  
	float                                              DebugLatForce;                                              // 0x0194   (0x0004)  
	FVector                                            Location;                                                   // 0x0198   (0x0018)  
	FVector                                            OldLocation;                                                // 0x01B0   (0x0018)  
	FVector                                            Velocity;                                                   // 0x01C8   (0x0018)  
	unsigned char                                      UnknownData06_6[0x100];                                     // 0x01E0   (0x0100)  MISSED


	/// Functions
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.IsInAir
	bool IsInAir();                                                                                                          // [0x11e62a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetWheelRadius
	float GetWheelRadius();                                                                                                  // [0x11e61f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetWheelAngularVelocity
	float GetWheelAngularVelocity();                                                                                         // [0x11e61c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
	float GetSuspensionOffset();                                                                                             // [0x11e6110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetSuspensionAxis
	FVector GetSuspensionAxis();                                                                                             // [0x11e60d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
	float GetSteerAngle();                                                                                                   // [0x11e6080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetRotationAngularVelocity
	float GetRotationAngularVelocity();                                                                                      // [0x11e6050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
	float GetRotationAngle();                                                                                                // [0x11e6020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosVehicleWheel.GetAxleType
	EAxleType GetAxleType();                                                                                                 // [0x11e5f20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent
/// Size: 0x0320 (0x000920 - 0x000C40)
class UChaosWheeledVehicleMovementComponent : public UChaosVehicleMovementComponent : UChaosVehicleMovementComponent
{ 
public:
	bool                                               bSuspensionEnabled;                                         // 0x0918   (0x0001)  
	bool                                               bWheelFrictionEnabled;                                      // 0x0919   (0x0001)  
	bool                                               bLegacyWheelFrictionPosition;                               // 0x091A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x091B   (0x0005)  MISSED
	TArray<FChaosWheelSetup>                           WheelSetups;                                                // 0x0920   (0x0010)  
	FCollisionResponseContainer                        WheelTraceCollisionResponses;                               // 0x0930   (0x0020)  
	bool                                               bMechanicalSimEnabled;                                      // 0x0950   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0951   (0x0007)  MISSED
	FVehicleEngineConfig                               EngineSetup;                                                // 0x0958   (0x00C8)  
	FVehicleDifferentialConfig                         DifferentialSetup;                                          // 0x0A20   (0x0010)  
	FVehicleTransmissionConfig                         TransmissionSetup;                                          // 0x0A30   (0x0070)  
	FVehicleSteeringConfig                             SteeringSetup;                                              // 0x0AA0   (0x00D8)  
	TArray<UChaosVehicleWheel*>                        wheels;                                                     // 0x0B78   (0x0010)  
	unsigned char                                      UnknownData02_6[0xB8];                                      // 0x0B88   (0x00B8)  MISSED


	/// Functions
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelSlipGraphMultiplier
	void SetWheelSlipGraphMultiplier(int32_t WheelIndex, float Multiplier);                                                  // [0x11f6d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelRadius
	void SetWheelRadius(int32_t WheelIndex, float Radius);                                                                   // [0x11f6c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxSteerAngle
	void SetWheelMaxSteerAngle(int32_t WheelIndex, float AngleDegrees);                                                      // [0x11f6bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxBrakeTorque
	void SetWheelMaxBrakeTorque(int32_t WheelIndex, float Torque);                                                           // [0x11f6ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelHandbrakeTorque
	void SetWheelHandbrakeTorque(int32_t WheelIndex, float Torque);                                                          // [0x11f6a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelFrictionMultiplier
	void SetWheelFrictionMultiplier(int32_t WheelIndex, float Friction);                                                     // [0x11f6940] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelClass
	void SetWheelClass(int32_t WheelIndex, UClass* InWheelClass);                                                            // [0x11f6870] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTractionControlEnabled
	void SetTractionControlEnabled(int32_t WheelIndex, bool Enabled);                                                        // [0x11f67a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTorqueCombineMethod
	void SetTorqueCombineMethod(ETorqueCombineMethod InCombineMethod, int32_t WheelIndex);                                   // [0x11f66d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSuspensionParams
	void SetSuspensionParams(float Rate, float Damping, float Preload, float MaxRaise, float MaxDrop, int32_t WheelIndex);   // [0x11f64e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSnapshot
	void SetSnapshot(FWheeledSnaphotData& SnapshotIn);                                                                       // [0x11f6390] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetMaxEngineTorque
	void SetMaxEngineTorque(float Torque);                                                                                   // [0x11f6310] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDriveTorque
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex);                                                              // [0x11f6240] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDragCoefficient
	void SetDragCoefficient(float DragCoeff);                                                                                // [0x11f61c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDownforceCoefficient
	void SetDownforceCoefficient(float DownforceCoeff);                                                                      // [0x11f6140] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDifferentialFrontRearSplit
	void SetDifferentialFrontRearSplit(float FrontRearSlpit);                                                                // [0x11f60c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetBrakeTorque
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);                                                              // [0x11f5ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedBySteering
	void SetAffectedBySteering(int32_t WheelIndex, bool Enabled);                                                            // [0x11f5f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByHandbrake
	void SetAffectedByHandbrake(int32_t WheelIndex, bool Enabled);                                                           // [0x11f5e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByEngine
	void SetAffectedByEngine(int32_t WheelIndex, bool Enabled);                                                              // [0x11f5d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByBrake
	void SetAffectedByBrake(int32_t WheelIndex, bool Enabled);                                                               // [0x11f5cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetABSEnabled
	void SetABSEnabled(int32_t WheelIndex, bool Enabled);                                                                    // [0x11f5be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
	FWheelStatus MakeWheelStatus(bool bInContact, FVector& ContactPoint, UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, float SlipAngle, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, FVector& SkidNormal, float DriveTorque, float BrakeTorque, bool bABSActivated); // [0x11f5430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelSnapshot
	FWheelSnapshot MakeWheelSnapshot(float SuspensionOffset, float WheelRotationAngle, float SteeringAngle, float WheelRadius, float WheelAngularVelocity); // [0x11f5270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheeledSnapshot
	FWheeledSnaphotData MakeWheeledSnapshot(FTransform Transform, FVector LinearVelocity, FVector AngularVelocity, int32_t SelectedGear, float EngineRPM, TArray<FWheelSnapshot>& WheelSnapshots); // [0x11f58f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
	FWheelStatus GetWheelState(int32_t WheelIndex);                                                                          // [0x11f5180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetSnapshot
	FWheeledSnaphotData GetSnapshot();                                                                                       // [0x11f50d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
	int32_t GetNumWheels();                                                                                                  // [0x11f50b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
	float GetEngineRotationSpeed();                                                                                          // [0x11f5080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	float GetEngineMaxRotationSpeed();                                                                                       // [0x11f5050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
	void EnableWheelFriction(bool InState);                                                                                  // [0x11f4fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
	void EnableSuspension(bool InState);                                                                                     // [0x11f4f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
	void EnableMechanicalSim(bool InState);                                                                                  // [0x11f4ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
	void BreakWheelStatus(FWheelStatus& Status, bool& bInContact, FVector& ContactPoint, UPhysicalMaterial*& PhysMaterial, float& NormalizedSuspensionLength, float& SpringForce, float& SlipAngle, bool& bIsSlipping, float& SlipMagnitude, bool& bIsSkidding, float& SkidMagnitude, FVector& SkidNormal, float& DriveTorque, float& BrakeTorque, bool& bABSActivated); // [0x11f4510] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelSnapshot
	void BreakWheelSnapshot(FWheelSnapshot& Snapshot, float& SuspensionOffset, float& WheelRotationAngle, float& SteeringAngle, float& WheelRadius, float& WheelAngularVelocity); // [0x11f42d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheeledSnapshot
	void BreakWheeledSnapshot(FWheeledSnaphotData& Snapshot, FTransform& Transform, FVector& LinearVelocity, FVector& AngularVelocity, int32_t& SelectedGear, float& EngineRPM, TArray<FWheelSnapshot>& WheelSnapshots); // [0x11f4af0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosVehicles.VehicleAnimationInstance
/// Size: 0x08C0 (0x000350 - 0x000C10)
class UVehicleAnimationInstance : public UAnimInstance : UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x8B0];                                     // 0x0350   (0x08B0)  MISSED
	UChaosWheeledVehicleMovementComponent*             WheeledVehicleComponent;                                    // 0x0C00   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0C08   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosVehicles.VehicleAnimationInstance.GetVehicle
	AWheeledVehiclePawn* GetVehicle();                                                                                       // [0x11f5150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosVehicles.WheeledVehiclePawn
/// Size: 0x0010 (0x000318 - 0x000328)
class AWheeledVehiclePawn : public APawn : APawn
{ 
public:
	USkeletalMeshComponent*                            Mesh;                                                       // 0x0318   (0x0008)  
	UChaosVehicleMovementComponent*                    VehicleMovementComponent;                                   // 0x0320   (0x0008)  
};

/// Enum /Script/ChaosVehicles.EInputFunctionType
/// Size: 0x04
enum EInputFunctionType : uint8_t
{
	EInputFunctionType__LinearFunction0                                              = 0,
	EInputFunctionType__SquaredFunction1                                             = 1,
	EInputFunctionType__CustomCurve2                                                 = 2,
	EInputFunctionType__EInputFunctionType_MAX3                                      = 3
};

/// Enum /Script/ChaosVehicles.EVehicleAerofoilType
/// Size: 0x05
enum EVehicleAerofoilType : uint8_t
{
	EVehicleAerofoilType__Fixed0                                                     = 0,
	EVehicleAerofoilType__Wing1                                                      = 1,
	EVehicleAerofoilType__Rudder2                                                    = 2,
	EVehicleAerofoilType__Elevator3                                                  = 3,
	EVehicleAerofoilType__EVehicleAerofoilType_MAX4                                  = 4
};

/// Enum /Script/ChaosVehicles.EVehicleThrustType
/// Size: 0x05
enum EVehicleThrustType : uint8_t
{
	EVehicleThrustType__Fixed0                                                       = 0,
	EVehicleThrustType__Wing1                                                        = 1,
	EVehicleThrustType__Rudder2                                                      = 2,
	EVehicleThrustType__Elevator3                                                    = 3,
	EVehicleThrustType__EVehicleThrustType_MAX4                                      = 4
};

/// Enum /Script/ChaosVehicles.ESweepShape
/// Size: 0x04
enum ESweepShape : uint8_t
{
	ESweepShape__Raycast0                                                            = 0,
	ESweepShape__Spherecast1                                                         = 1,
	ESweepShape__Shapecast2                                                          = 2,
	ESweepShape__ESweepShape_MAX3                                                    = 3
};

/// Enum /Script/ChaosVehicles.ESweepType
/// Size: 0x03
enum ESweepType : uint8_t
{
	ESweepType__SimpleSweep0                                                         = 0,
	ESweepType__ComplexSweep1                                                        = 1,
	ESweepType__ESweepType_MAX2                                                      = 2
};

/// Enum /Script/ChaosVehicles.EAxleType
/// Size: 0x04
enum EAxleType : uint8_t
{
	EAxleType__Undefined0                                                            = 0,
	EAxleType__Front1                                                                = 1,
	EAxleType__Rear2                                                                 = 2,
	EAxleType__EAxleType_MAX3                                                        = 3
};

/// Enum /Script/ChaosVehicles.ETorqueCombineMethod
/// Size: 0x04
enum ETorqueCombineMethod : uint8_t
{
	ETorqueCombineMethod__None0                                                      = 0,
	ETorqueCombineMethod__Override1                                                  = 1,
	ETorqueCombineMethod__Additive2                                                  = 2,
	ETorqueCombineMethod__ETorqueCombineMethod_MAX3                                  = 3
};

/// Enum /Script/ChaosVehicles.EVehicleDifferential
/// Size: 0x05
enum EVehicleDifferential : uint8_t
{
	EVehicleDifferential__Undefined0                                                 = 0,
	EVehicleDifferential__AllWheelDrive1                                             = 1,
	EVehicleDifferential__FrontWheelDrive2                                           = 2,
	EVehicleDifferential__RearWheelDrive3                                            = 3,
	EVehicleDifferential__EVehicleDifferential_MAX4                                  = 4
};

/// Enum /Script/ChaosVehicles.ESteeringType
/// Size: 0x04
enum ESteeringType : uint8_t
{
	ESteeringType__SingleAngle0                                                      = 0,
	ESteeringType__AngleRatio1                                                       = 1,
	ESteeringType__Ackermann2                                                        = 2,
	ESteeringType__ESteeringType_MAX3                                                = 3
};

