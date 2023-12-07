
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SkyCreatorPlugin.

/// Struct /Script/SkyCreatorPlugin.SkyCreatorLightningParameters
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSkyCreatorLightningParameters
{ 
	FLinearColor                                       Position;                                                   // 0x0000   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/SkyCreatorPlugin.CelestialPositionData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCelestialPositionData
{ 
	float                                              Elevation;                                                  // 0x0000   (0x0004)  
	float                                              Azimuth;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyAtmosphereSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FSkyCreatorSkyAtmosphereSettings
{ 
	float                                              RayleighScatteringScale;                                    // 0x0000   (0x0004)  
	FLinearColor                                       RayleighScattering;                                         // 0x0004   (0x0010)  
	float                                              RayleighExponentialDistribution;                            // 0x0014   (0x0004)  
	float                                              MieScatteringScale;                                         // 0x0018   (0x0004)  
	FLinearColor                                       MieScattering;                                              // 0x001C   (0x0010)  
	float                                              MieAbsorptionScale;                                         // 0x002C   (0x0004)  
	FLinearColor                                       MieAbsorption;                                              // 0x0030   (0x0010)  
	float                                              MieAnisotropy;                                              // 0x0040   (0x0004)  
	float                                              MieExponentialDistribution;                                 // 0x0044   (0x0004)  
	float                                              AbsorptionScale;                                            // 0x0048   (0x0004)  
	FLinearColor                                       Absorption;                                                 // 0x004C   (0x0010)  
	FLinearColor                                       SkyLuminanceFactor;                                         // 0x005C   (0x0010)  
	FLinearColor                                       GroundAlbedo;                                               // 0x006C   (0x0010)  
	float                                              HeightFogContribution;                                      // 0x007C   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorVolumetricCloudSettings
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FSkyCreatorVolumetricCloudSettings
{ 
	float                                              StratusCoverage;                                            // 0x0000   (0x0004)  
	float                                              StratusCoverageVariation;                                   // 0x0004   (0x0004)  
	float                                              StratusHeightVariation;                                     // 0x0008   (0x0004)  
	float                                              StratocumulusCoverage;                                      // 0x000C   (0x0004)  
	float                                              StratocumulusCoverageVariation;                             // 0x0010   (0x0004)  
	float                                              StratocumulusHeightVariation;                               // 0x0014   (0x0004)  
	float                                              CumulusCoverage;                                            // 0x0018   (0x0004)  
	float                                              CumulusCoverageVariation;                                   // 0x001C   (0x0004)  
	float                                              CumulusHeightVariation;                                     // 0x0020   (0x0004)  
	float                                              CumulonimbusCoverage;                                       // 0x0024   (0x0004)  
	float                                              CumulonimbusAnvil;                                          // 0x0028   (0x0004)  
	float                                              CumulonimbusHeightVariation;                                // 0x002C   (0x0004)  
	float                                              DensityBottom;                                              // 0x0030   (0x0004)  
	float                                              DensityMiddle;                                              // 0x0034   (0x0004)  
	float                                              DensityTop;                                                 // 0x0038   (0x0004)  
	FLinearColor                                       Albedo;                                                     // 0x003C   (0x0010)  
	FLinearColor                                       GroundAlbedo;                                               // 0x004C   (0x0010)  
	float                                              BeersPowderIntensity;                                       // 0x005C   (0x0004)  
	float                                              BeersPowderDepth;                                           // 0x0060   (0x0004)  
	float                                              BottomOcclusion;                                            // 0x0064   (0x0004)  
	float                                              BottomOcclusionHeight;                                      // 0x0068   (0x0004)  
	FLinearColor                                       NightEmissive;                                              // 0x006C   (0x0010)  
	float                                              PhaseG;                                                     // 0x007C   (0x0004)  
	float                                              PhaseG2;                                                    // 0x0080   (0x0004)  
	float                                              PhaseBlend;                                                 // 0x0084   (0x0004)  
	float                                              MultiScatteringContribution;                                // 0x0088   (0x0004)  
	float                                              MultiScatteringOcclusion;                                   // 0x008C   (0x0004)  
	float                                              MultiScatteringEccentricity;                                // 0x0090   (0x0004)  
	float                                              NoiseShapeIntensityA;                                       // 0x0094   (0x0004)  
	float                                              NoiseShapeIntensityB;                                       // 0x0098   (0x0004)  
	float                                              NoiseShapeIntensityC;                                       // 0x009C   (0x0004)  
	float                                              NoiseShapeIntensityD;                                       // 0x00A0   (0x0004)  
	float                                              TurbulenceIntensity;                                        // 0x00A4   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorBackgroundCloudSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSkyCreatorBackgroundCloudSettings
{ 
	float                                              BackgroundCloudsIntensity;                                  // 0x0000   (0x0004)  
	FLinearColor                                       BackgroundCloudsColorTint;                                  // 0x0004   (0x0010)  
	float                                              BackgroundCloudsLayerA;                                     // 0x0014   (0x0004)  
	float                                              BackgroundCloudsLayerB;                                     // 0x0018   (0x0004)  
	float                                              BackgroundCloudsLayerC;                                     // 0x001C   (0x0004)  
	float                                              BackgroundCloudsLightningPhase;                             // 0x0020   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyLightSettings
/// Size: 0x002C (0x000000 - 0x00002C)
struct FSkyCreatorSkyLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	float                                              NightIntensity;                                             // 0x0004   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       LowerHemisphereColor;                                       // 0x0018   (0x0010)  
	float                                              CloudAmbientOcclusionStrength;                              // 0x0028   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSunLightSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSkyCreatorSunLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	float                                              Temperature;                                                // 0x0014   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)  
	FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)  
	FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)  
	float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)  
	float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)  
	float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorMoonLightSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSkyCreatorMoonLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	float                                              Temperature;                                                // 0x0014   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)  
	FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)  
	FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)  
	float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)  
	float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)  
	float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorExponentialHeightFogSettings
