
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AVS_Vehicle.

/// Class /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C
/// Size: 0x02E8 (0x000560 - 0x000848)
class AAVS_Vehicle_C : public AVehicleSystemBase : AVehicleSystemBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0560   (0x0008)  
	TArray<UVehicle_Wheel_C*>                          wheels;                                                     // 0x0568   (0x0010)  
	bool                                               ConstructCalled;                                            // 0x0578   (0x0001)  
	bool                                               Initialized;                                                // 0x0579   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x057A   (0x0006)  MISSED
	UVehicle_EngineAudio_C*                            EngineAudio;                                                // 0x0580   (0x0008)  
	double                                             RPM;                                                        // 0x0588   (0x0008)  
	double                                             dRPM;                                                       // 0x0590   (0x0008)  
	bool                                               StartWithPhysics;                                           // 0x0598   (0x0001)  
	bool                                               StabilityControl;                                           // 0x0599   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x059A   (0x0006)  MISSED
	double                                             StabilityControlForce;                                      // 0x05A0   (0x0008)  
	bool                                               DynamicAirDrag;                                             // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x05A9   (0x0007)  MISSED
	double                                             BaseLinearDrag;                                             // 0x05B0   (0x0008)  
	UPhysicalMaterial*                                 physicsMaterial;                                            // 0x05B8   (0x0008)  
	int32_t                                            NumDrivingWheels;                                           // 0x05C0   (0x0004)  
	bool                                               EngineRunning;                                              // 0x05C4   (0x0001)  
	bool                                               AllowPassiveMode;                                           // 0x05C5   (0x0001)  
	bool                                               StartWithEngineRunning;                                     // 0x05C6   (0x0001)  
	bool                                               ZeroThrottleWhileShifting;                                  // 0x05C7   (0x0001)  
	TEnumAsByte<SpeedUnits>                            SpeedUnits;                                                 // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05C9   (0x0007)  MISSED
	FSpeedUnit                                         SpeedUnit;                                                  // 0x05D0   (0x0030)  
	double                                             IgnitionTime;                                               // 0x0600   (0x0008)  
	TEnumAsByte<ShifterPositions>                      Shifter;                                                    // 0x0608   (0x0001)  
	bool                                               AutomaticShifterPositon;                                    // 0x0609   (0x0001)  
	bool                                               AutomaticTransmission;                                      // 0x060A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x060B   (0x0005)  MISSED
	double                                             GearSwitchTime;                                             // 0x0610   (0x0008)  
	AAVS_Vehicle_C*                                    InputHost;                                                  // 0x0618   (0x0008)  
	double                                             ThrottleInput;                                              // 0x0620   (0x0008)  
	double                                             Throttle;                                                   // 0x0628   (0x0008)  
	double                                             BrakeInput;                                                 // 0x0630   (0x0008)  
	double                                             Brake;                                                      // 0x0638   (0x0008)  
	double                                             Steering;                                                   // 0x0640   (0x0008)  
	bool                                               isBrakeApplied;                                             // 0x0648   (0x0001)  
	bool                                               HandbrakeApplied;                                           // 0x0649   (0x0001)  
	bool                                               ServerEngineRunning;                                        // 0x064A   (0x0001)  
	unsigned char                                      UnknownData05_5[0x5];                                       // 0x064B   (0x0005)  MISSED
	FTimerHandle                                       IgnitionTimer;                                              // 0x0650   (0x0008)  
	double                                             Acceleration;                                               // 0x0658   (0x0008)  
	double                                             AirSpeed;                                                   // 0x0660   (0x0008)  
	double                                             TargetSpeed;                                                // 0x0668   (0x0008)  
	double                                             Torque;                                                     // 0x0670   (0x0008)  
	double                                             Slip;                                                       // 0x0678   (0x0008)  
	FVehicleGear                                       gear;                                                       // 0x0680   (0x0020)  
	int32_t                                            CurrentGear;                                                // 0x06A0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x06A4   (0x0004)  MISSED
	TArray<UVehicle_LightController_C*>                LightControllers;                                           // 0x06A8   (0x0010)  
	TArray<UVehicle_ExhaustController_C*>              Exhausts;                                                   // 0x06B8   (0x0010)  
	TArray<FName>                                      ActiveLightGroups;                                          // 0x06C8   (0x0010)  
	int32_t                                            PreviousGear;                                               // 0x06D8   (0x0004)  
	bool                                               isShifting;                                                 // 0x06DC   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x06DD   (0x0003)  MISSED
	UCurveFloat*                                       ThrottleCurve;                                              // 0x06E0   (0x0008)  
	UCurveFloat*                                       GearCurve;                                                  // 0x06E8   (0x0008)  
	double                                             SteeringInput;                                              // 0x06F0   (0x0008)  
	int32_t                                            GearInput;                                                  // 0x06F8   (0x0004)  
	bool                                               VisualizeCenterOfMass;                                      // 0x06FC   (0x0001)  
	bool                                               OverrideCenterOfMass;                                       // 0x06FD   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x06FE   (0x0002)  MISSED
	FVector                                            RelativeCenterOfMass;                                       // 0x0700   (0x0018)  
	FVector                                            DefaultCOM;                                                 // 0x0718   (0x0018)  
	bool                                               AccelerationConfig;                                         // 0x0730   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0731   (0x0007)  MISSED
	double                                             TargetAcceleration;                                         // 0x0738   (0x0008)  
	double                                             DynamicMaxTorque;                                           // 0x0740   (0x0008)  
	FVector                                            CenterOfMassOffset;                                         // 0x0748   (0x0018)  
	double                                             IdleRPM;                                                    // 0x0760   (0x0008)  
	double                                             IdleMaxRPM;                                                 // 0x0768   (0x0008)  
	bool                                               SyncAsTrailer;                                              // 0x0770   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0771   (0x0007)  MISSED
	FTimerHandle                                       TrailerSyncTimer;                                           // 0x0778   (0x0008)  
	FRotator                                           LocalTrailerRotation;                                       // 0x0780   (0x0018)  
	FRotator                                           HostTrailerRotation;                                        // 0x0798   (0x0018)  
	UVehicle_Hitch_C*                                  NetworkTowHitch;                                            // 0x07B0   (0x0008)  
	UVehicle_Hitch_C*                                  NetworkTrailerHitch;                                        // 0x07B8   (0x0008)  
	double                                             VehicleMaxAngularVelocity;                                  // 0x07C0   (0x0008)  
	bool                                               WheelReprojection;                                          // 0x07C8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x07C9   (0x0007)  MISSED
	double                                             ReprojectionSmoothAlpha;                                    // 0x07D0   (0x0008)  
	double                                             TickDelta;                                                  // 0x07D8   (0x0008)  
	bool                                               CinematicPlayback;                                          // 0x07E0   (0x0001)  
	bool                                               WheelReprojectionCamber;                                    // 0x07E1   (0x0001)  
	unsigned char                                      UnknownData12_5[0x6];                                       // 0x07E2   (0x0006)  MISSED
	FVector2D                                          CamberCompressed;                                           // 0x07E8   (0x0010)  
	FVector2D                                          CamberDecompressed;                                         // 0x07F8   (0x0010)  
	bool                                               ContactModificationDirty;                                   // 0x0808   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0809   (0x0007)  MISSED
	FTimerHandle                                       TPS_Timer;                                                  // 0x0810   (0x0008)  
	double                                             LocalSteeringInput;                                         // 0x0818   (0x0008)  
	bool                                               SuspensionDebug;                                            // 0x0820   (0x0001)  
	bool                                               DisplayDebugMenu;                                           // 0x0821   (0x0001)  
	unsigned char                                      UnknownData14_5[0x6];                                       // 0x0822   (0x0006)  MISSED
	UVehicleSetup_HUD_C*                               DebugMenu;                                                  // 0x0828   (0x0008)  
	TArray<UPrimitiveComponent*>                       DebugMeshes;                                                // 0x0830   (0x0010)  
	UStaticMeshComponent*                              DebugCOM;                                                   // 0x0840   (0x0008)  


	/// Functions
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CalculateSteering
	void CalculateSteering();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.TickInputs
	void TickInputs();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetBrake
	void GetBrake(double& Brake);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.getThrottle
	void getThrottle(double& Throttle);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.getRPM
	void getRPM(double& RPM);                                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ShowDebugMenu
	void ShowDebugMenu(bool Display);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DebugDraw
	void DebugDraw();                                                                                                        // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DebugPassiveText
	void DebugPassiveText();                                                                                                 // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.PassiveStateChanged
	void PassiveStateChanged(bool NewPassiveState);                                                                          // [0x2407bf0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DeterminePassiveState
	bool DeterminePassiveState();                                                                                            // [0x2407bf0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SyncTrailer
	void SyncTrailer();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RefreshContactModification
	void RefreshContactModification(bool Instant);                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetupWheelContactModification
	void SetupWheelContactModification(bool& RegisterSuccess);                                                               // [0x2407bf0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CreateSuspensionPreview
	void CreateSuspensionPreview(UVehicle_Wheel_C* Wheel);                                                                   // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateWheelTorque
	void UpdateWheelTorque(UVehicle_Wheel_C* Wheel);                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetMeshMaterial
	void SetMeshMaterial(UStaticMeshComponent* Mesh, UMaterialInterface* Material);                                          // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SuspensionPreview
	void SuspensionPreview();                                                                                                // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.WakeIfThrottled
	void WakeIfThrottled();                                                                                                  // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_Shifter
	void OnRep_Shifter();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_SteeringInput
	void OnRep_SteeringInput();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_BrakeInput
	void OnRep_BrakeInput();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_ThrottleInput
	void OnRep_ThrottleInput();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.WakePhysics
	void WakePhysics();                                                                                                      // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.IsCinematic
	void IsCinematic(bool& IsCinematic);                                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateLinearDamping
	void UpdateLinearDamping();                                                                                              // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.AnyWheelContact
	void AnyWheelContact(bool& WheelContact);                                                                                // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DoStabilityControl
	void DoStabilityControl();                                                                                               // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DestroyOwnedComponent
	void DestroyOwnedComponent(UActorComponent* Target);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.AutomaticShifterPosition
	void AutomaticShifterPosition();                                                                                         // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ReprojectWheels
	void ReprojectWheels();                                                                                                  // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitWheelReprojectionExperiment
	void InitWheelReprojectionExperiment();                                                                                  // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetHostTrailerRotation
	void GetHostTrailerRotation(FRotator& HostTrailerRotation);                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetGearItem
	void SetGearItem(int32_t Index, FVehicleGear NewGearSettings);                                                           // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetGearArray
	void SetGearArray(TArray<FVehicleGear>& Gears);                                                                          // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.isOwningClient
	void isOwningClient(bool& OwningClient);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetInputHost
	void SetInputHost(AAVS_Vehicle_C* InputHost);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CopyInputsFromHost
	void CopyInputsFromHost();                                                                                               // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DestroyWheelMesh
	void DestroyWheelMesh(UVehicle_Wheel_C* WheelComponent);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CreateWheelMesh
	void CreateWheelMesh(UVehicle_Wheel_C* WheelComponent, UPrimitiveComponent*& NewMesh);                                   // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UnhitchAll
	void UnhitchAll();                                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RemoveWheel
	void RemoveWheel(UVehicle_Wheel_C* Wheel);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.AddWheel
	void AddWheel(UVehicle_Wheel_C* NewWheel);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CreateHitchConstraints
	void CreateHitchConstraints(bool bManualAttachment, FTransform RelativeTransform, UVehicleConstraint*& VehicleConstraint, UPhysicsHandleComponent*& PhysicsHandle); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.setCenterOfMassOffset
	void setCenterOfMassOffset(FVector RelativeCOM);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.StartupEngine
	void StartupEngine();                                                                                                    // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_ServerEngineRunning
	void OnRep_ServerEngineRunning();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_EngineRunning
	void OnRep_EngineRunning();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetSpeedUnitData
	void GetSpeedUnitData(FSpeedUnit& SpeedUnit);                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.Cleanup
	void Cleanup();                                                                                                          // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetAcceleration
	void GetAcceleration(double& Acceleration);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitSpeedUnit
	void InitSpeedUnit();                                                                                                    // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetExactCenterOfMass
	void GetExactCenterOfMass(FVector& ExactCOM, bool& IsValid);                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetExactCenterOfMass
	void SetExactCenterOfMass(FVector NewCenterOfMass);                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.DetachAllWheels
	void DetachAllWheels();                                                                                                  // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ResetAllWheels
	void ResetAllWheels();                                                                                                   // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ApplyCOM
	void ApplyCOM();                                                                                                         // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitCOM
	void InitCOM();                                                                                                          // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetHandbrakeInput
	void SetHandbrakeInput(bool Handbrake);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetShifterPosition
	void SetShifterPosition(TEnumAsByte<ShifterPositions> Shifter Position);                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetSteeringInput
	void SetSteeringInput(double Steering);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetBrakeInput
	void SetBrakeInput(double Brake);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetThrottleInput
	void SetThrottleInput(double Throttle);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetThrottleAndBrakeInput
	void SetThrottleAndBrakeInput(double Throttle);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetupSkeletalMeshes
	void SetupSkeletalMeshes();                                                                                              // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetCurrentSteeringInput
	void GetCurrentSteeringInput(double& SteeringInput);                                                                     // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetCurrentSteering
	void GetCurrentSteering(double& CurrentSteering);                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CreateBoneConstraint
	void CreateBoneConstraint(bool bManualAttachment, FTransform RelativeTransform, UVehicleConstraint*& VehicleConstraint); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CreateNewConstraint
	void CreateNewConstraint(bool bManualAttachment, FTransform RelativeTransform, UVehicleConstraint*& VehicleConstraint);  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.CreateNewWheelController
	void CreateNewWheelController(bool bManualAttachment, FTransform RelativeTransform, UStaticMeshComponent*& Mesh);        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetSelectedGear
	void GetSelectedGear(int32_t& GearNumber, FVehicleGear& SelectedGear);                                                   // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetHandbrakeApplied
	void GetHandbrakeApplied(bool& isHandbrakeApplied);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ValidateTransmission
	void ValidateTransmission();                                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetSlip
	void GetSlip(double& Slip);                                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitAudio
	void InitAudio();                                                                                                        // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetManualGear
	void SetManualGear(int32_t GearNum);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetLocalEngineRunning
	void SetLocalEngineRunning(bool EngineRunning);                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetShifterPosition
	void GetShifterPosition(TEnumAsByte<ShifterPositions>& ShifterPos);                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetCurrentGear
	void GetCurrentGear(int32_t& gear, FVehicleGear& CurrentGear);                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.getTorque
	void getTorque(double& Torque);                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetTargetSpeed
	void GetTargetSpeed(double& TargetSpeed);                                                                                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.TeleportVehicle
	void TeleportVehicle(FVector Location, FRotator Rotation, bool KeepRelativeVelocity);                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetBrakeApplied
	void GetBrakeApplied(bool& isBrakeApplied);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetAirSpeed
	void GetAirSpeed(double& AirSpeed);                                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetAllWheels
	void GetAllWheels(TArray<UVehicle_Wheel_C*>& wheels);                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ToggleLightsActive
	void ToggleLightsActive(FName LightGroup, bool& Active);                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetEngineRunning
	void SetEngineRunning(bool EngineRunning);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetEngineRunning
	void GetEngineRunning(bool& EngineRunning);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.StartEngine
	void StartEngine();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ConstructWheels
	void ConstructWheels();                                                                                                  // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ConstructComponents
	void ConstructComponents();                                                                                              // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OnRep_HandbrakeApplied
	void OnRep_HandbrakeApplied();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.TickCosmetics
	void TickCosmetics();                                                                                                    // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitExhausts
	void InitExhausts();                                                                                                     // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.TickWheels
	void TickWheels();                                                                                                       // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GearChanged
	void GearChanged(int32_t PreviousGear, int32_t CurrentGear);                                                             // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetInitializationState
	void GetInitializationState(bool& Initialized);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.AVS_PrintDebugMessage
	void AVS_PrintDebugMessage(FString Message, bool Error?);                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitVehicleMesh
	void InitVehicleMesh(bool& HasValidMesh);                                                                                // [0x2407bf0] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ChangeGear
	void ChangeGear();                                                                                                       // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetLightsActive
	void GetLightsActive(FName LightGroup, bool& Active);                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetLightsActive
	void SetLightsActive(FName LightGroup, bool Active);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateLightDecorations
	void UpdateLightDecorations(UVehicle_LightController_C* LightController);                                                // [0x2407bf0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateLights
	void UpdateLights();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitLights
	void InitLights();                                                                                                       // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetPhysics
	void SetPhysics(bool Simulate?);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.MoveShifterPosition
	void MoveShifterPosition(bool MoveUp, TEnumAsByte<ShifterPositions>& NewPos);                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateWheelLocks
	void UpdateWheelLocks();                                                                                                 // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateBrakes
	void UpdateBrakes();                                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateForces
	void UpdateForces();                                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UpdateInputs
	void UpdateInputs();                                                                                                     // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.EngineSimluation
	void EngineSimluation();                                                                                                 // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.GetVehicleMesh
	void GetVehicleMesh(UMeshComponent*& Mesh);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.InitWheels
	void InitWheels();                                                                                                       // [0x2407bf0] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.PostConstructInit
	void PostConstructInit();                                                                                                // [0x2407bf0] Private|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.OwnerChanged
	void OwnerChanged();                                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.TeleportWheels
	void TeleportWheels();                                                                                                   // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.WakeWheelsForMovement
	void WakeWheelsForMovement();                                                                                            // [0x2407bf0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_EngineRunning
	void RPC_Server_EngineRunning(bool EngineRunning);                                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_Steering
	void RPC_Server_Steering(double Axis);                                                                                   // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_Throttle
	void RPC_Server_Throttle(double Throttle);                                                                               // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_Brake
	void RPC_Server_Brake(double Brake);                                                                                     // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_Handbrake
	void RPC_Server_Handbrake(bool Handbrake);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_Shifter
	void RPC_Server_Shifter(TEnumAsByte<ShifterPositions> ShifterPosition);                                                  // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SetTrailerSyncMode
	void SetTrailerSyncMode(UVehicle_Hitch_C* TowHitch, UVehicle_Hitch_C* TrailerHitch);                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.SendTrailerRotationRPC
	void SendTrailerRotationRPC();                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RPC_Server_TrailerRotation
	void RPC_Server_TrailerRotation(FRotator ServerTrailerRotation);                                                         // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.25 TPS
	void 25 TPS();                                                                                                           // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ReceiveDestroyed
	void ReceiveDestroyed();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ReceiveUnpossessed
	void ReceiveUnpossessed(AController* OldController);                                                                     // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.AVS_Tick
	void AVS_Tick(float DeltaTime);                                                                                          // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.Reinit TPS
	void Reinit TPS();                                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.RunContactMod
	void RunContactMod();                                                                                                    // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ReceivePossessed
	void ReceivePossessed(AController* NewController);                                                                       // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.PassiveTickBP
	void PassiveTickBP(float DeltaTime);                                                                                     // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /VehicleSystemPlugin/AVS_Vehicle.AVS_Vehicle_C.ExecuteUbergraph_AVS_Vehicle
	void ExecuteUbergraph_AVS_Vehicle(int32_t EntryPoint);                                                                   // [0x2407bf0] Final|HasDefaults    
};

