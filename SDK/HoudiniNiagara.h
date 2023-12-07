
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HoudiniNiagara.

/// Struct /Script/HoudiniNiagara.PointIndexes
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPointIndexes
{ 
	TArray<int32_t>                                    SampleIndexes;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/HoudiniNiagara.HoudiniEvent
/// Size: 0x0070 (0x000000 - 0x000070)
struct FHoudiniEvent
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	float                                              Impulse;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FVector                                            Velocity;                                                   // 0x0038   (0x0018)  
	int32_t                                            POINTID;                                                    // 0x0050   (0x0004)  
	float                                              Time;                                                       // 0x0054   (0x0004)  
	float                                              LIFE;                                                       // 0x0058   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x005C   (0x0010)  
	int32_t                                            Type;                                                       // 0x006C   (0x0004)  
};

/// Class /Script/HoudiniNiagara.HoudiniPointCache
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UHoudiniPointCache : public UObject : UObject
{ 
public:
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	int32_t                                            NumberOfSamples;                                            // 0x0038   (0x0004)  
	int32_t                                            NumberOfAttributes;                                         // 0x003C   (0x0004)  
	int32_t                                            NumberOfPoints;                                             // 0x0040   (0x0004)  
	int32_t                                            NumberOfFrames;                                             // 0x0044   (0x0004)  
	float                                              FirstFrame;                                                 // 0x0048   (0x0004)  
	float                                              LastFrame;                                                  // 0x004C   (0x0004)  
	float                                              MinSampleTime;                                              // 0x0050   (0x0004)  
	float                                              MaxSampleTime;                                              // 0x0054   (0x0004)  
	FString                                            SourceCSVTitleRow;                                          // 0x0058   (0x0010)  
	TArray<FString>                                    AttributeArray;                                             // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	TArray<float>                                      FloatSampleData;                                            // 0x0080   (0x0010)  
	TArray<float>                                      SpawnTimes;                                                 // 0x0090   (0x0010)  
	TArray<float>                                      LifeValues;                                                 // 0x00A0   (0x0010)  
	TArray<int32_t>                                    PointTypes;                                                 // 0x00B0   (0x0010)  
	TArray<int32_t>                                    SpecialAttributeIndexes;                                    // 0x00C0   (0x0010)  
	TArray<FPointIndexes>                              PointValueIndexes;                                          // 0x00D0   (0x0010)  
	bool                                               UseCustomCSVTitleRow;                                       // 0x00E0   (0x0001)  
	EHoudiniPointCacheFileType                         FileType;                                                   // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00E2   (0x0006)  MISSED


	/// Functions
	// Function /Script/HoudiniNiagara.HoudiniPointCache.SetUseCustomCSVTitleRow
	void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow);                                                              // [0x11e30b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetVelocityValue
	bool GetVelocityValue(int32_t& SampleIndex, FVector& Value);                                                             // [0x11e2fc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetVectorValueForString
	bool GetVectorValueForString(int32_t& SampleIndex, FString Attribute, FVector& Value, bool& DoSwap, bool& DoScale);      // [0x11e2db0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetVectorValue
	bool GetVectorValue(int32_t& SampleIndex, int32_t& attrIndex, FVector& Value, bool& DoSwap, bool& DoScale);              // [0x11e2b90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetVector4ValueForString
	bool GetVector4ValueForString(int32_t& SampleIndex, FString Attribute, FVector4& Value);                                 // [0x11e2a30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetVector4Value
	bool GetVector4Value(int32_t& SampleIndex, int32_t& attrIndex, FVector4& Value);                                         // [0x11e28d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetUseCustomCSVTitleRow
	bool GetUseCustomCSVTitleRow();                                                                                          // [0x11e28b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetTimeValue
	bool GetTimeValue(int32_t& SampleIndex, float& Value);                                                                   // [0x11e2750] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetSpecialAttributeIndexes
	TArray<int32_t> GetSpecialAttributeIndexes();                                                                            // [0x11e2720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetSpawnTimes
	TArray<float> GetSpawnTimes();                                                                                           // [0x11e26f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetSampleIndexesForPointAtTime
	bool GetSampleIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevSampleIndex, int32_t& NextSampleIndex, float& PrevWeight); // [0x11e24d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetQuatValueForString
	bool GetQuatValueForString(int32_t& SampleIndex, FString Attribute, FQuat& Value, bool& DoHoudiniToUnrealConversion);    // [0x11e2310] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetQuatValue
	bool GetQuatValue(int32_t& SampleIndex, int32_t& attrIndex, FQuat& Value, bool& DoHoudiniToUnrealConversion);            // [0x11e2150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPositionValue
	bool GetPositionValue(int32_t& SampleIndex, FVector& Value);                                                             // [0x11e2060] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTimeForString
	bool GetPointVectorValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale); // [0x11e1e60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTime
	bool GetPointVectorValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale); // [0x11e1c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTimeForString
	bool GetPointVector4ValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector4& Vector);       // [0x11e1aa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTime
	bool GetPointVector4ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector4& Vector);           // [0x11e1910] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointValueIndexes
	TArray<FPointIndexes> GetPointValueIndexes();                                                                            // [0x11e1810] Final|Native|Public|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointValueAtTimeForString
	bool GetPointValueAtTimeForString(int32_t& POINTID, FString Attribute, float& desiredTime, float& Value);                // [0x11e1650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointValueAtTime
	bool GetPointValueAtTime(int32_t& POINTID, int32_t& AttributeIndex, float& desiredTime, float& Value);                   // [0x11e1490] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointTypes
	TArray<int32_t> GetPointTypes();                                                                                         // [0x11e1460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointType
	bool GetPointType(int32_t& POINTID, int32_t& Value);                                                                     // [0x11e1340] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTimeForString
	bool GetPointQuatValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion); // [0x11e1160] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTime
	bool GetPointQuatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion); // [0x11e0f90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointPositionAtTime
	bool GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, FVector& Vector);                                      // [0x11e0e40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointLifeAtTime
	bool GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value);                                             // [0x11e0ce0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointLife
	bool GetPointLife(int32_t& POINTID, float& Value);                                                                       // [0x11e0bb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointInt32ValueAtTime
	bool GetPointInt32ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, int32_t& Value);               // [0x11e0a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointIDsToSpawnAtTime
	bool GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime, float& LastSpawnTimeRequest); // [0x11e07b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointFloatValueAtTime
	bool GetPointFloatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float& Value);                 // [0x11e0650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetNumberOfSamples
	int32_t GetNumberOfSamples();                                                                                            // [0x11e0630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetNumberOfPoints
	int32_t GetNumberOfPoints();                                                                                             // [0x11e05f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetNumberOfAttributes
	int32_t GetNumberOfAttributes();                                                                                         // [0x11e05d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetNormalValue
	bool GetNormalValue(int32_t& SampleIndex, FVector& Value);                                                               // [0x11e04e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetLifeValues
	TArray<float> GetLifeValues();                                                                                           // [0x11e04b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetLastSampleIndexAtTime
	bool GetLastSampleIndexAtTime(float& desiredTime, int32_t& lastSampleIndex);                                             // [0x11e03b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetLastPointIDToSpawnAtTime
	bool GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastID);                                                          // [0x11e02b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetImpulseValue
	bool GetImpulseValue(int32_t& SampleIndex, float& Value);                                                                // [0x11e0150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetFloatValueForString
	bool GetFloatValueForString(int32_t& SampleIndex, FString Attribute, float& Value);                                      // [0x11dffb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetFloatValue
	bool GetFloatValue(int32_t& SampleIndex, int32_t& attrIndex, float& Value);                                              // [0x11dfe30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetFloatSampleData
	TArray<float> GetFloatSampleData();                                                                                      // [0x11dfe00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetColorValue
	bool GetColorValue(int32_t& SampleIndex, FLinearColor& Value);                                                           // [0x11dfd10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetAttributeIndexInArrayFromString
	bool GetAttributeIndexInArrayFromString(FString InAttribute, TArray<FString>& InAttributeArray, int32_t& OutAttributeIndex); // [0x11dfb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HoudiniNiagara.HoudiniPointCache.GetAttributeIndexFromString
	bool GetAttributeIndexFromString(FString Attribute, int32_t& AttributeIndex);                                            // [0x11dfa80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HoudiniNiagara.NiagaraDataInterfaceHoudini
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceHoudini : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UHoudiniPointCache*                                HoudiniPointCacheAsset;                                     // 0x0038   (0x0008)  
};

