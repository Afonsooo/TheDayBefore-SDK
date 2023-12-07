
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ArchVisCharacter.

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0060 (0x000630 - 0x000690)
class AArchVisCharacter : public ACharacter : ACharacter
{ 
public:
	FString                                            LookUpAxisName;                                             // 0x0628   (0x0010)  
	FString                                            LookUpAtRateAxisName;                                       // 0x0638   (0x0010)  
	FString                                            TurnAxisName;                                               // 0x0648   (0x0010)  
	FString                                            TurnAtRateAxisName;                                         // 0x0658   (0x0010)  
	FString                                            MoveForwardAxisName;                                        // 0x0668   (0x0010)  
	FString                                            MoveRightAxisName;                                          // 0x0678   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x0688   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x068C   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0090 (0x000F00 - 0x000F90)
class UArchVisCharMovementComponent : public UCharacterMovementComponent : UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0EF8   (0x0018)  
	FRotator                                           RotationalDeceleration;                                     // 0x0F10   (0x0018)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0F28   (0x0018)  
	float                                              MinPitch;                                                   // 0x0F40   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0F44   (0x0004)  
	float                                              WalkingFriction;                                            // 0x0F48   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0F4C   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0F50   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x0F54   (0x003C)  MISSED
};

