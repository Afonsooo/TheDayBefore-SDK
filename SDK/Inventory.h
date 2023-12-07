
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Inventory.

/// Struct /Game/Inventory/SBP_ItemsData.SBP_ItemsData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSBP_ItemsData
{ 
	FString                                            Name_3_AFEA6C1E4A077863A3166CB266427161;                    // 0x0000   (0x0010)  
	TEnumAsByte<EBP_ItemsTypes>                        Type_21_DE7AD7ED4A156DB74377B58AA7A2AEED;                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            Count_9_2D5C237C474D43AEE7BF76A80BD60EEF;                   // 0x0014   (0x0004)  
	bool                                               Stackable_12_290333A7449F2C3A52B4C39DC64EACD2;              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	UTexture*                                          Icon_17_AF314C534D0C01D6903095BB60C22629;                   // 0x0020   (0x0008)  
	TWeakObjectPtr<UClass*>                            Class_25_5AB3996243864CA7B9E14883D46ED48A;                  // 0x0028   (0x0030)  
};

/// Enum /Game/Inventory/EBP_ItemsTypes.EBP_ItemsTypes
/// Size: 0x07
enum EBP_ItemsTypes : uint8_t
{
	EBP_ItemsTypes__NewEnumerator40                                                  = 0,
	EBP_ItemsTypes__NewEnumerator01                                                  = 1,
	EBP_ItemsTypes__NewEnumerator12                                                  = 2,
	EBP_ItemsTypes__NewEnumerator23                                                  = 3,
	EBP_ItemsTypes__NewEnumerator34                                                  = 4,
	EBP_ItemsTypes__NewEnumerator55                                                  = 5,
	EBP_ItemsTypes__EBP_MAX6                                                         = 6
};

