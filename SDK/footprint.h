
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package footprint.

/// Struct /Game/footprint/blueprints/Data/FootprintModifyStruct.FootprintModifyStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFootprintModifyStruct
{ 
	TEnumAsByte<EFootprintStyle>                       Style_2_C0B8CBB8490E86D0DB2A87ADB7CF5608;                   // 0x0000   (0x0001)  
	bool                                               Right_4_599019384F3282386CE0889979E1D8FB;                   // 0x0001   (0x0001)  
	bool                                               Left_6_F66B2F394C8371594897548C72F1FA78;                    // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	UMaterialInstance*                                 MaterialInterface_13_A1F6447E444635066DF15CA45C3A026A;      // 0x0008   (0x0008)  
};

/// Class /Game/footprint/blueprints/FootprintInterface.FootprintInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFootprintInterface_C : public UInterface : UInterface
{ 
public:
};

/// Class /Game/footprint/blueprints/Footprint_Actor.Footprint_Actor_C
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AFootprint_Actor_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UDecalComponent*                                   FootprintDecal;                                             // 0x0298   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	double                                             Duration;                                                   // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/footprint/blueprints/Footprint_Actor.Footprint_Actor_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/footprint/blueprints/Footprint_Actor.Footprint_Actor_C.ExecuteUbergraph_Footprint_Actor
	void ExecuteUbergraph_Footprint_Actor(int32_t EntryPoint);                                                               // [0x2407bf0] Final                
};

/// Class /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C
/// Size: 0x00C1 (0x0000A0 - 0x000161)
class UFootprintComponent_C : public UActorComponent : UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	USceneComponent*                                   Mesh;                                                       // 0x00A8   (0x0008)  
	TEnumAsByte<EFootprintStyle>                       CurrentFootwear;                                            // 0x00B0   (0x0001)  
	TEnumAsByte<EFootState>                            FootState;                                                  // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	double                                             MaxMudSteps;                                                // 0x00B8   (0x0008)  
	double                                             CurrentMudSteps;                                            // 0x00C0   (0x0008)  
	double                                             MaxSandSteps;                                               // 0x00C8   (0x0008)  
	double                                             CurrentSandSteps;                                           // 0x00D0   (0x0008)  
	bool                                               Left;                                                       // 0x00D8   (0x0001)  
	bool                                               Right;                                                      // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00DA   (0x0006)  MISSED
	FVector                                            Location;                                                   // 0x00E0   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x00F8   (0x0018)  
	double                                             MaxWetSteps;                                                // 0x0110   (0x0008)  
	double                                             CurrentWetSteps;                                            // 0x0118   (0x0008)  
	double                                             MaxBloodSteps;                                              // 0x0120   (0x0008)  
	double                                             CurrentBloodSteps;                                          // 0x0128   (0x0008)  
	double                                             CurrentMulticastSteps;                                      // 0x0130   (0x0008)  
	double                                             CurrentMaxSteps;                                            // 0x0138   (0x0008)  
	AFootprint_Actor_C*                                FootprintActor;                                             // 0x0140   (0x0008)  
	UMaterialInstance*                                 Decal;                                                      // 0x0148   (0x0008)  
	double                                             CurrentSnowSteps;                                           // 0x0150   (0x0008)  
	double                                             MaxSnowSteps;                                               // 0x0158   (0x0008)  
	bool                                               IsDeep;                                                     // 0x0160   (0x0001)  


	/// Functions
	// Function /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C.SpawnFootprint
	void SpawnFootprint(FVector Location, FRotator Rotation, bool Left, bool Right, TEnumAsByte<EPhysicalSurface> SurfaceType); // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C.ChangeFootState
	void ChangeFootState(TEnumAsByte<EFootState> New Style);                                                                 // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C.ServerSpawnFootprint
	void ServerSpawnFootprint(FVector Location, FRotator Rotation, UMaterialInstance* Decal Material, double Current Steps, double MaxSteps, bool DeepDecal); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C.MulticastFootprintMaterial
	void MulticastFootprintMaterial(UMaterialInstance* Decal Material, double CurrentSteps, double MaxSteps, FVector Location, FRotator Rotation, bool DeepDecal); // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C.SpawnFootprintDecal
	void SpawnFootprintDecal(FName SocketName, bool Right, bool Left);                                                       // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/footprint/blueprints/FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent
	void ExecuteUbergraph_FootprintComponent(int32_t EntryPoint);                                                            // [0x2407bf0] Final|HasDefaults    
};

/// Enum /Game/footprint/blueprints/Data/EFootState.EFootState
/// Size: 0x07
enum EFootState : uint8_t
{
	EFootState__NewEnumerator00                                                      = 0,
	EFootState__NewEnumerator11                                                      = 1,
	EFootState__NewEnumerator22                                                      = 2,
	EFootState__NewEnumerator33                                                      = 3,
	EFootState__NewEnumerator44                                                      = 4,
	EFootState__NewEnumerator55                                                      = 5,
	EFootState__EFootState_MAX6                                                      = 6
};

/// Enum /Game/footprint/blueprints/Data/EFootprintStyle.EFootprintStyle
/// Size: 0x08
enum EFootprintStyle : uint8_t
{
	EFootprintStyle__NewEnumerator00                                                 = 0,
	EFootprintStyle__NewEnumerator11                                                 = 1,
	EFootprintStyle__NewEnumerator62                                                 = 2,
	EFootprintStyle__NewEnumerator33                                                 = 3,
	EFootprintStyle__NewEnumerator44                                                 = 4,
	EFootprintStyle__NewEnumerator55                                                 = 5,
	EFootprintStyle__NewEnumerator26                                                 = 6,
	EFootprintStyle__EFootprintStyle_MAX7                                            = 7
};

