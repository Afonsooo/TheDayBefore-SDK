
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieRenderPipelineSettings.

/// Struct /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMoviePipelineConsoleVariableEntry
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	bool                                               bIsEnabled;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UMoviePipelineBurnInWidget : public UUserWidget : UUserWidget
{ 
public:
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass : UMoviePipelineRenderPass
{ 
public:
	FSoftClassPath                                     BurnInClass;                                                // 0x0048   (0x0020)  
	bool                                               bCompositeOntoFinalImage;                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2F];                                      // 0x0069   (0x002F)  MISSED
	UTextureRenderTarget2D*                            RenderTarget;                                               // 0x0098   (0x0008)  
	TArray<UMoviePipelineBurnInWidget*>                BurnInWidgetInstances;                                      // 0x00A0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x00B0 (0x000048 - 0x0000F8)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting : UMoviePipelineSetting
{ 
public:
	TArray<TScriptInterface>                           ConsoleVariablePresets;                                     // 0x0048   (0x0010)  
	TMap<FString, float>                               ConsoleVariables;                                           // 0x0058   (0x0050)  
	TArray<FString>                                    StartConsoleCommands;                                       // 0x00A8   (0x0010)  
	TArray<FString>                                    EndConsoleCommands;                                         // 0x00B8   (0x0010)  
	TArray<FMoviePipelineConsoleVariableEntry>         CVars;                                                      // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
	bool UpdateConsoleVariableEnableState(FString Name, bool bIsEnabled);                                                    // [0x152d630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
	bool RemoveConsoleVariable(FString Name, bool bRemoveAllInstances);                                                      // [0x152d4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
	TArray<FMoviePipelineConsoleVariableEntry> GetConsoleVariables();                                                        // [0x152d330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
	bool AddOrUpdateConsoleVariable(FString Name, float Value);                                                              // [0x152d160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
	bool AddConsoleVariable(FString Name, float Value);                                                                      // [0x152cfd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass : UMoviePipelineRenderPass
{ 
public:
	bool                                               bCompositeOntoFinalImage;                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x0049   (0x0017)  MISSED
	UTextureRenderTarget2D*                            RenderTarget;                                               // 0x0060   (0x0008)  
};

