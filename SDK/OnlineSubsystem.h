
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystem.

/// Struct /Script/OnlineSubsystem.NamedInterface
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNamedInterface
{ 
	FName                                              InterfaceName;                                              // 0x0000   (0x0008)  
	UObject*                                           InterfaceObject;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedInterfaceDef
{ 
	FName                                              InterfaceName;                                              // 0x0000   (0x0008)  
	FString                                            InterfaceClassName;                                         // 0x0008   (0x0010)  
};

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0038 (0x000028 - 0x000060)
class UNamedInterfaces : public UObject : UObject
{ 
public:
	TArray<FNamedInterface>                            NamedInterfaces;                                            // 0x0028   (0x0010)  
	TArray<FNamedInterfaceDef>                         NamedInterfaceDefs;                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedMatchInterface : public UInterface : UInterface
{ 
public:
};

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x09
enum EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown0                                                    = 0,
	EInAppPurchaseState__Success1                                                    = 1,
	EInAppPurchaseState__Failed2                                                     = 2,
	EInAppPurchaseState__Cancelled3                                                  = 3,
	EInAppPurchaseState__Invalid4                                                    = 4,
	EInAppPurchaseState__NotAllowed5                                                 = 5,
	EInAppPurchaseState__Restored6                                                   = 6,
	EInAppPurchaseState__AlreadyOwned7                                               = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX8                                    = 8
};

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome
/// Size: 0x11
enum EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None0                                                           = 0,
	EMPMatchOutcome__Quit1                                                           = 1,
	EMPMatchOutcome__Won2                                                            = 2,
	EMPMatchOutcome__Lost3                                                           = 3,
	EMPMatchOutcome__Tied4                                                           = 4,
	EMPMatchOutcome__TimeExpired5                                                    = 5,
	EMPMatchOutcome__First6                                                          = 6,
	EMPMatchOutcome__Second7                                                         = 7,
	EMPMatchOutcome__Third8                                                          = 8,
	EMPMatchOutcome__Fourth9                                                         = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX10                                           = 10
};

