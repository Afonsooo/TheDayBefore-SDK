
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayAbilities.

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x034C (0x00000C - 0x000358)
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x0298)  
	FPredictionKey                                     PredictionKey;                                              // 0x02B0   (0x0018)  
	float                                              StartServerWorldTime;                                       // 0x02C8   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02CC   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02D0   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x83];                                      // 0x02D5   (0x0083)  MISSED
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPredictionKey
{ 
	UPackageMap*                                       PredictiveConnection;                                       // 0x0000   (0x0008)  
	int16_t                                            Current;                                                    // 0x0008   (0x0002)  
	int16_t                                            base;                                                       // 0x000A   (0x0002)  
	bool                                               bIsStale;                                                   // 0x000C   (0x0001)  
	bool                                               bIsServerInitiated;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x000E   (0x000A)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (0x000000 - 0x000298)
struct FGameplayEffectSpec
{ 
	UGameplayEffect*                                   Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0018   (0x0028)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0050   (0x0004)  
	float                                              Period;                                                     // 0x0054   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0060   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x00E8   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0170   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x0190   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01B0   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01C0   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture : 1;                       // 0x01C4:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture : 1;                       // 0x01C4:1 (0x0001)  
	bool                                               bDurationLocked : 1;                                        // 0x01C4:2 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x01C5   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData03_5[0xA0];                                      // 0x01D8   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0278   (0x0018)  
	float                                              Level;                                                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (0x000000 - 0x000098)
struct FGameplayAbilitySpecDef
{ 
	UClass*                                            Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0028)  
	int32_t                                            InputID;                                                    // 0x0030   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0040   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (0x000000 - 0x000028)
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0010)  
	FDataRegistryType                                  RegistryType;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (0x000000 - 0x000004)
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (0x000000 - 0x000088)
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0040)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0010   (0x0020)  MISSED
	UStruct*                                           AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x0008)  
	FGameplayTag                                       OriginalTag;                                                // 0x0028   (0x0008)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0070   (0x0018)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x0088   (0x0018)  
	TWeakObjectPtr<AActor*>                            Instigator;                                                 // 0x00A0   (0x0008)  
	TWeakObjectPtr<AActor*>                            EffectCauser;                                               // 0x00A8   (0x0008)  
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x00B0   (0x0008)  
	TWeakObjectPtr<UPhysicalMaterial*>                 PhysicalMaterial;                                           // 0x00B8   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00C0   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00C4   (0x0004)  
	TWeakObjectPtr<USceneComponent*>                   TargetAttachComponent;                                      // 0x00C8   (0x0008)  
	bool                                               bReplicateLocationWhenUsingMinimalRepProxy;                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x0008)  
	AActor*                                            Instigator;                                                 // 0x0008   (0x0008)  
	AActor*                                            Target;                                                     // 0x0010   (0x0008)  
	UObject*                                           OptionalObject;                                             // 0x0018   (0x0008)  
	UObject*                                           OptionalObject2;                                            // 0x0020   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0028   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0040   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0060   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0088   (0x0028)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayTagRequirements
{ 
	FGameplayTagContainer                              RequireTags;                                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0020   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance : 1;                             // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0150 (0x000000 - 0x000150)
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FDelegateProperty                                  CustomMatchDelegate_BP;                                     // 0x0010   (0x0010)  
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0020   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0068   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B0   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x00F8   (0x0038)  
	UObject*                                           EffectSource;                                               // 0x0130   (0x0008)  
	UClass*                                            EffectDefinition;                                           // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (0x000000 - 0x000078)
struct FGameplayEffectSpecForRPC
{ 
	UGameplayEffect*                                   Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              Level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0050 (0x000000 - 0x000050)
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0018)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0020   (0x0028)  
	bool                                               InputPressed;                                               // 0x0048   (0x0001)  
	bool                                               Ended;                                                      // 0x0049   (0x0001)  
	bool                                               Started;                                                    // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0010 (0x000108 - 0x000118)
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x001C (0x00000C - 0x000028)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0018)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
	UAbilitySystemComponent*                           Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0020 (0x000108 - 0x000128)
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	UAbilitySystemComponent*                           Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x0104 (0x00000C - 0x000110)
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0030   (0x00D8)  
	bool                                               bPredictivelyRemoved;                                       // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x0370 (0x000108 - 0x000478)
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0108   (0x0028)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_5[0x310];                                     // 0x0140   (0x0310)  MISSED
	TArray<UGameplayEffect*>                           ApplicationImmunityQueryEffects;                            // 0x0450   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0460   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayAbilityLocalAnimMontage
{ 
	UAnimMontage*                                      AnimMontage;                                                // 0x0000   (0x0008)  
	char                                               PlayInstanceId;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0018)  
	TWeakObjectPtr<UGameplayAbility*>                  AnimatingAbility;                                           // 0x0028   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayAbilityRepAnimMontage
{ 
	UAnimMontage*                                      AnimMontage;                                                // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              Position;                                                   // 0x000C   (0x0004)  
	float                                              BlendTime;                                                  // 0x0010   (0x0004)  
	char                                               NextSectionID;                                              // 0x0014   (0x0001)  
	char                                               PlayInstanceId;                                             // 0x0015   (0x0001)  
	bool                                               bRepPosition : 1;                                           // 0x0016:0 (0x0001)  
	bool                                               IsStopped : 1;                                              // 0x0016:1 (0x0001)  
	bool                                               SkipPositionCorrection : 1;                                 // 0x0016:2 (0x0001)  
	bool                                               bSkipPlayRate : 1;                                          // 0x0016:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0017   (0x0001)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	char                                               SectionIdToPlay;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0018 (0x000108 - 0x000120)
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	UAbilitySystemComponent*                           Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00DC (0x00000C - 0x0000E8)
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	UGameplayAbility*                                  Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            Level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed : 1;                                           // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation : 1;                                  // 0x0029:1 (0x0001)  
	bool                                               PendingRemove : 1;                                          // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce : 1;                                          // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x6];                                       // 0x002A   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0030   (0x0020)  
	FGameplayTagContainer                              DynamicAbilityTags;                                         // 0x0050   (0x0020)  
	TArray<UGameplayAbility*>                          NonReplicatedInstances;                                     // 0x0070   (0x0010)  
	TArray<UGameplayAbility*>                          ReplicatedInstances;                                        // 0x0080   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0098   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAttributeDefaults
{ 
	UClass*                                            Attributes;                                                 // 0x0000   (0x0008)  
	UDataTable*                                        DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0190 (0x000000 - 0x000190)
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	UAbilitySystemComponent*                           OwningComponent;                                            // 0x0038   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0040   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00B8   (0x00D8)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyActorArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayCueNotifyActorArray
{ 
	TArray<AGameplayCueNotify_Actor*>                  Actors;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPreallocationInfo
{ 
	TMap<UClass*, FGameplayCueNotifyActorArray>        PreallocatedInstances;                                      // 0x0000   (0x0050)  
	TArray<UClass*>                                    ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMinimalGameplayCueReplicationProxyForNetSerializer
{ 
	TArray<FGameplayTag>                               Tags;                                                       // 0x0000   (0x0010)  
	TArray<FVector_NetQuantize>                        Locations;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMinimalReplicationTagCountMapForNetSerializer
{ 
	TArray<FGameplayTag>                               Tags;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x0008)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UClass*                                            GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	AActor*                                            SelfActor;                                                  // 0x0008   (0x0008)  
	UClass*                                            RequiredActorClass;                                         // 0x0010   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0018   (0x0001)  
	bool                                               bReverseFilter;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x0018 (0x000000 - 0x000018)
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x0018)  
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNetSerializeScriptStructCache
{ 
	TArray<UScriptStruct*>                             ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0028 (0x000008 - 0x000030)
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0060)  
	AActor*                                            SourceActor;                                                // 0x0080   (0x0008)  
	UMeshComponent*                                    SourceComponent;                                            // 0x0088   (0x0008)  
	UGameplayAbility*                                  SourceAbility;                                              // 0x0090   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0098   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0148 (0x000008 - 0x000150)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x00A0)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x00B0   (0x00A0)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x00A0)  
	TArray<TWeakObjectPtr>                             TargetActorArray;                                           // 0x00B0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x00F0 (0x000008 - 0x0000F8)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x00E8)  
	bool                                               bHitReplaced;                                               // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<AActor*>                            OwnerActor;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<AActor*>                            AvatarActor;                                                // 0x0010   (0x0008)  
	TWeakObjectPtr<APlayerController*>                 PlayerController;                                           // 0x0018   (0x0008)  
	TWeakObjectPtr<UAbilitySystemComponent*>           AbilitySystemComponent;                                     // 0x0020   (0x0008)  
	TWeakObjectPtr<USkeletalMeshComponent*>            SkeletalMeshComponent;                                      // 0x0028   (0x0008)  
	TWeakObjectPtr<UAnimInstance*>                     AnimInstance;                                               // 0x0030   (0x0008)  
	TWeakObjectPtr<UMovementComponent*>                MovementComponent;                                          // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x0008)  
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAbilityEndedData
{ 
	UGameplayAbility*                                  AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAbilityTaskDebugMessage
{ 
	UGameplayTask*                                     FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x0350 (0x000000 - 0x000350)
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_2[0x340];                                     // 0x0000   (0x0340)  MISSED
	UAbilitySystemComponent*                           Owner;                                                      // 0x0340   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0010   (0x0020)  MISSED
	UObjectLibrary*                                    ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	UObjectLibrary*                                    StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	UGameplayCueSet*                                   CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayCueNotify_SpawnCondition
{ 
	EGameplayCueNotify_LocallyControlledSource         LocallyControlledSource;                                    // 0x0000   (0x0001)  
	EGameplayCueNotify_LocallyControlledPolicy         LocallyControlledPolicy;                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ChanceToPlay;                                               // 0x0004   (0x0004)  
	TArray<TEnumAsByte>                                AllowedSurfaceTypes;                                        // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	TArray<TEnumAsByte>                                RejectedSurfaceTypes;                                       // 0x0020   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayCueNotify_PlacementInfo
{ 
	FName                                              SocketName;                                                 // 0x0000   (0x0008)  
	EGameplayCueNotify_AttachPolicy                    AttachPolicy;                                               // 0x0008   (0x0001)  
	EAttachmentRule                                    AttachmentRule;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	bool                                               bOverrideRotation : 1;                                      // 0x000C:0 (0x0001)  
	bool                                               bOverrideScale : 1;                                         // 0x000C:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           RotationOverride;                                           // 0x0010   (0x0018)  
	FVector                                            ScaleOverride;                                              // 0x0028   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGameplayCueNotify_SpawnResult
{ 
	TArray<UFXSystemComponent*>                        FxSystemComponents;                                         // 0x0000   (0x0010)  
	TArray<UAudioComponent*>                           AudioComponents;                                            // 0x0010   (0x0010)  
	TArray<UCameraShakeBase*>                          CameraShakes;                                               // 0x0020   (0x0010)  
	TArray<TScriptInterface>                           CameraLensEffects;                                          // 0x0030   (0x0010)  
	UForceFeedbackComponent*                           ForceFeedbackComponent;                                     // 0x0040   (0x0008)  
	APlayerController*                                 ForceFeedbackTargetPC;                                      // 0x0048   (0x0008)  
	UDecalComponent*                                   DecalComponent;                                             // 0x0050   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FGameplayCueNotify_ParticleInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	UNiagaraSystem*                                    NiagaraSystem;                                              // 0x0078   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0080:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0080:1 (0x0001)  
	bool                                               bCastShadow : 1;                                            // 0x0080:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayCueNotify_SoundParameterInterfaceInfo
{ 
	FName                                              StopTriggerName;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGameplayCueNotify_SoundInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	USoundBase*                                        Sound;                                                      // 0x0078   (0x0008)  
	USoundBase*                                        SoundCue;                                                   // 0x0080   (0x0008)  
	float                                              LoopingFadeOutDuration;                                     // 0x0088   (0x0004)  
	float                                              LoopingFadeVolumeLevel;                                     // 0x008C   (0x0004)  
	FGameplayCueNotify_SoundParameterInterfaceInfo     SoundParameterInterfaceInfo;                                // 0x0090   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0098:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0098:1 (0x0001)  
	bool                                               bUseSoundParameterInterface : 1;                            // 0x0098:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FGameplayCueNotify_CameraShakeInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	UClass*                                            CameraShake;                                                // 0x0078   (0x0008)  
	float                                              ShakeScale;                                                 // 0x0080   (0x0004)  
	EGameplayCueNotify_EffectPlaySpace                 PlaySpace;                                                  // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0088:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0088:1 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0088:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              WorldInnerRadius;                                           // 0x008C   (0x0004)  
	float                                              WorldOuterRadius;                                           // 0x0090   (0x0004)  
	float                                              WorldFalloffExponent;                                       // 0x0094   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
/// Size: 0x0090 (0x000000 - 0x000090)
struct FGameplayCueNotify_CameraLensEffectInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	UClass*                                            CameraLensEffect;                                           // 0x0078   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0080:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0080:1 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0080:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              WorldInnerRadius;                                           // 0x0084   (0x0004)  
	float                                              WorldOuterRadius;                                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FGameplayCueNotify_ForceFeedbackInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	UForceFeedbackEffect*                              ForceFeedbackEffect;                                        // 0x0078   (0x0008)  
	FName                                              ForceFeedbackTag;                                           // 0x0080   (0x0008)  
	bool                                               bIsLooping : 1;                                             // 0x0088:0 (0x0001)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0088:1 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0088:2 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0088:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              WorldIntensity;                                             // 0x008C   (0x0004)  
	UForceFeedbackAttenuation*                         WorldAttenuation;                                           // 0x0090   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayCueNotify_InputDevicePropertyInfo
{ 
	TArray<UClass*>                                    DeviceProperties;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FGameplayCueNotify_DecalInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	UMaterialInterface*                                DecalMaterial;                                              // 0x0078   (0x0008)  
	FVector                                            DecalSize;                                                  // 0x0080   (0x0018)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0098:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0098:1 (0x0001)  
	bool                                               bOverrideFadeOut : 1;                                       // 0x0098:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              FadeOutStartDelay;                                          // 0x009C   (0x0004)  
	float                                              FadeOutDuration;                                            // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
/// Size: 0x0298 (0x000000 - 0x000298)
struct FGameplayCueNotify_BurstEffects
{ 
	TArray<FGameplayCueNotify_ParticleInfo>            BurstParticles;                                             // 0x0000   (0x0010)  
	TArray<FGameplayCueNotify_SoundInfo>               BurstSounds;                                                // 0x0010   (0x0010)  
	FGameplayCueNotify_CameraShakeInfo                 BurstCameraShake;                                           // 0x0020   (0x0098)  
	FGameplayCueNotify_CameraLensEffectInfo            BurstCameraLensEffect;                                      // 0x00B8   (0x0090)  
	FGameplayCueNotify_ForceFeedbackInfo               BurstForceFeedback;                                         // 0x0148   (0x0098)  
	FGameplayCueNotify_InputDevicePropertyInfo         BurstDevicePropertyEffect;                                  // 0x01E0   (0x0010)  
	FGameplayCueNotify_DecalInfo                       BurstDecal;                                                 // 0x01F0   (0x00A8)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FGameplayCueNotify_LoopingEffects
{ 
	TArray<FGameplayCueNotify_ParticleInfo>            LoopingParticles;                                           // 0x0000   (0x0010)  
	TArray<FGameplayCueNotify_SoundInfo>               LoopingSounds;                                              // 0x0010   (0x0010)  
	FGameplayCueNotify_CameraShakeInfo                 LoopingCameraShake;                                         // 0x0020   (0x0098)  
	FGameplayCueNotify_CameraLensEffectInfo            LoopingCameraLensEffect;                                    // 0x00B8   (0x0090)  
	FGameplayCueNotify_ForceFeedbackInfo               LoopingForceFeedback;                                       // 0x0148   (0x0098)  
	FGameplayCueNotify_InputDevicePropertyInfo         LoopingInputDevicePropertyEffect;                           // 0x01E0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0008   (0x0020)  
	UClass*                                            LoadedGameplayCueClass;                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (0x000000 - 0x000004)
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayCueTranslationLink
{ 
	UGameplayCueTranslator*                            RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0078 (0x000000 - 0x000078)
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x0008)  
	FName                                              CachedGameplayTagName;                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x0024   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (0x000000 - 0x000080)
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	TMap<FName, FGameplayCueTranslatorNodeIndex>       TranslationNameToIndexMap;                                  // 0x0010   (0x0050)  
	UGameplayTagsManager*                              TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (0x000000 - 0x000110)
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0050   (0x0028)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x0078   (0x0040)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00B8   (0x0010)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x00C8   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x00D0   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x00F0   (0x0020)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (0x000000 - 0x000090)
struct FCustomCalculationBasedFloat
{ 
	UClass*                                            CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0030   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0058   (0x0028)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSetByCallerFloat
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	FGameplayTag                                       DataTag;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01E0 (0x000000 - 0x0001E0)
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0028)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0030   (0x0110)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0140   (0x0090)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x01D0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x02B8 (0x000000 - 0x0002B8)
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0040)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0040   (0x0008)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x0048   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0050   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0231   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0238   (0x0040)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0278   (0x0040)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (0x000000 - 0x000028)
struct FConditionalGameplayEffect
{ 
	UClass*                                            EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGameplayEffectExecutionDefinition
{ 
	UClass*                                            CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<UClass*>                                    ConditionalGameplayEffectClasses;                           // 0x0038   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0048   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x02A8 (0x000000 - 0x0002A8)
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0040   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0221   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0228   (0x0040)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0268   (0x0040)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (0x000000 - 0x000060)
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (0x000000 - 0x000088)
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x0000   (0x00F8)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually : 1;                             // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually : 1;                           // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0080 (0x000000 - 0x000080)
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<AActor*>                            Instigator;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<AActor*>                            EffectCauser;                                               // 0x0010   (0x0008)  
	TWeakObjectPtr<UGameplayAbility*>                  AbilityCDO;                                                 // 0x0018   (0x0008)  
	TWeakObjectPtr<UGameplayAbility*>                  AbilityInstanceNotReplicated;                               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<UAbilitySystemComponent*>           InstigatorAbilitySystemComponent;                           // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<TWeakObjectPtr>                             Actors;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x0018)  
	bool                                               bHasWorldOrigin : 1;                                        // 0x0078:0 (0x0001)  
	bool                                               bReplicateSourceObject : 1;                                 // 0x0078:1 (0x0001)  
	bool                                               bReplicateInstigator : 1;                                   // 0x0078:2 (0x0001)  
	bool                                               bReplicateEffectCauser : 1;                                 // 0x0078:3 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0008   (0x0020)  MISSED
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FGuid                                              PropertyGuid;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x0008)  
	UClass*                                            ResponseGameplayEffect;                                     // 0x0008   (0x0008)  
	TArray<UClass*>                                    ResponseGameplayEffects;                                    // 0x0010   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0028)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0028   (0x0028)  
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0090 (0x000000 - 0x000090)
struct FMovieSceneGameplayCueKey
{ 
	FGameplayCueTag                                    Cue;                                                        // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Normal;                                                     // 0x0020   (0x0018)  
	FName                                              AttachSocketName;                                           // 0x0038   (0x0008)  
	float                                              NormalizedMagnitude;                                        // 0x0040   (0x0004)  
	FMovieSceneObjectBindingID                         Instigator;                                                 // 0x0044   (0x0018)  
	FMovieSceneObjectBindingID                         EffectCauser;                                               // 0x005C   (0x0018)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	UPhysicalMaterial*                                 PhysicalMaterial;                                           // 0x0078   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x0080   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x0084   (0x0004)  
	bool                                               bAttachToBinding;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneGameplayCueChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneGameplayCueKey>                  KeyValues;                                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0070   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FGameplayAbilityRepAnimMontageNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
struct FGameplayEffectContextHandleNetSerializerConfig : FPolymorphicStructNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FGameplayEffectContextNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FMinimalGameplayCueReplicationProxyNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FMinimalReplicationTagCountMapNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPredictionKeyNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0000 (0x000380 - 0x000380)
class AAbilitySystemDebugHUD : public AHUD : AHUD
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectUIData : public UObject : UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData : UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0028   (0x0018)  
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0008 (0x000030 - 0x000038)
class UAbilityAsync : public UCancellableAsyncAction : UCancellableAsyncAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
/// Size: 0x0058 (0x000038 - 0x000090)
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync : UAbilityAsync
{ 
public:
	FMulticastInlineDelegate                           Changed;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // [0x1861030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // [0x2407bf0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x00C0 (0x000038 - 0x0000F8)
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync : UAbilityAsync
{ 
public:
	FMulticastInlineDelegate                           OnApplied;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0048   (0x00B0)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // [0x18619f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	void OnAppliedDelegate__DelegateSignature(AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // [0x2407bf0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0028 (0x000038 - 0x000060)
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync : UAbilityAsync
{ 
public:
	FMulticastInlineDelegate                           EventReceived;                                              // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x1863670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);                                               // [0x2407bf0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0018 (0x000038 - 0x000050)
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync : UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag : UAbilityAsync_WaitGameplayTag
{ 
public:
	FMulticastInlineDelegate                           Added;                                                      // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0x1863bb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag : UAbilityAsync_WaitGameplayTag
{ 
public:
	FMulticastInlineDelegate                           Removed;                                                    // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0x1864750] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
/// Size: 0x00D0 (0x000038 - 0x000108)
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync : UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0038   (0x00C0)  MISSED
	FMulticastInlineDelegate                           Triggered;                                                  // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
	UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(AActor* TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x1864180] Final|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x0390 (0x000028 - 0x0003B8)
class UGameplayAbility : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0028   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00A8   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00C8   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CA   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00CE   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00CF   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D0   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00D8   (0x0020)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x00F8   (0x00B0)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01A8   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x01AA   (0x0006)  MISSED
	UClass*                                            CostGameplayEffectClass;                                    // 0x01B0   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01B8   (0x0010)  
	UClass*                                            CooldownGameplayEffectClass;                                // 0x01C8   (0x0008)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x01D0   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x01F0   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0210   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0230   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0250   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x0270   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x0290   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02B0   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x02D0   (0x0020)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x02F0   (0x0020)  MISSED
	TArray<UGameplayTask*>                             ActiveTasks;                                                // 0x0310   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0320   (0x0010)  MISSED
	UAnimMontage*                                      CurrentMontage;                                             // 0x0330   (0x0008)  
	unsigned char                                      UnknownData06_5[0x60];                                      // 0x0338   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x0398   (0x0001)  
	bool                                               bIsAbilityEnding;                                           // 0x0399   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x039A   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x039B   (0x0001)  
	unsigned char                                      UnknownData07_5[0x14];                                      // 0x039C   (0x0014)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03B0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x03B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x185d8d0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x185d6b0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x185cfa0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	void RemoveGrantedByEffect();                                                                                            // [0x185cae0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	void MontageStop(float OverrideBlendOutTime);                                                                            // [0x185aca0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x185aba0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	void MontageJumpToSection(FName SectionName);                                                                            // [0x185aae0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x185a920] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x185a770] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float Level);                      // [0x185a360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x2407bf0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x1859740] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	bool K2_HasAuthority();                                                                                                  // [0x1859710] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x1859540] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x18593f0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	void K2_EndAbilityLocally();                                                                                             // [0x18593d0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	void K2_EndAbility();                                                                                                    // [0x18593b0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	void K2_CommitExecute();                                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x1859310] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x1859220] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	bool K2_CommitAbility();                                                                                                 // [0x1525300] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	bool K2_CheckAbilityCost();                                                                                              // [0x18591f0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	bool K2_CheckAbilityCooldown();                                                                                          // [0x18591c0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	void K2_CancelAbility();                                                                                                 // [0x1859160] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x1858ec0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x1858d50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x1858b40] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x18589b0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	void K2_ActivateAbility();                                                                                               // [0x2407bf0] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	bool IsLocallyControlled();                                                                                              // [0x1858840] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	void InvalidateClientPredictionKey();                                                                                    // [0x1858470] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                    // [0x1857b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                               // [0x1857b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	AActor* GetOwningActorFromActorInfo();                                                                                   // [0x1857ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x1856c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	UObject* GetCurrentSourceObject();                                                                                       // [0x1855620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	UAnimMontage* GetCurrentMontage();                                                                                       // [0x1855600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	float GetCooldownTimeRemaining();                                                                                        // [0x18555a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x18553f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	AActor* GetAvatarActorFromActorInfo();                                                                                   // [0x18553a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x1854b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                       // [0x1853fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                     // [0x1853e10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	int32_t GetAbilityLevel();                                                                                               // [0x1853de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x1852430] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x1852340] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x1850170] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x184fe00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x184ee20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x184ec70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x184eac0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x184e820] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x184e620] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayAbilitySet : public UDataAsset : UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AGameplayAbilityTargetActor : public AActor : AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0291   (0x000F)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x02A0   (0x00A0)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0340   (0x0030)  MISSED
	APlayerController*                                 PrimaryPC;                                                  // 0x0370   (0x0008)  
	UGameplayAbility*                                  OwningAbility;                                              // 0x0378   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x0380   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0381   (0x0007)  MISSED
	AActor*                                            SourceActor;                                                // 0x0388   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x0390   (0x0018)  
	UClass*                                            ReticleClass;                                               // 0x03A8   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x03B0   (0x0010)  
	bool                                               bDebug;                                                     // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x17];                                      // 0x03C1   (0x0017)  MISSED
	UAbilitySystemComponent*                           GenericDelegateBoundASC;                                    // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	void ConfirmTargeting();                                                                                                 // [0x1850150] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	void CancelTargeting();                                                                                                  // [0xc53080] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0020 (0x0003E0 - 0x000400)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor : AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x03E0   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x03E4   (0x0008)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x03EC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x03ED   (0x0013)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0020 (0x000400 - 0x000420)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x03F8   (0x0004)  
	float                                              CollisionHeight;                                            // 0x03FC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0400   (0x0020)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0010 (0x000420 - 0x000430)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	UClass*                                            PlacedActorClass;                                           // 0x0418   (0x0008)  
	UMaterialInterface*                                PlacedActorMaterial;                                        // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0428   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor : AGameplayAbilityTargetActor
{ 
public:
	float                                              Radius;                                                     // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03E4   (0x000C)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0000 (0x000400 - 0x000400)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor_Trace
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayAbilityWorldReticle : public AActor : AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x0290   (0x0018)  
	bool                                               bFaceOwnerFlat;                                             // 0x02A8   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x02A9   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x02AA   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x02AB   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	APlayerController*                                 PrimaryPC;                                                  // 0x02B0   (0x0008)  
	AActor*                                            TargetingActor;                                             // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x2407bf0] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	void OnValidTargetChanged(bool bNewValue);                                                                               // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	void OnParametersInitialized();                                                                                          // [0x2407bf0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x18531c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle : AGameplayAbilityWorldReticle
{ 
public:
	UCapsuleComponent*                                 CollisionComponent;                                         // 0x02C0   (0x0008)  
	TArray<UActorComponent*>                           VisualizationComponents;                                    // 0x02C8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UGameplayAbility_CharacterJump : public UGameplayAbility : UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x0038 (0x0003B8 - 0x0003F0)
class UGameplayAbility_Montage : public UGameplayAbility : UGameplayAbility
{ 
public:
	UAnimMontage*                                      MontageToPlay;                                              // 0x03B8   (0x0008)  
	float                                              PlayRate;                                                   // 0x03C0   (0x0004)  
	FName                                              SectionName;                                                // 0x03C4   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	TArray<UClass*>                                    GameplayEffectClassesWhileAnimating;                        // 0x03D0   (0x0010)  
	TArray<UGameplayEffect*>                           GameplayEffectsWhileAnimating;                              // 0x03E0   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0018 (0x000068 - 0x000080)
class UAbilityTask : public UGameplayTask : UGameplayTask
{ 
public:
	UGameplayAbility*                                  Ability;                                                    // 0x0068   (0x0008)  
	TWeakObjectPtr<UAbilitySystemComponent*>           AbilitySystemComponent;                                     // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x0048 (0x000080 - 0x0000C8)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask : UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0080   (0x0008)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x0090   (0x0018)  
	float                                              FinishClampVelocity;                                        // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	UCharacterMovementComponent*                       MovementComponent;                                          // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0048 (0x0000C8 - 0x000110)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base : UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x00C8   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00D8   (0x0018)  
	float                                              Strength;                                                   // 0x00F0   (0x0004)  
	float                                              Duration;                                                   // 0x00F4   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	UCurveFloat*                                       StrengthOverTime;                                           // 0x0100   (0x0008)  
	bool                                               bEnableGravity;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0x184bcb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0068 (0x0000C8 - 0x000130)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base : UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnLanded;                                                   // 0x00D8   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00E8   (0x0018)  
	float                                              Distance;                                                   // 0x0100   (0x0004)  
	float                                              Height;                                                     // 0x0104   (0x0004)  
	float                                              Duration;                                                   // 0x0108   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x010C   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	UCurveVector*                                      PathOffsetCurve;                                            // 0x0118   (0x0008)  
	UCurveFloat*                                       TimeMappingCurve;                                           // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	void OnLandedCallback(FHitResult& hit);                                                                                  // [0x185c000] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	void Finish();                                                                                                           // [0x1853450] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve); // [0x184c2c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x00A0 (0x0000C8 - 0x000168)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base : UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00E0   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x00F8   (0x0018)  
	AActor*                                            TargetActor;                                                // 0x0110   (0x0008)  
	FVector                                            TargetLocationOffset;                                       // 0x0118   (0x0018)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x0134   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x0138   (0x0001)  
	bool                                               bSetNewMovementMode;                                        // 0x0139   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x013A   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x013B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	UCurveVector*                                      PathOffsetCurve;                                            // 0x0140   (0x0008)  
	UCurveFloat*                                       TimeMappingCurve;                                           // 0x0148   (0x0008)  
	UCurveFloat*                                       TargetLerpSpeedHorizontalCurve;                             // 0x0150   (0x0008)  
	UCurveFloat*                                       TargetLerpSpeedVerticalCurve;                               // 0x0158   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0160   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget);                                                    // [0x185c5e0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	void OnRep_TargetLocation();                                                                                             // [0x185c570] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x184d410] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x184c900] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0068 (0x0000C8 - 0x000130)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base : UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnTimedOut;                                                 // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnTimedOutAndDestinationReached;                            // 0x00D8   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00E8   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x0100   (0x0018)  
	float                                              Duration;                                                   // 0x0118   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x011C   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x011D   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x011E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x011F   (0x0001)  MISSED
	UCurveVector*                                      PathOffsetCurve;                                            // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x184ce10] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0070 (0x0000C8 - 0x000138)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base : UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x00C8   (0x0010)  
	FVector                                            Location;                                                   // 0x00D8   (0x0018)  
	AActor*                                            LocationActor;                                              // 0x00F0   (0x0008)  
	float                                              Strength;                                                   // 0x00F8   (0x0004)  
	float                                              Duration;                                                   // 0x00FC   (0x0004)  
	float                                              Radius;                                                     // 0x0100   (0x0004)  
	bool                                               bIsPush;                                                    // 0x0104   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x0105   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x0106   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0107   (0x0001)  MISSED
	UCurveFloat*                                       StrengthDistanceFalloff;                                    // 0x0108   (0x0008)  
	UCurveFloat*                                       StrengthOverTime;                                           // 0x0110   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x0120   (0x0018)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat* StrengthDistanceFalloff, UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x184dae0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UAbilityTask_MoveToLocation : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnTargetLocationReached;                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0090   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x0098   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x00B0   (0x0018)  
	float                                              DurationOfMovement;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00CC   (0x000C)  MISSED
	UCurveFloat*                                       LerpCurve;                                                  // 0x00D8   (0x0008)  
	UCurveVector*                                      LerpCurveVector;                                            // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	UAbilityTask_MoveToLocation* MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve); // [0x185ad60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0018 (0x000080 - 0x000098)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnSync;                                                     // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	UAbilityTask_NetworkSyncPoint* WaitNetSync(UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);           // [0x1864e50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	void OnSignalCallback();                                                                                                 // [0x185c5c0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0088 (0x000080 - 0x000108)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnCompleted;                                                // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnBlendOut;                                                 // 0x0090   (0x0010)  
	FMulticastInlineDelegate                           OnInterrupted;                                              // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           OnCancelled;                                                // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x00C0   (0x0028)  MISSED
	UAnimMontage*                                      MontageToPlay;                                              // 0x00E8   (0x0008)  
	float                                              Rate;                                                       // 0x00F0   (0x0004)  
	FName                                              StartSection;                                               // 0x00F4   (0x0008)  
	float                                              AnimRootMotionTranslationScale;                             // 0x00FC   (0x0004)  
	float                                              StartTimeSeconds;                                           // 0x0100   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0105   (0x0003)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	void OnMontageInterrupted();                                                                                             // [0x185c330] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);                                                           // [0x185c220] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x185c150] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // [0x1850340] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_Repeat : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnPerformAction;                                            // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	UAbilityTask_Repeat* RepeatAction(UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount);  // [0x185ccb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x0048 (0x000080 - 0x0000C8)
class UAbilityTask_SpawnActor : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           Success;                                                    // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           DidNotSpawn;                                                // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	UAbilityTask_SpawnActor* SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class); // [0x185dc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor); // [0x1853470] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class, AActor*& SpawnedActor); // [0x184ef30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_StartAbilityState : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnStateEnded;                                               // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnStateInterrupted;                                         // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	UAbilityTask_StartAbilityState* StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x185df90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_VisualizeTargeting : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           TimeElapsed;                                                // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0x185ebf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	UAbilityTask_VisualizeTargeting* VisualizeTargeting(UGameplayAbility* OwningAbility, UClass* Class, FName TaskInstanceName, float Duration); // [0x185ea60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);                    // [0x18537a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor);     // [0x184f140] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x00B8 (0x000080 - 0x000138)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnActivate;                                                 // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0090   (0x00A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x185f920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x185fb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x185f740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	void OnAbilityActivate(UGameplayAbility* ActivatedAbility);                                                              // [0x185b5a0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0078 (0x000080 - 0x0000F8)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnCommit;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0090   (0x0068)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x185ff20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x185fdb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	void OnAbilityCommit(UGameplayAbility* ActivatedAbility);                                                                // [0x185b630] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0078 (0x000080 - 0x0000F8)
class UAbilityTask_WaitAttributeChange : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0090   (0x0060)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner); // [0x1860ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner); // [0x1860100] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x00C0 (0x000080 - 0x000140)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0xA8];                                      // 0x0090   (0x00A8)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0x18603a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x0070 (0x000080 - 0x0000F0)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0090   (0x0058)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0x18608a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0018 (0x000080 - 0x000098)
class UAbilityTask_WaitCancel : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnCancel;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	UAbilityTask_WaitCancel* WaitCancel(UGameplayAbility* OwningAbility);                                                    // [0x185ed70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	void OnLocalCancelCallback();                                                                                            // [0x185c0f0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	void OnCancelCallback();                                                                                                 // [0x185b820] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitConfirm : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnConfirm;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	UAbilityTask_WaitConfirm* WaitConfirm(UGameplayAbility* OwningAbility);                                                  // [0x185efd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	void OnConfirmCallback(UGameplayAbility* InAbility);                                                                     // [0x185b860] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnConfirm;                                                  // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnCancel;                                                   // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UGameplayAbility* OwningAbility);                                      // [0x185f230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	void OnLocalConfirmCallback();                                                                                           // [0x185c130] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	void OnLocalCancelCallback();                                                                                            // [0x185c110] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	void OnConfirmCallback();                                                                                                // [0x185b920] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	void OnCancelCallback();                                                                                                 // [0x185b840] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0018 (0x000080 - 0x000098)
class UAbilityTask_WaitDelay : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	UAbilityTask_WaitDelay* WaitDelay(UGameplayAbility* OwningAbility, float Time);                                          // [0x185f490] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x0138 (0x000080 - 0x0001B8)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask : UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_2[0x128];                                     // 0x0080   (0x0128)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x185b6c0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0020 (0x0001B8 - 0x0001D8)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied : UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	FMulticastInlineDelegate                           OnApplied;                                                  // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x1862280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x1861d90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0020 (0x0001B8 - 0x0001D8)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied : UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	FMulticastInlineDelegate                           OnApplied;                                                  // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x1862bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x18626d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x00A8 (0x000080 - 0x000128)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           bLocked;                                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x88];                                      // 0x0090   (0x0088)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x1863010] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnRemoved;                                                  // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           InvalidHandle;                                              // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x1861250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x185b940] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           InvalidHandle;                                              // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x18614f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0x185ba60] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           EventReceived;                                              // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0090   (0x0008)  MISSED
	UAbilitySystemComponent*                           OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x18632e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_WaitGameplayTag : public UAbilityTask : UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0080   (0x0010)  MISSED
	UAbilitySystemComponent*                           OptionalExternalTarget;                                     // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount);                                                            // [0x1853d10] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag : UAbilityTask_WaitGameplayTag
{ 
public:
	FMulticastInlineDelegate                           Added;                                                      // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x1863870] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag : UAbilityTask_WaitGameplayTag
{ 
public:
	FMulticastInlineDelegate                           Removed;                                                    // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x1864410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
/// Size: 0x00E0 (0x000080 - 0x000160)
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask : UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0080   (0x00C0)  MISSED
	FMulticastInlineDelegate                           Triggered;                                                  // 0x0140   (0x0010)  
	UAbilitySystemComponent*                           OptionalExternalTarget;                                     // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0158   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
	UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(UGameplayAbility* OwningAbility, FGameplayTagQuery TagQuery, AActor* InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x1863d70] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
	void UpdateTargetTags(FGameplayTag Tag, int32_t NewCount);                                                               // [0x185e970] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitInputPress : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnPress;                                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	UAbilityTask_WaitInputPress* WaitInputPress(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);                  // [0x1864910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	void OnPressCallback();                                                                                                  // [0x185c530] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitInputRelease : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnRelease;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	UAbilityTask_WaitInputRelease* WaitInputRelease(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);             // [0x1864bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	void OnReleaseCallback();                                                                                                // [0x185c550] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode);  // [0x185c3a0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x18507b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0010 (0x000080 - 0x000090)
class UAbilityTask_WaitOverlap : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnOverlap;                                                  // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	UAbilityTask_WaitOverlap* WaitForOverlap(UGameplayAbility* OwningAbility);                                               // [0x1861790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& hit); // [0x185bba0] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UAbilityTask_WaitTargetData : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           ValidData;                                                  // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           Cancelled;                                                  // 0x0090   (0x0010)  
	UClass*                                            TargetClass;                                                // 0x00A0   (0x0008)  
	AGameplayAbilityTargetActor*                       TargetActor;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor); // [0x1865270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	UAbilityTask_WaitTargetData* WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class); // [0x1865100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x185cac0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x185c940] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x185c800] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x185c6c0] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);                    // [0x1853930] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor);     // [0x184f330] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_WaitVelocityChange : public UAbilityTask : UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnVelocityChage;                                            // 0x0080   (0x0010)  
	UMovementComponent*                                CachedMovementComponent;                                    // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0098   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x1850a60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1288 (0x000118 - 0x0013A0)
class UAbilitySystemComponent : public UGameplayTasksComponent : UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0118   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0128   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_5[0x1A0];                                     // 0x0140   (0x01A0)  MISSED
	float                                              OutgoingDuration;                                           // 0x02E0   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x02E8   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0308   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0318   (0x0010)  
	unsigned char                                      UnknownData03_5[0x60];                                      // 0x0328   (0x0060)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x0388   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x0389   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x038A   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x038B   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	TArray<AGameplayAbilityTargetActor*>               SpawnedTargetActors;                                        // 0x0390   (0x0010)  
	unsigned char                                      UnknownData05_5[0x28];                                      // 0x03A0   (0x0028)  MISSED
	AActor*                                            OwnerActor;                                                 // 0x03C8   (0x0008)  
	AActor*                                            AvatarActor;                                                // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData06_5[0x10];                                      // 0x03D8   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x03E8   (0x0120)  
	unsigned char                                      UnknownData07_5[0x30];                                      // 0x0508   (0x0030)  MISSED
	TArray<UGameplayAbility*>                          AllReplicatedInstancedAbilities;                            // 0x0538   (0x0010)  
	unsigned char                                      UnknownData08_5[0x210];                                     // 0x0548   (0x0210)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x0758   (0x0038)  
	bool                                               bCachedIsNetSimulated;                                      // 0x0790   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x0791   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x0792   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x0798   (0x0030)  
	unsigned char                                      UnknownData10_5[0xA0];                                      // 0x07C8   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x0868   (0x0478)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0CE0   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0E08   (0x0128)  
	unsigned char                                      UnknownData11_5[0x128];                                     // 0x0F30   (0x0128)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x1058   (0x0010)  
	unsigned char                                      UnknownData12_5[0x128];                                     // 0x1068   (0x0128)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x1190   (0x0060)  
	TArray<UAttributeSet*>                             SpawnedAttributes;                                          // 0x11F0   (0x0010)  
	unsigned char                                      UnknownData13_5[0x10];                                      // 0x1200   (0x0010)  MISSED
	FMinimalReplicationTagCountMap                     ReplicatedLooseTags;                                        // 0x1210   (0x0060)  
	unsigned char                                      UnknownData14_5[0x8];                                       // 0x1270   (0x0008)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x1278   (0x0118)  
	unsigned char                                      UnknownData15_6[0x10];                                      // 0x1390   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap<FGameplayTag, float>& NewSetByCallerValues); // [0x18aa240] BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // [0x18aa130] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	bool TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation);                                // [0x18aa000] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation);                      // [0x18a9f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x18a9e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	void TargetConfirm();                                                                                                    // [0x18a9dd0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	void TargetCancel();                                                                                                     // [0x18a9db0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x18a9d20] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x18a9c10] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0x18a9b30] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x18a95f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x18a9470] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x18a92c0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x18a8fc0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x18a8d60] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x18a8b70] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x18a8ac0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x18a8a10] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x18a8920] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	void ServerPrintDebug_Request();                                                                                         // [0x18a88d0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x18a8720] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	void ServerCurrentMontageSetPlayRate(UAnimMontage* ClientAnimMontage, float InPlayRate);                                 // [0x18a8610] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); // [0x18a8480] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, FName SectionName);                          // [0x18a8370] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x18a8240] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x18a7f80] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	void RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x18a7b50] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x18a7a70] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x18a7910] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x18a77b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x18a7650] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x18a7650] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	void ReleaseInputID(int32_t InputID);                                                                                    // [0x18a75c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.PressInputID
	void PressInputID(int32_t InputID);                                                                                      // [0x18a7530] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	void OnSpawnedAttributesEndPlayed(AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason);                           // [0x18a7460] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
	void OnRep_SpawnedAttributes(TArray<UAttributeSet*>& PreviousSpawnedAttributes);                                         // [0x18a72d0] Final|Native|Private|HasOutParms 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	void OnRep_ServerDebugString();                                                                                          // [0x18a72b0] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	void OnRep_ReplicatedAnimMontage();                                                                                      // [0x18a7290] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	void OnRep_OwningActor();                                                                                                // [0x18a71f0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	void OnRep_ClientDebugString();                                                                                          // [0x18a71d0] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	void OnRep_ActivateAbilities();                                                                                          // [0x18a71b0] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	void OnOwnerActorDestroyed(AActor* InActor);                                                                             // [0x18a7120] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	void OnAvatarActorDestroyed(AActor* InActor);                                                                            // [0x18a7090] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x18a6de0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x18a6bd0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x18a6920] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x18a66d0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x18a6590] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x18a63f0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x18a5f50] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x18a5e40] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x18a61a0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x18a5ca0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	FGameplayEffectSpecHandle MakeOutgoingSpec(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x18a5a90] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x18a5710] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	void K2_InitStats(UClass* Attributes, UDataTable* DataTable);                                                            // [0x18a55f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(UClass* AbilityClass, int32_t Level, int32_t InputID);          // [0x18a53d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	FGameplayAbilitySpecHandle K2_GiveAbility(UClass* AbilityClass, int32_t Level, int32_t InputID);                         // [0x18a51c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x18a5120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputConfirm
	void InputConfirm();                                                                                                     // [0x18a5100] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputCancel
	void InputCancel();                                                                                                      // [0x18a50e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	bool GetUserAbilityActivationInhibited();                                                                                // [0x18a50c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	int32_t GetGameplayTagCount(FGameplayTag GameplayTag);                                                                   // [0x18a4fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x18a4e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
	int32_t GetGameplayEffectCount_IfLoaded(TWeakObjectPtr<UClass*> SoftSourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x18a4b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	int32_t GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x18a4a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound);                                             // [0x18a4880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	UAttributeSet* GetAttributeSet(UClass* AttributeSetClass);                                                               // [0x18a4770] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes);                                                        // [0x18a4690] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles);                                             // [0x18a4560] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x18a43d0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x18a42c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // [0x18a4110] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID);                // [0x18a3f90] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query);      // [0x18a3d30] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x18a39d0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x18a3890] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x18a3780] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x18a3680] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x18a3580] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x18a3210] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x18a3110] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x18a3030] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	void ClearAllAbilitiesWithInputID(int32_t InputID);                                                                      // [0x18a2fa0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	void ClearAllAbilities();                                                                                                // [0x18a2f80] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAbility
	void ClearAbility(FGameplayAbilitySpecHandle& Handle);                                                                   // [0x18a2ee0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x18a2bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x18a2a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target); // [0x18a2880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x18a2740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x2407bf0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemDebugHUDExtension : public UObject : UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension : UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension : UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension : UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x0270 (0x000028 - 0x000298)
class UAbilitySystemGlobals : public UObject : UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0028   (0x0020)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0048   (0x0028)  MISSED
	bool                                               bUseDebugTargetFromHud;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0074   (0x0008)  
	FName                                              ActivateFailIsDeadName;                                     // 0x007C   (0x0008)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x0084   (0x0008)  
	FName                                              ActivateFailCooldownName;                                   // 0x008C   (0x0008)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x0094   (0x0008)  
	FName                                              ActivateFailCostName;                                       // 0x009C   (0x0008)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x00A4   (0x0008)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00AC   (0x0008)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00B4   (0x0008)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00BC   (0x0008)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00C4   (0x0008)  
	FName                                              ActivateFailNetworkingName;                                 // 0x00CC   (0x0008)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x00D4   (0x0004)  
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x00D8   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x00E8   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00EA   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases;                        // 0x00EC   (0x0050)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x0140   (0x0020)  
	UCurveTable*                                       GlobalCurveTable;                                           // 0x0160   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x0168   (0x0020)  
	UDataTable*                                        GlobalAttributeMetaDataTable;                               // 0x0188   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x0190   (0x0020)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x01B0   (0x0010)  
	TArray<UCurveTable*>                               GlobalAttributeDefaultsTables;                              // 0x01C0   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x01D0   (0x0020)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x01F0   (0x0020)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x0210   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x0220   (0x0020)  
	UGameplayTagReponseTable*                          GameplayTagResponseTable;                                   // 0x0240   (0x0008)  
	bool                                               PredictTargetGameplayEffects;                               // 0x0248   (0x0001)  
	bool                                               ReplicateActivationOwnedTags;                               // 0x0249   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x024A   (0x0006)  MISSED
	UGameplayCueManager*                               GlobalGameplayCueManager;                                   // 0x0250   (0x0008)  
	unsigned char                                      UnknownData05_6[0x40];                                      // 0x0258   (0x0040)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	void ToggleIgnoreAbilitySystemCosts();                                                                                   // [0x15217d0] Exec|Native|Public   
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	void ToggleIgnoreAbilitySystemCooldowns();                                                                               // [0x18a9df0] Exec|Native|Public   
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
	void ServerEndPlayerAbility(FString AbilityNameMatch);                                                                   // [0x18a8170] Final|Exec|Native|Public 
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
	void ServerCancelPlayerAbility(FString AbilityNameMatch);                                                                // [0x18a8170] Final|Exec|Native|Public 
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
	void ServerActivatePlayerAbility(FString AbilityNameMatch);                                                              // [0x18a8170] Final|Exec|Native|Public 
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
	void ListPlayerAbilities();                                                                                              // [0xd0bd90] Final|Exec|Native|Public 
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemReplicationProxyInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0008 (0x000028 - 0x000030)
class UAttributeSet : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UAbilitySystemTestAttributeSet : public UAttributeSet : UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0030   (0x0004)  
	float                                              Health;                                                     // 0x0034   (0x0004)  
	float                                              Mana;                                                       // 0x0038   (0x0004)  
	float                                              MaxMana;                                                    // 0x003C   (0x0004)  
	float                                              Damage;                                                     // 0x0040   (0x0004)  
	float                                              SpellDamage;                                                // 0x0044   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0048   (0x0004)  
	float                                              CritChance;                                                 // 0x004C   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0050   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x0054   (0x0004)  
	float                                              DodgeChance;                                                // 0x0058   (0x0004)  
	float                                              LifeSteal;                                                  // 0x005C   (0x0004)  
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x0064   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0068   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x006C   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0020 (0x000340 - 0x000360)
class AAbilitySystemTestPawn : public ADefaultPawn : ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0340   (0x0018)  MISSED
	UAbilitySystemComponent*                           AbilitySystemComponent;                                     // 0x0358   (0x0008)  
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCue
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_GameplayCue : public UAnimNotify : UAnimNotify
{ 
public:
	FGameplayCueTag                                    GameplayCue;                                                // 0x0038   (0x0008)  
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCueState
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_GameplayCueState : public UAnimNotifyState : UAnimNotifyState
{ 
public:
	FGameplayCueTag                                    GameplayCue;                                                // 0x0030   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UGameplayAbilityBlueprint : public UBlueprint : UBlueprint
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x02E0 (0x000030 - 0x000310)
class UGameplayCueManager : public UDataAsset : UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0030   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0048   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x0098   (0x0050)  
	unsigned char                                      UnknownData01_5[0x1C8];                                     // 0x00E8   (0x01C8)  MISSED
	TArray<UClass*>                                    LoadedGameplayCueNotifyClasses;                             // 0x02B0   (0x0010)  
	TArray<UClass*>                                    GameplayCueClassesForPreallocation;                         // 0x02C0   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x02D0   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x02F8   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AGameplayCueNotify_Actor : public AActor : AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0291   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x0294   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x0298   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x0299   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x029A   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x029C   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x02A4   (0x0008)  
	bool                                               bAutoAttachToOwner;                                         // 0x02AC   (0x0001)  
	bool                                               IsOverride;                                                 // 0x02AD   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x02AE   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x02AF   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x02B0   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x02B2   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x02B4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x02B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x18edd20] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x18ed780] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	void OnOwnerDestroyed(AActor* DestroyedActor);                                                                           // [0x18ed6f0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x18ed330] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x18ecf70] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	void K2_EndGameplayCue();                                                                                                // [0x18eccd0] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameplayCueNotify_Static : public UObject : UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0028   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x0030   (0x0008)  
	bool                                               IsOverride;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x18edf00] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x18ed960] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x18ed510] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x18ed150] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x2407bf0] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
/// Size: 0x0310 (0x000040 - 0x000350)
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static : UGameplayCueNotify_Static
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x0040   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0078   (0x0040)  
	FGameplayCueNotify_BurstEffects                    BurstEffects;                                               // 0x00B8   (0x0298)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Burst.OnBurst
	void OnBurst(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);          // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
/// Size: 0x0368 (0x0002F0 - 0x000658)
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor : AGameplayCueNotify_Actor
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x02F0   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0328   (0x0040)  
	FGameplayCueNotify_BurstEffects                    BurstEffects;                                               // 0x0368   (0x0298)  
	FGameplayCueNotify_SpawnResult                     BurstSpawnResults;                                          // 0x0600   (0x0058)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
	void OnBurst(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);          // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0010 (0x000040 - 0x000050)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static : UGameplayCueNotify_Static
{ 
public:
	USoundBase*                                        Sound;                                                      // 0x0040   (0x0008)  
	UParticleSystem*                                   ParticleSystem;                                             // 0x0048   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
/// Size: 0x0B98 (0x0002F0 - 0x000E88)
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor : AGameplayCueNotify_Actor
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x02F0   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0328   (0x0040)  
	FGameplayCueNotify_BurstEffects                    ApplicationEffects;                                         // 0x0368   (0x0298)  
	FGameplayCueNotify_SpawnResult                     ApplicationSpawnResults;                                    // 0x0600   (0x0058)  
	FGameplayCueNotify_LoopingEffects                  LoopingEffects;                                             // 0x0658   (0x01F0)  
	FGameplayCueNotify_SpawnResult                     LoopingSpawnResults;                                        // 0x0848   (0x0058)  
	FGameplayCueNotify_BurstEffects                    RecurringEffects;                                           // 0x08A0   (0x0298)  
	FGameplayCueNotify_SpawnResult                     RecurringSpawnResults;                                      // 0x0B38   (0x0058)  
	FGameplayCueNotify_BurstEffects                    RemovalEffects;                                             // 0x0B90   (0x0298)  
	FGameplayCueNotify_SpawnResult                     RemovalSpawnResults;                                        // 0x0E28   (0x0058)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0E80   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	void OnRemoval(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);        // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	void OnRecurring(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);      // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	void OnLoopingStart(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);   // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication
	void OnApplication(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x2407bf0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0060 (0x000030 - 0x000090)
class UGameplayCueSet : public UDataAsset : UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator : public UObject : UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator : UGameplayCueTranslator
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0838 (0x000028 - 0x000860)
class UGameplayEffect : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0038   (0x01E0)  
	FScalableFloat                                     Period;                                                     // 0x0218   (0x0028)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x0240   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0242   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x0248   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x0258   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0268   (0x0028)  
	TArray<UClass*>                                    ApplicationRequirements;                                    // 0x0290   (0x0010)  
	TArray<UClass*>                                    TargetEffectClasses;                                        // 0x02A0   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x02B0   (0x0010)  
	TArray<UClass*>                                    OverflowEffects;                                            // 0x02C0   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x02D0   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x02D2   (0x0006)  MISSED
	TArray<UClass*>                                    PrematureExpirationEffectClasses;                           // 0x02D8   (0x0010)  
	TArray<UClass*>                                    RoutineExpirationEffectClasses;                             // 0x02E8   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x02F8   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x02FA   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x0300   (0x0010)  
	UGameplayEffectUIData*                             UIData;                                                     // 0x0310   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x0318   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x0378   (0x0060)  
	FInheritedTagContainer                             InheritableBlockedAbilityTagsContainer;                     // 0x03D8   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x0438   (0x0040)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x0478   (0x0040)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x04B8   (0x0040)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x04F8   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x0558   (0x0040)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x0598   (0x0150)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x06E8   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x06F0   (0x0150)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x0840   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x0841   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x0842   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x0844   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x0848   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x0849   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x084A   (0x0001)  
	unsigned char                                      UnknownData08_5[0x5];                                       // 0x084B   (0x0005)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x0850   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayEffectCalculation : public UObject : UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectCustomApplicationRequirement : public UObject : UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation : UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0x18ec330] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation : UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // [0x18eccf0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x18ecbf0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x18ecac0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x18ec9e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x18ec900] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x18ec7e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x18ec710] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& Tag);                                  // [0x18ec5e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName);                              // [0x18ec4b0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0x18ec0f0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x01B8 (0x000030 - 0x0001E8)
class UGameplayTagReponseTable : public UDataAsset : UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1A8];                                     // 0x0040   (0x01A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, UAbilitySystemComponent* ASC, int32_t idx);                    // [0x18edbc0] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x00F8 (0x000108 - 0x000200)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection : UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueChannel                      Channel;                                                    // 0x0108   (0x00F8)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0090 (0x000108 - 0x000198)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection : UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueKey                          Cue;                                                        // 0x0108   (0x0090)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0x18edb40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTickableAttributeSetInterface : public UInterface : UInterface
{ 
public:
};

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x04
enum EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately0             = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd1                   = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing2                            = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x03
enum EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source0                                   = 0,
	EGameplayEffectAttributeCaptureSource__Target1                                   = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x05
enum EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive0                                                     = 0,
	EGameplayCueEvent__WhileActive1                                                  = 1,
	EGameplayCueEvent__Executed2                                                     = 2,
	EGameplayCueEvent__Removed3                                                      = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX4                                        = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x06
enum EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority0                                       = 0,
	EGameplayAbilityActivationMode__NonAuthority1                                    = 1,
	EGameplayAbilityActivationMode__Predicting2                                      = 2,
	EGameplayAbilityActivationMode__Confirmed3                                       = 3,
	EGameplayAbilityActivationMode__Rejected4                                        = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX5              = 5
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x13
enum EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm0                                  = 0,
	EAbilityGenericReplicatedEvent__GenericCancel1                                   = 1,
	EAbilityGenericReplicatedEvent__InputPressed2                                    = 2,
	EAbilityGenericReplicatedEvent__InputReleased3                                   = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient4                         = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer5                         = 5,
	EAbilityGenericReplicatedEvent__GameCustom16                                     = 6,
	EAbilityGenericReplicatedEvent__GameCustom27                                     = 7,
	EAbilityGenericReplicatedEvent__GameCustom38                                     = 8,
	EAbilityGenericReplicatedEvent__GameCustom49                                     = 9,
	EAbilityGenericReplicatedEvent__GameCustom510                                    = 10,
	EAbilityGenericReplicatedEvent__GameCustom611                                    = 11,
	EAbilityGenericReplicatedEvent__MAX12                                            = 12
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x03
enum EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters0                                          = 0,
	EGameplayCuePayloadType__FromSpec1                                               = 1,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX2                            = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x10
enum EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability10                                            = 0,
	EGameplayAbilityInputBinds__Ability21                                            = 1,
	EGameplayAbilityInputBinds__Ability32                                            = 2,
	EGameplayAbilityInputBinds__Ability43                                            = 3,
	EGameplayAbilityInputBinds__Ability54                                            = 4,
	EGameplayAbilityInputBinds__Ability65                                            = 5,
	EGameplayAbilityInputBinds__Ability76                                            = 6,
	EGameplayAbilityInputBinds__Ability87                                            = 7,
	EGameplayAbilityInputBinds__Ability98                                            = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX9                      = 9
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x04
enum ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any0                                                 = 0,
	ETargetDataFilterSelf__TDFS_NoSelf1                                              = 1,
	ETargetDataFilterSelf__TDFS_NoOthers2                                            = 2,
	ETargetDataFilterSelf__TDFS_MAX3                                                 = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x04
enum EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame0                                            = 1,
	EAbilityTaskWaitState__WaitingOnUser1                                            = 2,
	EAbilityTaskWaitState__WaitingOnAvatar2                                          = 4,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX3                                = 5
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x04
enum ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource0                 = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward1                    = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace2                       = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x04
enum EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait0                                               = 0,
	EAbilityTaskNetSyncType__OnlyServerWait1                                         = 1,
	EAbilityTaskNetSyncType__OnlyClientWait2                                         = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX3                            = 3
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x08
enum EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None0                                            = 0,
	EWaitAttributeChangeComparison__GreaterThan1                                     = 1,
	EWaitAttributeChangeComparison__LessThan2                                        = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo3                            = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo4                               = 4,
	EWaitAttributeChangeComparison__NotEqualTo5                                      = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo6                                  = 6,
	EWaitAttributeChangeComparison__MAX7                                             = 7
};

/// Enum /Script/GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
/// Size: 0x03
enum EWaitGameplayTagQueryTriggerCondition : uint8_t
{
	EWaitGameplayTagQueryTriggerCondition__WhenTrue0                                 = 0,
	EWaitGameplayTagQueryTriggerCondition__WhenFalse1                                = 1,
	EWaitGameplayTagQueryTriggerCondition__EWaitGameplayTagQueryTriggerCondition_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x04
enum EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal0                                         = 0,
	EGameplayEffectReplicationMode__Mixed1                                           = 1,
	EGameplayEffectReplicationMode__Full2                                            = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX3              = 3
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x03
enum ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position0                                                = 0,
	ERepAnimPositionMethod__CurrentSectionId1                                        = 1,
	ERepAnimPositionMethod__ERepAnimPositionMethod_MAX2                              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x05
enum EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant0                                         = 0,
	EGameplayTargetingConfirmation__UserConfirmed1                                   = 1,
	EGameplayTargetingConfirmation__Custom2                                          = 2,
	EGameplayTargetingConfirmation__CustomMulti3                                     = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX4              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x04
enum EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform0                         = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform1                           = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform2                          = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x04
enum EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced0                                  = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor1                             = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution2                         = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX3          = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x05
enum EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted0                              = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly1                                   = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated2                             = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly3                                  = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX4      = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x05
enum EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer0                               = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution1                          = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination2                        = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly3                                   = 3,
	EGameplayAbilityNetSecurityPolicy__EGameplayAbilityNetSecurityPolicy_MAX4        = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x03
enum EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo0                                  = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes1                                 = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX2        = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x04
enum EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent0                                    = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded1                                    = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent2                                  = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX3                = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
/// Size: 0x03
enum EGameplayCueNotify_EffectPlaySpace : uint8_t
{
	EGameplayCueNotify_EffectPlaySpace__WorldSpace0                                  = 0,
	EGameplayCueNotify_EffectPlaySpace__CameraSpace1                                 = 1,
	EGameplayCueNotify_EffectPlaySpace__EGameplayCueNotify_MAX2                      = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
/// Size: 0x03
enum EGameplayCueNotify_LocallyControlledSource : uint8_t
{
	EGameplayCueNotify_LocallyControlledSource__InstigatorActor0                     = 0,
	EGameplayCueNotify_LocallyControlledSource__TargetActor1                         = 1,
	EGameplayCueNotify_LocallyControlledSource__EGameplayCueNotify_MAX2              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
/// Size: 0x04
enum EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
	EGameplayCueNotify_LocallyControlledPolicy__Always0                              = 0,
	EGameplayCueNotify_LocallyControlledPolicy__LocalOnly1                           = 1,
	EGameplayCueNotify_LocallyControlledPolicy__NotLocal2                            = 2,
	EGameplayCueNotify_LocallyControlledPolicy__EGameplayCueNotify_MAX3              = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_AttachPolicy
/// Size: 0x03
enum EGameplayCueNotify_AttachPolicy : uint8_t
{
	EGameplayCueNotify_AttachPolicy__DoNotAttach0                                    = 0,
	EGameplayCueNotify_AttachPolicy__AttachToTarget1                                 = 1,
	EGameplayCueNotify_AttachPolicy__EGameplayCueNotify_MAX2                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x05
enum EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat0                              = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased1                             = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass2                     = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller3                                = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX4    = 4
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x05
enum EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude0                         = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue1                         = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude2                    = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel3     = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX4    = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x03
enum EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked0            = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient1                          = 1,
	EGameplayEffectScopedModifierAggregatorType__EGameplayEffectScopedModifierAggregatorType_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x04
enum EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant0                                            = 0,
	EGameplayEffectDurationType__Infinite1                                           = 1,
	EGameplayEffectDurationType__HasDuration2                                        = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX3                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x03
enum EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication0           = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh1                             = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x03
enum EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication0               = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset1                                 = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX2    = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x04
enum EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack0                       = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration1    = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration2                        = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x04
enum EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset0                        = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod1                       = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod2             = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x12
enum EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel00                                         = 0,
	EGameplayModEvaluationChannel__Channel11                                         = 1,
	EGameplayModEvaluationChannel__Channel22                                         = 2,
	EGameplayModEvaluationChannel__Channel33                                         = 3,
	EGameplayModEvaluationChannel__Channel44                                         = 4,
	EGameplayModEvaluationChannel__Channel55                                         = 5,
	EGameplayModEvaluationChannel__Channel66                                         = 6,
	EGameplayModEvaluationChannel__Channel77                                         = 7,
	EGameplayModEvaluationChannel__Channel88                                         = 8,
	EGameplayModEvaluationChannel__Channel99                                         = 9,
	EGameplayModEvaluationChannel__Channel_MAX10                                     = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX11               = 11
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x05
enum EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive0                                                        = 0,
	EGameplayModOp__Multiplicitive1                                                  = 1,
	EGameplayModOp__Division2                                                        = 2,
	EGameplayModOp__Override3                                                        = 3,
	EGameplayModOp__Max4                                                             = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x04
enum EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None0                                               = 0,
	EGameplayEffectStackingType__AggregateBySource1                                  = 1,
	EGameplayEffectStackingType__AggregateByTarget2                                  = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX3                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x03
enum EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved0                                             = 0,
	EGameplayTagEventType__AnyCountChange1                                           = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX2                                = 2
};

