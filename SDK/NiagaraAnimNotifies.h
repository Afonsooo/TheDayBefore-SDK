
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraAnimNotifies.

/// Struct /Script/NiagaraAnimNotifies.CurveParameterPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCurveParameterPair
{ 
	FName                                              AnimCurveName;                                              // 0x0000   (0x0008)  
	FName                                              UserVariableName;                                           // 0x0008   (0x0008)  
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0048 (0x000030 - 0x000078)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState : UAnimNotifyState
{ 
public:
	UNiagaraSystem*                                    Template;                                                   // 0x0030   (0x0008)  
	FName                                              SocketName;                                                 // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	bool                                               bDestroyAtEnd;                                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	UFXSystemComponent* GetSpawnedEffect(UMeshComponent* meshComp);                                                          // [0x10ffa60] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	bool                                               bEnableNormalizedNotifyProgress;                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	FName                                              NotifyProgressUserParameter;                                // 0x007C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCurveParameterPair>                        AnimCurves;                                                 // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0098   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	float GetNotifyProgress(UMeshComponent* meshComp);                                                                       // [0x10ff9c0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify : UAnimNotify
{ 
public:
	UNiagaraSystem*                                    Template;                                                   // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	FVector                                            Scale;                                                      // 0x0070   (0x0018)  
	bool                                               bAbsoluteScale;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x37];                                      // 0x0089   (0x0037)  MISSED
	bool                                               Attached : 1;                                               // 0x00C0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	UFXSystemComponent* GetSpawnedEffect();                                                                                  // [0xd0b540] Final|Native|Public|BlueprintCallable|Const 
};

