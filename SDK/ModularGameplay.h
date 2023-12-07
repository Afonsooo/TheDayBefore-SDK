
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ModularGameplay.

/// Struct /Script/ModularGameplay.ActorInitStateChangedParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FActorInitStateChangedParams
{ 
	AActor*                                            OwningActor;                                                // 0x0000   (0x0008)  
	FName                                              FeatureName;                                                // 0x0008   (0x0008)  
	UObject*                                           Implementer;                                                // 0x0010   (0x0008)  
	FGameplayTag                                       FeatureState;                                               // 0x0018   (0x0008)  
};

/// Class /Script/ModularGameplay.GameFrameworkComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameFrameworkComponent : public UActorComponent : UActorComponent
{ 
public:
};

/// Class /Script/ModularGameplay.ControllerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UControllerComponent : public UGameFrameworkComponent : UGameFrameworkComponent
{ 
public:
};

/// Class /Script/ModularGameplay.GameFrameworkComponentManager
/// Size: 0x0208 (0x000030 - 0x000238)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x208];                                     // 0x0030   (0x0208)  MISSED
};

/// Class /Script/ModularGameplay.GameFrameworkInitStateInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFrameworkInitStateInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/ModularGameplay.GameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameStateComponent : public UGameFrameworkComponent : UGameFrameworkComponent
{ 
public:
};

/// Class /Script/ModularGameplay.PawnComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPawnComponent : public UGameFrameworkComponent : UGameFrameworkComponent
{ 
public:
};

/// Class /Script/ModularGameplay.PlayerStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayerStateComponent : public UGameFrameworkComponent : UGameFrameworkComponent
{ 
public:
};

