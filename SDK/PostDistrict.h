
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PostDistrict.

/// Class /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ABP_Garage_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	TArray<ABP_GarageSpace_C*>                         Garage_Spaces;                                              // 0x02A0   (0x0010)  
	TArray<FTransform>                                 Spaces;                                                     // 0x02B0   (0x0010)  
	ABP_TeleporterDoorMaster_C*                        DoorTeleport;                                               // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C.InitCars
	void InitCars(TArray<FString>& CarNames, FString Phase, ASurvivalPlayer_V2_C* Owner, ASurvivalPlayer_V2_C* Char);        // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C.DestroyCars
	void DestroyCars();                                                                                                      // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2407bf0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C.InitGarage
	void InitGarage(TArray<FString>& CarNames, FString Phase, ASurvivalPlayer_V2_C* Owner, ASurvivalPlayer_V2_C* Char);      // [0x2407bf0] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_Garage.BP_Garage_C.ExecuteUbergraph_BP_Garage
	void ExecuteUbergraph_BP_Garage(int32_t EntryPoint);                                                                     // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/PostDistrict/Blueprints/Buildings/BP_GarageSpace.BP_GarageSpace_C
/// Size: 0x0021 (0x000290 - 0x0002B1)
class ABP_GarageSpace_C : public AActor : AActor
{ 
public:
	UStaticMeshComponent*                              Car;                                                        // 0x0290   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0298   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	AActor*                                            Vehicle;                                                    // 0x02A8   (0x0008)  
	bool                                               Busy;                                                       // 0x02B0   (0x0001)  


	/// Functions
	// Function /Game/PostDistrict/Blueprints/Buildings/BP_GarageSpace.BP_GarageSpace_C.InitCar
	void InitCar(ASurvivalPlayer_V2_C* Owner, UClass* CarRef, TArray<ABP_PlayerSpawnPoint_C*>& Regions);                     // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