/// Size: 0x006C (0x000000 - 0x00006C)
struct FSkyCreatorExponentialHeightFogSettings
{ 
	float                                              FogDensity;                                                 // 0x0000   (0x0004)  
	float                                              FogHeightFalloff;                                           // 0x0004   (0x0004)  
	FLinearColor                                       FogInscatteringColor;                                       // 0x0008   (0x0010)  
	float                                              FogStartDistance;                                           // 0x0018   (0x0004)  
	float                                              SecondFogDensity;                                           // 0x001C   (0x0004)  
	float                                              SecondFogHeightFalloff;                                     // 0x0020   (0x0004)  
	float                                              DirectionalInscatteringExponent;                            // 0x0024   (0x0004)  
	float                                              DirectionalInscatteringStartDistance;                       // 0x0028   (0x0004)  
	FLinearColor                                       DirectionalInscatteringColor;                               // 0x002C   (0x0010)  
	float                                              VolumetricFogScatteringDistribution;                        // 0x003C   (0x0004)  
	FLinearColor                                       VolumetricFogAlbedo;                                        // 0x0040   (0x0010)  
	FLinearColor                                       VolumetricFogEmissive;                                      // 0x0050   (0x0010)  
	float                                              VolumetricFogExtinctionScale;                               // 0x0060   (0x0004)  
	float                                              VolumetricFogStartDistance;                                 // 0x0064   (0x0004)  
	float                                              VolumetricFogNearFadeInDistance;                            // 0x0068   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorStarMapSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSkyCreatorStarMapSettings
{ 
	float                                              StarMapIntensity;                                           // 0x0000   (0x0004)  
	FLinearColor                                       StarMapColorTint;                                           // 0x0004   (0x0010)  
	float                                              StarMapTwinkleIntensity;                                    // 0x0014   (0x0004)  
	float                                              StarMapTwinkleSaturation;                                   // 0x0018   (0x0004)  
	float                                              StarMapTwinkleSpeed;                                        // 0x001C   (0x0004)  
	float                                              StarMapHorizonThreshold;                                    // 0x0020   (0x0004)  
	float                                              StarMapAtmosphereThreshold;                                 // 0x0024   (0x0004)  
	FLinearColor                                       NightHorizonColor;                                          // 0x0028   (0x0010)  
	FLinearColor                                       NightZenithColor;                                           // 0x0038   (0x0010)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherFXSettings
/// Size: 0x0164 (0x000000 - 0x000164)
struct FSkyCreatorWeatherFXSettings
{ 
	float                                              RainAmount;                                                 // 0x0000   (0x0004)  
	FLinearColor                                       RainColor;                                                  // 0x0004   (0x0010)  
	float                                              RainGravity;                                                // 0x0014   (0x0004)  
	float                                              RainLifetimeMin;                                            // 0x0018   (0x0004)  
	float                                              RainLifetimeMax;                                            // 0x001C   (0x0004)  
	float                                              RainSizeMin;                                                // 0x0020   (0x0004)  
	float                                              RainSizeMax;                                                // 0x0024   (0x0004)  
	float                                              RainMaskHardness;                                           // 0x0028   (0x0004)  
	FLinearColor                                       RainSplashColor;                                            // 0x002C   (0x0010)  
	float                                              RainSplashLifetimeMin;                                      // 0x003C   (0x0004)  
	float                                              RainSplashLifetimeMax;                                      // 0x0040   (0x0004)  
	float                                              RainSplashSizeMin;                                          // 0x0044   (0x0004)  
	float                                              RainSplashSizeMax;                                          // 0x0048   (0x0004)  
	float                                              RainSplashVolumetricScale;                                  // 0x004C   (0x0004)  
	float                                              RainSplashVolumetricDensity;                                // 0x0050   (0x0004)  
	float                                              SnowAmount;                                                 // 0x0054   (0x0004)  
	FLinearColor                                       SnowColor;                                                  // 0x0058   (0x0010)  
	float                                              SnowType;                                                   // 0x0068   (0x0004)  
	float                                              SnowGravity;                                                // 0x006C   (0x0004)  
	float                                              SnowTurbulence;                                             // 0x0070   (0x0004)  
	float                                              SnowLifetimeMin;                                            // 0x0074   (0x0004)  
	float                                              SnowLifetimeMax;                                            // 0x0078   (0x0004)  
	float                                              SnowSizeMin;                                                // 0x007C   (0x0004)  
	float                                              SnowSizeMax;                                                // 0x0080   (0x0004)  
	float                                              SnowMaskHardness;                                           // 0x0084   (0x0004)  
	bool                                               EnableLightnings;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              LightningSpawnIntervalMin;                                  // 0x008C   (0x0004)  
	float                                              LightningSpawnIntervalMax;                                  // 0x0090   (0x0004)  
	FLinearColor                                       LightningColorMin;                                          // 0x0094   (0x0010)  
	FLinearColor                                       LightningColorMax;                                          // 0x00A4   (0x0010)  
	float                                              LightningLifetime;                                          // 0x00B4   (0x0004)  
	float                                              LightningBoltSpawnChance;                                   // 0x00B8   (0x0004)  
	float                                              LightningBoltWidthMin;                                      // 0x00BC   (0x0004)  
	float                                              LightningBoltWidthMax;                                      // 0x00C0   (0x0004)  
	float                                              LightningBoltLengthMin;                                     // 0x00C4   (0x0004)  
	float                                              LightningBoltLengthMax;                                     // 0x00C8   (0x0004)  
	float                                              LightningBoltCurveFrequency;                                // 0x00CC   (0x0004)  
	float                                              LightningBoltCurveStrengthMin;                              // 0x00D0   (0x0004)  
	float                                              LightningBoltCurveStrengthMax;                              // 0x00D4   (0x0004)  
	float                                              LightningBoltJitterStrength;                                // 0x00D8   (0x0004)  
	float                                              LightningBranchSpawnChance;                                 // 0x00DC   (0x0004)  
	float                                              LightningBranchScaleMin;                                    // 0x00E0   (0x0004)  
	float                                              LightningBranchScaleMax;                                    // 0x00E4   (0x0004)  
	float                                              RainbowAmount;                                              // 0x00E8   (0x0004)  
	FLinearColor                                       RainbowColor;                                               // 0x00EC   (0x0010)  
	float                                              RainbowRadius;                                              // 0x00FC   (0x0004)  
	float                                              RainbowThickness;                                           // 0x0100   (0x0004)  
	FLinearColor                                       SecondaryRainbowColor;                                      // 0x0104   (0x0010)  
	float                                              SecondaryRainbowRadius;                                     // 0x0114   (0x0004)  
	float                                              SecondaryRainbowThickness;                                  // 0x0118   (0x0004)  
	float                                              VolumetricWindAmount;                                       // 0x011C   (0x0004)  
	float                                              VolumetricWindDensity;                                      // 0x0120   (0x0004)  
	FLinearColor                                       VolumetricWindColor;                                        // 0x0124   (0x0010)  
	float                                              VolumetricWindFogDensityContribution;                       // 0x0134   (0x0004)  
	float                                              VolumetricWindGravity;                                      // 0x0138   (0x0004)  
	float                                              VolumetricWindPrecipitationGravityWeight;                   // 0x013C   (0x0004)  
	float                                              VolumetricMistAmount;                                       // 0x0140   (0x0004)  
	float                                              VolumetricMistDensity;                                      // 0x0144   (0x0004)  
	FLinearColor                                       VolumetricMistColor;                                        // 0x0148   (0x0010)  
	float                                              VolumetricMistFogDensityContribution;                       // 0x0158   (0x0004)  
	float                                              VolumetricMistGravity;                                      // 0x015C   (0x0004)  
	float                                              VolumetricMistPrecipitationGravityWeight;                   // 0x0160   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorMaterialFXSettings
/// Size: 0x009C (0x000000 - 0x00009C)
struct FSkyCreatorMaterialFXSettings
{ 
	float                                              WetnessAmount;                                              // 0x0000   (0x0004)  
	FLinearColor                                       WetnessColor;                                               // 0x0004   (0x0010)  
	float                                              PuddlesAmount;                                              // 0x0014   (0x0004)  
	FLinearColor                                       PuddlesColor;                                               // 0x0018   (0x0010)  
	float                                              RainSplatterAmount;                                         // 0x0028   (0x0004)  
	float                                              RainSplatterScaleMin;                                       // 0x002C   (0x0004)  
	float                                              RainSplatterScaleMax;                                       // 0x0030   (0x0004)  
	float                                              RainSplatterFadingRate;                                     // 0x0034   (0x0004)  
	float                                              RainRipplesAmount;                                          // 0x0038   (0x0004)  
	float                                              RainRipplesIntensity;                                       // 0x003C   (0x0004)  
	float                                              RainRipplesSizeMin;                                         // 0x0040   (0x0004)  
	float                                              RainRipplesSizeMax;                                         // 0x0044   (0x0004)  
	float                                              RainRipplesDamping;                                         // 0x0048   (0x0004)  
	float                                              WindRipplesIntensity;                                       // 0x004C   (0x0004)  
	float                                              WindRipplesSpeed;                                           // 0x0050   (0x0004)  
	float                                              RainDropsAmount;                                            // 0x0054   (0x0004)  
	float                                              RainDropsIntensity;                                         // 0x0058   (0x0004)  
	float                                              RainDropsScaleMin;                                          // 0x005C   (0x0004)  
	float                                              RainDropsScaleMax;                                          // 0x0060   (0x0004)  
	float                                              RainDropsFadingRate;                                        // 0x0064   (0x0004)  
	float                                              RainStreaksAmount;                                          // 0x0068   (0x0004)  
	float                                              RainStreaksIntensity;                                       // 0x006C   (0x0004)  
	float                                              RainStreaksSizeMin;                                         // 0x0070   (0x0004)  
	float                                              RainStreaksSizeMax;                                         // 0x0074   (0x0004)  
	float                                              RainStreaksFadingRate;                                      // 0x0078   (0x0004)  
	float                                              RainStreaksTrailFadingRate;                                 // 0x007C   (0x0004)  
	float                                              SnowAmount;                                                 // 0x0080   (0x0004)  
	FLinearColor                                       SnowColor;                                                  // 0x0084   (0x0010)  
	float                                              SnowIntensity;                                              // 0x0094   (0x0004)  
	float                                              SnowSparklesThreshold;                                      // 0x0098   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWindSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSkyCreatorWindSettings
{ 
	float                                              CloudWindDirection;                                         // 0x0000   (0x0004)  
	float                                              CloudWindSpeed;                                             // 0x0004   (0x0004)  
	float                                              CloudWindSkewAmount;                                        // 0x0008   (0x0004)  
	float                                              CloudNoiseShapeWindDirection;                               // 0x000C   (0x0004)  
	float                                              CloudNoiseShapeWindSpeedHorizontal;                         // 0x0010   (0x0004)  
	float                                              CloudNoiseDetailWindSpeedVertical;                          // 0x0014   (0x0004)  
	float                                              WindDirection;                                              // 0x0018   (0x0004)  
	float                                              WindSpeed;                                                  // 0x001C   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorPostProcessSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSkyCreatorPostProcessSettings
{ 
	float                                              BloomIntensity;                                             // 0x0000   (0x0004)  
	float                                              BloomThreshold;                                             // 0x0004   (0x0004)  
	float                                              ExposureCompensation;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherSettings
/// Size: 0x04E8 (0x000000 - 0x0004E8)
struct FSkyCreatorWeatherSettings
{ 
	FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0000   (0x0080)  
	FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x0080   (0x00A8)  
	FSkyCreatorBackgroundCloudSettings                 BackgroundCloudSettings;                                    // 0x0128   (0x0024)  
	FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x014C   (0x002C)  
	FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x0178   (0x0048)  
	FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x01C0   (0x0048)  
	FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x0208   (0x006C)  
	FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x0274   (0x0048)  
	FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x02BC   (0x0164)  
	FSkyCreatorMaterialFXSettings                      MaterialFXSettings;                                         // 0x0420   (0x009C)  
	FSkyCreatorWindSettings                            WindSettings;                                               // 0x04BC   (0x0020)  
	FSkyCreatorPostProcessSettings                     PostProcessSettings;                                        // 0x04DC   (0x000C)  
};

/// Class /Script/SkyCreatorPlugin.SkyCreator
/// Size: 0x10E0 (0x000290 - 0x001370)
class ASkyCreator : public AActor : AActor
{ 
public:
	USceneComponent*                                   Root;                                                       // 0x0290   (0x0008)  
	UBillboardComponent*                               billboard;                                                  // 0x0298   (0x0008)  
	UStaticMeshComponent*                              Compass;                                                    // 0x02A0   (0x0008)  
	USkyAtmosphereComponent*                           SkyAtmosphere;                                              // 0x02A8   (0x0008)  
	UVolumetricCloudComponent*                         VolumetricCloud;                                            // 0x02B0   (0x0008)  
	USkyLightComponent*                                SkyLight;                                                   // 0x02B8   (0x0008)  
	UDirectionalLightComponent*                        SunLight;                                                   // 0x02C0   (0x0008)  
	UDirectionalLightComponent*                        MoonLight;                                                  // 0x02C8   (0x0008)  
	UExponentialHeightFogComponent*                    ExponentialHeightFog;                                       // 0x02D0   (0x0008)  
	UPostProcessComponent*                             PostProcess;                                                // 0x02D8   (0x0008)  
	USceneCaptureComponent2D*                          OcclusionCapture;                                           // 0x02E0   (0x0008)  
	USceneCaptureComponent2D*                          OcclusionCaptureDistant;                                    // 0x02E8   (0x0008)  
	UNiagaraComponent*                                 WeatherFX;                                                  // 0x02F0   (0x0008)  
	USceneComponent*                                   MaterialFX;                                                 // 0x02F8   (0x0008)  
	UNiagaraComponent*                                 RainRipplesFX;                                              // 0x0300   (0x0008)  
	UNiagaraComponent*                                 RainDropsFX;                                                // 0x0308   (0x0008)  
	UNiagaraComponent*                                 RainStreaksFX;                                              // 0x0310   (0x0008)  
	UNiagaraComponent*                                 RainSplatterFX;                                             // 0x0318   (0x0008)  
	UStaticMeshComponent*                              SkySphere;                                                  // 0x0320   (0x0008)  
	UMaterialInterface*                                SkySphereMaterial;                                          // 0x0328   (0x0008)  
	UMaterialInstanceDynamic*                          SkySphereMID;                                               // 0x0330   (0x0008)  
	bool                                               bUseEditorTimeOfDay;                                        // 0x0338   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0339   (0x0003)  MISSED
	float                                              EditorTimeOfDay;                                            // 0x033C   (0x0004)  
	bool                                               bUseEditorWeatherSettings;                                  // 0x0340   (0x0001)  
	TEnumAsByte<ESkyCreatorEditorWeatherType>          EditorWeatherType;                                          // 0x0341   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0342   (0x0006)  MISSED
	USkyCreatorWeatherPreset*                          EditorWeatherPreset;                                        // 0x0348   (0x0008)  
	FSkyCreatorWeatherSettings                         EditorWeatherSettings;                                      // 0x0350   (0x04E8)  
	bool                                               bIsEditorTickEnabled;                                       // 0x0838   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0839   (0x0003)  MISSED
	float                                              TimeOfDay;                                                  // 0x083C   (0x0004)  
	FSkyCreatorWeatherSettings                         WeatherSettings;                                            // 0x0840   (0x04E8)  
	UMaterialParameterCollection*                      CommonMPC;                                                  // 0x0D28   (0x0008)  
	float                                              SkySphereRadius;                                            // 0x0D30   (0x0004)  
	bool                                               bShowDebugVariables;                                        // 0x0D34   (0x0001)  
	bool                                               bControlSunPosition;                                        // 0x0D35   (0x0001)  
	TEnumAsByte<ESkyCreatorSunPositionType>            SunPositionType;                                            // 0x0D36   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0D37   (0x0001)  MISSED
	FCelestialPositionData                             SunPositionData;                                            // 0x0D38   (0x0008)  
	bool                                               bControlMoonPosition;                                       // 0x0D40   (0x0001)  
	TEnumAsByte<ESkyCreatorMoonPositionType>           MoonPositionType;                                           // 0x0D41   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0D42   (0x0002)  MISSED
	FCelestialPositionData                             MoonPositionData;                                           // 0x0D44   (0x0008)  
	float                                              SunriseTime;                                                // 0x0D4C   (0x0004)  
	float                                              SunsetTime;                                                 // 0x0D50   (0x0004)  
	float                                              SunDawnOffsetTime;                                          // 0x0D54   (0x0004)  
	float                                              SunDuskOffsetTime;                                          // 0x0D58   (0x0004)  
	float                                              SunDawnTime;                                                // 0x0D5C   (0x0004)  
	float                                              SunDuskTime;                                                // 0x0D60   (0x0004)  
	float                                              SunElevation;                                               // 0x0D64   (0x0004)  
	float                                              SunAzimuth;                                                 // 0x0D68   (0x0004)  
	float                                              SunMinAngleAtDawnDusk;                                      // 0x0D6C   (0x0004)  
	float                                              SunFadeInOutTime;                                           // 0x0D70   (0x0004)  
	float                                              MoonriseTime;                                               // 0x0D74   (0x0004)  
	float                                              MoonsetTime;                                                // 0x0D78   (0x0004)  
	float                                              MoonElevation;                                              // 0x0D7C   (0x0004)  
	float                                              MoonAzimuth;                                                // 0x0D80   (0x0004)  
	float                                              MoonFadeInOutTime;                                          // 0x0D84   (0x0004)  
	float                                              Latitude;                                                   // 0x0D88   (0x0004)  
	float                                              Longitude;                                                  // 0x0D8C   (0x0004)  
	float                                              TimeZone;                                                   // 0x0D90   (0x0004)  
	bool                                               bDaylightSavingTime;                                        // 0x0D94   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0D95   (0x0003)  MISSED
	int32_t                                            Year;                                                       // 0x0D98   (0x0004)  
	int32_t                                            Month;                                                      // 0x0D9C   (0x0004)  
	int32_t                                            Day;                                                        // 0x0DA0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0DA4   (0x0004)  MISSED
	FDateTime                                          Date;                                                       // 0x0DA8   (0x0008)  
	bool                                               bLightTransition;                                           // 0x0DB0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0DB1   (0x0003)  MISSED
	float                                              SunSurfaceBrightness;                                       // 0x0DB4   (0x0004)  
	float                                              MoonSurfaceBrightness;                                      // 0x0DB8   (0x0004)  
	float                                              SunCurrentElevation;                                        // 0x0DBC   (0x0004)  
	float                                              TransitionStartSunAngle;                                    // 0x0DC0   (0x0004)  
	float                                              TransitionMiddleSunAngle;                                   // 0x0DC4   (0x0004)  
	float                                              TransitionEndSunAngle;                                      // 0x0DC8   (0x0004)  
	float                                              NightIntensityTransitionStartSunAngle;                      // 0x0DCC   (0x0004)  
	float                                              NightIntensityTransitionEndSunAngle;                        // 0x0DD0   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SkyAtmosphereMobility;                                      // 0x0DD4   (0x0001)  
	ESkyAtmosphereTransformMode                        PositionMode;                                               // 0x0DD5   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x0DD6   (0x0002)  MISSED
	float                                              PlanetRadius;                                               // 0x0DD8   (0x0004)  
	float                                              AtmosphereHeight;                                           // 0x0DDC   (0x0004)  
	float                                              AerialPespectiveViewDistanceScale;                          // 0x0DE0   (0x0004)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0DE4   (0x0004)  MISSED
	FVector                                            PlanetTopPosition;                                          // 0x0DE8   (0x0018)  
	float                                              TraceSampleCountScale;                                      // 0x0E00   (0x0004)  
	float                                              GodRaysResolution;                                          // 0x0E04   (0x0004)  
	float                                              LayerBottomAltitude;                                        // 0x0E08   (0x0004)  
	float                                              LayerHeight;                                                // 0x0E0C   (0x0004)  
	float                                              TracingStartMaxDistance;                                    // 0x0E10   (0x0004)  
	float                                              TracingMaxDistance;                                         // 0x0E14   (0x0004)  
	bool                                               bPerSampleAtmosphericLightTransmittance;                    // 0x0E18   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0E19   (0x0007)  MISSED
	UMaterialParameterCollection*                      VolumetricCloudsMPC;                                        // 0x0E20   (0x0008)  
	FVector                                            LayerBottomAltitudePosition;                                // 0x0E28   (0x0018)  
	FVector                                            LayerTopAltitudePosition;                                   // 0x0E40   (0x0018)  
	UMaterialInterface*                                CurrentVolumetricCloudMaterial;                             // 0x0E58   (0x0008)  
	UMaterialInstanceDynamic*                          VolumetricCloudMID;                                         // 0x0E60   (0x0008)  
	UMaterialInterface*                                VolumetricCloudDensitySampleMaterial;                       // 0x0E68   (0x0008)  
	UMaterialInstanceDynamic*                          VolumetricCloudDensitySampleMID;                            // 0x0E70   (0x0008)  
	UTextureRenderTarget2D*                            VolumetricCloudDensitySampleRT;                             // 0x0E78   (0x0008)  
	bool                                               bCinematicQuality;                                          // 0x0E80   (0x0001)  
	TEnumAsByte<EVolumetricCloudRenderTargetMode>      RenderMode;                                                 // 0x0E81   (0x0001)  
	bool                                               bHighQualityAerialPerspective;                              // 0x0E82   (0x0001)  
	bool                                               bCloudShadowSpatialFiltering;                               // 0x0E83   (0x0001)  
	int32_t                                            MultiScatteringApproximationOctaveCount;                    // 0x0E84   (0x0004)  
	bool                                               bGroundContribution;                                        // 0x0E88   (0x0001)  
	bool                                               bRayMarchVolumeShadow;                                      // 0x0E89   (0x0001)  
	unsigned char                                      UnknownData11_5[0x2];                                       // 0x0E8A   (0x0002)  MISSED
	float                                              ViewSampleCountScale;                                       // 0x0E8C   (0x0004)  
	float                                              ReflectionSampleCountScale;                                 // 0x0E90   (0x0004)  
	float                                              ShadowViewSampleCountScale;                                 // 0x0E94   (0x0004)  
	float                                              ShadowReflectionSampleCountScale;                           // 0x0E98   (0x0004)  
	float                                              ShadowTracingDistance;                                      // 0x0E9C   (0x0004)  
	float                                              TransmittanceThreshold;                                     // 0x0EA0   (0x0004)  
	float                                              CloudMapScale;                                              // 0x0EA4   (0x0004)  
	FVector2D                                          CloudMapOffset;                                             // 0x0EA8   (0x0010)  
	float                                              CoverageVariationMapScale;                                  // 0x0EB8   (0x0004)  
	TEnumAsByte<EVolumetricCloudNoiseShapeResolution>  NoiseShapeResolution;                                       // 0x0EBC   (0x0001)  
	TEnumAsByte<EVolumetricCloudNoiseDetailResolution> NoiseDetailResolution;                                      // 0x0EBD   (0x0001)  
	unsigned char                                      UnknownData12_5[0x2];                                       // 0x0EBE   (0x0002)  MISSED
	float                                              NoiseShapeScale;                                            // 0x0EC0   (0x0004)  
	float                                              NoiseDetailScale;                                           // 0x0EC4   (0x0004)  
	float                                              TurbulenceScale;                                            // 0x0EC8   (0x0004)  
	float                                              BackgroundCloudsContrast;                                   // 0x0ECC   (0x0004)  
	float                                              BackgroundCloudsReflectionScale;                            // 0x0ED0   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SkyLightMobility;                                           // 0x0ED4   (0x0001)  
	bool                                               bRealTimeCapture;                                           // 0x0ED5   (0x0001)  
	bool                                               bSkyLightCaptureTimeSlice;                                  // 0x0ED6   (0x0001)  
	bool                                               bLowerHemisphereIsSolidColor;                               // 0x0ED7   (0x0001)  
	bool                                               bCloudAmbientOcclusion;                                     // 0x0ED8   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0ED9   (0x0003)  MISSED
	float                                              CloudAmbientOcclusionExtent;                                // 0x0EDC   (0x0004)  
	float                                              CloudAmbientOcclusionMapResolutionScale;                    // 0x0EE0   (0x0004)  
	float                                              CloudAmbientOcclusionApertureScale;                         // 0x0EE4   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SunLightMobility;                                           // 0x0EE8   (0x0001)  
	bool                                               bSunConstantIntensity;                                      // 0x0EE9   (0x0001)  
	unsigned char                                      UnknownData14_5[0x2];                                       // 0x0EEA   (0x0002)  MISSED
	float                                              SunIntensity;                                               // 0x0EEC   (0x0004)  
	float                                              SunCurrentIntensity;                                        // 0x0EF0   (0x0004)  
	bool                                               bSunUseTemperature;                                         // 0x0EF4   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x0EF5   (0x0003)  MISSED
	float                                              SunDiskSize;                                                // 0x0EF8   (0x0004)  
	bool                                               bSunConstantAtmosphereDiskColorScale;                       // 0x0EFC   (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x0EFD   (0x0003)  MISSED
	FLinearColor                                       SunAtmosphereDiskColorScale;                                // 0x0F00   (0x0010)  
	bool                                               bSunPerPixelAtmosphereTransmittance;                        // 0x0F10   (0x0001)  
	TEnumAsByte<EVolumetricCloudShadowType>            SunCloudShadowType;                                         // 0x0F11   (0x0001)  
	unsigned char                                      UnknownData17_5[0x2];                                       // 0x0F12   (0x0002)  MISSED
	float                                              SunCloudShadowExtent;                                       // 0x0F14   (0x0004)  
	float                                              SunCloudShadowMapResolutionScale;                           // 0x0F18   (0x0004)  
	float                                              SunCloudShadowRaySampleCountScale;                          // 0x0F1C   (0x0004)  
	TEnumAsByte<EComponentMobility>                    MoonLightMobility;                                          // 0x0F20   (0x0001)  
	bool                                               bMoonConstantIntensity;                                     // 0x0F21   (0x0001)  
	unsigned char                                      UnknownData18_5[0x2];                                       // 0x0F22   (0x0002)  MISSED
	float                                              MoonIntensity;                                              // 0x0F24   (0x0004)  
	float                                              MoonCurrentIntensity;                                       // 0x0F28   (0x0004)  
	bool                                               bMoonUseTemperature;                                        // 0x0F2C   (0x0001)  
	unsigned char                                      UnknownData19_5[0x3];                                       // 0x0F2D   (0x0003)  MISSED
	float                                              MoonDiskSize;                                               // 0x0F30   (0x0004)  
	float                                              MoonRotation;                                               // 0x0F34   (0x0004)  
	float                                              MoonPhase;                                                  // 0x0F38   (0x0004)  
	bool                                               bMoonPhaseLightIntensityScale;                              // 0x0F3C   (0x0001)  
	unsigned char                                      UnknownData20_5[0x3];                                       // 0x0F3D   (0x0003)  MISSED
	float                                              MoonPhaseLightIntensityMinScale;                            // 0x0F40   (0x0004)  
	float                                              MoonPhaseLightIntensityMaxScale;                            // 0x0F44   (0x0004)  
	bool                                               bMoonConstantAtmosphereDiskColorScale;                      // 0x0F48   (0x0001)  
	unsigned char                                      UnknownData21_5[0x3];                                       // 0x0F49   (0x0003)  MISSED
	FLinearColor                                       MoonAtmosphereDiskColorScale;                               // 0x0F4C   (0x0010)  
	bool                                               bMoonPerPixelAtmosphereTransmittance;                       // 0x0F5C   (0x0001)  
	TEnumAsByte<EVolumetricCloudShadowType>            MoonCloudShadowType;                                        // 0x0F5D   (0x0001)  
	unsigned char                                      UnknownData22_5[0x2];                                       // 0x0F5E   (0x0002)  MISSED
	float                                              MoonCloudShadowExtent;                                      // 0x0F60   (0x0004)  
	float                                              MoonCloudShadowMapResolutionScale;                          // 0x0F64   (0x0004)  
	float                                              MoonCloudShadowRaySampleCountScale;                         // 0x0F68   (0x0004)  
	TEnumAsByte<EComponentMobility>                    ExponentialHeightFogMobility;                               // 0x0F6C   (0x0001)  
	bool                                               bEnableExponentialHeightFog;                                // 0x0F6D   (0x0001)  
	bool                                               bEnableVolumetricFog;                                       // 0x0F6E   (0x0001)  
	unsigned char                                      UnknownData23_5[0x1];                                       // 0x0F6F   (0x0001)  MISSED
	float                                              FogHeightOffset;                                            // 0x0F70   (0x0004)  
	float                                              SecondFogHeightOffset;                                      // 0x0F74   (0x0004)  
	float                                              VolumetricFogViewDistance;                                  // 0x0F78   (0x0004)  
	unsigned char                                      UnknownData24_5[0x4];                                       // 0x0F7C   (0x0004)  MISSED
	UTexture2D*                                        StarMapTexture;                                             // 0x0F80   (0x0008)  
	TEnumAsByte<ESkyCreatorStarMapRotationType>        StarMapRotationType;                                        // 0x0F88   (0x0001)  
	unsigned char                                      UnknownData25_5[0x7];                                       // 0x0F89   (0x0007)  MISSED
	FVector                                            StarMapAdditionalRotation;                                  // 0x0F90   (0x0018)  
	bool                                               bEnableOcclusionCapture;                                    // 0x0FA8   (0x0001)  
	bool                                               bOcclusionCaptureRealtimeUpdate;                            // 0x0FA9   (0x0001)  
	bool                                               bEnableOcclusionDebugView;                                  // 0x0FAA   (0x0001)  
	unsigned char                                      UnknownData26_5[0x5];                                       // 0x0FAB   (0x0005)  MISSED
	UTextureRenderTarget2D*                            OcclusionRenderTarget;                                      // 0x0FB0   (0x0008)  
	float                                              OcclusionCaptureWidth;                                      // 0x0FB8   (0x0004)  
	float                                              OcclusionCaptureHeight;                                     // 0x0FBC   (0x0004)  
	float                                              OcclusionCaptureStepDistance;                               // 0x0FC0   (0x0004)  
	float                                              OcclusionBias;                                              // 0x0FC4   (0x0004)  
	int32_t                                            OcclusionBlurSamples;                                       // 0x0FC8   (0x0004)  
	float                                              OcclusionBlurDistance;                                      // 0x0FCC   (0x0004)  
	float                                              OcclusionTransitionHardness;                                // 0x0FD0   (0x0004)  
	bool                                               bEnableDistantOcclusionCapture;                             // 0x0FD4   (0x0001)  
	bool                                               bDistantOcclusionCaptureRealtimeUpdate;                     // 0x0FD5   (0x0001)  
	unsigned char                                      UnknownData27_5[0x2];                                       // 0x0FD6   (0x0002)  MISSED
	UTextureRenderTarget2D*                            DistantOcclusionRenderTarget;                               // 0x0FD8   (0x0008)  
	float                                              DistantOcclusionCaptureWidth;                               // 0x0FE0   (0x0004)  
	float                                              DistantOcclusionCaptureStepDistance;                        // 0x0FE4   (0x0004)  
	UMaterialInterface*                                OcclusionDebugPostProcess;                                  // 0x0FE8   (0x0008)  
	FVector                                            CameraLocation;                                             // 0x0FF0   (0x0018)  
	FVector                                            CameraLocationSnapped;                                      // 0x1008   (0x0018)  
	FVector                                            OcclusionCurrentLocation;                                   // 0x1020   (0x0018)  
	float                                              OcclusionCaptureStepSize;                                   // 0x1038   (0x0004)  
	unsigned char                                      UnknownData28_5[0x4];                                       // 0x103C   (0x0004)  MISSED
	FVector                                            DistantCameraLocationSnapped;                               // 0x1040   (0x0018)  
	FVector                                            DistantOcclusionCurrentLocation;                            // 0x1058   (0x0018)  
	float                                              DistantOcclusionCaptureStepSize;                            // 0x1070   (0x0004)  
	float                                              WeatherFXHeightCutoff;                                      // 0x1074   (0x0004)  
	float                                              WeatherFXCutoffSoftness;                                    // 0x1078   (0x0004)  
	TEnumAsByte<EPrecipitationSpawnMode>               PrecipitationSpawnMode;                                     // 0x107C   (0x0001)  
	unsigned char                                      UnknownData29_5[0x3];                                       // 0x107D   (0x0003)  MISSED
	float                                              PrecipitationSpawnRadiusCPU;                                // 0x1080   (0x0004)  
	float                                              PrecipitationSpawnRadiusGPU;                                // 0x1084   (0x0004)  
	float                                              PrecipitationMaxViewDistance;                               // 0x1088   (0x0004)  
	float                                              PrecipitationVerticalCheckDistance;                         // 0x108C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     PrecipitationCollisionChannel;                              // 0x1090   (0x0001)  
	unsigned char                                      UnknownData30_5[0x3];                                       // 0x1091   (0x0003)  MISSED
	float                                              RainSpawnRateMaxCPU;                                        // 0x1094   (0x0004)  
	float                                              RainSpawnRateMaxGPU;                                        // 0x1098   (0x0004)  
	float                                              RainDistanceScaleFactor;                                    // 0x109C   (0x0004)  
	float                                              RainCameraMotionAlignmentScale;                             // 0x10A0   (0x0004)  
	float                                              RainVelocityElongationScale;                                // 0x10A4   (0x0004)  
	float                                              RainVelocityFade;                                           // 0x10A8   (0x0004)  
	float                                              RainIndexOfRefraction;                                      // 0x10AC   (0x0004)  
	float                                              RainDepthFadeDistance;                                      // 0x10B0   (0x0004)  
	float                                              RainCameraFadeDistance;                                     // 0x10B4   (0x0004)  
	float                                              RainCameraFadeOffset;                                       // 0x10B8   (0x0004)  
	float                                              RainSplashSpawnRateMaxCPU;                                  // 0x10BC   (0x0004)  
	float                                              RainSplashSpawnRateMaxGPU;                                  // 0x10C0   (0x0004)  
	float                                              RainSplashIndexOfRefraction;                                // 0x10C4   (0x0004)  
	bool                                               EnableRainSplashVolumetric;                                 // 0x10C8   (0x0001)  
	unsigned char                                      UnknownData31_5[0x3];                                       // 0x10C9   (0x0003)  MISSED
	float                                              RainSplashDepthFadeDistance;                                // 0x10CC   (0x0004)  
	float                                              RainSplashCameraFadeDistance;                               // 0x10D0   (0x0004)  
	float                                              RainSplashCameraFadeOffset;                                 // 0x10D4   (0x0004)  
	float                                              SnowSpawnRateMaxCPU;                                        // 0x10D8   (0x0004)  
	float                                              SnowSpawnRateMaxGPU;                                        // 0x10DC   (0x0004)  
	float                                              SnowDistanceScaleFactor;                                    // 0x10E0   (0x0004)  
	float                                              SnowCameraMotionAlignmentScale;                             // 0x10E4   (0x0004)  
	float                                              SnowVelocityElongationScale;                                // 0x10E8   (0x0004)  
	float                                              SnowDepthFadeDistance;                                      // 0x10EC   (0x0004)  
	float                                              SnowCameraFadeDistance;                                     // 0x10F0   (0x0004)  
	float                                              SnowCameraFadeOffset;                                       // 0x10F4   (0x0004)  
	UTextureRenderTarget2D*                            LightningsParametersRT;                                     // 0x10F8   (0x0008)  
	TArray<FSkyCreatorLightningParameters>             LightningParameters;                                        // 0x1100   (0x0010)  
	unsigned char                                      UnknownData32_5[0x8];                                       // 0x1110   (0x0008)  MISSED
	float                                              CurrentLightningInterval;                                   // 0x1118   (0x0004)  
	unsigned char                                      UnknownData33_5[0x4];                                       // 0x111C   (0x0004)  MISSED
	UNiagaraSystem*                                    LightningStrikeSystem;                                      // 0x1120   (0x0008)  
	FVector                                            LastLightningPosition;                                      // 0x1128   (0x0018)  
	TArray<FVector>                                    LightningAvailablePositions;                                // 0x1140   (0x0010)  
	int32_t                                            LightningCurrentIndex;                                      // 0x1150   (0x0004)  
	bool                                               bSampleCloudDensity;                                        // 0x1154   (0x0001)  
	unsigned char                                      UnknownData34_5[0x3];                                       // 0x1155   (0x0003)  MISSED
	int32_t                                            LightningMaxSamples;                                        // 0x1158   (0x0004)  
	float                                              LightningSpawnInnerRadius;                                  // 0x115C   (0x0004)  
	float                                              LightningSpawnOuterRadius;                                  // 0x1160   (0x0004)  
	float                                              LightningRandomDegreeInConeMax;                             // 0x1164   (0x0004)  
	float                                              LightningBoltEmissiveScale;                                 // 0x1168   (0x0004)  
	unsigned char                                      UnknownData35_5[0xC];                                       // 0x116C   (0x000C)  MISSED
	float                                              LightningFlashFadeUpdateRate;                               // 0x1178   (0x0004)  
	float                                              LightningFlashFadeDelta;                                    // 0x117C   (0x0004)  
	float                                              LightningFlashEmissiveScale;                                // 0x1180   (0x0004)  
	float                                              LightningFlashEmissiveReflectionScale;                      // 0x1184   (0x0004)  
	float                                              LightningFlashRadiusScale;                                  // 0x1188   (0x0004)  
	float                                              LightningFlashFadeSpeed;                                    // 0x118C   (0x0004)  
	float                                              RainbowDistance;                                            // 0x1190   (0x0004)  
	float                                              RainbowDepthFadeDistance;                                   // 0x1194   (0x0004)  
	float                                              VolumetricWindScale;                                        // 0x1198   (0x0004)  
	float                                              VolumetricWindFadeHardness;                                 // 0x119C   (0x0004)  
	float                                              VolumetricWindViewDistance;                                 // 0x11A0   (0x0004)  
	float                                              VolumetricMistScale;                                        // 0x11A4   (0x0004)  
	float                                              VolumetricMistFadeHardness;                                 // 0x11A8   (0x0004)  
	float                                              VolumetricMistViewDistance;                                 // 0x11AC   (0x0004)  
	float                                              MaterialFXHeightCutoff;                                     // 0x11B0   (0x0004)  
	float                                              MaterialFXCutoffSoftness;                                   // 0x11B4   (0x0004)  
	bool                                               bPauseFXSimulations;                                        // 0x11B8   (0x0001)  
	unsigned char                                      UnknownData36_5[0x3];                                       // 0x11B9   (0x0003)  MISSED
	float                                              WetnessSlopeAngle;                                          // 0x11BC   (0x0004)  
	float                                              WetnessSlopeSmoothness;                                     // 0x11C0   (0x0004)  
	float                                              PuddlesMaskScale;                                           // 0x11C4   (0x0004)  
	float                                              PuddlesRoughness;                                           // 0x11C8   (0x0004)  
	float                                              PuddlesSlopeAngle;                                          // 0x11CC   (0x0004)  
	float                                              PuddlesSlopeSmoothness;                                     // 0x11D0   (0x0004)  
	float                                              RainSplatterUpdateRate;                                     // 0x11D4   (0x0004)  
	float                                              RainSplatterScale;                                          // 0x11D8   (0x0004)  
	float                                              RainSplatterSlopeAngle;                                     // 0x11DC   (0x0004)  
	float                                              RainSplatterSlopeSmoothness;                                // 0x11E0   (0x0004)  
	float                                              RainSplatterDeltaAccumulator;                               // 0x11E4   (0x0004)  
	float                                              RainRipplesUpdateRate;                                      // 0x11E8   (0x0004)  
	float                                              RainRipplesScale;                                           // 0x11EC   (0x0004)  
	float                                              WindRipplesScale;                                           // 0x11F0   (0x0004)  
	float                                              RainRipplesDeltaAccumulator;                                // 0x11F4   (0x0004)  
	float                                              RainDropsUpdateRate;                                        // 0x11F8   (0x0004)  
	float                                              RainDropsScale;                                             // 0x11FC   (0x0004)  
	float                                              RainDropsSlopeAngle;                                        // 0x1200   (0x0004)  
	float                                              RainDropsSlopeSmoothness;                                   // 0x1204   (0x0004)  
	float                                              RainDropsDeltaAccumulator;                                  // 0x1208   (0x0004)  
	float                                              RainStreaksUpdateRate;                                      // 0x120C   (0x0004)  
	float                                              RainStreaksScale;                                           // 0x1210   (0x0004)  
	float                                              RainStreaksSlopeAngle;                                      // 0x1214   (0x0004)  
	float                                              RainStreaksSlopeSmoothness;                                 // 0x1218   (0x0004)  
	float                                              RainStreaksDeltaAccumulator;                                // 0x121C   (0x0004)  
	float                                              SnowMaskScale;                                              // 0x1220   (0x0004)  
	float                                              SnowScale;                                                  // 0x1224   (0x0004)  
	float                                              SnowRoughness;                                              // 0x1228   (0x0004)  
	float                                              SnowSparklesScale;                                          // 0x122C   (0x0004)  
	float                                              SnowSparklesRoughness;                                      // 0x1230   (0x0004)  
	float                                              SnowSlopeAngle;                                             // 0x1234   (0x0004)  
	float                                              SnowSlopeSmoothness;                                        // 0x1238   (0x0004)  
	bool                                               bEnableWind;                                                // 0x123C   (0x0001)  
	bool                                               bOverride_EditorCloudWindDirection : 1;                     // 0x123D:0 (0x0001)  
	bool                                               bOverride_EditorCloudWindSpeed : 1;                         // 0x123D:1 (0x0001)  
	bool                                               bOverride_EditorCloudWindSkewAmount : 1;                    // 0x123D:2 (0x0001)  
	bool                                               bOverride_EditorCloudNoiseShapeWindDirection : 1;           // 0x123D:3 (0x0001)  
	bool                                               bOverride_EditorCloudNoiseShapeWindSpeedHorizontal : 1;     // 0x123D:4 (0x0001)  
	bool                                               bOverride_EditorCloudNoiseDetailWindSpeedVertical : 1;      // 0x123D:5 (0x0001)  
	bool                                               bOverride_EditorWindDirection : 1;                          // 0x123D:6 (0x0001)  
	bool                                               bOverride_EditorWindSpeed : 1;                              // 0x123D:7 (0x0001)  
	unsigned char                                      UnknownData37_4[0x2];                                       // 0x123E   (0x0002)  MISSED
	float                                              EditorCloudWindDirection;                                   // 0x1240   (0x0004)  
	float                                              EditorCloudWindSpeed;                                       // 0x1244   (0x0004)  
	float                                              EditorCloudWindSkewAmount;                                  // 0x1248   (0x0004)  
	float                                              EditorCloudNoiseShapeWindDirection;                         // 0x124C   (0x0004)  
	float                                              EditorCloudNoiseShapeWindSpeedHorizontal;                   // 0x1250   (0x0004)  
	float                                              EditorCloudNoiseDetailWindSpeedVertical;                    // 0x1254   (0x0004)  
	float                                              EditorWindDirection;                                        // 0x1258   (0x0004)  
	float                                              EditorWindSpeed;                                            // 0x125C   (0x0004)  
	FVector                                            CloudWindOffset;                                            // 0x1260   (0x0018)  
	FVector                                            CloudWindSkewDirection;                                     // 0x1278   (0x0018)  
	float                                              CloudWindSkewForce;                                         // 0x1290   (0x0004)  
	unsigned char                                      UnknownData38_5[0x4];                                       // 0x1294   (0x0004)  MISSED
	FVector                                            CloudNoiseShapeWindOffset;                                  // 0x1298   (0x0018)  
	FVector                                            CloudNoiseDetailWindOffset;                                 // 0x12B0   (0x0018)  
	FVector                                            PrecipitationWindOffset;                                    // 0x12C8   (0x0018)  
	FVector                                            VolumetricWindWindOffset;                                   // 0x12E0   (0x0018)  
	FVector                                            VolumetricMistWindOffset;                                   // 0x12F8   (0x0018)  
	bool                                               bUseExposureSettings;                                       // 0x1310   (0x0001)  
	bool                                               bExtendDefaultLuminanceRange;                               // 0x1311   (0x0001)  
	unsigned char                                      UnknownData39_5[0x2];                                       // 0x1312   (0x0002)  MISSED
	float                                              PostProcessPriority;                                        // 0x1314   (0x0004)  
	TEnumAsByte<EAutoExposureMethod>                   ExposureMethod;                                             // 0x1318   (0x0001)  
	unsigned char                                      UnknownData40_5[0x7];                                       // 0x1319   (0x0007)  MISSED
	UCurveFloat*                                       ExposureBiasCurve;                                          // 0x1320   (0x0008)  
	UTexture*                                          ExposureMeterMask;                                          // 0x1328   (0x0008)  
	float                                              ExposureMinBrightness;                                      // 0x1330   (0x0004)  
	float                                              ExposureMaxBrightness;                                      // 0x1334   (0x0004)  
	float                                              ExposureMinEV100;                                           // 0x1338   (0x0004)  
	float                                              ExposureMaxEV100;                                           // 0x133C   (0x0004)  
	float                                              ExposureSpeedUp;                                            // 0x1340   (0x0004)  
	float                                              ExposureSpeedDown;                                          // 0x1344   (0x0004)  
	float                                              ExposureLowPercent;                                         // 0x1348   (0x0004)  
	float                                              ExposureHighPercent;                                        // 0x134C   (0x0004)  
	float                                              ExposureHistogramLogMin;                                    // 0x1350   (0x0004)  
	float                                              ExposureHistogramLogMax;                                    // 0x1354   (0x0004)  
	float                                              ExposureHistogramMinEV100;                                  // 0x1358   (0x0004)  
	float                                              ExposureHistogramMaxEV100;                                  // 0x135C   (0x0004)  
	FMulticastInlineDelegate                           OnLightningStrike;                                          // 0x1360   (0x0010)  


	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreator.UpdateSettingsSequencer
	void UpdateSettingsSequencer();                                                                                          // [0x16f9d10] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SpawnLightningStrike
	void SpawnLightningStrike(FVector LightningPosition);                                                                    // [0x16f9c80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetYear
	void SetYear(int32_t NewValue);                                                                                          // [0x16f9b60] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWindSettings
	void SetWindSettings(FSkyCreatorWindSettings InWindSettings);                                                            // [0x16f9ab0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
	void SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings);                                                 // [0x16f9a00] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherSettings
	void SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings);                                                   // [0x16f98d0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
	void SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings);                                             // [0x16f97a0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
	void SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);                           // [0x16f9690] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetTimeZone
	void SetTimeZone(float NewValue);                                                                                        // [0x16f9610] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetTime
	void SetTime(float InTime);                                                                                              // [0x16f9590] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunSimplePositionSettings
	void SetSunSimplePositionSettings(float InSunriseTime, float InSunsetTime, float InSunElevation, float InSunAzimuth);    // [0x16f9330] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunsetTime
	void SetSunsetTime(float NewValue);                                                                                      // [0x16f9510] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunriseTime
	void SetSunriseTime(float NewValue);                                                                                     // [0x16f9490] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunMinAngleAtDawnDusk
	void SetSunMinAngleAtDawnDusk(float NewValue);                                                                           // [0x16f92b0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunLightSettings
	void SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings);                                                // [0x16f91a0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunIntensity
	void SetSunIntensity(float NewValue);                                                                                    // [0x16f9120] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunElevation
	void SetSunElevation(float NewValue);                                                                                    // [0x16f90a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunDuskOffsetTime
	void SetSunDuskOffsetTime(float NewValue);                                                                               // [0x16f9020] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunDiskSize
	void SetSunDiskSize(float NewValue);                                                                                     // [0x16f8fa0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunDawnOffsetTime
	void SetSunDawnOffsetTime(float NewValue);                                                                               // [0x16f8f20] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunAzimuth
	void SetSunAzimuth(float NewValue);                                                                                      // [0x16f8ea0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunAtmosphereDiskColorScale
	void SetSunAtmosphereDiskColorScale(FLinearColor NewValue);                                                              // [0x16f8e10] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetStarMapSettings
	void SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings);                                                   // [0x16f8d00] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetStarMapAdditionalRotation
	void SetStarMapAdditionalRotation(FVector NewValue);                                                                     // [0x16f8c70] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
	void SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings);                                                // [0x16f8b90] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
	void SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);                                 // [0x16f8a90] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetRealPositionSettings
	void SetRealPositionSettings(float InLatitude, float InLongitude, float InTimeZone, bool InbDaylightSavingTime, int32_t InYear, int32_t InMonth, int32_t InDay); // [0x16f8860] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetPostProcessSettings
	void SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings);                                       // [0x16f87b0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonSimplePositionSettings
	void SetMoonSimplePositionSettings(float InMoonriseTime, float InMoonsetTime, float InMoonElevation, float InMoonAzimuth); // [0x16f8550] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonsetTime
	void SetMoonsetTime(float NewValue);                                                                                     // [0x16f8730] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonRotation
	void SetMoonRotation(float NewValue);                                                                                    // [0x16f84d0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonriseTime
	void SetMoonriseTime(float NewValue);                                                                                    // [0x16f86b0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonPhase
	void SetMoonPhase(float NewValue);                                                                                       // [0x16f8450] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
	void SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings);                                             // [0x16f8340] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonIntensity
	void SetMoonIntensity(float NewValue);                                                                                   // [0x16f82c0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonElevation
	void SetMoonElevation(float NewValue);                                                                                   // [0x16f8240] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonDiskSize
	void SetMoonDiskSize(float NewValue);                                                                                    // [0x16f81c0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonAzimuth
	void SetMoonAzimuth(float NewValue);                                                                                     // [0x16f8140] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonAtmosphereDiskColorScale
	void SetMoonAtmosphereDiskColorScale(FLinearColor NewValue);                                                             // [0x16f80b0] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMonth
	void SetMonth(int32_t NewValue);                                                                                         // [0x16f8020] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMaterialFXSettings
	void SetMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettings);                                          // [0x16f7f20] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLongitude
	void SetLongitude(float NewValue);                                                                                       // [0x16f7ea0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLayerHeight
	void SetLayerHeight(float NewValue);                                                                                     // [0x16f7e20] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLayerBottomAltitude
	void SetLayerBottomAltitude(float NewValue);                                                                             // [0x16f7da0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLatitude
	void SetLatitude(float NewValue);                                                                                        // [0x16f7d20] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
	void SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);            // [0x16f7bf0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetEditorWeatherSettings
	void SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue);                                                      // [0x16f7ac0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetEditorWeatherPreset
	void SetEditorWeatherPreset(USkyCreatorWeatherPreset* NewValue);                                                         // [0x16f7a30] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetEditorTimeOfDay
	void SetEditorTimeOfDay(float NewValue);                                                                                 // [0x16f79b0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetDay
	void SetDay(int32_t NewValue);                                                                                           // [0x16f7920] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetCloudMapOffset
	void SetCloudMapOffset(FVector2D NewValue);                                                                              // [0x16f7890] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetbDaylightSavingTime
	void SetbDaylightSavingTime(bool NewValue);                                                                              // [0x16f9bf0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetBackgroundCloudSettings
	void SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings);                           // [0x16f77d0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
	void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);                                                      // [0x16f7700] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather
	void OnRep_UpdateWeather();                                                                                              // [0x16f76e0] Final|Native|Private 
	// Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime
	void OnRep_UpdateTime();                                                                                                 // [0x16f76c0] Final|Native|Private 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindSettings
	void LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float alpha);    // [0x16f7540] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
	void LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float alpha); // [0x16f73c0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWetnessAmount
	void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float alpha);                                         // [0x16f72a0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
	void LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float alpha); // [0x16f7020] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
	void LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float alpha); // [0x16f6da0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
	void LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float alpha); // [0x16f6b70] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
	void LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float alpha); // [0x16f6980] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
	void LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float alpha); // [0x16f6790] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSnowAmount
	void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float alpha);                                                  // [0x16f6670] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
	void LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float alpha); // [0x16f64c0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
	void LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float alpha); // [0x16f62e0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpPuddlesAmount
	void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float alpha);                                         // [0x16f61c0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpPostProcessSettings
	void LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float alpha); // [0x16f6060] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
	void LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float alpha); // [0x16f5e70] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpMaterialFXSettings
	void LerpMaterialFXSettings(FSkyCreatorMaterialFXSettings InMaterialFXSettingsA, FSkyCreatorMaterialFXSettings InMaterialFXSettingsB, float alpha); // [0x16f5c40] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
	void LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float alpha); // [0x16f59c0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpBackgroundCloudSettings
	void LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float alpha); // [0x16f5840] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWindSettings
	FSkyCreatorWindSettings GetWindSettings();                                                                               // [0x16f5800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherSettings
	FSkyCreatorWeatherSettings GetWeatherSettings();                                                                         // [0x16f5730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherMaterialFXSettings
	FSkyCreatorMaterialFXSettings GetWeatherMaterialFXSettings();                                                            // [0x16f5690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
	FSkyCreatorWeatherFXSettings GetWeatherFXSettings();                                                                     // [0x16f55d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
	FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();                                                         // [0x16f5530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetTime
	float GetTime();                                                                                                         // [0x16f5500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSunPosition
	FRotator GetSunPosition(float Time);                                                                                     // [0x16f5450] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSunLightSettings
	FSkyCreatorSunLightSettings GetSunLightSettings();                                                                       // [0x16f53f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapSettings
	FSkyCreatorStarMapSettings GetStarMapSettings();                                                                         // [0x16f5390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapRotation
	FRotator GetStarMapRotation();                                                                                           // [0x16f5350] Final|Native|Public|HasDefaults|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
	FSkyCreatorSkyLightSettings GetSkyLightSettings();                                                                       // [0x16f5300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
	FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();                                                             // [0x16f5280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetPostProcessSettings
	FSkyCreatorPostProcessSettings GetPostProcessSettings();                                                                 // [0x16f5240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPosition
	FRotator GetMoonPosition(float Time);                                                                                    // [0x16f5190] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPhase
	float GetMoonPhase();                                                                                                    // [0x16f5160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
	FSkyCreatorMoonLightSettings GetMoonLightSettings();                                                                     // [0x16f5100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetLastLightningPosition
	FVector GetLastLightningPosition();                                                                                      // [0x16f50c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
	FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();                                               // [0x16f5040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetCloudDensityAtPosition
	float GetCloudDensityAtPosition(FVector Position);                                                                       // [0x16f4fa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetBackgroundCloudSettings
	FSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings();                                                         // [0x16f4f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.FindLightningPosition
	bool FindLightningPosition(FVector Position, FVector& OutPosition);                                                      // [0x16f4e50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset
