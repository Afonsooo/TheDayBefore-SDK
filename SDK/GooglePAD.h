
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GooglePAD.

/// Class /Script/GooglePAD.GooglePADFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Enum /Script/GooglePAD.EGooglePADErrorCode
/// Size: 0x15
enum EGooglePADErrorCode : uint8_t
{
	EGooglePADErrorCode__AssetPack_NO_ERROR0                                         = 0,
	EGooglePADErrorCode__AssetPack_APP_UNAVAILABLE1                                  = 1,
	EGooglePADErrorCode__AssetPack_UNAVAILABLE2                                      = 2,
	EGooglePADErrorCode__AssetPack_INVALID_REQUEST3                                  = 3,
	EGooglePADErrorCode__AssetPack_DOWNLOAD_NOT_FOUND4                               = 4,
	EGooglePADErrorCode__AssetPack_API_NOT_AVAILABLE5                                = 5,
	EGooglePADErrorCode__AssetPack_NETWORK_ERROR6                                    = 6,
	EGooglePADErrorCode__AssetPack_ACCESS_DENIED7                                    = 7,
	EGooglePADErrorCode__AssetPack_INSUFFICIENT_STORAGE8                             = 8,
	EGooglePADErrorCode__AssetPack_PLAY_STORE_NOT_FOUND9                             = 9,
	EGooglePADErrorCode__AssetPack_NETWORK_UNRESTRICTED10                            = 10,
	EGooglePADErrorCode__AssetPack_INTERNAL_ERROR11                                  = 11,
	EGooglePADErrorCode__AssetPack_INITIALIZATION_NEEDED12                           = 12,
	EGooglePADErrorCode__AssetPack_INITIALIZATION_FAILED13                           = 13,
	EGooglePADErrorCode__AssetPack_MAX14                                             = 14
};

/// Enum /Script/GooglePAD.EGooglePADDownloadStatus
/// Size: 0x14
enum EGooglePADDownloadStatus : uint8_t
{
	EGooglePADDownloadStatus__AssetPack_UNKNOWN0                                     = 0,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_PENDING1                            = 1,
	EGooglePADDownloadStatus__AssetPack_DOWNLOADING2                                 = 2,
	EGooglePADDownloadStatus__AssetPack_TRANSFERRING3                                = 3,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_COMPLETED4                          = 4,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_FAILED5                             = 5,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_CANCELED6                           = 6,
	EGooglePADDownloadStatus__AssetPack_WAITING_FOR_WIFI7                            = 7,
	EGooglePADDownloadStatus__AssetPack_NOT_INSTALLED8                               = 8,
	EGooglePADDownloadStatus__AssetPack_INFO_PENDING9                                = 9,
	EGooglePADDownloadStatus__AssetPack_INFO_FAILED10                                = 10,
	EGooglePADDownloadStatus__AssetPack_REMOVAL_PENDING11                            = 11,
	EGooglePADDownloadStatus__AssetPack_REMOVAL_FAILED12                             = 12,
	EGooglePADDownloadStatus__AssetPack_MAX13                                        = 13
};

/// Enum /Script/GooglePAD.EGooglePADStorageMethod
/// Size: 0x05
enum EGooglePADStorageMethod : uint8_t
{
	EGooglePADStorageMethod__AssetPack_STORAGE_FILES0                                = 0,
	EGooglePADStorageMethod__AssetPack_STORAGE_APK1                                  = 1,
	EGooglePADStorageMethod__AssetPack_STORAGE_UNKNOWN2                              = 2,
	EGooglePADStorageMethod__AssetPack_STORAGE_NOT_INSTALLED3                        = 3,
	EGooglePADStorageMethod__AssetPack_STORAGE_MAX4                                  = 4
};

/// Enum /Script/GooglePAD.EGooglePADCellularDataConfirmStatus
/// Size: 0x05
enum EGooglePADCellularDataConfirmStatus : uint8_t
{
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_UNKNOWN0                  = 0,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_PENDING1                  = 1,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_USER_APPROVED2            = 2,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_USER_CANCELED3            = 3,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_MAX4                      = 4
};

