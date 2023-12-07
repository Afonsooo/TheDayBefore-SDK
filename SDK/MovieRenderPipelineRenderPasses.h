
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieRenderPipelineRenderPasses.

/// Struct /Script/MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMoviePipelinePostProcessPass
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<UMaterialInterface*>                Material;                                                   // 0x0008   (0x0030)  
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
/// Size: 0x0130 (0x000048 - 0x000178)
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass : UMoviePipelineRenderPass
{ 
public:
	unsigned char                                      UnknownData00_1[0x130];                                     // 0x0048   (0x0130)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
/// Size: 0x00C0 (0x000178 - 0x000238)
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase : UMoviePipelineImagePassBase
{ 
public:
	bool                                               bAccumulatorIncludesAlpha;                                  // 0x0178   (0x0001)  
	bool                                               bDisableMultisampleEffects;                                 // 0x0179   (0x0001)  
	bool                                               bUse32BitPostProcessMaterials;                              // 0x017A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x017B   (0x0005)  MISSED
	TArray<FMoviePipelinePostProcessPass>              AdditionalPostProcessMaterials;                             // 0x0180   (0x0010)  
	bool                                               bRenderMainPass;                                            // 0x0190   (0x0001)  
	bool                                               bAddDefaultLayer;                                           // 0x0191   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0192   (0x0006)  MISSED
	TArray<FActorLayer>                                ActorLayers;                                                // 0x0198   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x01A8   (0x0010)  MISSED
	TArray<FSoftObjectPath>                            DataLayers;                                                 // 0x01B8   (0x0010)  
	TArray<UMaterialInterface*>                        ActivePostProcessMaterials;                                 // 0x01C8   (0x0010)  
	UMaterialInterface*                                StencilLayerMaterial;                                       // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x01E0   (0x0058)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase : UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase : UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase : UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase : UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
/// Size: 0x0008 (0x000238 - 0x000240)
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase : UMoviePipelineDeferredPassBase
{ 
public:
	bool                                               bReferenceMotionBlur;                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase : UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
/// Size: 0x0008 (0x000068 - 0x000070)
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase : UMoviePipelineImageSequenceOutputBase
{ 
public:
	EEXRCompressionFormat                              Compression;                                                // 0x0068   (0x0001)  
	bool                                               bMultilayer;                                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
/// Size: 0x0000 (0x000068 - 0x000068)
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase : UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
/// Size: 0x0008 (0x000068 - 0x000070)
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase : UMoviePipelineImageSequenceOutputBase
{ 
public:
	bool                                               bWriteAlpha;                                                // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
/// Size: 0x0000 (0x000068 - 0x000068)
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase : UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase : UMoviePipelineOutputBase
{ 
public:
	FString                                            FileNameFormatOverride;                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0058   (0x0060)  MISSED
};

/// Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
/// Size: 0x06
enum EEXRCompressionFormat : uint8_t
{
	EEXRCompressionFormat__None0                                                     = 0,
	EEXRCompressionFormat__PIZ1                                                      = 1,
	EEXRCompressionFormat__ZIP2                                                      = 2,
	EEXRCompressionFormat__DWAA3                                                     = 3,
	EEXRCompressionFormat__DWAB4                                                     = 4,
	EEXRCompressionFormat__EEXRCompressionFormat_MAX5                                = 5
};

