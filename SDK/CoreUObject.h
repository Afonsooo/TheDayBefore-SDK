
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CoreUObject.

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x0150 (0x000000 - 0x000150)
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FSoftObjectPath>                            SoftObjectPaths;                                            // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	TArray<FTopLevelAssetPath>                         ClassPaths;                                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0050   (0x0050)  MISSED
	TSet<FName>                                        RecursiveClassesExclusionSet;                               // 0x00A0   (0x0050)  
	TSet<FTopLevelAssetPath>                           RecursiveClassPathsExclusionSet;                            // 0x00F0   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x0140   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x0141   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x0142   (0x0001)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x0143   (0x000D)  MISSED
};

/// Struct /Script/CoreUObject.TopLevelAssetPath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTopLevelAssetPath
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              AssetName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSoftObjectPath
{ 
	FTopLevelAssetPath                                 AssetPath;                                                  // 0x0000   (0x0010)  
	FString                                            SubPathString;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAssetBundleEntry
{ 
	FName                                              BundleName;                                                 // 0x0000   (0x0008)  
	TArray<FTopLevelAssetPath>                         AssetPaths;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FAssetData
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              PackagePath;                                                // 0x0008   (0x0008)  
	FName                                              AssetName;                                                  // 0x0010   (0x0008)  
	FName                                              AssetClass;                                                 // 0x0018   (0x0008)  
	FTopLevelAssetPath                                 AssetClassPath;                                             // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAutomationEvent
{ 
	EAutomationEventType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            Context;                                                    // 0x0018   (0x0010)  
	FGuid                                              Artifact;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGuid
{ 
	int32_t                                            A;                                                          // 0x0000   (0x0004)  
	int32_t                                            B;                                                          // 0x0004   (0x0004)  
	int32_t                                            C;                                                          // 0x0008   (0x0004)  
	int32_t                                            D;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAutomationExecutionEntry
{ 
	FAutomationEvent                                   Event;                                                      // 0x0000   (0x0038)  
	FString                                            Filename;                                                   // 0x0038   (0x0010)  
	int32_t                                            LineNumber;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDateTime
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBox
{ 
	FVector                                            Min;                                                        // 0x0000   (0x0018)  
	FVector                                            Max;                                                        // 0x0018   (0x0018)  
	bool                                               IsValid;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVector
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0028 (0x000000 - 0x000028)
struct FBox2D
{ 
	FVector2D                                          Min;                                                        // 0x0000   (0x0010)  
	FVector2D                                          Max;                                                        // 0x0010   (0x0010)  
	bool                                               bIsValid;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVector2D
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Box2f
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBox2f
{ 
	FVector2f                                          Min;                                                        // 0x0000   (0x0008)  
	FVector2f                                          Max;                                                        // 0x0008   (0x0008)  
	bool                                               bIsValid;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Vector2f
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVector2f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Box3d
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBox3d
{ 
	FVector3d                                          Min;                                                        // 0x0000   (0x0018)  
	FVector3d                                          Max;                                                        // 0x0018   (0x0018)  
	bool                                               IsValid;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector3d
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVector3d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Box3f
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBox3f
{ 
	FVector3f                                          Min;                                                        // 0x0000   (0x000C)  
	FVector3f                                          Max;                                                        // 0x000C   (0x000C)  
	bool                                               IsValid;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Vector3f
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVector3f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBoxSphereBounds
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	FVector                                            BoxExtent;                                                  // 0x0018   (0x0018)  
	double                                             SphereRadius;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds3d
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBoxSphereBounds3d
{ 
	FVector3d                                          Origin;                                                     // 0x0000   (0x0018)  
	FVector3d                                          BoxExtent;                                                  // 0x0018   (0x0018)  
	double                                             SphereRadius;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds3f
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBoxSphereBounds3f
{ 
	FVector3f                                          Origin;                                                     // 0x0000   (0x000C)  
	FVector3f                                          BoxExtent;                                                  // 0x000C   (0x000C)  
	float                                              SphereRadius;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (0x000000 - 0x000004)
struct FColor
{ 
	char                                               B;                                                          // 0x0000   (0x0001)  
	char                                               G;                                                          // 0x0001   (0x0001)  
	char                                               R;                                                          // 0x0002   (0x0001)  
	char                                               A;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.DirectoryPath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDirectoryPath
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.DoubleRange
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDoubleRange
{ 
	FDoubleRangeBound                                  LowerBound;                                                 // 0x0000   (0x0010)  
	FDoubleRangeBound                                  UpperBound;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/CoreUObject.DoubleRangeBound
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDoubleRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFallbackStruct
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.FilePath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFilePath
{ 
	FString                                            FilePath;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloatInterval
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFloatRange
{ 
	FFloatRangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FFloatRangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloatRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (0x000000 - 0x000004)
struct FFrameNumber
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFrameNumberRange
{ 
	FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)  
	FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameNumberRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameRate
{ 
	int32_t                                            Numerator;                                                  // 0x0000   (0x0004)  
	int32_t                                            Denominator;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameTime
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	float                                              SubFrame;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.InputDeviceId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FInputDeviceId
{ 
	int32_t                                            InternalId;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Interval
{ 
	int32_t                                            Min;                                                        // 0x0000   (0x0004)  
	int32_t                                            Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Point
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Point
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt32Range
{ 
	FInt32RangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FInt32RangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32RangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FInt32Vector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Vector2
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt32Vector4
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
	int32_t                                            W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Int64Point
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt64Point
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInt64Vector
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
	int64_t                                            Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector2
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt64Vector2
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInt64Vector4
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
	int64_t                                            Z;                                                          // 0x0010   (0x0008)  
	int64_t                                            W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveFloat
{ 
	TArray<FInterpCurvePointFloat>                     Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (0x000000 - 0x000014)
struct FInterpCurvePointFloat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	float                                              OutVal;                                                     // 0x0004   (0x0004)  
	float                                              ArriveTangent;                                              // 0x0008   (0x0004)  
	float                                              LeaveTangent;                                               // 0x000C   (0x0004)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveLinearColor
{ 
	TArray<FInterpCurvePointLinearColor>               Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (0x000000 - 0x000038)
struct FInterpCurvePointLinearColor
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FLinearColor                                       OutVal;                                                     // 0x0004   (0x0010)  
	FLinearColor                                       ArriveTangent;                                              // 0x0014   (0x0010)  
	FLinearColor                                       LeaveTangent;                                               // 0x0024   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLinearColor
{ 
	float                                              R;                                                          // 0x0000   (0x0004)  
	float                                              G;                                                          // 0x0004   (0x0004)  
	float                                              B;                                                          // 0x0008   (0x0004)  
	float                                              A;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0080 (0x000000 - 0x000080)
struct FInterpCurvePointQuat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FQuat                                              OutVal;                                                     // 0x0010   (0x0020)  
	FQuat                                              ArriveTangent;                                              // 0x0030   (0x0020)  
	FQuat                                              LeaveTangent;                                               // 0x0050   (0x0020)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuat
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FInterpCurvePointTwoVectors
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FTwoVectors                                        OutVal;                                                     // 0x0008   (0x0030)  
	FTwoVectors                                        ArriveTangent;                                              // 0x0038   (0x0030)  
	FTwoVectors                                        LeaveTangent;                                               // 0x0068   (0x0030)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTwoVectors
{ 
	FVector                                            v1;                                                         // 0x0000   (0x0018)  
	FVector                                            v2;                                                         // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x0058 (0x000000 - 0x000058)
struct FInterpCurvePointVector
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            OutVal;                                                     // 0x0008   (0x0018)  
	FVector                                            ArriveTangent;                                              // 0x0020   (0x0018)  
	FVector                                            LeaveTangent;                                               // 0x0038   (0x0018)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0040 (0x000000 - 0x000040)
struct FInterpCurvePointVector2D
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          OutVal;                                                     // 0x0008   (0x0010)  
	FVector2D                                          ArriveTangent;                                              // 0x0018   (0x0010)  
	FVector2D                                          LeaveTangent;                                               // 0x0028   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveQuat
{ 
	TArray<FInterpCurvePointQuat>                      Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveTwoVectors
{ 
	TArray<FInterpCurvePointTwoVectors>                Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveVector
{ 
	TArray<FInterpCurvePointVector>                    Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveVector2D
{ 
	TArray<FInterpCurvePointVector2D>                  Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FIntVector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntVector2
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FIntVector4
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
	int32_t                                            W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMatrix
{ 
	FPlane                                             XPlane;                                                     // 0x0000   (0x0020)  
	FPlane                                             YPlane;                                                     // 0x0020   (0x0020)  
	FPlane                                             ZPlane;                                                     // 0x0040   (0x0020)  
	FPlane                                             WPlane;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0008 (0x000018 - 0x000020)
struct FPlane : FVector
{ 
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Matrix44d
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMatrix44d
{ 
	FPlane4d                                           XPlane;                                                     // 0x0000   (0x0020)  
	FPlane4d                                           YPlane;                                                     // 0x0020   (0x0020)  
	FPlane4d                                           ZPlane;                                                     // 0x0040   (0x0020)  
	FPlane4d                                           WPlane;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/CoreUObject.Plane4d
/// Size: 0x0008 (0x000018 - 0x000020)
struct FPlane4d : FVector3d
{ 
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Matrix44f
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMatrix44f
{ 
	FPlane4f                                           XPlane;                                                     // 0x0000   (0x0010)  
	FPlane4f                                           YPlane;                                                     // 0x0010   (0x0010)  
	FPlane4f                                           ZPlane;                                                     // 0x0020   (0x0010)  
	FPlane4f                                           WPlane;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/CoreUObject.Plane4f
/// Size: 0x0004 (0x00000C - 0x000010)
struct FPlane4f : FVector3f
{ 
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x0078 (0x000000 - 0x000078)
struct FOrientedBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	FVector                                            AxisX;                                                      // 0x0018   (0x0018)  
	FVector                                            AxisY;                                                      // 0x0030   (0x0018)  
	FVector                                            AxisZ;                                                      // 0x0048   (0x0018)  
	double                                             ExtentX;                                                    // 0x0060   (0x0008)  
	double                                             ExtentY;                                                    // 0x0068   (0x0008)  
	double                                             ExtentZ;                                                    // 0x0070   (0x0008)  
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPackedNormal
{ 
	char                                               X;                                                          // 0x0000   (0x0001)  
	char                                               Y;                                                          // 0x0001   (0x0001)  
	char                                               Z;                                                          // 0x0002   (0x0001)  
	char                                               W;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPackedRGB10A2N
{ 
	int32_t                                            Packed;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPackedRGBA16N
{ 
	int32_t                                            XY;                                                         // 0x0000   (0x0004)  
	int32_t                                            ZW;                                                         // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.PlatformInputDeviceState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPlatformInputDeviceState
{ 
	FPlatformUserId                                    OwningPlatformUser;                                         // 0x0000   (0x0004)  
	EInputDeviceConnectionState                        ConnectionState;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.PlatformUserId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlatformUserId
{ 
	int32_t                                            InternalId;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FPolyglotTextData
{ 
	ELocalizedTextSourceCategory                       Category;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            NativeCulture;                                              // 0x0008   (0x0010)  
	FString                                            Namespace;                                                  // 0x0018   (0x0010)  
	FString                                            Key;                                                        // 0x0028   (0x0010)  
	FString                                            NativeString;                                               // 0x0038   (0x0010)  
	TMap<FString, FString>                             LocalizedStrings;                                           // 0x0048   (0x0050)  
	bool                                               bIsMinimalPatch;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FText                                              CachedText;                                                 // 0x00A0   (0x0018)  
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPrimaryAssetId
{ 
	FPrimaryAssetType                                  PrimaryAssetType;                                           // 0x0000   (0x0008)  
	FName                                              PrimaryAssetName;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPrimaryAssetType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQualifiedFrameTime
{ 
	FFrameTime                                         Time;                                                       // 0x0000   (0x0008)  
	FFrameRate                                         Rate;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Quat4d
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuat4d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Quat4f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuat4f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRandomStream
{ 
	int32_t                                            InitialSeed;                                                // 0x0000   (0x0004)  
	int32_t                                            Seed;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Ray
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRay
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	FVector                                            Direction;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.Ray3d
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRay3d
{ 
	FVector3d                                          Origin;                                                     // 0x0000   (0x0018)  
	FVector3d                                          Direction;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.Ray3f
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRay3f
{ 
	FVector3f                                          Origin;                                                     // 0x0000   (0x000C)  
	FVector3f                                          Direction;                                                  // 0x000C   (0x000C)  
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRotator
{ 
	double                                             Pitch;                                                      // 0x0000   (0x0008)  
	double                                             Yaw;                                                        // 0x0008   (0x0008)  
	double                                             Roll;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Rotator3d
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRotator3d
{ 
	double                                             Pitch;                                                      // 0x0000   (0x0008)  
	double                                             Yaw;                                                        // 0x0008   (0x0008)  
	double                                             Roll;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Rotator3f
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRotator3f
{ 
	float                                              Pitch;                                                      // 0x0000   (0x0004)  
	float                                              Yaw;                                                        // 0x0004   (0x0004)  
	float                                              Roll;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0000 (0x000020 - 0x000020)
struct FSoftClassPath : FSoftObjectPath
{ 
};

/// Struct /Script/CoreUObject.Sphere
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSphere
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Sphere3d
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSphere3d
{ 
	FVector3d                                          Center;                                                     // 0x0000   (0x0018)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Sphere3f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSphere3f
{ 
	FVector3f                                          Center;                                                     // 0x0000   (0x000C)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.TemplateString
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTemplateString
{ 
	FString                                            Template;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.TestUninitializedScriptStructMembersTest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTestUninitializedScriptStructMembersTest
{ 
	UObject*                                           UninitializedObjectReference;                               // 0x0000   (0x0008)  
	UObject*                                           InitializedObjectReference;                                 // 0x0008   (0x0008)  
	float                                              UnusedValue;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (0x000000 - 0x000014)
struct FTimecode
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0008   (0x0004)  
	int32_t                                            Frames;                                                     // 0x000C   (0x0004)  
	bool                                               bDropFrameFormat;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTimespan
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTransform
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	FVector                                            Translation;                                                // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector                                            Scale3D;                                                    // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform3d
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTransform3d
{ 
	FQuat4d                                            Rotation;                                                   // 0x0000   (0x0020)  
	FVector3d                                          Translation;                                                // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector3d                                          Scale3D;                                                    // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform3f
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTransform3f
{ 
	FQuat4f                                            Rotation;                                                   // 0x0000   (0x0010)  
	FVector3f                                          Translation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector3f                                          Scale3D;                                                    // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.Uint32Point
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUint32Point
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FUint32Vector
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUint32Vector2
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUint32Vector4
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
	uint32_t                                           W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint64Point
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUint64Point
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FUint64Vector
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
	uint64_t                                           Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector2
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUint64Vector2
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUint64Vector4
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
	uint64_t                                           Z;                                                          // 0x0010   (0x0008)  
	uint64_t                                           W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.UintPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUintPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FUintVector
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUintVector2
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUintVector4
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
	uint32_t                                           W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVector4
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector4d
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVector4d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector4f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVector4f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (0x000000 - 0x000028)
class UObject
{ 
public:
	void**                                             vtable;                                                     // 0x0000   (0x0008)  
	EObjectFlags                                       ObjectFlags;                                                // 0x0008   (0x0004)  
	int                                                InternalIndex;                                              // 0x000C   (0x0004)  
	UClass*                                            ClassPrivate;                                               // 0x0010   (0x0008)  
	FName                                              NamePrivate;                                                // 0x0018   (0x0008)  
	UObject*                                           OuterPrivate;                                               // 0x0020   (0x0008)  
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0068 (0x000028 - 0x000090)
class UPackage : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0008 (0x000028 - 0x000030)
class UField : public UObject : UObject
{ 
public:
	UField*                                            Next;                                                       // 0x0028   (0x0008)  
};

/// Class /Script/CoreUObject.Struct
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UStruct : public UField : UField
{ 
public:
	UStruct*                                           SuperStruct;                                                // 0x0030   (0x0008)  
	UField*                                            Children;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0170 (0x0000B0 - 0x000220)
class UClass : public UStruct : UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x170];                                     // 0x00B0   (0x0170)  MISSED
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterface : public UObject : UObject
{ 
public:
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0018 (0x000028 - 0x000040)
class UGCObjectReferencer : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0028 (0x000028 - 0x000050)
class UTextBuffer : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UScriptStruct : public UStruct : UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.Function
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UFunction : public UStruct : UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B0   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UDelegateFunction : public UFunction : UFunction
{ 
public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class USparseDelegateFunction : public UDelegateFunction : UDelegateFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x0080 (0x000220 - 0x0002A0)
class UDynamicClass : public UClass : UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0220   (0x0080)  MISSED
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPackageMap : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0028   (0x00B8)  MISSED
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0038 (0x000030 - 0x000068)
class UEnum : public UField : UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x01C0 (0x000220 - 0x0003E0)
class ULinkerPlaceholderClass : public UClass : UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x0220   (0x01C0)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class ULinkerPlaceholderExportObject : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0028   (0x00D0)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x01C0 (0x0000E0 - 0x0002A0)
class ULinkerPlaceholderFunction : public UFunction : UFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x00E0   (0x01C0)  MISSED
};

/// Class /Script/CoreUObject.Metadata
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMetadata : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0008 (0x000028 - 0x000030)
class UObjectRedirector : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0040 (0x000030 - 0x000070)
class UProperty : public UField : UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0010 (0x000070 - 0x000080)
class UEnumProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UArrayProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UObjectPropertyBase : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UBoolProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNumericProperty : public UProperty : UProperty
{ 
public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UByteProperty : public UNumericProperty : UNumericProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UObjectProperty : public UObjectPropertyBase : UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class UClassProperty : public UObjectProperty : UObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UDelegateProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UDoubleProperty : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatProperty : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UIntProperty : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt8Property : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt16Property : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt64Property : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterfaceProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class ULazyObjectProperty : public UObjectPropertyBase : UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0028 (0x000070 - 0x000098)
class UMapProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UMulticastDelegateProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty : UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty : UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNameProperty : public UProperty : UProperty
{ 
public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0020 (0x000070 - 0x000090)
class USetProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class USoftObjectProperty : public UObjectPropertyBase : UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class USoftClassProperty : public USoftObjectProperty : USoftObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UStrProperty : public UProperty : UProperty
{ 
public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UStructProperty : public UProperty : UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt16Property : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt32Property : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt64Property : public UNumericProperty : UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UWeakObjectProperty : public UObjectPropertyBase : UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UTextProperty : public UProperty : UProperty
{ 
public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyWrapper : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper : UPropertyWrapper
{ 
public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
{ 
public:
};

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x04
enum EAutomationEventType : uint8_t
{
	EAutomationEventType__Info0                                                      = 0,
	EAutomationEventType__Warning1                                                   = 1,
	EAutomationEventType__Error2                                                     = 2,
	EAutomationEventType__EAutomationEventType_MAX3                                  = 3
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x04
enum ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive0                                                     = 0,
	ERangeBoundTypes__Inclusive1                                                     = 1,
	ERangeBoundTypes__Open2                                                          = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX3                                          = 3
};

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x07
enum EInterpCurveMode : uint8_t
{
	CIM_Linear0                                                                      = 0,
	CIM_CurveAuto1                                                                   = 1,
	CIM_Constant2                                                                    = 2,
	CIM_CurveUser3                                                                   = 3,
	CIM_CurveBreak4                                                                  = 4,
	CIM_CurveAutoClamped5                                                            = 5,
	CIM_MAX6                                                                         = 6
};

/// Enum /Script/CoreUObject.EInputDeviceConnectionState
/// Size: 0x05
enum EInputDeviceConnectionState : uint8_t
{
	EInputDeviceConnectionState__Invalid0                                            = 0,
	EInputDeviceConnectionState__Unknown1                                            = 1,
	EInputDeviceConnectionState__Disconnected2                                       = 2,
	EInputDeviceConnectionState__Connected3                                          = 3,
	EInputDeviceConnectionState__EInputDeviceConnectionState_MAX4                    = 4
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x04
enum ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game0                                              = 0,
	ELocalizedTextSourceCategory__Engine1                                            = 1,
	ELocalizedTextSourceCategory__Editor2                                            = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX3                  = 3
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x15
enum EMouseCursor : uint8_t
{
	EMouseCursor__None0                                                              = 0,
	EMouseCursor__Default1                                                           = 1,
	EMouseCursor__TextEditBeam2                                                      = 2,
	EMouseCursor__ResizeLeftRight3                                                   = 3,
	EMouseCursor__ResizeUpDown4                                                      = 4,
	EMouseCursor__ResizeSouthEast5                                                   = 5,
	EMouseCursor__ResizeSouthWest6                                                   = 6,
	EMouseCursor__CardinalCross7                                                     = 7,
	EMouseCursor__Crosshairs8                                                        = 8,
	EMouseCursor__Hand9                                                              = 9,
	EMouseCursor__GrabHand10                                                         = 10,
	EMouseCursor__GrabHandClosed11                                                   = 11,
	EMouseCursor__SlashedCircle12                                                    = 12,
	EMouseCursor__EyeDropper13                                                       = 13,
	EMouseCursor__EMouseCursor_MAX14                                                 = 14
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x17
enum ELifetimeCondition : uint8_t
{
	COND_None0                                                                       = 0,
	COND_InitialOnly1                                                                = 1,
	COND_OwnerOnly2                                                                  = 2,
	COND_SkipOwner3                                                                  = 3,
	COND_SimulatedOnly4                                                              = 4,
	COND_AutonomousOnly5                                                             = 5,
	COND_SimulatedOrPhysics6                                                         = 6,
	COND_InitialOrOwner7                                                             = 7,
	COND_Custom8                                                                     = 8,
	COND_ReplayOrOwner9                                                              = 9,
	COND_ReplayOnly10                                                                = 10,
	COND_SimulatedOnlyNoReplay11                                                     = 11,
	COND_SimulatedOrPhysicsNoReplay12                                                = 12,
	COND_SkipReplay13                                                                = 13,
	COND_Never14                                                                     = 15,
	COND_NetGroup15                                                                  = 16,
	COND_Max16                                                                       = 17
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x03
enum ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive0                                                      = 0,
	ESearchCase__IgnoreCase1                                                         = 1,
	ESearchCase__ESearchCase_MAX2                                                    = 2
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x03
enum ESearchDir : uint8_t
{
	ESearchDir__FromStart0                                                           = 0,
	ESearchDir__FromEnd1                                                             = 1,
	ESearchDir__ESearchDir_MAX2                                                      = 2
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x05
enum ELogTimes : uint8_t
{
	ELogTimes__None0                                                                 = 0,
	ELogTimes__UTC1                                                                  = 1,
	ELogTimes__SinceGStartTime2                                                      = 2,
	ELogTimes__Local3                                                                = 3,
	ELogTimes__ELogTimes_MAX4                                                        = 4
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x05
enum EAxis : uint8_t
{
	EAxis__None0                                                                     = 0,
	EAxis__X1                                                                        = 1,
	EAxis__Y2                                                                        = 2,
	EAxis__Z3                                                                        = 3,
	EAxis__EAxis_MAX4                                                                = 4
};

/// Enum /Script/CoreUObject.EAxisList
/// Size: 0x13
enum EAxisList : uint8_t
{
	EAxisList__None0                                                                 = 0,
	EAxisList__X1                                                                    = 1,
	EAxisList__Y2                                                                    = 2,
	EAxisList__Z3                                                                    = 4,
	EAxisList__Screen4                                                               = 8,
	EAxisList__XY5                                                                   = 3,
	EAxisList__XZ6                                                                   = 5,
	EAxisList__YZ7                                                                   = 6,
	EAxisList__XYZ8                                                                  = 7,
	EAxisList__All9                                                                  = 15,
	EAxisList__ZRotation10                                                           = 6,
	EAxisList__Rotate2D11                                                            = 8,
	EAxisList__EAxisList_MAX12                                                       = 16
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x88
enum EPixelFormat : uint8_t
{
	PF_Unknown0                                                                      = 0,
	PF_A32B32G32R32F1                                                                = 1,
	PF_B8G8R8A82                                                                     = 2,
	PF_G83                                                                           = 3,
	PF_G164                                                                          = 4,
	PF_DXT15                                                                         = 5,
	PF_DXT36                                                                         = 6,
	PF_DXT57                                                                         = 7,
	PF_UYVY8                                                                         = 8,
	PF_FloatRGB9                                                                     = 9,
	PF_FloatRGBA10                                                                   = 10,
	PF_DepthStencil11                                                                = 11,
	PF_ShadowDepth12                                                                 = 12,
	PF_R32_FLOAT13                                                                   = 13,
	PF_G16R1614                                                                      = 14,
	PF_G16R16F15                                                                     = 15,
	PF_G16R16F_FILTER16                                                              = 16,
	PF_G32R32F17                                                                     = 17,
	PF_A2B10G10R1018                                                                 = 18,
	PF_A16B16G16R1619                                                                = 19,
	PF_D2420                                                                         = 20,
	PF_R16F21                                                                        = 21,
	PF_R16F_FILTER22                                                                 = 22,
	PF_BC523                                                                         = 23,
	PF_V8U824                                                                        = 24,
	PF_A125                                                                          = 25,
	PF_FloatR11G11B1026                                                              = 26,
	PF_A827                                                                          = 27,
	PF_R32_UINT28                                                                    = 28,
	PF_R32_SINT29                                                                    = 29,
	PF_PVRTC230                                                                      = 30,
	PF_PVRTC431                                                                      = 31,
	PF_R16_UINT32                                                                    = 32,
	PF_R16_SINT33                                                                    = 33,
	PF_R16G16B16A16_UINT34                                                           = 34,
	PF_R16G16B16A16_SINT35                                                           = 35,
	PF_R5G6B5_UNORM36                                                                = 36,
	PF_R8G8B8A837                                                                    = 37,
	PF_A8R8G8B838                                                                    = 38,
	PF_BC439                                                                         = 39,
	PF_R8G840                                                                        = 40,
	PF_ATC_RGB41                                                                     = 41,
	PF_ATC_RGBA_E42                                                                  = 42,
	PF_ATC_RGBA_I43                                                                  = 43,
	PF_X24_G844                                                                      = 44,
	PF_ETC145                                                                        = 45,
	PF_ETC2_RGB46                                                                    = 46,
	PF_ETC2_RGBA47                                                                   = 47,
	PF_R32G32B32A32_UINT48                                                           = 48,
	PF_R16G16_UINT49                                                                 = 49,
	PF_ASTC_4x450                                                                    = 50,
	PF_ASTC_6x651                                                                    = 51,
	PF_ASTC_8x852                                                                    = 52,
	PF_ASTC_10x1053                                                                  = 53,
	PF_ASTC_12x1254                                                                  = 54,
	PF_BC6H55                                                                        = 55,
	PF_BC756                                                                         = 56,
	PF_R8_UINT57                                                                     = 57,
	PF_L858                                                                          = 58,
	PF_XGXR859                                                                       = 59,
	PF_R8G8B8A8_UINT60                                                               = 60,
	PF_R8G8B8A8_SNORM61                                                              = 61,
	PF_R16G16B16A16_UNORM62                                                          = 62,
	PF_R16G16B16A16_SNORM63                                                          = 63,
	PF_PLATFORM_HDR64                                                                = 64,
	PF_PLATFORM_HDR65                                                                = 65,
	PF_PLATFORM_HDR66                                                                = 66,
	PF_NV1267                                                                        = 67,
	PF_R32G32_UINT68                                                                 = 68,
	PF_ETC2_R11_EAC69                                                                = 69,
	PF_ETC2_RG11_EAC70                                                               = 70,
	PF_R871                                                                          = 71,
	PF_B5G5R5A1_UNORM72                                                              = 72,
	PF_ASTC_4x4_HDR73                                                                = 73,
	PF_ASTC_6x6_HDR74                                                                = 74,
	PF_ASTC_8x8_HDR75                                                                = 75,
	PF_ASTC_10x10_HDR76                                                              = 76,
	PF_ASTC_12x12_HDR77                                                              = 77,
	PF_G16R16_SNORM78                                                                = 78,
	PF_R8G8_UINT79                                                                   = 79,
	PF_R32G32B32_UINT80                                                              = 80,
	PF_R32G32B32_SINT81                                                              = 81,
	PF_R32G32B32F82                                                                  = 82,
	PF_R8_SINT83                                                                     = 83,
	PF_R64_UINT84                                                                    = 84,
	PF_R9G9B9EXP585                                                                  = 85,
	PF_P01086                                                                        = 86,
	PF_MAX87                                                                         = 87
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x52
enum EUnit : uint8_t
{
	EUnit__Micrometers0                                                              = 0,
	EUnit__Millimeters1                                                              = 1,
	EUnit__Centimeters2                                                              = 2,
	EUnit__Meters3                                                                   = 3,
	EUnit__Kilometers4                                                               = 4,
	EUnit__Inches5                                                                   = 5,
	EUnit__Feet6                                                                     = 6,
	EUnit__Yards7                                                                    = 7,
	EUnit__Miles8                                                                    = 8,
	EUnit__Lightyears9                                                               = 9,
	EUnit__Degrees10                                                                 = 10,
	EUnit__Radians11                                                                 = 11,
	EUnit__CentimetersPerSecond12                                                    = 12,
	EUnit__MetersPerSecond13                                                         = 13,
	EUnit__KilometersPerHour14                                                       = 14,
	EUnit__MilesPerHour15                                                            = 15,
	EUnit__Celsius16                                                                 = 16,
	EUnit__Farenheit17                                                               = 17,
	EUnit__Kelvin18                                                                  = 18,
	EUnit__Micrograms19                                                              = 19,
	EUnit__Milligrams20                                                              = 20,
	EUnit__Grams21                                                                   = 21,
	EUnit__Kilograms22                                                               = 22,
	EUnit__MetricTons23                                                              = 23,
	EUnit__Ounces24                                                                  = 24,
	EUnit__Pounds25                                                                  = 25,
	EUnit__Stones26                                                                  = 26,
	EUnit__Newtons27                                                                 = 27,
	EUnit__PoundsForce28                                                             = 28,
	EUnit__KilogramsForce29                                                          = 29,
	EUnit__Hertz30                                                                   = 30,
	EUnit__Kilohertz31                                                               = 31,
	EUnit__Megahertz32                                                               = 32,
	EUnit__Gigahertz33                                                               = 33,
	EUnit__RevolutionsPerMinute34                                                    = 34,
	EUnit__Bytes35                                                                   = 35,
	EUnit__Kilobytes36                                                               = 36,
	EUnit__Megabytes37                                                               = 37,
	EUnit__Gigabytes38                                                               = 38,
	EUnit__Terabytes39                                                               = 39,
	EUnit__Lumens40                                                                  = 40,
	EUnit__Milliseconds41                                                            = 46,
	EUnit__Seconds42                                                                 = 47,
	EUnit__Minutes43                                                                 = 48,
	EUnit__Hours44                                                                   = 49,
	EUnit__Days45                                                                    = 50,
	EUnit__Months46                                                                  = 51,
	EUnit__Years47                                                                   = 52,
	EUnit__Multiplier48                                                              = 55,
	EUnit__Percentage49                                                              = 54,
	EUnit__Unspecified50                                                             = 56,
	EUnit__EUnit_MAX51                                                               = 57
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x04
enum EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default0                                        = 0,
	EPropertyAccessChangeNotifyMode__Never1                                          = 1,
	EPropertyAccessChangeNotifyMode__Always2                                         = 2,
	EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX3            = 3
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x09
enum EAppReturnType : uint8_t
{
	EAppReturnType__No0                                                              = 0,
	EAppReturnType__Yes1                                                             = 1,
	EAppReturnType__YesAll2                                                          = 2,
	EAppReturnType__NoAll3                                                           = 3,
	EAppReturnType__Cancel4                                                          = 4,
	EAppReturnType__Ok5                                                              = 5,
	EAppReturnType__Retry6                                                           = 6,
	EAppReturnType__Continue7                                                        = 7,
	EAppReturnType__EAppReturnType_MAX8                                              = 8
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x09
enum EAppMsgType : uint8_t
{
	EAppMsgType__Ok0                                                                 = 0,
	EAppMsgType__YesNo1                                                              = 1,
	EAppMsgType__OkCancel2                                                           = 2,
	EAppMsgType__YesNoCancel3                                                        = 3,
	EAppMsgType__CancelRetryContinue4                                                = 4,
	EAppMsgType__YesNoYesAllNoAll5                                                   = 5,
	EAppMsgType__YesNoYesAllNoAllCancel6                                             = 6,
	EAppMsgType__YesNoYesAll7                                                        = 7,
	EAppMsgType__EAppMsgType_MAX8                                                    = 8
};

/// Enum /Script/CoreUObject.EInputDeviceTriggerMask
/// Size: 0x05
enum EInputDeviceTriggerMask : uint8_t
{
	EInputDeviceTriggerMask__None0                                                   = 0,
	EInputDeviceTriggerMask__Left1                                                   = 1,
	EInputDeviceTriggerMask__Right2                                                  = 2,
	EInputDeviceTriggerMask__All3                                                    = 3,
	EInputDeviceTriggerMask__EInputDeviceTriggerMask_MAX4                            = 4
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x04
enum EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid0                                                  = 0,
	EDataValidationResult__Valid1                                                    = 1,
	EDataValidationResult__NotValidated2                                             = 2,
	EDataValidationResult__EDataValidationResult_MAX3                                = 3
};

