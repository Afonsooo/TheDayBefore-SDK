
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Transient.

/// Struct /Engine/Transient.HoudiniEvent_SWC
/// Size: 0x0048 (0x000000 - 0x000048)
struct FHoudiniEvent_SWC
{ 
	FVector3f                                          Position;                                                   // 0x0000   (0x000C)  
	FVector3f                                          Normal;                                                     // 0x000C   (0x000C)  
	float                                              Impulse;                                                    // 0x0018   (0x0004)  
	FVector3f                                          Velocity;                                                   // 0x001C   (0x000C)  
	int32_t                                            POINTID;                                                    // 0x0028   (0x0004)  
	float                                              Time;                                                       // 0x002C   (0x0004)  
	float                                              LIFE;                                                       // 0x0030   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0034   (0x0010)  
	int32_t                                            Type;                                                       // 0x0044   (0x0004)  
};

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
struct FChaosDestructionEvent_SWC
{ 
	FVector3f                                          Position;                                                   // 0x0000   (0x000C)  
	FVector3f                                          Normal;                                                     // 0x000C   (0x000C)  
	FVector3f                                          Velocity;                                                   // 0x0018   (0x000C)  
	FVector3f                                          AngularVelocity;                                            // 0x0024   (0x000C)  
	float                                              ExtentMin;                                                  // 0x0030   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0034   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)  
	float                                              Time;                                                       // 0x003C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
};

