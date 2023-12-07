
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SunPosition.

/// Struct /Script/SunPosition.SunPositionData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSunPositionData
{ 
	float                                              Elevation;                                                  // 0x0000   (0x0004)  
	float                                              CorrectedElevation;                                         // 0x0004   (0x0004)  
	float                                              Azimuth;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTimespan                                          SunriseTime;                                                // 0x0010   (0x0008)  
	FTimespan                                          SunsetTime;                                                 // 0x0018   (0x0008)  
	FTimespan                                          SolarNoon;                                                  // 0x0020   (0x0008)  
};

/// Class /Script/SunPosition.SunPositionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USunPositionFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