/// Size: 0x0500 (0x000030 - 0x000530)
class USkyCreatorWeatherPreset : public UDataAsset : UDataAsset
{ 
public:
	FText                                              Description;                                                // 0x0030   (0x0018)  
	FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0048   (0x0080)  
	FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x00C8   (0x00A8)  
	FSkyCreatorBackgroundCloudSettings                 BackgroundCloudSettings;                                    // 0x0170   (0x0024)  
	FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x0194   (0x002C)  
	FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x01C0   (0x0048)  
	FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x0208   (0x0048)  
	FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x0250   (0x006C)  
	FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x02BC   (0x0048)  
	FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x0304   (0x0164)  
	FSkyCreatorMaterialFXSettings                      WeatherMaterialFXSettings;                                  // 0x0468   (0x009C)  
	FSkyCreatorWindSettings                            WindSettings;                                               // 0x0504   (0x0020)  
	FSkyCreatorPostProcessSettings                     PostProcessSettings;                                        // 0x0524   (0x000C)  


	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
	FSkyCreatorWeatherSettings GetWeatherPresetSettings();                                                                   // [0x16fcbd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorEditorWeatherType
/// Size: 0x03
enum ESkyCreatorEditorWeatherType : uint8_t
{
	EditorWeather_WeatherPreset0                                                     = 0,
	EditorWeather_WeatherSettings1                                                   = 1,
	EditorWeather_MAX2                                                               = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorSunPositionType
/// Size: 0x03
enum ESkyCreatorSunPositionType : uint8_t
{
	SunPositionType_Simple0                                                          = 0,
	SunPositionType_Real1                                                            = 1,
	SunPositionType_MAX2                                                             = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorMoonPositionType
/// Size: 0x04
enum ESkyCreatorMoonPositionType : uint8_t
{
	MoonPositionType_Simple0                                                         = 0,
	MoonPositionType_SimpleFixedElevation1                                           = 1,
	MoonPositionType_Real2                                                           = 2,
	MoonPositionType_MAX3                                                            = 3
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudRenderTargetMode
/// Size: 0x04
enum EVolumetricCloudRenderTargetMode : uint8_t
{
	VolumetricCloudRenderTargetMode_Default0                                         = 0,
	VolumetricCloudRenderTargetMode_Quality1                                         = 1,
	VolumetricCloudRenderTargetMode_Performance2                                     = 2,
	VolumetricCloudRenderTargetMode_MAX3                                             = 3
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudNoiseShapeResolution
/// Size: 0x04
enum EVolumetricCloudNoiseShapeResolution : uint8_t
{
	VolumetricCloudNoiseShapeResolution0                                             = 0,
	VolumetricCloudNoiseShapeResolution1                                             = 1,
	VolumetricCloudNoiseShapeResolution2                                             = 2,
	VolumetricCloudNoiseShapeResolution_MAX3                                         = 3
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudNoiseDetailResolution
/// Size: 0x03
enum EVolumetricCloudNoiseDetailResolution : uint8_t
{
	VolumetricCloudNoiseDetailResolution0                                            = 0,
	VolumetricCloudNoiseDetailResolution1                                            = 1,
	VolumetricCloudNoiseDetailResolution_MAX2                                        = 2
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudShadowType
/// Size: 0x03
enum EVolumetricCloudShadowType : uint8_t
{
	VolumetricCloudShadowType_True0                                                  = 0,
	VolumetricCloudShadowType_Fake1                                                  = 1,
	VolumetricCloudShadowType_MAX2                                                   = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorStarMapRotationType
/// Size: 0x04
enum ESkyCreatorStarMapRotationType : uint8_t
{
	StarMapRotationType_NoRotation0                                                  = 0,
	StarMapRotationType_FollowSun1                                                   = 1,
	StarMapRotationType_FollowMoon2                                                  = 2,
	StarMapRotationType_MAX3                                                         = 3
};

/// Enum /Script/SkyCreatorPlugin.EPrecipitationSpawnMode
/// Size: 0x04
enum EPrecipitationSpawnMode : uint8_t
{
	EPrecipitationSpawnMode_CPUGPU0                                                  = 0,
	EPrecipitationSpawnMode_CPU1                                                     = 1,
	EPrecipitationSpawnMode_GPU2                                                     = 2,
	EPrecipitationSpawnMode_MAX3                                                     = 3
};

