
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RapidJsonModule.

/// Struct /Script/RapidJsonModule.CustomStructSerialization
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCustomStructSerialization
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RapidJsonModule.MyCustomStructSerializationExample
/// Size: 0x0018 (0x000008 - 0x000020)
struct FMyCustomStructSerializationExample : FCustomStructSerialization
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	int32_t                                            AGE;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/RapidJsonModule.CustomStructSerializationExample
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACustomStructSerializationExample : public AActor : AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0290   (0x0030)  MISSED
};

/// Class /Script/RapidJsonModule.RapidJsonFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class URapidJsonFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