/// Enum /Script/HoudiniNiagara.EHoudiniAttributes
/// Size: 0x15
enum EHoudiniAttributes : uint8_t
{
	HOUDINI_ATTR_BEGIN0                                                              = 0,
	Position1                                                                        = 0,
	Normal2                                                                          = 1,
	Time3                                                                            = 2,
	POINTID4                                                                         = 3,
	LIFE5                                                                            = 4,
	Color6                                                                           = 5,
	alpha7                                                                           = 6,
	Velocity8                                                                        = 7,
	Type9                                                                            = 8,
	Impulse10                                                                        = 9,
	AGE11                                                                            = 10,
	HOUDINI_ATTR_SIZE12                                                              = 11,
	HOUDINI_ATTR_END13                                                               = 10,
	EHoudiniAttributes_MAX14                                                         = 12
};

/// Enum /Script/HoudiniNiagara.EHoudiniPointCacheFileType
/// Size: 0x05
enum EHoudiniPointCacheFileType : uint8_t
{
	EHoudiniPointCacheFileType__Invalid0                                             = 0,
	EHoudiniPointCacheFileType__CSV1                                                 = 1,
	EHoudiniPointCacheFileType__JSON2                                                = 2,
	EHoudiniPointCacheFileType__BJSON3                                               = 3,
	EHoudiniPointCacheFileType__EHoudiniPointCacheFileType_MAX4                      = 4
};

