
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RBVehicle.

/// Struct /Game/RBVehicle/Blueprints/S_VehicleState.S_VehicleState
/// Size: 0x0038 (0x000000 - 0x000038)
struct FS_VehicleState
{ 
	float                                              RPM_10_3F2580A548A184B71FD7C2B8611CE49A;                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      WheelPitches_11_22E73BEB4F3C88842B868FA2A84EE05F;           // 0x0008   (0x0010)  
	float                                              SteeringAngle_15_4D29189E4AE5CBAF6E0776B9316C319C;          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Velocity_19_2A8DA4AE4C27E521CEB6B099149EE0EE;               // 0x0020   (0x0018)  
};

/// Struct /Game/RBVehicle/Blueprints/S_RBGear.S_RBGear
/// Size: 0x0018 (0x000000 - 0x000018)
struct FS_RBGear
{ 
	FName                                              Name_8_F2D2431B4CAA9BF9577EA2B3BB1B9D88;                    // 0x0000   (0x0008)  
	float                                              RPMRise_22_CEB400C24F87DEAD8E85BEA59D4A8385;                // 0x0008   (0x0004)  
	float                                              RPMFall_23_B5F8CC9C4BEC4A63EFBEFD83F0151BD7;                // 0x000C   (0x0004)  
	float                                              RPMGearUp_26_F196519D41E99C5B73910D91DEA32B62;              // 0x0010   (0x0004)  
	float                                              RPMGearDown_27_6905949F46848F572E5BDD9608675C86;            // 0x0014   (0x0004)  
};

/// Struct /Game/RBVehicle/Blueprints/S_VehicleSit.S_VehicleSit
/// Size: 0x0010 (0x000000 - 0x000010)
struct FS_VehicleSit
{ 
	bool                                               IsBusy_2_B75AF9B24F5F3F1F0BB98EAC43E202DD;                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	APawn*                                             Sitter_5_5DFE1C3C4B6381B5FACA4F88A2A7A208;                  // 0x0008   (0x0008)  
};

