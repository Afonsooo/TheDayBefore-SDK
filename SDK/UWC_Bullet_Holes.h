
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UWC_Bullet_Holes.

/// Struct /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/S_D2S_Decals.S_D2S_Decals
/// Size: 0x0010 (0x000000 - 0x000010)
struct FS_D2S_Decals
{ 
	TArray<ABP_D2S_Glass_C*>                           Decals_4_794F26814CE52B0A32513F92A8097784;                  // 0x0000   (0x0010)  
};

/// Class /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C
/// Size: 0x009A (0x000290 - 0x00032A)
class ABP_D2S_Glass_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	UStaticMeshComponent*                              Main_plane_Small;                                           // 0x0298   (0x0008)  
	UStaticMeshComponent*                              Main_plane_DDecal;                                          // 0x02A0   (0x0008)  
	UNiagaraComponent*                                 NS_Glass_Impact;                                            // 0x02A8   (0x0008)  
	UNiagaraComponent*                                 NS_Glass_Impact;                                            // 0x02B0   (0x0008)  
	UStaticMeshComponent*                              Main_plane;                                                 // 0x02B8   (0x0008)  
	UStaticMeshComponent*                              Hole_Plane;                                                 // 0x02C0   (0x0008)  
	UStaticMeshComponent*                              Old;                                                        // 0x02C8   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02D0   (0x0008)  
	int32_t                                            ID;                                                         // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	ABP_D2S_Manager_C*                                 Manager;                                                    // 0x02E0   (0x0008)  
	USceneComponent*                                   ParentMesh;                                                 // 0x02E8   (0x0008)  
	FTimerHandle                                       SmallGlassTimer;                                            // 0x02F0   (0x0008)  
	FTimerHandle                                       BigGlassTimer;                                              // 0x02F8   (0x0008)  
	float                                              SmallGlassDelay;                                            // 0x0300   (0x0004)  
	float                                              BigGlassDelay;                                              // 0x0304   (0x0004)  
	bool                                               SmallGlassIsStopped;                                        // 0x0308   (0x0001)  
	bool                                               BigGlassIsStopped;                                          // 0x0309   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x030A   (0x0006)  MISSED
	FVector                                            CallbackPosition;                                           // 0x0310   (0x0018)  
	bool                                               DDecal_Hole_;                                               // 0x0328   (0x0001)  
	bool                                               Small_Hole_;                                                // 0x0329   (0x0001)  


	/// Functions
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.OnBigGlassHit
	void OnBigGlassHit(FVector SoundLocation);                                                                               // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.OnSmallGlassHit
	void OnSmallGlassHit(FVector SoundLocation);                                                                             // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.ResetBigGlass
	void ResetBigGlass();                                                                                                    // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.ResetSmallGlass
	void ResetSmallGlass();                                                                                                  // [0x2407bf0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.Initialize
	void Initialize(USceneComponent* Mesh);                                                                                  // [0x2407bf0] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.ReceiveParticleData
	void ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0x2407bf0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass.BP_D2S_Glass_C.ExecuteUbergraph_BP_D2S_Glass
	void ExecuteUbergraph_BP_D2S_Glass(int32_t EntryPoint);                                                                  // [0x2407bf0] Final|HasDefaults    
};

/// Class /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass_Translucent.BP_D2S_Glass_Translucent_C
/// Size: 0x000E (0x00032A - 0x000338)
class ABP_D2S_Glass_Translucent_C : public ABP_D2S_Glass_C : ABP_D2S_Glass_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x032A   (0x0006)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass_Translucent.BP_D2S_Glass_Translucent_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass_Translucent.BP_D2S_Glass_Translucent_C.ExecuteUbergraph_BP_D2S_Glass_Translucent
	void ExecuteUbergraph_BP_D2S_Glass_Translucent(int32_t EntryPoint);                                                      // [0x2407bf0] Final                
};

/// Class /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass_DDecal.BP_D2S_Glass_DDecal_C
/// Size: 0x000E (0x00032A - 0x000338)
class ABP_D2S_Glass_DDecal_C : public ABP_D2S_Glass_C : ABP_D2S_Glass_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x032A   (0x0006)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass_DDecal.BP_D2S_Glass_DDecal_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Glass_DDecal.BP_D2S_Glass_DDecal_C.ExecuteUbergraph_BP_D2S_Glass_DDecal
	void ExecuteUbergraph_BP_D2S_Glass_DDecal(int32_t EntryPoint);                                                           // [0x2407bf0] Final                
};

/// Class /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Manager.BP_D2S_Manager_C
/// Size: 0x0074 (0x000290 - 0x000304)
class ABP_D2S_Manager_C : public AActor : AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	TArray<ABP_D2S_Glass_C*>                           Decals;                                                     // 0x02A0   (0x0010)  
	TMap<USceneComponent*, FS_D2S_Decals>              Meshes;                                                     // 0x02B0   (0x0050)  
	int32_t                                            DecalCount;                                                 // 0x0300   (0x0004)  


	/// Functions
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Manager.BP_D2S_Manager_C.RemoveDecal
	void RemoveDecal(USceneComponent*& Mesh, ABP_D2S_Glass_C*& Decal);                                                       // [0x2407bf0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Manager.BP_D2S_Manager_C.AddDecal
	void AddDecal(USceneComponent* Mesh, ABP_D2S_Glass_C* Decal);                                                            // [0x2407bf0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Manager.BP_D2S_Manager_C.MeshDestroyed
	void MeshDestroyed(USceneComponent* Mesh);                                                                               // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Manager.BP_D2S_Manager_C.TestDestroy1Mesh
	void TestDestroy1Mesh();                                                                                                 // [0x2407bf0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UWC_Bullet_Holes/Textures/Decals/Glass_Windshield/BP_D2S_Manager.BP_D2S_Manager_C.ExecuteUbergraph_BP_D2S_Manager
	void ExecuteUbergraph_BP_D2S_Manager(int32_t EntryPoint);                                                                // [0x2407bf0] Final|HasDefaults    
};

