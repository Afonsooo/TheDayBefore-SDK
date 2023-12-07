
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PropertyPath.

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	UStruct*                                           Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0010   (0x0008)  MISSED
	UFunction*                                         CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyPathTestInnerStruct
{ 
	float                                              float;                                                      // 0x0000   (0x0004)  
	bool                                               bool;                                                       // 0x0004   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0005   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0006   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x0007   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x000C   (0x0004)  
	FString                                            String;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPropertyPathTestStruct
{ 
	bool                                               bool;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0004   (0x0004)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0008   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0009   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x000A   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x000B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0010   (0x0010)  
	float                                              float;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FPropertyPathTestInnerStruct                       InnerStruct;                                                // 0x0028   (0x0020)  
	UPropertyPathTestObject*                           InnerObject;                                                // 0x0048   (0x0008)  
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FPropertyPathTestBed
{ 
	UPropertyPathTestObject*                           Object;                                                     // 0x0000   (0x0008)  
	UPropertyPathTestObject*                           ModifiedObject;                                             // 0x0008   (0x0008)  
	FPropertyPathTestStruct                            ModifiedStruct;                                             // 0x0010   (0x0050)  
	FPropertyPathTestStruct                            DefaultStruct;                                              // 0x0060   (0x0050)  
};

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0128 (0x000028 - 0x000150)
class UPropertyPathTestObject : public UObject : UObject
{ 
public:
	bool                                               bool;                                                       // 0x0028   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0029   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x002A   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x002B   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0038   (0x0010)  
	float                                              float;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FPropertyPathTestStruct                            Struct;                                                     // 0x0050   (0x0050)  
	FPropertyPathTestStruct                            StructRef;                                                  // 0x00A0   (0x0050)  
	FPropertyPathTestStruct                            StructConstRef;                                             // 0x00F0   (0x0050)  
	UPropertyPathTestObject*                           InnerObject;                                                // 0x0140   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	void SetStructRef(FPropertyPathTestStruct InStruct);                                                                     // [0x37d38e0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                                // [0x37d3760] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	void SetStruct(FPropertyPathTestStruct InStruct);                                                                        // [0x37d35e0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	void SetFloat(float InFloat);                                                                                            // [0x37d3550] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	FPropertyPathTestStruct GetStructRef();                                                                                  // [0x37d3520] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	FPropertyPathTestStruct GetStructConstRef();                                                                             // [0x37d34f0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	FPropertyPathTestStruct GetStruct();                                                                                     // [0x37d3380] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	float GetFloat();                                                                                                        // [0x37d3350] Final|Native|Public|Const 
};

/// Enum /Script/PropertyPath.EPropertyPathTestEnum
/// Size: 0x05
enum EPropertyPathTestEnum : uint8_t
{
	One0                                                                             = 0,
	Two1                                                                             = 1,
	Three2                                                                           = 2,
	Four3                                                                            = 3,
	EPropertyPathTestEnum_MAX4                                                       = 4
};

