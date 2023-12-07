
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VertexPaintDetectionPlugin.

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectAdditionalDataToPassThrough
/// Size: 0x0EE0 (0x000000 - 0x000EE0)
struct FVertexDetectAdditionalDataToPassThrough
{ 
	AActor*                                            passThrough_Actor;                                          // 0x0000   (0x0008)  
	UPrimitiveComponent*                               passThrough_PrimitiveComponent;                             // 0x0008   (0x0008)  
	bool                                               passThrough_Bool1;                                          // 0x0010   (0x0001)  
	bool                                               passThrough_Bool2;                                          // 0x0011   (0x0001)  
	char                                               passThrough_Byte1;                                          // 0x0012   (0x0001)  
	char                                               passThrough_Byte2;                                          // 0x0013   (0x0001)  
	float                                              passThrough_Float1;                                         // 0x0014   (0x0004)  
	float                                              passThrough_Float2;                                         // 0x0018   (0x0004)  
	int32_t                                            passThrough_Int1;                                           // 0x001C   (0x0004)  
	int32_t                                            passThrough_Int2;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            passThrough_Vector1;                                        // 0x0028   (0x0018)  
	FVector                                            passThrough_Vector2;                                        // 0x0040   (0x0018)  
	FVector                                            passThrough_Vector3;                                        // 0x0058   (0x0018)  
	FVector                                            passThrough_Vector4;                                        // 0x0070   (0x0018)  
	FRotator                                           passThrough_Rotator1;                                       // 0x0088   (0x0018)  
	FRotator                                           passThrough_Rotator2;                                       // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         passThrough_Transform;                                      // 0x00C0   (0x0060)  
	FString                                            passThrough_String1;                                        // 0x0120   (0x0010)  
	FString                                            passThrough_String2;                                        // 0x0130   (0x0010)  
	FName                                              passThrough_Name;                                           // 0x0140   (0x0008)  
	TEnumAsByte<EPhysicalSurface>                      passThrough_PhysicsSurface1;                                // 0x0148   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      passThrough_PhysicsSurface2;                                // 0x0149   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x014A   (0x0006)  MISSED
	UPhysicalMaterial*                                 passThrough_PhysicalMaterial1;                              // 0x0150   (0x0008)  
	TEnumAsByte<ECollisionChannel>                     passThrough_ObjectCollisionChannel;                         // 0x0158   (0x0001)  
	TEnumAsByte<EObjectTypeQuery>                      passThrough_ObjectType;                                     // 0x0159   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x015A   (0x0006)  MISSED
	UObject*                                           passThrough_UObject1;                                       // 0x0160   (0x0008)  
	UObject*                                           passThrough_UObject2;                                       // 0x0168   (0x0008)  
	FVertexDetectMeshDataStruct                        passThrough_MeshVertexData;                                 // 0x0170   (0x0070)  
	FVertexDetectClosestVertexDataResultStruct         passThrough_ClosestVertexInfo;                              // 0x01E0   (0x01A0)  
	FVertexDetectEstimatedColorAtHitLocationResultStruct passThrough_EstimatedColorAtHitLocationInfo;              // 0x0380   (0x0138)  
	FVertexDetectAvarageColorInAreaInfo                passThrough_AvarageColorInAreaInfo;                         // 0x04B8   (0x0118)  
	FVertexDetectAmountOfPaintedColorsOfEachChannel    passThrough_AmountOfPaintedColorsOfEachChannel;             // 0x05D0   (0x0034)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0604   (0x0004)  MISSED
	FVertexDetectVertexColorsOnEachBone                passThrough_vertexColorsOnEachBone;                         // 0x0608   (0x0058)  
	FVertexDetectTaskResultInfo                        passThrough_TaskResultInfo;                                 // 0x0660   (0x0014)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0674   (0x0004)  MISSED
	FVertexDetectInfoStruct                            passThrough_DetectedMeshWithSettings;                       // 0x0678   (0x00C8)  
	FVertexDetectGetColorsOnlyStruct                   gotAllVertexColorsWithSettings;                             // 0x0740   (0x0050)  
	FVertexPaintAtLocationStruct                       meshPaintedWithSettings;                                    // 0x0790   (0x02B0)  
	FVertexPainthWithinAreaStruct                      areaWithinMeshPaintedWithSettings;                          // 0x0A40   (0x01D0)  
	FVertexPaintOnEntireMeshStruct                     entireMeshPaintedWithSettings;                              // 0x0C10   (0x01C0)  
	FVertexPaintColorSnippetStruct                     paintColorSnippetWithSettings;                              // 0x0DD0   (0x0098)  
	FVertexPaintStruct                                 setMeshComponentVertexColorSettings;                        // 0x0E68   (0x0070)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0ED8   (0x0008)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectFundementalStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVertexDetectFundementalStruct
{ 
	AActor*                                            Actor;                                                      // 0x0000   (0x0008)  
	UPrimitiveComponent*                               MeshComponent;                                              // 0x0008   (0x0008)  
	FVertexDetectEventSettings                         callbackSettings;                                           // 0x0010   (0x0038)  
	FVertexPaintMultiThreadSettingsStruct              multiThreadSettings;                                        // 0x0048   (0x0002)  
	bool                                               ignoreTaskQueueLimit;                                       // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintMultiThreadSettingsStruct
/// Size: 0x0002 (0x000000 - 0x000002)
struct FVertexPaintMultiThreadSettingsStruct
{ 
	bool                                               useMultithreadingForCalculations;                           // 0x0000   (0x0001)  
	EThreadPriorityWrapper                             multithreadPriority;                                        // 0x0001   (0x0001)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectEventSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVertexDetectEventSettings
{ 
	bool                                               runCallbackDelegate;                                        // 0x0000   (0x0001)  
	bool                                               runCallbackInterfaces;                                      // 0x0001   (0x0001)  
	bool                                               includeVertexDataOnlyForLOD0;                               // 0x0002   (0x0001)  
	bool                                               includeColorsOfEachBone;                                    // 0x0003   (0x0001)  
	FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel includeAmountOfPaintedColorsOfEachChannel;              // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVertexDetectCompareMeshColorsToColorArrayStruct   compareMeshColorsToColorArray;                              // 0x0010   (0x0020)  
	bool                                               includeVertexColorData;                                     // 0x0030   (0x0001)  
	bool                                               includeSerializedVertexColorData;                           // 0x0031   (0x0001)  
	bool                                               includeVertexPositionData;                                  // 0x0032   (0x0001)  
	bool                                               includeVertexNormalData;                                    // 0x0033   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectCompareMeshColorsToColorArrayStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectCompareMeshColorsToColorArrayStruct
{ 
	bool                                               compareMeshColorsToColorArrayAtLOD0;                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FColor>                                     colorArrayToCompareWith;                                    // 0x0008   (0x0010)  
	float                                              rangeMeshColorHasToBeWithin;                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectIncludeAmountOfPaintedColorsOfEachChannel
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel
{ 
	bool                                               includeAmountOfPaintedColorsOfEachChannel;                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              includeAmountOfPaintedColorsOfEachChannel_IfMinColorAmount; // 0x0004   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintStruct
/// Size: 0x0020 (0x000050 - 0x000070)
struct FVertexPaintStruct : FVertexDetectFundementalStruct
{ 
	FVertexPaintOverridePaintUpToLOD                   overrideLOD;                                                // 0x0050   (0x0008)  
	bool                                               affectClothPhysics;                                         // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<AActor*>                                    canOnlyApplyPaintOnTheseActors;                             // 0x0060   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintOverridePaintUpToLOD
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexPaintOverridePaintUpToLOD
{ 
	bool                                               overrideLODToPaintUpTo;                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            amountOfLODsToPaint;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintColorSnippetStruct
/// Size: 0x0028 (0x000070 - 0x000098)
struct FVertexPaintColorSnippetStruct : FVertexPaintStruct
{ 
	FGameplayTag                                       colorSnippetTag;                                            // 0x0070   (0x0008)  
	FGameplayTag                                       randomizeAnyColorSnippetTagUnderThisCategory;               // 0x0078   (0x0008)  
	FString                                            colorSnippetID;                                             // 0x0080   (0x0010)  
	UVertexPaintColorSnippetDataAsset*                 colorSnippetDataAssetSnippetIsStoredIn;                     // 0x0090   (0x0008)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintColorSettingStruct
/// Size: 0x0140 (0x000070 - 0x0001B0)
struct FVertexPaintColorSettingStruct : FVertexPaintStruct
{ 
	FVertexDetectRGBAStruct                            applyVertexColorSettings;                                   // 0x0070   (0x0100)  
	FVertexPaintingLimitStruct                         limitPaintColor;                                            // 0x0170   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation onlyAffectVerticesWithDirectionToLocation;        // 0x0188   (0x0028)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVertexPaintOnlyAffectVerticesWithDirectionToActorOrLocation
{ 
	bool                                               onlyAffectVerticesWithDirectionToActorOrLocation;           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              minDotProductToActorOrLocation;                             // 0x0004   (0x0004)  
	AActor*                                            Actor;                                                      // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintingLimitStruct
/// Size: 0x0014 (0x000000 - 0x000014)
struct FVertexPaintingLimitStruct
{ 
	bool                                               usePaintLimits;                                             // 0x0000   (0x0001)  
	bool                                               limitColorIfTheColorWasAlreadyOverTheLimit;                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              paintLimitOnRedChannel;                                     // 0x0004   (0x0004)  
	float                                              paintLimitOnGreenChannel;                                   // 0x0008   (0x0004)  
	float                                              paintLimitOnBlueChannel;                                    // 0x000C   (0x0004)  
	float                                              paintLimitOnAlphaChannel;                                   // 0x0010   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectRGBAStruct
/// Size: 0x0100 (0x000000 - 0x000100)
struct FVertexDetectRGBAStruct
{ 
	EApplyVertexColorSetting                           applyVertexColorSetting;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              redColor;                                                   // 0x0004   (0x0004)  
	FVertexDetectPaintColorConditionStruct             redColorCondition;                                          // 0x0008   (0x0038)  
	float                                              greenColor;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVertexDetectPaintColorConditionStruct             greenColorCondition;                                        // 0x0048   (0x0038)  
	float                                              blueColor;                                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FVertexDetectPaintColorConditionStruct             blueColorCondition;                                         // 0x0088   (0x0038)  
	float                                              alphaColor;                                                 // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FVertexDetectPaintColorConditionStruct             alphaColorCondition;                                        // 0x00C8   (0x0038)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPaintColorConditionStruct
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVertexDetectPaintColorConditionStruct
{ 
	TArray<FVertexDetectPaintColorCondition_IsWithinColorRangeStruct> ifVertexColorIsWithinRange;                  // 0x0000   (0x0010)  
	TArray<FVertexDetectPaintColorCondition_HasLineOfSightStruct> ifVertexHasLineOfSightTo;                        // 0x0010   (0x0010)  
	TArray<FVertexDetectPaintColorCondition_IsBoneStruct> ifVertexIsOnBone;                                        // 0x0020   (0x0010)  
	bool                                               applyColorStrengthIfConditionIsNotMet;                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              colorStrengthIfConditionIsNotMet;                           // 0x0034   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPaintColorCondition_IsBoneStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexDetectPaintColorCondition_IsBoneStruct
{ 
	FName                                              ifVertexIsAtBone;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPaintColorCondition_HasLineOfSightStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVertexDetectPaintColorCondition_HasLineOfSightStruct
{ 
	AActor*                                            ifVertexHasLineOfSightToActor;                              // 0x0000   (0x0008)  
	FVector                                            ifVertexHasLineOfSightToPosition;                           // 0x0008   (0x0018)  
	float                                              distanceFromVertexPositionToStartTrace;                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<TEnumAsByte>                                checkLineOfSightAgainstObjectTypes;                         // 0x0028   (0x0010)  
	bool                                               ignoreMeshActorTryingToApplyPaintOn;                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<AActor*>                                    lineOfSightTraceActorsToIgnore;                             // 0x0040   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPaintColorCondition_IsWithinColorRangeStruct
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVertexDetectPaintColorCondition_IsWithinColorRangeStruct
{ 
	Enum_SurfaceAtChannel                              ifVertexColorChannelWithinColorRange;                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ifCurrentVertexColorValueIsHigherOrEqualThan;               // 0x0004   (0x0004)  
	float                                              ifCurrentVertexColorValueIsLessOrEqualThan;                 // 0x0008   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintOnEntireMeshStruct
/// Size: 0x0010 (0x0001B0 - 0x0001C0)
struct FVertexPaintOnEntireMeshStruct : FVertexPaintColorSettingStruct
{ 
	FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct paintOnRandomVerticesSettings;                           // 0x01B0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPaintOnEntireMeshRandomizeSettingsStruct
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVertexDetectPaintOnEntireMeshRandomizeSettingsStruct
{ 
	bool                                               paintAtRandomVerticesSpreadOutOverTheEntireMesh;            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint; // 0x0004   (0x0004)  
	Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod; // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPainthWithinAreaStruct
/// Size: 0x0020 (0x0001B0 - 0x0001D0)
struct FVertexPainthWithinAreaStruct : FVertexPaintColorSettingStruct
{ 
	TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin;                    // 0x01B0   (0x0010)  
	float                                              extraExtentToApplyPaintOn;                                  // 0x01C0   (0x0004)  
	float                                              areaOfEffectWithFullColor;                                  // 0x01C4   (0x0004)  
	float                                              fallOffStrength;                                            // 0x01C8   (0x0004)  
	EVertexPaintWithinAreaFallOffType                  falloffType;                                                // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01CD   (0x0003)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPainthWithinArea_ComponentToCheckIfIsWithinInfo
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo
{ 
	UPrimitiveComponent*                               componentToCheckIfIsWithin;                                 // 0x0000   (0x0008)  
	Enum_PaintWithinAreaShape                          paintWithinAreaShape;                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E7];                                     // 0x0009   (0x01E7)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintAtLocationStruct
/// Size: 0x0100 (0x0001B0 - 0x0002B0)
struct FVertexPaintAtLocationStruct : FVertexPaintColorSettingStruct
{ 
	FVertexDetectAndPaintFundementalsStruct            hitFundementals;                                            // 0x01B0   (0x0068)  
	FVertexDetectPaintAtLocationAreaSettings           paintAtAreaSettings;                                        // 0x0218   (0x0014)  
	FVertexDetectEstimatedColorAtHitLocationStruct     getEstimatedColorAtHitLocationSettings;                     // 0x022C   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	FVertexDetectWhenPaintingSettings                  detection;                                                  // 0x0238   (0x0078)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectWhenPaintingSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FVertexDetectWhenPaintingSettings
{ 
	bool                                               runGetClosestVertexDataOnMeshBeforeApplyingPaint;           // 0x0000   (0x0001)  
	bool                                               runGetClosestVertexDataOnMeshAfterApplyingPaint;            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FVertexDetectGetAverageColorStruct                 getAverageColorInAreaSettings;                              // 0x0004   (0x0008)  
	bool                                               useCustomHitFundementalsForDetection;                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVertexDetectAndPaintFundementalsStruct            detectHitFundementals;                                      // 0x0010   (0x0068)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectAndPaintFundementalsStruct
/// Size: 0x0068 (0x000000 - 0x000068)
struct FVertexDetectAndPaintFundementalsStruct
{ 
	FVector                                            HitLocation;                                                // 0x0000   (0x0018)  
	FVector                                            hitLocationInComponentSpace;                                // 0x0018   (0x0018)  
	FVector                                            hitNormal;                                                  // 0x0030   (0x0018)  
	FName                                              hitBone;                                                    // 0x0048   (0x0008)  
	int32_t                                            optionalFaceIndexForStaticMeshComponents;                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            runTaskFor;                                                 // 0x0058   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectGetAverageColorStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexDetectGetAverageColorStruct
{ 
	float                                              areaRangeToGetAvarageColorFrom;                             // 0x0000   (0x0004)  
	float                                              VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor;  // 0x0004   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectEstimatedColorAtHitLocationStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexDetectEstimatedColorAtHitLocationStruct
{ 
	bool                                               getEstimatedColorAtHitLocation;                             // 0x0000   (0x0001)  
	bool                                               onlyGetIfMeshHasMaxAmountOfVertices;                        // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            maxAmountOfVertices;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPaintAtLocationAreaSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FVertexDetectPaintAtLocationAreaSettings
{ 
	float                                              areaOfEffect;                                               // 0x0000   (0x0004)  
	float                                              areaOfEffectWithFullColor;                                  // 0x0004   (0x0004)  
	float                                              fallOffStrength;                                            // 0x0008   (0x0004)  
	float                                              VertexNormalToHitNormal_MinimumDotProductToGetPainted_StaticMesh; // 0x000C   (0x0004)  
	float                                              VertexNormalToHitNormal_MinimumDotProductToGetPainted_SkeletalMesh; // 0x0010   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectGetColorsOnlyStruct
/// Size: 0x0000 (0x000050 - 0x000050)
struct FVertexDetectGetColorsOnlyStruct : FVertexDetectFundementalStruct
{ 
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectInfoStruct
/// Size: 0x0078 (0x000050 - 0x0000C8)
struct FVertexDetectInfoStruct : FVertexDetectFundementalStruct
{ 
	FVertexDetectGetAverageColorStruct                 getAverageColorInAreaSettings;                              // 0x0050   (0x0008)  
	FVertexDetectAndPaintFundementalsStruct            hitFundementals;                                            // 0x0058   (0x0068)  
	FVertexDetectEstimatedColorAtHitLocationStruct     getEstimatedColorAtHitLocationSettings;                     // 0x00C0   (0x0008)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectTaskResultInfo
/// Size: 0x0014 (0x000000 - 0x000014)
struct FVertexDetectTaskResultInfo
{ 
	bool                                               taskSuccessfull;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              taskDuration;                                               // 0x0004   (0x0004)  
	bool                                               anyVertexColorGotChangedByPaintJob;                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVertexDetectCompareMeshColorsToColorArrayResultStruct compareMeshColorsToColorArrayResult;                    // 0x000C   (0x0008)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectCompareMeshColorsToColorArrayResultStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVertexDetectCompareMeshColorsToColorArrayResultStruct
{ 
	bool                                               successfullyComparedMeshColorsToColorArray;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              matchingPercent;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectVertexColorsOnEachBone
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVertexDetectVertexColorsOnEachBone
{ 
	bool                                               successFullyGotColorsForEachBone;                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TMap<FName, FVertexDetectBoneColorsStruct>         nameAndColorOfEachBone;                                     // 0x0008   (0x0050)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectBoneColorsStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexDetectBoneColorsStruct
{ 
	TArray<FColor>                                     boneVertexColors;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectAmountOfPaintedColorsOfEachChannel
/// Size: 0x0034 (0x000000 - 0x000034)
struct FVertexDetectAmountOfPaintedColorsOfEachChannel
{ 
	bool                                               successfullyGotVerticesOfEachChannelAtTheMinAmount;         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              amountOfVerticesWithAnyRedPaintedAtTheMinAmount;            // 0x0004   (0x0004)  
	float                                              amountOfRedChannelPercentPaintedAtTheMinAmount;             // 0x0008   (0x0004)  
	float                                              averageAmountOfRedColorAtTheMinAmount;                      // 0x000C   (0x0004)  
	float                                              amountOfVerticesWithAnyGreenPaintedAtTheMinAmount;          // 0x0010   (0x0004)  
	float                                              amountOfGreenChannelPercentPaintedAtTheMinAmount;           // 0x0014   (0x0004)  
	float                                              averageAmountOfGreenColorAtTheMinAmount;                    // 0x0018   (0x0004)  
	float                                              amountOfVerticesWithAnyBluePaintedAtTheMinAmount;           // 0x001C   (0x0004)  
	float                                              amountOfBlueChannelPercentPaintedAtTheMinAmount;            // 0x0020   (0x0004)  
	float                                              averageAmountOfBlueColorAtTheMinAmount;                     // 0x0024   (0x0004)  
	float                                              amountOfVerticesWithAnyAlphaPaintedAtTheMinAmount;          // 0x0028   (0x0004)  
	float                                              amountOfAlphaChannelPercentPaintedAtTheMinAmount;           // 0x002C   (0x0004)  
	float                                              averageAmountOfAlphaColorAtTheMinAmount;                    // 0x0030   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectAvarageColorInAreaInfo
/// Size: 0x0118 (0x000000 - 0x000118)
struct FVertexDetectAvarageColorInAreaInfo
{ 
	FLinearColor                                       avarageVertexColorsWithinAreaOfEffect;                      // 0x0000   (0x0010)  
	FVertexDetectPhysicsSurfaceDataStruct              avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial; // 0x0010   (0x0108)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPhysicsSurfaceDataStruct
/// Size: 0x0108 (0x000000 - 0x000108)
struct FVertexDetectPhysicsSurfaceDataStruct
{ 
	bool                                               physicsSurfaceSuccessfullyAcquired;                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVertexDetectMostDominantPhysicsSurfaceInfo        mostDominantPhysicsSurfaceInfo;                             // 0x0008   (0x0030)  
	FVertexDetectPhysicsSurfaceDataStruct_AtDefault    physicsSurface_AtDefault;                                   // 0x0038   (0x0020)  
	FVertexDetectPhysicsSurfaceDataStruct_AtRed        physicsSurface_AtRed;                                       // 0x0058   (0x0020)  
	FVertexDetectPhysicsSurfaceDataStruct_AtGreen      physicsSurface_AtGreen;                                     // 0x0078   (0x0020)  
	FVertexDetectPhysicsSurfaceDataStruct_AtBlue       physicsSurface_AtBlue;                                      // 0x0098   (0x0020)  
	FVertexDetectPhysicsSurfaceDataStruct_AtAlpha      physicsSurface_AtAlpha;                                     // 0x00B8   (0x0020)  
	TArray<TEnumAsByte>                                physicalSurfacesAsArray;                                    // 0x00D8   (0x0010)  
	TArray<FString>                                    surfacesAsStringArray;                                      // 0x00E8   (0x0010)  
	TArray<float>                                      surfaceValuesArray;                                         // 0x00F8   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPhysicsSurfaceDataStruct_AtAlpha
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectPhysicsSurfaceDataStruct_AtAlpha
{ 
	TEnumAsByte<EPhysicalSurface>                      physicalSurfaceAtAlphaChannel;                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            physicalSurfaceAsStringAtAlphaChannel;                      // 0x0008   (0x0010)  
	float                                              physicalSurfaceValueAtAlphaChannel;                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPhysicsSurfaceDataStruct_AtBlue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectPhysicsSurfaceDataStruct_AtBlue
{ 
	TEnumAsByte<EPhysicalSurface>                      physicalSurfaceAtBlueChannel;                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            physicalSurfaceAsStringAtBlueChannel;                       // 0x0008   (0x0010)  
	float                                              physicalSurfaceValueAtBlueChannel;                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPhysicsSurfaceDataStruct_AtGreen
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectPhysicsSurfaceDataStruct_AtGreen
{ 
	TEnumAsByte<EPhysicalSurface>                      physicalSurfaceAtGreenChannel;                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            physicalSurfaceAsStringAtGreenChannel;                      // 0x0008   (0x0010)  
	float                                              physicalSurfaceValueAtGreenChannel;                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPhysicsSurfaceDataStruct_AtRed
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectPhysicsSurfaceDataStruct_AtRed
{ 
	TEnumAsByte<EPhysicalSurface>                      physicalSurfaceAtRedChannel;                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            physicalSurfaceAsStringAtRedChannel;                        // 0x0008   (0x0010)  
	float                                              physicalSurfaceValueAtRedChannel;                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectPhysicsSurfaceDataStruct_AtDefault
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectPhysicsSurfaceDataStruct_AtDefault
{ 
	bool                                               materialRegisteredToIncludeDefaultChannel;                  // 0x0000   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      physicalSurfaceAtDefault;                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            physicalSurfaceAsStringAtDefault;                           // 0x0008   (0x0010)  
	float                                              physicalSurfaceValueAtDefault;                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectMostDominantPhysicsSurfaceInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVertexDetectMostDominantPhysicsSurfaceInfo
{ 
	TEnumAsByte<EPhysicalSurface>                      mostDominantPhysicsSurface;                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            mostDominantPhysicsSurfaceAsString;                         // 0x0008   (0x0010)  
	float                                              mostDominantPhysicstSurfaceValue;                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<Enum_SurfaceAtChannel>                      mostDominantPhysicsSurfaceAtVertexColorChannels;            // 0x0020   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectEstimatedColorAtHitLocationResultStruct
/// Size: 0x0138 (0x000000 - 0x000138)
struct FVertexDetectEstimatedColorAtHitLocationResultStruct
{ 
	bool                                               estimatedColorAtHitLocationDataSuccessfullyAcquired;        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       estimatedColorAtHitLocation;                                // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVertexDetectPhysicsSurfaceDataStruct              physicalSurfaceInfo;                                        // 0x0018   (0x0108)  
	FVector                                            worldSpaceLocationWeEstimatedTheColorAt;                    // 0x0120   (0x0018)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClosestVertexDataResultStruct
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FVertexDetectClosestVertexDataResultStruct
{ 
	bool                                               closestVertexDataSuccessfullyAcquired;                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVertexDetectClosestVertexGeneralInfoStruct        closestVertexGeneralInfo;                                   // 0x0008   (0x0090)  
	FVertexDetectPhysicsSurfaceDataStruct              closestVertexPhysicalSurfaceInfo;                           // 0x0098   (0x0108)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClosestVertexGeneralInfoStruct
/// Size: 0x0090 (0x000000 - 0x000090)
struct FVertexDetectClosestVertexGeneralInfoStruct
{ 
	int32_t                                            closestVertexIndex;                                         // 0x0000   (0x0004)  
	int32_t                                            closestSection;                                             // 0x0004   (0x0004)  
	FLinearColor                                       closestVertexColors;                                        // 0x0008   (0x0010)  
	FVertexDetectClosestVertexPositionStruct           closestVertexPositionInfo;                                  // 0x0018   (0x0030)  
	FVertexDetectClosestVertexNormalStruct             closestVertexNormalInfo;                                    // 0x0048   (0x0030)  
	UMaterialInterface*                                closestVertexMaterial;                                      // 0x0078   (0x0008)  
	TArray<FVector2D>                                  closestVertexUVAtEachUVChannel;                             // 0x0080   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClosestVertexNormalStruct
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVertexDetectClosestVertexNormalStruct
{ 
	FVector                                            closestVertexNormal;                                        // 0x0000   (0x0018)  
	FVector                                            closestVertexNormalLocal;                                   // 0x0018   (0x0018)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClosestVertexPositionStruct
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVertexDetectClosestVertexPositionStruct
{ 
	FVector                                            closestVertexPositionWorld;                                 // 0x0000   (0x0018)  
	FVector                                            closestVertexPositionActorLocal;                            // 0x0018   (0x0018)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectMeshDataStruct
/// Size: 0x0070 (0x000000 - 0x000070)
struct FVertexDetectMeshDataStruct
{ 
	TWeakObjectPtr<UObject*>                           meshSource;                                                 // 0x0000   (0x0030)  
	TWeakObjectPtr<UPrimitiveComponent*>               meshComp;                                                   // 0x0030   (0x0030)  
	TArray<FVertexDetectMeshDataPerLODStruct>          meshDataPerLOD;                                             // 0x0060   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectMeshDataPerLODStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVertexDetectMeshDataPerLODStruct
{ 
	int32_t                                            lod;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FColor>                                     meshVertexColorsPerLODArray;                                // 0x0008   (0x0010)  
	FVertexDetectSerializedColorsPerLODStruct          serializedVertexColorsData;                                 // 0x0018   (0x0018)  
	TArray<FVector>                                    meshVertexPositionsInComponentSpacePerLODArray;             // 0x0030   (0x0010)  
	TArray<FVector>                                    meshVertexNormalsPerLODArray;                               // 0x0040   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectSerializedColorsPerLODStruct
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVertexDetectSerializedColorsPerLODStruct
{ 
	int32_t                                            lod;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            colorsAtLODAsJSonString;                                    // 0x0008   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintSetMeshComponentVertexColorsUsingSerializedString
/// Size: 0x0028 (0x000070 - 0x000098)
struct FVertexPaintSetMeshComponentVertexColorsUsingSerializedString : FVertexPaintStruct
{ 
	FString                                            serializedColorDataAtLOD0;                                  // 0x0070   (0x0010)  
	bool                                               printLogsToScreen;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              printLogsToScreen_Duration;                                 // 0x0084   (0x0004)  
	bool                                               printLogsToOutputLog;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	UVertexPaintDetectionComponent*                    optionalCallbackComponent;                                  // 0x0090   (0x0008)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintClothOverlapComponentsStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexPaintClothOverlapComponentsStruct
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectColorSnippetReferenceDataStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVertexDetectColorSnippetReferenceDataStruct
{ 
	TMap<FString, TWeakObjectPtr>                      vertexColorSnippetsAndDataAssetsStoredOn;                   // 0x0000   (0x0050)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectColorSnippetDataStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FVertexDetectColorSnippetDataStruct
{ 
	TWeakObjectPtr<UObject*>                           objectColorSnippetBelongsTo;                                // 0x0000   (0x0030)  
	TArray<FVertexDetectMeshDataPerLODStruct>          colorSnippetDataPerLOD;                                     // 0x0030   (0x0010)  
	TArray<FVertexDetectSerializedColorsPerLODStruct>  colorSnippetPerLODAsRapidJSon;                              // 0x0040   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintColorToApplyToVertexChannelsDependingOnPhysicsMaterial
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVertexPaintColorToApplyToVertexChannelsDependingOnPhysicsMaterial
{ 
	TEnumAsByte<EPhysicalSurface>                      physicsMaterial;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TMap<Enum_SurfaceAtChannel, float>                 channelsAndAmountToApply;                                   // 0x0008   (0x0050)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintPhysicsSurfaceBlendingSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FVertexPaintPhysicsSurfaceBlendingSettings
{ 
	TWeakObjectPtr<UMaterialInterface*>                associatedMaterial;                                         // 0x0000   (0x0030)  
	TArray<TEnumAsByte>                                physicsSurfacesThatCanBlend;                                // 0x0030   (0x0010)  
	float                                              minAmountOnEachSurfaceToBeAbleToBlend;                      // 0x0040   (0x0004)  
	TEnumAsByte<EPhysicalSurface>                      physicsSurfaceToResultIn;                                   // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintMaterialDataAssetStruct
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVertexPaintMaterialDataAssetStruct
{ 
	bool                                               includeDefaultChannelWhenDetecting;                         // 0x0000   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      atDefault;                                                  // 0x0001   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      paintedAtRed;                                               // 0x0002   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      paintedAtGreen;                                             // 0x0003   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      paintedAtBlue;                                              // 0x0004   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      paintedAtAlpha;                                             // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	TMap<TEnumAsByte, FVertexPaintColorToApplyToVertexChannelsDependingOnPhysicsMaterial> vertexColorToApplyOnMaterialBasedOffPhysicsSurface; // 0x0008   (0x0050)  
	TMap<TEnumAsByte, FVertexPaintPhysicsSurfaceBlendingSettings> physicsSurfaceBlendingSettings;                  // 0x0058   (0x0050)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsDampingSettingsStruct
/// Size: 0x0004 (0x000000 - 0x000004)
struct FVertexDetectClothPhysicsDampingSettingsStruct
{ 
	float                                              SetDamping_dampingCoefficient;                              // 0x0000   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsGravitySettingsStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectClothPhysicsGravitySettingsStruct
{ 
	float                                              SetGravity_gravityScale;                                    // 0x0000   (0x0004)  
	bool                                               SetGravity_overrideGravity;                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FVector                                            SetGravity_gravityOverride;                                 // 0x0008   (0x0018)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsWindSettingsStruct
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVertexDetectClothPhysicsWindSettingsStruct
{ 
	FVector2D                                          SetWind_drag;                                               // 0x0000   (0x0010)  
	FVector2D                                          SetWind_lift;                                               // 0x0010   (0x0010)  
	float                                              SetWind_airDensity;                                         // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            SetWind_windVelocity;                                       // 0x0028   (0x0018)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsAnimDriveSettingsStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectClothPhysicsAnimDriveSettingsStruct
{ 
	FVector2D                                          SetAnimDrive_Stiffness;                                     // 0x0000   (0x0010)  
	FVector2D                                          SetAnimDrive_Damping;                                       // 0x0010   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsCollisionSettingsStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexDetectClothPhysicsCollisionSettingsStruct
{ 
	float                                              SetCollision_CollisionThickness;                            // 0x0000   (0x0004)  
	float                                              SetCollision_FrictionCoefficient;                           // 0x0004   (0x0004)  
	bool                                               SetCollision_UseCCD;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              SetCollision_SelfCollisionThickness;                        // 0x000C   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsLongRangeAttachmentSettingsStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct
{ 
	FVector2D                                          LongRangeAttachment_TetherThickness;                        // 0x0000   (0x0010)  
	FVector2D                                          LongRangeAttachment_TetherScale;                            // 0x0010   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsMaterialSettingsStruct
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVertexDetectClothPhysicsMaterialSettingsStruct
{ 
	FVector2D                                          Material_EdgeStiffness;                                     // 0x0000   (0x0010)  
	FVector2D                                          Material_BendingStiffness;                                  // 0x0010   (0x0010)  
	FVector2D                                          Material_AreaStiffness;                                     // 0x0020   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsVelocityScaleSettingsStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVertexDetectClothPhysicsVelocityScaleSettingsStruct
{ 
	FVector                                            PhysicsVelocityScale_LinearVelocityScale;                   // 0x0000   (0x0018)  
	float                                              PhysicVelocityScale_AngularVelocityScale;                   // 0x0018   (0x0004)  
	float                                              PhysicsVelocityScale_FictitiousAngularVelocityScale;        // 0x001C   (0x0004)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsSetAirPressureStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexDetectClothPhysicsSetAirPressureStruct
{ 
	FVector2D                                          SetPressure_Pressure;                                       // 0x0000   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothPhysicsSettingsAtVertexColorStruct
/// Size: 0x0260 (0x000000 - 0x000260)
struct FVertexDetectClothPhysicsSettingsAtVertexColorStruct
{ 
	bool                                               SetDamping;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVertexDetectClothPhysicsDampingSettingsStruct     clothDampingSettingsWithNoColorPaintedAtChannel;            // 0x0004   (0x0004)  
	FVertexDetectClothPhysicsDampingSettingsStruct     clothDampingSettingsWithFullColorPaintedAtChannel;          // 0x0008   (0x0004)  
	bool                                               SetGravity;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVertexDetectClothPhysicsGravitySettingsStruct     clothGravitySettingsWithNoColorPaintedAtChannel;            // 0x0010   (0x0020)  
	FVertexDetectClothPhysicsGravitySettingsStruct     clothGravitySettingsWithFullColorPaintedAtChannel;          // 0x0030   (0x0020)  
	bool                                               SetWind;                                                    // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FVertexDetectClothPhysicsWindSettingsStruct        clothWindSettingsWithNoColorPaintedAtChannel;               // 0x0058   (0x0040)  
	FVertexDetectClothPhysicsWindSettingsStruct        clothWindSettingsWithFullColorPaintedAtChannel;             // 0x0098   (0x0040)  
	bool                                               SetAnimDrive;                                               // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FVertexDetectClothPhysicsAnimDriveSettingsStruct   clothAnimDriveSettingsWithNoColorPaintedAtChannel;          // 0x00E0   (0x0020)  
	FVertexDetectClothPhysicsAnimDriveSettingsStruct   clothAnimDriveSettingsWithFullColorPaintedAtChannel;        // 0x0100   (0x0020)  
	bool                                               SetCollision;                                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	FVertexDetectClothPhysicsCollisionSettingsStruct   clothCollisionSettingsWithNoColorPaintedAtChannel;          // 0x0124   (0x0010)  
	FVertexDetectClothPhysicsCollisionSettingsStruct   clothCollisionSettingsWithFullColorPaintedAtChannel;        // 0x0134   (0x0010)  
	bool                                               SetLongRangeAttachment;                                     // 0x0144   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel; // 0x0148   (0x0020)  
	FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel; // 0x0168   (0x0020)  
	bool                                               SetMaterial;                                                // 0x0188   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0189   (0x0007)  MISSED
	FVertexDetectClothPhysicsMaterialSettingsStruct    clothMaterialSettingsWithNoColorPaintedAtChannel;           // 0x0190   (0x0030)  
	FVertexDetectClothPhysicsMaterialSettingsStruct    clothMaterialSettingsWithFullColorPaintedAtChannel;         // 0x01C0   (0x0030)  
	bool                                               SetPhysicsVelocityScale;                                    // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FVertexDetectClothPhysicsVelocityScaleSettingsStruct clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel; // 0x01F8   (0x0020)  
	FVertexDetectClothPhysicsVelocityScaleSettingsStruct clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel; // 0x0218   (0x0020)  
	bool                                               SetAirPressure;                                             // 0x0238   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	FVertexDetectClothPhysicsSetAirPressureStruct      clothPhysicssAirPressureWithNoColorPaintedAtChannel;        // 0x0240   (0x0010)  
	FVertexDetectClothPhysicsSetAirPressureStruct      clothPhysicssAirPressureWithFullColorPaintedAtChannel;      // 0x0250   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectClothSettingsStruct
/// Size: 0x0980 (0x000000 - 0x000980)
struct FVertexDetectClothSettingsStruct
{ 
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtRedChannel;                         // 0x0000   (0x0260)  
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtGreenChannel;                       // 0x0260   (0x0260)  
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtBlueChannel;                        // 0x04C0   (0x0260)  
	FVertexDetectClothPhysicsSettingsAtVertexColorStruct clothPhysicsSettingsAtAlphaChannel;                       // 0x0720   (0x0260)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexDetectChaosClothPhysicsSettings
/// Size: 0x0150 (0x000000 - 0x000150)
struct FVertexDetectChaosClothPhysicsSettings
{ 
	bool                                               SetDamping;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVertexDetectClothPhysicsDampingSettingsStruct     clothDampingSettings;                                       // 0x0004   (0x0004)  
	bool                                               SetGravity;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FVertexDetectClothPhysicsGravitySettingsStruct     clothGravitySettings;                                       // 0x0010   (0x0020)  
	bool                                               SetWind;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVertexDetectClothPhysicsWindSettingsStruct        clothWindSettings;                                          // 0x0038   (0x0040)  
	bool                                               SetAnimDrive;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FVertexDetectClothPhysicsAnimDriveSettingsStruct   clothAnimDriveSettings;                                     // 0x0080   (0x0020)  
	bool                                               SetCollision;                                               // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FVertexDetectClothPhysicsCollisionSettingsStruct   clothCollisionSettings;                                     // 0x00A4   (0x0010)  
	bool                                               SetLongRangeAttachment;                                     // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FVertexDetectClothPhysicsLongRangeAttachmentSettingsStruct clothLongRangeAttachmentSettings;                   // 0x00B8   (0x0020)  
	bool                                               SetMaterial;                                                // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FVertexDetectClothPhysicsMaterialSettingsStruct    clothMaterialSettings;                                      // 0x00E0   (0x0030)  
	bool                                               SetPhysicsVelocityScale;                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FVertexDetectClothPhysicsVelocityScaleSettingsStruct clothPhysicsVelocityScaleSettings;                        // 0x0118   (0x0020)  
	bool                                               SetAirPressure;                                             // 0x0138   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FVertexDetectClothPhysicsSetAirPressureStruct      clothPhysicssAirPressureSettings;                           // 0x0140   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintSetMeshComponentVertexColors
/// Size: 0x0028 (0x000070 - 0x000098)
struct FVertexPaintSetMeshComponentVertexColors : FVertexPaintStruct
{ 
	TArray<FColor>                                     vertexColorsAtLOD0ToSet;                                    // 0x0070   (0x0010)  
	bool                                               printLogsToScreen;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              printLogsToScreen_Duration;                                 // 0x0084   (0x0004)  
	bool                                               printLogsToOutputLog;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	UVertexPaintDetectionComponent*                    optionalCallbackComponent;                                  // 0x0090   (0x0008)  
};

/// Struct /Script/VertexPaintDetectionPlugin.CalculateColorsInfo
/// Size: 0x1E80 (0x000000 - 0x001E80)
struct FCalculateColorsInfo
{ 
	unsigned char                                      UnknownData00_1[0x1E80];                                    // 0x0000   (0x1E80)  MISSED
};

/// Struct /Script/VertexPaintDetectionPlugin.VertexPaintCalculateColorsQueueArrayStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVertexPaintCalculateColorsQueueArrayStruct
{ 
	TArray<FCalculateColorsInfo>                       calculateColorsQueueArray;                                  // 0x0000   (0x0010)  
};

/// Struct /Script/VertexPaintDetectionPlugin.PaintOnLODSettingsStruct
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPaintOnLODSettingsStruct
{ 
	int32_t                                            maxAmountOfLODsToPaint;                                     // 0x0000   (0x0004)  
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintClothOverlapComponent
/// Size: 0x0130 (0x0002A0 - 0x0003D0)
class UVertexPaintClothOverlapComponent : public USceneComponent : USceneComponent
{ 
public:
	bool                                               clothOverlapTracingEnabled;                                 // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	float                                              clothVertexTraceRadius;                                     // 0x02A4   (0x0004)  
	int32_t                                            clothVertexTraceIntervall;                                  // 0x02A8   (0x0004)  
	bool                                               debugClothSphereTraces;                                     // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02AD   (0x0003)  MISSED
	USkeletalMeshComponent*                            parentSkeletalMeshComponent;                                // 0x02B0   (0x0008)  
	TArray<UClothingAssetBase*>                        parentSkeletalMeshComponentClothingAssets;                  // 0x02B8   (0x0010)  
	TArray<TEnumAsByte>                                clothObjectsToSphereTrace;                                  // 0x02C8   (0x0010)  
	TMap<AActor*, FVertexPaintClothOverlapComponentsStruct> clothOverlappingActorsAndComponent;                    // 0x02D8   (0x0050)  
	TMap<UClothingAssetBase*, FTransform>              clothBoneTransformsInComponentSpaceTemp;                    // 0x0328   (0x0050)  
	TMap<UClothingAssetBase*, FQuat>                   clothBoneQuaternionsInComponentSpaceTemp;                   // 0x0378   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintClothOverlapComponent.SetClothOverlapTracingEnabled
	void SetClothOverlapTracingEnabled(bool enableClothTracing);                                                             // [0x1727530] Final|Native|Public|BlueprintCallable 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintClothOverlapComponent.SetClothObjectsToSphereTrace
	void SetClothObjectsToSphereTrace(TArray<TEnumAsByte> Objects);                                                          // [0x17273f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintClothOverlapComponent.OnRep_ClothOverlapTracingEnabledRep
	void OnRep_ClothOverlapTracingEnabledRep();                                                                              // [0xc8f040] Final|Native|Private 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintClothOverlapComponent.GetClothObjectsToSphereTrace
	TArray<TEnumAsByte> GetClothObjectsToSphereTrace();                                                                      // [0x17258f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintColorSnippetDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UVertexPaintColorSnippetDataAsset : public UDataAsset : UDataAsset
{ 
public:
	TMap<FString, FVertexDetectColorSnippetDataStruct> snippetColorData;                                           // 0x0030   (0x0050)  
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintColorSnippetRefs
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UVertexPaintColorSnippetRefs : public UDataAsset : UDataAsset
{ 
public:
	TMap<TWeakObjectPtr, FVertexDetectColorSnippetReferenceDataStruct> staticMeshesColorSnippets;                  // 0x0030   (0x0050)  
	TMap<TWeakObjectPtr, FVertexDetectColorSnippetReferenceDataStruct> skeletalMeshesColorSnippets;                // 0x0080   (0x0050)  
	FGameplayTagContainer                              allAvailableColorSnippets;                                  // 0x00D0   (0x0020)  


	/// Functions
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintColorSnippetRefs.GetObjectFromSnippetID
	TWeakObjectPtr<UObject*> GetObjectFromSnippetID(FString snippetID);                                                      // [0x1725c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintColorSnippetRefs.GetAllColorSnippetsAndDataAssetForObject
	TMap<FString, TWeakObjectPtr> GetAllColorSnippetsAndDataAssetForObject(UObject* Object);                                 // [0x1724c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintColorSnippetRefs.ContainsColorSnippet
	bool ContainsColorSnippet(FString snippetID);                                                                            // [0x1724b60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintDetectionComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UVertexPaintDetectionComponent : public UActorComponent : UActorComponent
{ 
public:
	FMulticastInlineDelegate                           getClosestVertexDataDelegate;                               // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           getAllVertexColorsOnlyDelegate;                             // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           vertexColorsPaintedAtLocationDelegate;                      // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           vertexColorsPaintedMeshWithinAreaDelegate;                  // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           vertexColorsPaintedEntireMeshDelegate;                      // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           vertexColorsPaintColorSnippetDelegate;                      // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           vertexColorsSetMeshColorsDelegate;                          // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           vertexColorsSetMeshColorsUsingSerializedStringDelegate;     // 0x0110   (0x0010)  
	bool                                               printLogsToScreen;                                          // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              printLogsToScreen_Duration;                                 // 0x0124   (0x0004)  
	bool                                               printLogsToOutputLog;                                       // 0x0128   (0x0001)  
	bool                                               atGameThread_drawVertexPositionDebugPoint;                  // 0x0129   (0x0001)  
	bool                                               atGameThread_drawVertexNormalDebugArrow;                    // 0x012A   (0x0001)  
	bool                                               atGameThread_drawVertexPositionDebugPointOnVertexThatGotPaintApplied; // 0x012B   (0x0001)  
	bool                                               atGameThread_drawClothVertexPositionDebugPoint;             // 0x012C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	float                                              atGameThread_DrawVertexPointsDuration;                      // 0x0130   (0x0004)  
	bool                                               atGameThread_DrawPaintConditionsDebugSymbols;               // 0x0134   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0135   (0x0003)  MISSED
	float                                              atGameThread_DrawPaintConditionsDebugSymbolsDuration;       // 0x0138   (0x0004)  
	bool                                               drawGetClosestVertexDataDebugSymbols;                       // 0x013C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	float                                              drawGetClosestVertexDataDebugSymbolsDuration;               // 0x0140   (0x0004)  
	bool                                               drawGetEstimatedColorAtHitLocationDebugSymbols;             // 0x0144   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	float                                              drawGetEstimatedColorAtHitLocationDebugSymbolsDuration;     // 0x0148   (0x0004)  
	bool                                               drawPaintWithinAreaDebugSymbols;                            // 0x014C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x014D   (0x0003)  MISSED
	float                                              drawPaintWithinAreaDebugSymbolsDuration;                    // 0x0150   (0x0004)  
	unsigned char                                      UnknownData06_5[0x54];                                      // 0x0154   (0x0054)  MISSED
	UVertexPaintDetectionGISubSystem*                  vertexPaintGameInstanceSubsystem_Global;                    // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData07_6[0x20];                                      // 0x01B0   (0x0020)  MISSED


	/// Functions
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintDetectionComponent.GetCurrentTasksInitiatedByComponent
	void GetCurrentTasksInitiatedByComponent(int32_t& totalAmountOfTasks, int32_t& amountOfGetClosestVertexDataTasks, int32_t& amountOfGetAllVertexColorsOnlyTasks, int32_t& amountOfPaintAtLocationTasks, int32_t& amountOfPaintWithinAreaTasks, int32_t& amountOfPaintEntireMeshTasks, int32_t& amountOfPaintColorSnippetTasks); // [0x17259b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintDetectionEngSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UVertexPaintDetectionEngSubsystem : public UEngineSubsystem : UEngineSubsystem
{ 
public:
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintDetectionGISubSystem
/// Size: 0x01A8 (0x000030 - 0x0001D8)
class UVertexPaintDetectionGISubSystem : public UGameInstanceSubsystem : UGameInstanceSubsystem
{ 
public:
	FMulticastInlineDelegate                           vertexPaintTaskFinished;                                    // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           vertexDetectTaskFinished;                                   // 0x0040   (0x0010)  
	TMap<UPrimitiveComponent*, FVertexPaintCalculateColorsQueueArrayStruct> calculateColorsPaintQueue;             // 0x0050   (0x0050)  
	TMap<UPrimitiveComponent*, FVertexPaintCalculateColorsQueueArrayStruct> calculateColorsDetectionQueue;         // 0x00A0   (0x0050)  
	TMap<int32_t, FCalculateColorsInfo>                onGoingAsyncTasks;                                          // 0x00F0   (0x0050)  
	FTimerHandle                                       vertexColorPaint_QueueThreadPool_ResetTimer;                // 0x0140   (0x0008)  
	UWorld*                                            vertexColorPaint_QueueThreadPool_ResetTimerWorld;           // 0x0148   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0150   (0x0018)  MISSED
	TArray<FTimerHandle>                               cleanupOldVertexColorBufferTimers;                          // 0x0168   (0x0010)  
	TMap<UPrimitiveComponent*, int32_t>                meshesPaintedOnSinceSessionStarted;                         // 0x0178   (0x0050)  
	TArray<UPhysicalMaterial*>                         cachedPhysicalMaterialAssets;                               // 0x01C8   (0x0010)  
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintDetectionInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVertexPaintDetectionInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintDetectionSettings
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UVertexPaintDetectionSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	TWeakObjectPtr<UVertexPaintOptimizationDataAsset*> vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse;   // 0x0038   (0x0030)  
	TWeakObjectPtr<UVertexPaintMaterialDataAsset*>     vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse;      // 0x0068   (0x0030)  
	TWeakObjectPtr<UVertexPaintColorSnippetRefs*>      vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse; // 0x0098   (0x0030)  
	bool                                               vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled; // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration; // 0x00CC   (0x0004)  
	int32_t                                            vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh; // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVertexPaintFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintMaterialDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UVertexPaintMaterialDataAsset : public UDataAsset : UDataAsset
{ 
public:
	TMap<TWeakObjectPtr, FVertexPaintMaterialDataAssetStruct> vertexPaintMaterialInterfaces;                       // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintMaterialDataAsset.RemoveFromVertexPaintMaterialInterface
	void RemoveFromVertexPaintMaterialInterface(TWeakObjectPtr<UMaterialInterface*> Material);                               // [0x1737050] Final|Native|Public|BlueprintCallable 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintMaterialDataAsset.IsMaterialAddedToPaintOnMaterialDataAsset
	bool IsMaterialAddedToPaintOnMaterialDataAsset(TWeakObjectPtr<UMaterialInterface*> Material);                            // [0x1735f30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintMaterialDataAsset.GetVertexPaintMaterialInterface
	TMap<TWeakObjectPtr, FVertexPaintMaterialDataAssetStruct> GetVertexPaintMaterialInterface();                             // [0x1735e10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VertexPaintDetectionPlugin.VertexPaintMaterialDataAsset.AddToVertexPaintMaterialInterface
	void AddToVertexPaintMaterialInterface(TWeakObjectPtr<UMaterialInterface*> Material, FVertexPaintMaterialDataAssetStruct materialDataAssetStruct); // [0x1733c30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VertexPaintDetectionPlugin.VertexPaintOptimizationDataAsset
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVertexPaintOptimizationDataAsset : public UDataAsset : UDataAsset
{ 
public:
	TMap<UStaticMesh*, FPaintOnLODSettingsStruct>      staticMeshNumOfLODsToPaint;                                 // 0x0030   (0x0050)  
	TMap<USkeletalMesh*, FPaintOnLODSettingsStruct>    skeletalMeshNumOfLODsToPaint;                               // 0x0080   (0x0050)  
};

/// Enum /Script/VertexPaintDetectionPlugin.EThreadPriorityWrapper
/// Size: 0x09
enum EThreadPriorityWrapper : uint8_t
{
	EThreadPriorityWrapper__TPri_Normal0                                             = 0,
	EThreadPriorityWrapper__TPri_AboveNormal1                                        = 1,
	EThreadPriorityWrapper__TPri_BelowNormal2                                        = 2,
	EThreadPriorityWrapper__TPri_Highest3                                            = 3,
	EThreadPriorityWrapper__TPri_Lowest4                                             = 4,
	EThreadPriorityWrapper__TPri_SlightlyBelowNormal5                                = 5,
	EThreadPriorityWrapper__TPri_TimeCritical6                                       = 6,
	EThreadPriorityWrapper__TPri_Num7                                                = 7,
	EThreadPriorityWrapper__TPri_MAX8                                                = 8
};

/// Enum /Script/VertexPaintDetectionPlugin.Enum_SurfaceAtChannel
/// Size: 0x06
enum Enum_SurfaceAtChannel : uint8_t
{
	Enum_SurfaceAtChannel__Default0                                                  = 0,
	Enum_SurfaceAtChannel__RedChannel1                                               = 1,
	Enum_SurfaceAtChannel__GreenChannel2                                             = 2,
	Enum_SurfaceAtChannel__BlueChannel3                                              = 3,
	Enum_SurfaceAtChannel__AlphaChannel4                                             = 4,
	Enum_SurfaceAtChannel__Enum_MAX5                                                 = 5
};

/// Enum /Script/VertexPaintDetectionPlugin.EApplyVertexColorSetting
/// Size: 0x03
enum EApplyVertexColorSetting : uint8_t
{
	EApplyVertexColorSetting__EAddVertexColor0                                       = 0,
	EApplyVertexColorSetting__ESetVertexColor1                                       = 1,
	EApplyVertexColorSetting__EApplyVertexColorSetting_MAX2                          = 2
};

/// Enum /Script/VertexPaintDetectionPlugin.Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod
/// Size: 0x03
enum Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod : uint8_t
{
	Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod__ModifiedEngineMethod0 = 0,
	Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod__DontPropogateLOD0ToAllLODs1 = 1,
	Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod__Enum_PaintEntireMeshAtRandomVertices_MAX2 = 2
};

/// Enum /Script/VertexPaintDetectionPlugin.EVertexPaintWithinAreaFallOffType
/// Size: 0x04
enum EVertexPaintWithinAreaFallOffType : uint8_t
{
	EVertexPaintWithinAreaFallOffType__SphericalFromCenter0                          = 0,
	EVertexPaintWithinAreaFallOffType__GradiantUpward1                               = 1,
	EVertexPaintWithinAreaFallOffType__GradiantDownward2                             = 2,
	EVertexPaintWithinAreaFallOffType__EVertexPaintWithinAreaFallOffType_MAX3        = 3
};

/// Enum /Script/VertexPaintDetectionPlugin.Enum_PaintWithinAreaShape
/// Size: 0x04
enum Enum_PaintWithinAreaShape : uint8_t
{
	Enum_PaintWithinAreaShape__isSquareOrRectangleShape0                             = 0,
	Enum_PaintWithinAreaShape__isSphereShape1                                        = 1,
	Enum_PaintWithinAreaShape__isComplexShape2                                       = 2,
	Enum_PaintWithinAreaShape__Enum_MAX3                                             = 3
};