/// Class /Game/RBVehicle/Upgrades/BPDA_BaseUpgrade.BPDA_BaseUpgrade_C
/// Size: 0x0028 (0x000030 - 0x000058)
class UBPDA_BaseUpgrade_C : public UPrimaryDataAsset : UPrimaryDataAsset
{ 
public:
	int32_t                                            Cost;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              Label;                                                      // 0x0038   (0x0018)  
	bool                                               IsLastLevel;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	int32_t                                            Level;                                                      // 0x0054   (0x0004)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_BaseUpgrade.BPDA_BaseUpgrade_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/RBVehicle/Upgrades/BPDA_Isolation.BPDA_Isolation_C
/// Size: 0x0010 (0x000058 - 0x000068)
class UBPDA_Isolation_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  
	double                                             CarIsolation;                                               // 0x0060   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_Isolation.BPDA_Isolation_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_Isolation.BPDA_Isolation_C.ExecuteUbergraph_BPDA_Isolation
	void ExecuteUbergraph_BPDA_Isolation(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_Inventory.BPDA_Inventory_C
/// Size: 0x0008 (0x000058 - 0x000060)
class UBPDA_Inventory_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_Inventory.BPDA_Inventory_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_Inventory.BPDA_Inventory_C.ExecuteUbergraph_BPDA_Inventory
	void ExecuteUbergraph_BPDA_Inventory(int32_t EntryPoint);                                                                // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_FuelMax.BPDA_FuelMax_C
/// Size: 0x0010 (0x000058 - 0x000068)
class UBPDA_FuelMax_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  
	double                                             FuelMax;                                                    // 0x0060   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_FuelMax.BPDA_FuelMax_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_FuelMax.BPDA_FuelMax_C.ExecuteUbergraph_BPDA_FuelMax
	void ExecuteUbergraph_BPDA_FuelMax(int32_t EntryPoint);                                                                  // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_FuelDecreaseSpeed.BPDA_FuelDecreaseSpeed_C
/// Size: 0x0010 (0x000058 - 0x000068)
class UBPDA_FuelDecreaseSpeed_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  
	double                                             FuelDecreaseSpeed;                                          // 0x0060   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_FuelDecreaseSpeed.BPDA_FuelDecreaseSpeed_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_FuelDecreaseSpeed.BPDA_FuelDecreaseSpeed_C.ExecuteUbergraph_BPDA_FuelDecreaseSpeed
	void ExecuteUbergraph_BPDA_FuelDecreaseSpeed(int32_t EntryPoint);                                                        // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_Boost.BPDA_Boost_C
/// Size: 0x000C (0x000058 - 0x000064)
class UBPDA_Boost_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  
	int32_t                                            BoostCount;                                                 // 0x0060   (0x0004)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_Boost.BPDA_Boost_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_Boost.BPDA_Boost_C.ExecuteUbergraph_BPDA_Boost
	void ExecuteUbergraph_BPDA_Boost(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_Armor.BPDA_Armor_C
/// Size: 0x0010 (0x000058 - 0x000068)
class UBPDA_Armor_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  
	double                                             Durability;                                                 // 0x0060   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_Armor.BPDA_Armor_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_Armor.BPDA_Armor_C.ExecuteUbergraph_BPDA_Armor
	void ExecuteUbergraph_BPDA_Armor(int32_t EntryPoint);                                                                    // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_AdditionalLight.BPDA_AdditionalLight_C
/// Size: 0x0008 (0x000058 - 0x000060)
class UBPDA_AdditionalLight_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_AdditionalLight.BPDA_AdditionalLight_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_AdditionalLight.BPDA_AdditionalLight_C.ExecuteUbergraph_BPDA_AdditionalLight
	void ExecuteUbergraph_BPDA_AdditionalLight(int32_t EntryPoint);                                                          // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Upgrades/BPDA_Acceleration.BPDA_Acceleration_C
/// Size: 0x0010 (0x000058 - 0x000068)
class UBPDA_Acceleration_C : public UBPDA_BaseUpgrade_C : UBPDA_BaseUpgrade_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0058   (0x0008)  
	double                                             AccelerationMultiplier;                                     // 0x0060   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Upgrades/BPDA_Acceleration.BPDA_Acceleration_C.SetUpgrade
	void SetUpgrade(ABP_RB_Vehicle_C* Vehicle);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Upgrades/BPDA_Acceleration.BPDA_Acceleration_C.ExecuteUbergraph_BPDA_Acceleration
	void ExecuteUbergraph_BPDA_Acceleration(int32_t EntryPoint);                                                             // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Blueprints/I_VehicleAnimator.I_VehicleAnimator_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_VehicleAnimator_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/RBVehicle/UIHelper.UIHelper_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIHelper_C : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Game/RBVehicle/Blueprints/I_Vehicle.I_Vehicle_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UI_Vehicle_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UBPC_VehicleUpgrade_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	ABP_RB_Vehicle_C*                                  Vehicle;                                                    // 0x00A8   (0x0008)  
	TArray<UBPDA_Acceleration_C*>                      DA_Acceleration;                                            // 0x00B0   (0x0010)  
	TArray<UBPDA_AdditionalLight_C*>                   DA_AdditionalLight;                                         // 0x00C0   (0x0010)  
	TArray<UBPDA_Armor_C*>                             DA_Armor;                                                   // 0x00D0   (0x0010)  
	TArray<UBPDA_Boost_C*>                             DA_Boost;                                                   // 0x00E0   (0x0010)  
	TArray<UBPDA_FuelMax_C*>                           DA_FuelMax;                                                 // 0x00F0   (0x0010)  
	TArray<UBPDA_FuelDecreaseSpeed_C*>                 DA_FuelDecreaseSpeed;                                       // 0x0100   (0x0010)  
	TArray<UBPDA_Inventory_C*>                         DA_Inventory;                                               // 0x0110   (0x0010)  
	TArray<UBPDA_Isolation_C*>                         DA_Isolation;                                               // 0x0120   (0x0010)  
	int32_t                                            NextIndexArmor;                                             // 0x0130   (0x0004)  
	int32_t                                            NextIndexBoost;                                             // 0x0134   (0x0004)  
	int32_t                                            NextIndexFuelMax;                                           // 0x0138   (0x0004)  
	int32_t                                            NextIndexFuelDecreaseSpeed;                                 // 0x013C   (0x0004)  
	int32_t                                            NextIndexInventory;                                         // 0x0140   (0x0004)  
	int32_t                                            NextIndexAcceleration;                                      // 0x0144   (0x0004)  
	int32_t                                            NextIndexAdditionalLights;                                  // 0x0148   (0x0004)  
	int32_t                                            NextIndexIsolation;                                         // 0x014C   (0x0004)  


	/// Functions
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.Upgrade
	void Upgrade(TArray<UBPDA_BaseUpgrade_C*>& UpgradeArray, int32_t UpgradeIndex, bool& Success);                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.RemoveMetal
	void RemoveMetal(int32_t Count);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetIsolationInfo
	void GetIsolationInfo(UBPDA_Isolation_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetInventoryInfo
	void GetInventoryInfo(UBPDA_Inventory_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetFuelDecreaseSpeedInfo
	void GetFuelDecreaseSpeedInfo(UBPDA_FuelDecreaseSpeed_C*& Output, int32_t& Level, bool& IsFullyUpgraded);                // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetFuelMaxInfo
	void GetFuelMaxInfo(UBPDA_FuelMax_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetBoostInfo
	void GetBoostInfo(UBPDA_Boost_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetArmorInfo
	void GetArmorInfo(UBPDA_Armor_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetAdditionalLightInfo
	void GetAdditionalLightInfo(UBPDA_AdditionalLight_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.GetAccelerationInfo
	void GetAccelerationInfo(UBPDA_Acceleration_C*& Info, int32_t& Level, bool& IsFullyUpgraded);                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeIsolation
	void UpgradeIsolation();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeInventory
	void UpgradeInventory();                                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeBoost
	void UpgradeBoost();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeArmor
	void UpgradeArmor();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeAdditionalLight
	void UpgradeAdditionalLight();                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeAcceleration
	void UpgradeAcceleration();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeFuelDecreaseSpeed
	void UpgradeFuelDecreaseSpeed();                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.UpgradeFuelMax
	void UpgradeFuelMax();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BPC_VehicleUpgrade.BPC_VehicleUpgrade_C.ExecuteUbergraph_BPC_VehicleUpgrade
	void ExecuteUbergraph_BPC_VehicleUpgrade(int32_t EntryPoint);                                                            // [0x2407bf0] Final                
};

/// Class /Game/RBVehicle/Blueprints/BPC_SmoothSyncVehicle.BPC_SmoothSyncVehicle_C
/// Size: 0x0000 (0x000360 - 0x000360)
class UBPC_SmoothSyncVehicle_C : public USmoothSync : USmoothSync
{ 
public:
};

/// Class /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C
/// Size: 0x0520 (0x000330 - 0x000850)
class ABP_RB_Vehicle_C : public ARBVehicle : ARBVehicle
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	USphereComponent*                                  WheelCol_RB;                                                // 0x0338   (0x0008)  
	USphereComponent*                                  WheelCol_LB;                                                // 0x0340   (0x0008)  
	USphereComponent*                                  WheelCol_RF;                                                // 0x0348   (0x0008)  
	USphereComponent*                                  WheelCol_LF;                                                // 0x0350   (0x0008)  
	UFMODAudioComponent*                               Wind;                                                       // 0x0358   (0x0008)  
	URadialForceComponent*                             DestructibleRadialForce;                                    // 0x0360   (0x0008)  
	UCameraComponent*                                  Camera;                                                     // 0x0368   (0x0008)  
	UATPCCameraComponent*                              ATPCCamera;                                                 // 0x0370   (0x0008)  
	UBoxComponent*                                     RadialForceOverlap;                                         // 0x0378   (0x0008)  
	UChildActorComponent*                              BodyPercept;                                                // 0x0380   (0x0008)  
	UBPC_SmoothSyncVehicle_C*                          BPC_SmoothSyncVehicle;                                      // 0x0388   (0x0008)  
	UStaticMeshComponent*                              WindowCollision;                                            // 0x0390   (0x0008)  
	UPointLightComponent*                              BackLightR;                                                 // 0x0398   (0x0008)  
	UPointLightComponent*                              BackLightL;                                                 // 0x03A0   (0x0008)  
	UPhysicsConstraintComponent*                       PC_LF_Steering;                                             // 0x03A8   (0x0008)  
	UPhysicsConstraintComponent*                       PC_RF_Steering;                                             // 0x03B0   (0x0008)  
	UStaticMeshComponent*                              Cube_R;                                                     // 0x03B8   (0x0008)  
	UStaticMeshComponent*                              Cube_L;                                                     // 0x03C0   (0x0008)  
	USceneComponent*                                   ExhaustHolder;                                              // 0x03C8   (0x0008)  
	UParticleSystemComponent*                          P_VehicleEngineCriticalBroken;                              // 0x03D0   (0x0008)  
	USceneComponent*                                   GasolineSocket;                                             // 0x03D8   (0x0008)  
	USceneComponent*                                   AudioHolder;                                                // 0x03E0   (0x0008)  
	UBoxComponent*                                     HitCollision;                                               // 0x03E8   (0x0008)  
	USpotLightComponent*                               LightR;                                                     // 0x03F0   (0x0008)  
	USpotLightComponent*                               LightL;                                                     // 0x03F8   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0400   (0x0008)  
	UPhysicsConstraintComponent*                       PC_RB_Axis;                                                 // 0x0408   (0x0008)  
	UPhysicsConstraintComponent*                       PC_LB_Axis;                                                 // 0x0410   (0x0008)  
	UPhysicsConstraintComponent*                       PC_RF_Axis;                                                 // 0x0418   (0x0008)  
	UPhysicsConstraintComponent*                       PC_LF_Axis;                                                 // 0x0420   (0x0008)  
	UFMODAudioComponent*                               WheelsSlide;                                                // 0x0428   (0x0008)  
	UNavModifierComponent*                             NavModifier;                                                // 0x0430   (0x0008)  
	UAIPerceptionStimuliSourceComponent*               AIPerceptionStimuliSource;                                  // 0x0438   (0x0008)  
	UFMODAudioComponent*                               EngineLoop;                                                 // 0x0440   (0x0008)  
	UFMODAudioComponent*                               WheelsRotate;                                               // 0x0448   (0x0008)  
	UBPC_VehicleUpgrade_C*                             BPC_VehicleUpgrade;                                         // 0x0450   (0x0008)  
	UBPC_CarStatsComponent_C*                          BPC_CarStatsComponent;                                      // 0x0458   (0x0008)  
	float                                              BoostDisableTimeline_CameraAlpha_F7A5E9974275239EF1DB7380A0A3FBF7; // 0x0460   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    BoostDisableTimeline__Direction_F7A5E9974275239EF1DB7380A0A3FBF7; // 0x0464   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0465   (0x0003)  MISSED
	UTimelineComponent*                                BoostDisableTimeline;                                       // 0x0468   (0x0008)  
	float                                              BoostEnableTimeline_CameraAlpha_65145F46495C7B334CB373856054D676; // 0x0470   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    BoostEnableTimeline__Direction_65145F46495C7B334CB373856054D676; // 0x0474   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0475   (0x0003)  MISSED
	UTimelineComponent*                                BoostEnableTimeline;                                        // 0x0478   (0x0008)  
	double                                             RPM;                                                        // 0x0480   (0x0008)  
	double                                             RPMMax;                                                     // 0x0488   (0x0008)  
	double                                             RPMIdle;                                                    // 0x0490   (0x0008)  
	double                                             RPMSmoothed;                                                // 0x0498   (0x0008)  
	bool                                               EngineStarted;                                              // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	TArray<FS_RBGear>                                  Gears;                                                      // 0x04A8   (0x0010)  
	int32_t                                            gear;                                                       // 0x04B8   (0x0004)  
	bool                                               IsChangingGear;                                             // 0x04BC   (0x0001)  
	bool                                               IsAccelerating;                                             // 0x04BD   (0x0001)  
	bool                                               CanChangeGear;                                              // 0x04BE   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x04BF   (0x0001)  MISSED
	double                                             BrakeStrength;                                              // 0x04C0   (0x0008)  
	double                                             HandBrakeStrength;                                          // 0x04C8   (0x0008)  
	bool                                               IsHandbraking;                                              // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x04D1   (0x0007)  MISSED
	double                                             DifferentialRatio;                                          // 0x04D8   (0x0008)  
	TArray<USphereComponent*>                          WheelCollisions;                                            // 0x04E0   (0x0010)  
	TArray<UPhysicsConstraintComponent*>               WheelConstraints;                                           // 0x04F0   (0x0010)  
	TArray<UPhysicsConstraintComponent*>               SteeringConstraints;                                        // 0x0500   (0x0010)  
	TArray<bool>                                       IsUnbrokenWheels;                                           // 0x0510   (0x0010)  
	TArray<bool>                                       IsOnGroundWheels;                                           // 0x0520   (0x0010)  
	TArray<double>                                     WheelPitches;                                               // 0x0530   (0x0010)  
	TArray<TEnumAsByte>                                WheelSurfaceTypes;                                          // 0x0540   (0x0010)  
	TArray<double>                                     WheelInverseDragCoefficient;                                // 0x0550   (0x0010)  
	double                                             WheelRadius;                                                // 0x0560   (0x0008)  
	double                                             WheelMassInKg;                                              // 0x0568   (0x0008)  
	double                                             SteeringAngleMax;                                           // 0x0570   (0x0008)  
	double                                             SteeringAngle;                                              // 0x0578   (0x0008)  
	double                                             SteeringStrength;                                           // 0x0580   (0x0008)  
	double                                             SteeringToZeroStrength;                                     // 0x0588   (0x0008)  
	double                                             SuspensionLength;                                           // 0x0590   (0x0008)  
	double                                             SuspensionStrength;                                         // 0x0598   (0x0008)  
	double                                             SuspensionDamping;                                          // 0x05A0   (0x0008)  
	UCurveFloat*                                       EngineTorqueCurve;                                          // 0x05A8   (0x0008)  
	UInstancedStaticMeshComponent*                     InstacesComponent;                                          // 0x05B0   (0x0008)  
	bool                                               IsInAir;                                                    // 0x05B8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x05B9   (0x0007)  MISSED
	double                                             AntiRollMultiplier;                                         // 0x05C0   (0x0008)  
	bool                                               BrakeAsReverse;                                             // 0x05C8   (0x0001)  
	bool                                               IsReverseGear;                                              // 0x05C9   (0x0001)  
	bool                                               CanTurnEngine;                                              // 0x05CA   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x05CB   (0x0005)  MISSED
	UCurveFloat*                                       ExhaustCurve;                                               // 0x05D0   (0x0008)  
	UMaterialInstanceDynamic*                          BackLightMat;                                               // 0x05D8   (0x0008)  
	UMaterialInstanceDynamic*                          FrontLightMat;                                              // 0x05E0   (0x0008)  
	bool                                               FrontEnabled;                                               // 0x05E8   (0x0001)  
	bool                                               CanTurnFrontLight;                                          // 0x05E9   (0x0001)  
	bool                                               BackEnabled;                                                // 0x05EA   (0x0001)  
	unsigned char                                      UnknownData07_5[0x5];                                       // 0x05EB   (0x0005)  MISSED
	ALevelStreamer_C*                                  LevelStreamer;                                              // 0x05F0   (0x0008)  
	double                                             DampingSupportAngleMin;                                     // 0x05F8   (0x0008)  
	double                                             DampingSupportAngleMax;                                     // 0x0600   (0x0008)  
	double                                             DampingSupportFactor;                                       // 0x0608   (0x0008)  
	double                                             DampingSupportFactorMax;                                    // 0x0610   (0x0008)  
	double                                             BoostTime;                                                  // 0x0618   (0x0008)  
	double                                             BoostMultiplier;                                            // 0x0620   (0x0008)  
	bool                                               IsBoosting;                                                 // 0x0628   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0629   (0x0007)  MISSED
	double                                             DefaultFOV;                                                 // 0x0630   (0x0008)  
	double                                             BoostedFOV;                                                 // 0x0638   (0x0008)  
	bool                                               IsBoostCooldown;                                            // 0x0640   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0641   (0x0007)  MISSED
	double                                             BoostCooldown;                                              // 0x0648   (0x0008)  
	double                                             MagneticForceStrength;                                      // 0x0650   (0x0008)  
	int32_t                                            BoostMaxCount;                                              // 0x0658   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x065C   (0x0004)  MISSED
	UParticleSystem*                                   WheelClapParticles;                                         // 0x0660   (0x0008)  
	UAnimInstance*                                     AnimInstance;                                               // 0x0668   (0x0008)  
	TArray<double>                                     ConstraintForcesCurrent;                                    // 0x0670   (0x0010)  
	TArray<double>                                     ConstraintForcesPrev;                                       // 0x0680   (0x0010)  
	bool                                               ZacepCapot_R;                                               // 0x0690   (0x0001)  
	bool                                               ZacepLeftDoor_R;                                            // 0x0691   (0x0001)  
	bool                                               ZacepRightDoor_R;                                           // 0x0692   (0x0001)  
	bool                                               BlockExit;                                                  // 0x0693   (0x0001)  
	bool                                               BlockInput;                                                 // 0x0694   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0695   (0x0003)  MISSED
	FVector                                            ForwardHit;                                                 // 0x0698   (0x0018)  
	FVector                                            BackwardHit;                                                // 0x06B0   (0x0018)  
	FVector                                            NoneHit;                                                    // 0x06C8   (0x0018)  
	AParentZombieAI_C*                                 ZacepCapotZombie;                                           // 0x06E0   (0x0008)  
	bool                                               CanHit;                                                     // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x06E9   (0x0003)  MISSED
	int32_t                                            BackLightMatIndex;                                          // 0x06EC   (0x0004)  
	int32_t                                            FrontLightMatIndex;                                         // 0x06F0   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x06F4   (0x0004)  MISSED
	UZombieCarHit_C*                                   ZombieHit;                                                  // 0x06F8   (0x0008)  
	ACharacter*                                        LastHitedCharacter;                                         // 0x0700   (0x0008)  
	double                                             SwingingTimer;                                              // 0x0708   (0x0008)  
	double                                             SwingingAngle;                                              // 0x0710   (0x0008)  
	UFMODEvent*                                        EnterVehicleEvent;                                          // 0x0718   (0x0008)  
	UFMODEvent*                                        ExitVehicleEvent;                                           // 0x0720   (0x0008)  
	double                                             DampingTimeCurrent;                                         // 0x0728   (0x0008)  
	double                                             RPMSmoothFactorAcceleration;                                // 0x0730   (0x0008)  
	double                                             RPMSmoothFactorDecceleration;                               // 0x0738   (0x0008)  
	TArray<FName>                                      WheelBoneNames;                                             // 0x0740   (0x0010)  
	double                                             DampingRoad;                                                // 0x0750   (0x0008)  
	double                                             DampingMudRoad;                                             // 0x0758   (0x0008)  
	double                                             DampingSnow;                                                // 0x0760   (0x0008)  
	double                                             DampingIce;                                                 // 0x0768   (0x0008)  
	double                                             DampingSupportRoad;                                         // 0x0770   (0x0008)  
	double                                             DampingSupportSnow;                                         // 0x0778   (0x0008)  
	double                                             RPMDrop;                                                    // 0x0780   (0x0008)  
	double                                             RPMSmoothFactorMaxRpmDrop;                                  // 0x0788   (0x0008)  
	double                                             TorqueMultiplier;                                           // 0x0790   (0x0008)  
	TEnumAsByte<E_SitsType>                            SitType;                                                    // 0x0798   (0x0001)  
	bool                                               CanUnroll;                                                  // 0x0799   (0x0001)  
	unsigned char                                      UnknownData14_5[0x6];                                       // 0x079A   (0x0006)  MISSED
	FTimerHandle                                       UnrollingTimerHandle;                                       // 0x07A0   (0x0008)  
	double                                             DampingAsphalt;                                             // 0x07A8   (0x0008)  
	FS_VehicleState                                    VehicleState;                                               // 0x07B0   (0x0038)  
	UParticleSystemComponent*                          ExhaustLoopEmitter;                                         // 0x07E8   (0x0008)  
	double                                             AccelerationMultiplier;                                     // 0x07F0   (0x0008)  
	TArray<FName>                                      DoorBoneNames;                                              // 0x07F8   (0x0010)  
	TArray<FName>                                      SitBoneNames;                                               // 0x0808   (0x0010)  
	TArray<FS_VehicleSit>                              Sits;                                                       // 0x0818   (0x0010)  
	TArray<FName>                                      SeatAnimSocketNames;                                        // 0x0828   (0x0010)  
	bool                                               IsDriving;                                                  // 0x0838   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x0839   (0x0007)  MISSED
	double                                             BackLightIntensityPressed;                                  // 0x0840   (0x0008)  
	double                                             BackLightIntensityUnpressed;                                // 0x0848   (0x0008)  


	/// Functions
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IsLocked?
	void IsLocked?(bool& Result);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetActorType
	void GetActorType(TEnumAsByte<E_ActorType>& ActorType);                                                                  // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnFocused
	void OnFocused(APawn* Player, AActor* HighlightActor, UActorComponent* HighlightActorComponent, TEnumAsByte<E_InteractType>& InteractType, double& LateTime); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IsVehicle
	void IsVehicle(bool& IsVehicle);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetVehicleBody
	void GetVehicleBody(USkeletalMeshComponent*& Body);                                                                      // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetWheels
	void GetWheels(bool& IsValid, USphereComponent*& LF, USphereComponent*& RF, USphereComponent*& LB, USphereComponent*& RB); // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetSteering
	void GetSteering(double& angle);                                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetWheelPitches
	void GetWheelPitches(TArray<double>& Pitches);                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetDriver
	void GetDriver(APawn*& Driver);                                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetPassengers
	void GetPassengers(APawn*& PassengerFL, APawn*& PassengerBL, APawn*& PassengerBR);                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.HasDriver
	bool HasDriver();                                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetCarStatsComponent
	void GetCarStatsComponent(UBPC_CarStatsComponent_C*& CarStats);                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.CheckAndSetPlayRadio
	void CheckAndSetPlayRadio(bool NewPlay, APlayerController* PassengerPlayerController);                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnRep_IsDriving
	void OnRep_IsDriving();                                                                                                  // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.EnterVehicle
	void EnterVehicle(ASurvivalPlayer_C* Player, int32_t SitIndex);                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ChangeSit
	void ChangeSit(int32_t SitIndex, ASurvivalPlayer_C* Player);                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.CheckPlayerSit
	void CheckPlayerSit(ASurvivalPlayer_C* Player, bool& CanEnterVehicle, int32_t& SitIndex);                                // [0x2407bf0] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ShowWidgets
	void ShowWidgets(bool CanEnterVehicle, ASurvivalPlayer_C* Player);                                                       // [0x2407bf0] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OverlapRadialForce
	void OverlapRadialForce(AActor* OtherActor);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.HitCamShake
	void HitCamShake(AActor* OtherActor, UPrimitiveComponent* OtherComp);                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnRep_EngineStarted
	void OnRep_EngineStarted();                                                                                              // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnRep_VehicleState
	void OnRep_VehicleState();                                                                                               // [0x2407bf0] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetEnablePhysicsComponents
	void SetEnablePhysicsComponents(bool bSimulate);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetTick
	void SetTick(bool bEnabled);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetEnablePhysics
	void SetEnablePhysics(bool NewEnabled);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Unrolling
	void Unrolling();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Unroll
	void Unroll();                                                                                                           // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ClientsSideEnterVehicleAsPassenger
	void ClientsSideEnterVehicleAsPassenger(APawn* Player, int32_t SitIndex);                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ClientsSideEnterVehicleAsDriver
	void ClientsSideEnterVehicleAsDriver(APawn* Player);                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerSideEnterVehicleAsPassenger
	void ServerSideEnterVehicleAsPassenger(APawn* Player);                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerSideEnterVehicleAsDriver
	void ServerSideEnterVehicleAsDriver(APawn* Player);                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetSupportBySurface
	void GetSupportBySurface(TEnumAsByte<EPhysicalSurface> SurfaceType, double& Support);                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetDampingBySurface
	void GetDampingBySurface(TEnumAsByte<EPhysicalSurface> SurfaceType, double& Damping);                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Destruction
	void Destruction(FHitResult& hit, bool& NeedDamage);                                                                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DampingVehicle
	void DampingVehicle();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayAudioByTag
	void PlayAudioByTag(TArray<FName>& Tags, FVector Location);                                                              // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.RepairDeformation
	void RepairDeformation();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.HitDeform
	void HitDeform(FVector Location);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DecreaseDurability
	void DecreaseDurability(double Value);                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.HitWorld
	void HitWorld(AActor* OtherActor);                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.HitCollisionTransform
	void HitCollisionTransform();                                                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.StoreConstraintForces
	void StoreConstraintForces();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UpdateAudioSuspension
	void UpdateAudioSuspension();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayAudioHandbrake
	void PlayAudioHandbrake();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.NotifyQuestEvent
	void NotifyQuestEvent(FString QuestEvent);                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.NotifyVehicleEngineTurnOn
	void NotifyVehicleEngineTurnOn();                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DecreaseRPMAfterHit
	void DecreaseRPMAfterHit();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BlockWheel
	void BlockWheel(UPhysicsConstraintComponent* WheelConstraint, bool IsHandbraking, bool IsBroken);                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetWheelBroken
	void SetWheelBroken(bool NewBroken, int32_t WheelIndex);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DetectPuncturedObject
	void DetectPuncturedObject(int32_t WheelIndex, AActor* OtherActor);                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.CloseCarUpgradeMenu
	void CloseCarUpgradeMenu();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OpenCarUpgradeMenu
	void OpenCarUpgradeMenu();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MagneticForce
	void MagneticForce(USphereComponent* Wheel);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetExitPoint
	void GetExitPoint(int32_t SitIndex, FVector& Location, bool& CorrectLocation);                                           // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InitValues
	void InitValues();                                                                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SwingingBody
	void SwingingBody();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DetectRoadSurface
	void DetectRoadSurface(bool& IsRoad);                                                                                    // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DampingSupport
	void DampingSupport();                                                                                                   // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Noise
	void Noise();                                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.hit
	void hit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Update Audio Engine Wheel Speed
	void Update Audio Engine Wheel Speed();                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IncreaseFuel
	void IncreaseFuel(ABP_Canister_C* Canister);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IncreaseDurability
	void IncreaseDurability();                                                                                               // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DamageToPassengers
	void DamageToPassengers(double PureDamage);                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetBackLightIntencity
	void SetBackLightIntencity(bool IsBrake);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.TurnFrontLight
	void TurnFrontLight(bool Enable);                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.TurnBackLight
	void TurnBackLight(bool Enable);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InitLight
	void InitLight();                                                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UpdateExhaust
	void UpdateExhaust();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.EngineStopFX
	void EngineStopFX();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.EngineStartFX
	void EngineStartFX();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DampingWheels
	void DampingWheels();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IsEmpty
	void IsEmpty(bool& IsEmpty);                                                                                             // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UpdateAudioEngine
	void UpdateAudioEngine();                                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayAudioStopEngine
	void PlayAudioStopEngine(bool IsCrash);                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayAudioStartEngine
	void PlayAudioStartEngine();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayAudioExitVehicle
	void PlayAudioExitVehicle();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayAudioEnterVehicle
	void PlayAudioEnterVehicle();                                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UpdateWheelPitches
	void UpdateWheelPitches();                                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OverlapOtherActor
	void OverlapOtherActor(AActor* Other, FHitResult SweepResult, bool& NeedDamage);                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ExitAsPassenger
	void ExitAsPassenger(ASurvivalPlayer_C* Player);                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ExitAsDriver
	void ExitAsDriver(ASurvivalPlayer_C* Player);                                                                            // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetBrakeInput
	void SetBrakeInput(double AxisValue);                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.AntiRoll
	void AntiRoll();                                                                                                         // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DetectAirAndSurface
	void DetectAirAndSurface();                                                                                              // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UpdatePhysics
	void UpdatePhysics();                                                                                                    // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SteeringWheelToZero
	void SteeringWheelToZero(double& angle);                                                                                 // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SteeringWheel
	void SteeringWheel(double Input, double& angle);                                                                         // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetHandbrakeInput
	void SetHandbrakeInput(bool IsHandbrake);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IsIdleRPM
	void IsIdleRPM(bool& IdleReached);                                                                                       // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.getTorque
	void getTorque(double& Force);                                                                                           // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Throttle
	void Throttle(double Input);                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DecreaseRPM
	void DecreaseRPM(double& NewRPM);                                                                                        // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.IncreaseRPM
	void IncreaseRPM(double Input, double& NewRPM);                                                                          // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetRiseRPM
	void GetRiseRPM(double& RPM);                                                                                            // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.CalculateRPM
	void CalculateRPM();                                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ExitVehicle
	void ExitVehicle(ASurvivalPlayer_C* Player);                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InitWheels
	void InitWheels();                                                                                                       // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetSteeringInput
	void SetSteeringInput(double AxisValue);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetEngineStarted
	void GetEngineStarted(bool& EngineStarted);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.GetAccelerating
	void GetAccelerating(bool& IsAccelerating);                                                                              // [0x2407bf0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.FuelOrDurabilityEnded
	void FuelOrDurabilityEnded(bool IsCrash);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetThrottleInput
	void SetThrottleInput(double AxisValue);                                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BoostEnableTimeline__FinishedFunc
	void BoostEnableTimeline__FinishedFunc();                                                                                // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BoostEnableTimeline__UpdateFunc
	void BoostEnableTimeline__UpdateFunc();                                                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BoostDisableTimeline__FinishedFunc
	void BoostDisableTimeline__FinishedFunc();                                                                               // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BoostDisableTimeline__UpdateFunc
	void BoostDisableTimeline__UpdateFunc();                                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_TurnEngine_K2Node_InputActionEvent
	void InpActEvt_TurnEngine_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent
	void InpActEvt_Handbrake_K2Node_InputActionEvent(FKey Key);                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_Handbrake_K2Node_InputActionEvent
	void InpActEvt_Handbrake_K2Node_InputActionEvent(FKey Key);                                                              // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_TurnLights_K2Node_InputActionEvent
	void InpActEvt_TurnLights_K2Node_InputActionEvent(FKey Key);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_LeftShift_K2Node_InputKeyEvent
	void InpActEvt_LeftShift_K2Node_InputKeyEvent(FKey Key);                                                                 // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_OpenCarUpgradeMenu_K2Node_InputActionEvent
	void InpActEvt_OpenCarUpgradeMenu_K2Node_InputActionEvent(FKey Key);                                                     // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_Use/Interact_K2Node_InputActionEvent
	void InpActEvt_Use/Interact_K2Node_InputActionEvent(FKey Key);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpActEvt_OpenInventory_K2Node_InputActionEvent
	void InpActEvt_OpenInventory_K2Node_InputActionEvent(FKey Key);                                                          // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnInteract
	void OnInteract(APawn* Player);                                                                                          // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnInteract2
	void OnInteract2(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnInteract3
	void OnInteract3(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnLocalInteract
	void OnLocalInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnSeen
	void OnSeen(APawn* Player);                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnBeginInteract
	void OnBeginInteract(APawn* Player);                                                                                     // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnStopInteract
	void OnStopInteract(APawn* Player);                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnLostFocus
	void OnLostFocus(APawn* Player);                                                                                         // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Run Lockpicking
	void Run Lockpicking();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnSquadCheckComplete
	void OnSquadCheckComplete();                                                                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Set3DWidgetVisibility
	void Set3DWidgetVisibility(bool Visible);                                                                                // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.SetTutorial3DWidgetVisibility
	void SetTutorial3DWidgetVisibility(bool Visible);                                                                        // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DestroyInteractable
	void DestroyInteractable();                                                                                              // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.CalculateTransmission
	void CalculateTransmission();                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Reverse
	void Reverse(bool IsReverse);                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpAxisEvt_Brake_K2Node_InputAxisEvent
	void InpAxisEvt_Brake_K2Node_InputAxisEvent(float AxisValue);                                                            // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpAxisEvt_Turn_K2Node_InputAxisEvent
	void InpAxisEvt_Turn_K2Node_InputAxisEvent(float AxisValue);                                                             // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent(float AxisValue);                                                           // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpAxisEvt_ForwardThrottle_K2Node_InputAxisEvent
	void InpAxisEvt_ForwardThrottle_K2Node_InputAxisEvent(float AxisValue);                                                  // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.InpAxisEvt_SteeringWheels_K2Node_InputAxisEvent
	void InpAxisEvt_SteeringWheels_K2Node_InputAxisEvent(float AxisValue);                                                   // [0x2407bf0] BlueprintEvent       
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MulticallEnterVehicleAsDriver
	void MulticallEnterVehicleAsDriver(APawn* Player);                                                                       // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MulticallEnterVehicleAsPassenger
	void MulticallEnterVehicleAsPassenger(APawn* Player, int32_t SitIndex);                                                  // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallExitVehicle
	void ServerCallExitVehicle(APawn* Player);                                                                               // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MultiCallExitVehicle
	void MultiCallExitVehicle(APawn* Player);                                                                                // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnInteractVehicle
	void OnInteractVehicle(APawn* Player, int32_t SitIndex, bool SkipAnimation);                                             // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallTurnOn
	void ServerCallTurnOn();                                                                                                 // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallTurnOff
	void ServerCallTurnOff();                                                                                                // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallTurnFrontLight
	void ServerCallTurnFrontLight();                                                                                         // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MultiCallTurnFrontLight
	void MultiCallTurnFrontLight();                                                                                          // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallSetWheelBroken
	void ServerCallSetWheelBroken(bool NewBroken, int32_t WheelIndex);                                                       // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MultiCallSerWheelBroken
	void MultiCallSerWheelBroken(bool NewBroken, int32_t WheelIndex);                                                        // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallSendVehicleState
	void ServerCallSendVehicleState(FS_VehicleState VehicleState);                                                           // [0x2407bf0] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MultiCallEngineStartFail
	void MultiCallEngineStartFail();                                                                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallSetVehicleSit
	void ServerCallSetVehicleSit(int32_t Index, bool Item Is Busy, APawn* Item Sitter);                                      // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.FuelOrDurabilityEndEvent
	void FuelOrDurabilityEndEvent();                                                                                         // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.EngineTurnOn
	void EngineTurnOn();                                                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.EngineTurnOff
	void EngineTurnOff(bool IsCrash);                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ReceiveAnyDamage
	void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);           // [0x2407bf0] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ServerCallDecreaseDurability
	void ServerCallDecreaseDurability(double Damage);                                                                        // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MultiCallDecreaseDurability
	void MultiCallDecreaseDurability(double Damage);                                                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnLevelLoaded
	void OnLevelLoaded(FName LevelName, AActor* Player);                                                                     // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnLevelUnloaded
	void OnLevelUnloaded(FName LevelName, AActor* Player);                                                                   // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.Boost
	void Boost();                                                                                                            // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__ForntCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ForntCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.EventPlayAudioStartEngine
	void EventPlayAudioStartEngine();                                                                                        // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.DisableTickDelay
	void DisableTickDelay();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.HandlePlayerEvents
	void HandlePlayerEvents(ASurvivalPlayer_C* Player);                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PlayerHealthEnded
	void PlayerHealthEnded(ASurvivalPlayer_C* Player);                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ClientDiedInCar
	void ClientDiedInCar(ASurvivalPlayer_C* Player);                                                                         // [0x2407bf0] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.MultiClientDied
	void MultiClientDied(ASurvivalPlayer_C* Player);                                                                         // [0x2407bf0] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UnhandleClientEvent
	void UnhandleClientEvent(ASurvivalPlayer_C* Player);                                                                     // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.OnTabsClose
	void OnTabsClose();                                                                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.PhysicsTick
	void PhysicsTick(float SubstepDeltaTime);                                                                                // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.StartUnrolling
	void StartUnrolling();                                                                                                   // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.UpdateExhaustCriticalState
	void UpdateExhaustCriticalState();                                                                                       // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ChangeViewTargetWithDelay
	void ChangeViewTargetWithDelay(double Delay, APawn* NewViewTarget);                                                      // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__WheelCol_LF_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__WheelCol_LF_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__WheelCol_RF_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__WheelCol_RF_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__WheelCol_LB_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__WheelCol_LB_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.BndEvt__WheelCol_RB_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__WheelCol_RB_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2407bf0] HasOutParms|BlueprintEvent 
	// Function /Game/RBVehicle/Blueprints/BP_RB_Vehicle.BP_RB_Vehicle_C.ExecuteUbergraph_BP_RB_Vehicle
	void ExecuteUbergraph_BP_RB_Vehicle(int32_t EntryPoint);                                                                 // [0x2407bf0] Final|HasDefaults    
};

/// Enum /Game/RBVehicle/Blueprints/E_SitsType.E_SitsType
/// Size: 0x04
enum E_SitsType : uint8_t
{
	E_SitsType__NewEnumerator00                                                      = 0,
	E_SitsType__NewEnumerator11                                                      = 1,
	E_SitsType__NewEnumerator22                                                      = 2,
	E_SitsType__E_MAX3                                                               = 3
};

