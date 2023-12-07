
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CableComponent.

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ACableActor : public AActor : AActor
{ 
public:
	UCableComponent*                                   CableComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x0005A0 - 0x000650)
class UCableComponent : public UMeshComponent : UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x05A0   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x05A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x05A2   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x05A8   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x05D0   (0x0008)  
	FVector                                            EndLocation;                                                // 0x05D8   (0x0018)  
	float                                              CableLength;                                                // 0x05F0   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x05F4   (0x0004)  
	float                                              SubstepTime;                                                // 0x05F8   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x05FC   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0600   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x0601   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x0602   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x0603   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x0604   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0605   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x0608   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x060C   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x0610   (0x0018)  
	float                                              CableGravityScale;                                          // 0x0628   (0x0004)  
	float                                              CableWidth;                                                 // 0x062C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0630   (0x0004)  
	float                                              TileMaterial;                                               // 0x0634   (0x0004)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0638   (0x0018)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);                                              // [0x1b90700] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);                                           // [0x1b905f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x1b904c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	USceneComponent* GetAttachedComponent();                                                                                 // [0x1b90430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	AActor* GetAttachedActor();                                                                                              // [0x1b903f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

