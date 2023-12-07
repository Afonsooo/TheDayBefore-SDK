
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CinematicCamera.

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0008   (0x0018)  MISSED
	TWeakObjectPtr<AActor*>                            ActorToTrack;                                               // 0x0020   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0050   (0x0018)  
	bool                                               bAllowRoll : 1;                                             // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	float                                              SqueezeFactor;                                              // 0x0014   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0018   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlateCropSettings
{ 
	float                                              AspectRatio;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedPlateCropPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCameraTrackingFocusSettings
{ 
	TWeakObjectPtr<AActor*>                            ActorToTrack;                                               // 0x0000   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0030   (0x0018)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0068 (0x000000 - 0x000068)
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0050)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x005C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACameraRig_Crane : public AActor : AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0290   (0x0004)  
	float                                              CraneYaw;                                                   // 0x0294   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0298   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x029C   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x029D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x029E   (0x0002)  MISSED
	USceneComponent*                                   TransformComponent;                                         // 0x02A0   (0x0008)  
	USceneComponent*                                   CraneYawControl;                                            // 0x02A8   (0x0008)  
	USceneComponent*                                   CranePitchControl;                                          // 0x02B0   (0x0008)  
	USceneComponent*                                   CraneCameraMount;                                           // 0x02B8   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ACameraRig_Rail : public AActor : AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0290   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	USceneComponent*                                   TransformComponent;                                         // 0x0298   (0x0008)  
	USplineComponent*                                  RailSplineComponent;                                        // 0x02A0   (0x0008)  
	USceneComponent*                                   RailCameraMount;                                            // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	USplineComponent* GetRailSplineComponent();                                                                              // [0x14c6c20] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0080 (0x0009A0 - 0x000A20)
class ACineCameraActor : public ACameraActor : ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x09A0   (0x0070)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0A10   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	UCineCameraComponent* GetCineCameraComponent();                                                                          // [0x3aa7b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0120 (0x000A30 - 0x000B50)
class UCineCameraComponent : public UCameraComponent : UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0A30   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0A3C   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0A48   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0A64   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0A68   (0x0068)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0AD0   (0x0004)  
	float                                              CurrentFocalLength;                                         // 0x0AD4   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0AD8   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0ADC   (0x0004)  
	bool                                               bOverride_CustomNearClippingPlane : 1;                      // 0x0AE0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0AE1   (0x0003)  MISSED
	float                                              CustomNearClippingPlane;                                    // 0x0AE4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0AE8   (0x0008)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0AF0   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0B00   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x0B10   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0B20   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x0B30   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0B40   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x0B44   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0B48   (0x0008)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings
	void SetLensSettings(FCameraLensSettings& NewLensSettings);                                                              // [0x3aa9e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetLensPresetByName(FString InPresetName);                                                                          // [0x3aa9c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings
	void SetFocusSettings(FCameraFocusSettings& NewFocusSettings);                                                           // [0x3aa9b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x3aa9920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback
	void SetFilmback(FCameraFilmbackSettings& NewFilmback);                                                                  // [0x3aa9860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);                                                       // [0x3aa9360] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x3aa92d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture
	void SetCurrentAperture(float NewCurrentAperture);                                                                       // [0x3aa9240] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings
	void SetCropSettings(FPlateCropSettings& NewCropSettings);                                                               // [0x3aa9190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName
	void SetCropPresetByName(FString InPresetName);                                                                          // [0x3aa8f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	float GetVerticalFieldOfView();                                                                                          // [0x3aa8ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x3aa8ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	FString GetLensPresetName();                                                                                             // [0x3aa8a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	float GetHorizontalFieldOfView();                                                                                        // [0x3aa8790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x3aa85e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	FString GetFilmbackPresetName();                                                                                         // [0x3aa8350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	FString GetDefaultFilmbackPresetName();                                                                                  // [0x3aa8030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName
	FString GetCropPresetName();                                                                                             // [0x3aa7db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UCineCameraSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	FString                                            DefaultLensPresetName;                                      // 0x0038   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0048   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x004C   (0x0004)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0050   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0060   (0x0010)  
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0070   (0x0010)  
	FString                                            DefaultCropPresetName;                                      // 0x0080   (0x0010)  
	TArray<FNamedPlateCropPreset>                      CropPresets;                                                // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets
	void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets);                                                            // [0x3aa9d10] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets
	void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets);                                                // [0x3aa99d0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	void SetDefaultLensPresetName(FString InDefaultLensPresetName);                                                          // [0x3aa9750] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	void SetDefaultLensFStop(float InDefaultLensFStop);                                                                      // [0x3aa9610] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength);                                                          // [0x3aa96b0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset);                                                          // [0x3aa9500] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	void SetDefaultCropPresetName(FString InDefaultCropPresetName);                                                          // [0x3aa93e0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets
	void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets);                                                       // [0x3aa8ff0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames
	TArray<FString> GetLensPresetNames();                                                                                    // [0x3aa8b90] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName
	bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings);                                         // [0x3aa87c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	TArray<FString> GetFilmbackPresetNames();                                                                                // [0x3aa8490] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings);                             // [0x3aa8130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames
	TArray<FString> GetCropPresetNames();                                                                                    // [0x3aa7ee0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName
	bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings);                                          // [0x3aa7bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings
	UCineCameraSettings* GetCineCameraSettings();                                                                            // [0x3aa7b50] Final|Native|Static|Private|BlueprintCallable 
};

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x05
enum ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride0                                               = 0,
	ECameraFocusMethod__Manual1                                                      = 1,
	ECameraFocusMethod__Tracking2                                                    = 2,
	ECameraFocusMethod__Disable3                                                     = 3,
	ECameraFocusMethod__MAX4                                                         = 4
};

