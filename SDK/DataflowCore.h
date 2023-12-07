
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DataflowCore.

/// Struct /Script/DataflowCore.DataflowNode
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FDataflowNode
{ 
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
	bool                                               bActive;                                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x00C9   (0x001F)  MISSED
};

/// Struct /Script/DataflowCore.DataflowTerminalNode
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
struct FDataflowTerminalNode : FDataflowNode
{ 
};

/// Struct /Script/DataflowCore.DataflowSelection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDataflowSelection
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DataflowCore.DataflowVertexSelection
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDataflowVertexSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowFaceSelection
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDataflowFaceSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowTransformSelection
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDataflowTransformSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowConnection
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/DataflowCore.DataflowInput
/// Size: 0x0008 (0x000040 - 0x000048)
struct FDataflowInput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/DataflowCore.DataflowOutput
/// Size: 0x0028 (0x000040 - 0x000068)
struct FDataflowOutput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Struct /Script/DataflowCore.NodeColors
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNodeColors
{ 
	FLinearColor                                       NodeTitleColor;                                             // 0x0000   (0x0010)  
	FLinearColor                                       NodeBodyTintColor;                                          // 0x0010   (0x0010)  
};

/// Class /Script/DataflowCore.DataflowSettings
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UDataflowSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	FLinearColor                                       ArrayPinTypeColor;                                          // 0x0038   (0x0010)  
	FLinearColor                                       ManagedArrayCollectionPinTypeColor;                         // 0x0048   (0x0010)  
	FLinearColor                                       BoxPinTypeColor;                                            // 0x0058   (0x0010)  
	FLinearColor                                       SpherePinTypeColor;                                         // 0x0068   (0x0010)  
	TMap<FName, FNodeColors>                           NodeColorsMap;                                              // 0x0078   (0x0050)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00C8   (0x0018)  MISSED
};

