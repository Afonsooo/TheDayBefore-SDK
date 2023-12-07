
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ConsoleVariablesEditorRuntime.

/// Struct /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesEditorAssetSaveData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FConsoleVariablesEditorAssetSaveData
{ 
	FString                                            CommandName;                                                // 0x0000   (0x0010)  
	FString                                            CommandValueAsString;                                       // 0x0010   (0x0010)  
	ECheckBoxState                                     CheckedState;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
/// Size: 0x0028 (0x000028 - 0x000050)
class UConsoleVariablesAsset : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            VariableCollectionDescription;                              // 0x0030   (0x0010)  
	TArray<FConsoleVariablesEditorAssetSaveData>       SavedCommands;                                              // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
	void SetVariableCollectionDescription(FString InVariableCollectionDescription);                                          // [0x1549ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
	void ReplaceSavedCommands(TArray<FConsoleVariablesEditorAssetSaveData>& Replacement);                                    // [0x1549e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
	bool RemoveConsoleVariable(FString InCommandString);                                                                     // [0x1549d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
	FString GetVariableCollectionDescription();                                                                              // [0x1549c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
	int32_t GetSavedCommandsCount();                                                                                         // [0x1549c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
	TArray<FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked);                                                 // [0x1549b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
	FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked);                                                // [0x1549990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
	TArray<FConsoleVariablesEditorAssetSaveData> GetSavedCommands();                                                         // [0x1549960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
	bool FindSavedDataByCommandString(FString InCommandString, FConsoleVariablesEditorAssetSaveData& OutValue, TEnumAsByte<ESearchCase> SearchCase); // [0x15496a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
	void ExecuteSavedCommands(UObject* WorldContextObject, bool bOnlyIncludeChecked);                                        // [0x1549500] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
	void CopyFrom(UConsoleVariablesAsset* InAssetToCopy);                                                                    // [0x15493e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
	void AddOrSetConsoleObjectSavedData(FConsoleVariablesEditorAssetSaveData& InData);                                       // [0x1549320] Final|Native|Public|HasOutParms|BlueprintCallable 
};

