
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Niagara.

/// Struct /Script/Niagara.NiagaraSimCacheCreateParameters
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraSimCacheCreateParameters
{ 
	ENiagaraSimCacheAttributeCaptureMode               AttributeCaptureMode;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bAllowRebasing : 1;                                         // 0x0004:0 (0x0001)  
	bool                                               bAllowDataInterfaceCaching : 1;                             // 0x0004:1 (0x0001)  
	bool                                               bAllowInterpolation : 1;                                    // 0x0004:2 (0x0001)  
	bool                                               bAllowVelocityExtrapolation : 1;                            // 0x0004:3 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<FName>                                      RebaseIncludeAttributes;                                    // 0x0008   (0x0010)  
	TArray<FName>                                      RebaseExcludeAttributes;                                    // 0x0018   (0x0010)  
	TArray<FName>                                      InterpolationIncludeAttributes;                             // 0x0028   (0x0010)  
	TArray<FName>                                      InterpolationExcludeAttributes;                             // 0x0038   (0x0010)  
	TArray<FName>                                      ExplicitCaptureAttributes;                                  // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NDIRenderTargetVolumeSimCacheFrame
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNDIRenderTargetVolumeSimCacheFrame
{ 
	FIntVector                                         Size;                                                       // 0x0000   (0x000C)  
	TEnumAsByte<EPixelFormat>                          Format;                                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            UncompressedSize;                                           // 0x0010   (0x0004)  
	int32_t                                            CompressedSize;                                             // 0x0014   (0x0004)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ENiagaraDataSetType                                Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0014 (0x00000C - 0x000020)
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0028   (0x0008)  
	bool                                               bRequiresContext : 1;                                       // 0x0030:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x0030:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x0030:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x0030:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x0030:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x0030:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x0030:6 (0x0001)  
	bool                                               bReadFunction : 1;                                          // 0x0030:7 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x0031:0 (0x0001)  
	bool                                               bIsCompileTagGenerator : 1;                                 // 0x0031:1 (0x0001)  
	bool                                               bHidden : 1;                                                // 0x0031:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)  
	int32_t                                            ContextStageIndex;                                          // 0x0038   (0x0004)  
	int16_t                                            RequiredInputs;                                             // 0x003C   (0x0002)  
	int16_t                                            RequiredOutputs;                                            // 0x003E   (0x0002)  
	TMap<FName, FName>                                 FunctionSpecifiers;                                         // 0x0040   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraScriptDataInterfaceInfo
{ 
	UNiagaraDataInterface*                             DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0030   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraTypeDefinition
{ 
	UObject*                                           ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	char                                               Flags;                                                      // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)  
	bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x0008)  
	FName                                              FriendlyName;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FName                                              Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              OwnerName;                                                  // 0x0008   (0x0008)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)  
	TArray<FNiagaraVariableBase>                       VariadicInputs;                                             // 0x0038   (0x0010)  
	TArray<FNiagaraVariableBase>                       VariadicOutputs;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0078 (0x000000 - 0x000078)
struct FNiagaraSystemUpdateContext
{ 
	TArray<UNiagaraComponent*>                         ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<UNiagaraComponent*>                         ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<UNiagaraComponent*>                         ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<UNiagaraSystem*>                            SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	TArray<UNiagaraSystem*>                            SystemSimsToRecache;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	UNiagaraDataInterface*                             DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (0x000000 - 0x00002C)
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraCompileDependency
{ 
	FString                                            LinkerErrorMessage;                                         // 0x0000   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0010   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0020   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0030   (0x0010)  
	FNiagaraVariableBase                               DependentVariable;                                          // 0x0040   (0x000C)  
	bool                                               bDependentVariableFromCustomIterationNamespace;             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataChannelReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraDataChannelReference
{ 
	FName                                              ChannelName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NDIDataChannelFunctionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNDIDataChannelFunctionInfo
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
	TArray<FNiagaraVariableBase>                       Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariableBase>                       Outputs;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNDIDataChannel_GPUScriptParameterAccessInfo
{ 
	TArray<FNiagaraVariableBase>                       SortedParameters;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NDIDataChannelCompiledData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNDIDataChannelCompiledData
{ 
	TArray<FNDIDataChannelFunctionInfo>                FunctionInfo;                                               // 0x0000   (0x0010)  
	TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;               // 0x0010   (0x0050)  
	uint32_t                                           TotalParams;                                                // 0x0060   (0x0004)  
	bool                                               bUsedByCPU;                                                 // 0x0064   (0x0001)  
	bool                                               bUsedByGPU;                                                 // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0066   (0x0002)  MISSED
};

/// Struct /Script/Niagara.NDIDataChannelWriteCompiledData
/// Size: 0x0048 (0x000068 - 0x0000B0)
struct FNDIDataChannelWriteCompiledData : FNDIDataChannelCompiledData
{ 
	FNiagaraDataSetCompiledData                        DataLayout;                                                 // 0x0068   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)  
	uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x003D   (0x000B)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterBinding
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraParameterBinding
{ 
	FNiagaraVariableBase                               Parameter;                                                  // 0x0000   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraScalabilityState
{ 
	float                                              Significance;                                               // 0x0000   (0x0004)  
	float                                              LastVisibleTime;                                            // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0008   (0x0002)  MISSED
	bool                                               bCulled : 1;                                                // 0x000A:0 (0x0001)  
	bool                                               bPreviousCulled : 1;                                        // 0x000A:1 (0x0001)  
	bool                                               bCulledByDistance : 1;                                      // 0x000A:2 (0x0001)  
	bool                                               bCulledByInstanceCount : 1;                                 // 0x000A:3 (0x0001)  
	bool                                               bCulledByVisibility : 1;                                    // 0x000A:4 (0x0001)  
	bool                                               bCulledByGlobalBudget : 1;                                  // 0x000A:5 (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheCaptureParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSimCacheCaptureParameters
{ 
	int32_t                                            NumFrames;                                                  // 0x0000   (0x0004)  
	int32_t                                            CaptureRate;                                                // 0x0004   (0x0004)  
	bool                                               bManuallyAdvanceSimulation;                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              AdvanceDeltaTime;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraStackSection
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraStackSection
{ 
	FName                                              SectionIdentifier;                                          // 0x0000   (0x0008)  
	FText                                              SectionDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FText>                                      Categories;                                                 // 0x0020   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDynamicMeshSection
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraDynamicMeshSection
{ 
	int32_t                                            NumTriangles;                                               // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraDynamicMeshMaterial
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraDynamicMeshMaterial
{ 
	UMaterialInterface*                                Material;                                                   // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraUObjectPropertyReaderRemap
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraUObjectPropertyReaderRemap
{ 
	FName                                              GraphName;                                                  // 0x0000   (0x0008)  
	FName                                              RemapName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	bool                                               bAllowScalability;                                          // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0100 (0x000040 - 0x000140)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0100)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0440 (0x000040 - 0x000480)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x0110)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x0150   (0x0110)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0260   (0x0110)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0370   (0x0110)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x0110 (0x000040 - 0x000150)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x0110)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0100 (0x000040 - 0x000140)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0100)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0448 (0x000040 - 0x000488)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels;                                             // 0x0040   (0x0440)  
	int32_t                                            ChannelsUsed;                                               // 0x0480   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0484   (0x0004)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraBakerTextureSource
{ 
	FString                                            DisplayString;                                              // 0x0000   (0x0010)  
	FName                                              SourceName;                                                 // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraBakerCameraSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraBakerCameraSettings
{ 
	ENiagaraBakerViewMode                              ViewMode;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            ViewportLocation;                                           // 0x0008   (0x0018)  
	FRotator                                           ViewportRotation;                                           // 0x0020   (0x0018)  
	float                                              OrbitDistance;                                              // 0x0038   (0x0004)  
	float                                              FOV;                                                        // 0x003C   (0x0004)  
	float                                              OrthoWidth;                                                 // 0x0040   (0x0004)  
	bool                                               bUseAspectRatio;                                            // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraBakerTextureSettings
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x0008)  
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0008   (0x0018)  
	bool                                               bUseFrameSize : 1;                                          // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0021   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0024   (0x0008)  
	FIntPoint                                          TextureSize;                                                // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	UTexture2D*                                        GeneratedTexture;                                           // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNCPoolElement
{ 
	UNiagaraComponent*                                 Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x0008)  
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0060   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0070   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x0078   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraCulledComponentInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraCulledComponentInfo
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataChannelGameDataLayout
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraDataChannelGameDataLayout
{ 
	TMap<FNiagaraVariableBase, int32_t>                VariableIndices;                                            // 0x0000   (0x0050)  
	TArray<FNiagaraLwcStructConverter>                 LwcConverters;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraLwcStructConverter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraLwcStructConverter
{ 
	int32_t                                            LWCSize;                                                    // 0x0000   (0x0004)  
	int32_t                                            SWCSize;                                                    // 0x0004   (0x0004)  
	TArray<FNiagaraStructConversionStep>               ConversionSteps;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStructConversionStep
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraStructConversionStep
{ 
	int32_t                                            LWCBytes;                                                   // 0x0000   (0x0004)  
	int32_t                                            LWCOffset;                                                  // 0x0004   (0x0004)  
	int32_t                                            SimulationBytes;                                            // 0x0008   (0x0004)  
	int32_t                                            SimulationOffset;                                           // 0x000C   (0x0004)  
	ENiagaraStructConversionType                       ConversionType;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataInterfaceEmitterBinding
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraDataInterfaceEmitterBinding
{ 
	ENiagaraDataInterfaceEmitterBindingMode            BindingMode;                                                // 0x0000   (0x0004)  
	FName                                              EmitterName;                                                // 0x0004   (0x0008)  
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBasicParticleData
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	float                                              Size;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Velocity;                                                   // 0x0020   (0x0018)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector3f                                          BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraDataInterfaceSplineLUT
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraDataInterfaceSplineLUT
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	TArray<FVector>                                    Scales;                                                     // 0x0010   (0x0010)  
	TArray<FQuat>                                      Rotations;                                                  // 0x0020   (0x0010)  
	float                                              SplineLength;                                               // 0x0030   (0x0004)  
	float                                              SplineDistanceStep;                                         // 0x0034   (0x0004)  
	float                                              InvSplineDistanceStep;                                      // 0x0038   (0x0004)  
	int32_t                                            MaxIndex;                                                   // 0x003C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraOutlinerTimingData
{ 
	float                                              GameThread;                                                 // 0x0000   (0x0004)  
	float                                              RenderThread;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraOutlinerEmitterInstanceData
{ 
	FString                                            EmitterName;                                                // 0x0000   (0x0010)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	ENiagaraExecutionState                             ExecState;                                                  // 0x0014   (0x0004)  
	int32_t                                            NumParticles;                                               // 0x0018   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x001C:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraOutlinerSystemInstanceData
{ 
	FString                                            ComponentName;                                              // 0x0000   (0x0010)  
	FVector3f                                          LWCTile;                                                    // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FNiagaraOutlinerEmitterInstanceData>        Emitters;                                                   // 0x0020   (0x0010)  
	ENiagaraExecutionState                             ActualExecutionState;                                       // 0x0030   (0x0004)  
	ENiagaraExecutionState                             RequestedExecutionState;                                    // 0x0034   (0x0004)  
	FNiagaraScalabilityState                           ScalabilityState;                                           // 0x0038   (0x000C)  
	bool                                               bPendingKill : 1;                                           // 0x0044:0 (0x0001)  
	bool                                               bUsingCullProxy : 1;                                        // 0x0044:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0045   (0x0003)  MISSED
	ENCPoolMethod                                      PoolMethod;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FNiagaraOutlinerTimingData                         AverageTime;                                                // 0x004C   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxTime;                                                    // 0x0054   (0x0008)  
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                  // 0x005C   (0x0001)  
	TEnumAsByte<ENiagaraGpuComputeTickStage>           GpuTickStage;                                               // 0x005D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	bool                                               bIsSolo : 1;                                                // 0x0060:0 (0x0001)  
	bool                                               bRequiresDistanceFieldData : 1;                             // 0x0060:1 (0x0001)  
	bool                                               bRequiresDepthBuffer : 1;                                   // 0x0060:2 (0x0001)  
	bool                                               bRequiresEarlyViewData : 1;                                 // 0x0060:3 (0x0001)  
	bool                                               bRequiresViewUniformBuffer : 1;                             // 0x0060:4 (0x0001)  
	bool                                               bRequiresRayTracingScene : 1;                               // 0x0060:5 (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraOutlinerSystemData
{ 
	TArray<FNiagaraOutlinerSystemInstanceData>         SystemInstances;                                            // 0x0000   (0x0010)  
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0010   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x0018   (0x0008)  
	FNiagaraOutlinerTimingData                         AveragePerInstanceTime;                                     // 0x0020   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerInstanceTime;                                         // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraOutlinerWorldData
{ 
	TMap<FString, FNiagaraOutlinerSystemData>          Systems;                                                    // 0x0000   (0x0050)  
	bool                                               bHasBegunPlay;                                              // 0x0050   (0x0001)  
	char                                               WorldType;                                                  // 0x0051   (0x0001)  
	char                                               NetMode;                                                    // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0053   (0x0001)  MISSED
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0054   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraOutlinerData
{ 
	TMap<FString, FNiagaraOutlinerWorldData>           WorldData;                                                  // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDebuggerRequestConnection
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDebuggerAcceptConnection
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDebuggerConnectionClosed
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraDebuggerExecuteConsoleCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	bool                                               bRequiresWorld;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraDebuggerOutlinerUpdate
{ 
	FNiagaraOutlinerData                               OutlinerData;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraDebugHudTextOptions
{ 
	ENiagaraDebugHudFont                               Font;                                                       // 0x0000   (0x0004)  
	ENiagaraDebugHudHAlign                             HorizontalAlignment;                                        // 0x0004   (0x0001)  
	ENiagaraDebugHudVAlign                             VerticalAlignment;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector2D                                          ScreenOffset;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraDebugHUDVariable
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x0238 (0x000000 - 0x000238)
struct FNiagaraDebugHUDSettingsData
{ 
	bool                                               bHudEnabled;                                                // 0x0000   (0x0001)  
	bool                                               bHudRenderingEnabled;                                       // 0x0001   (0x0001)  
	bool                                               bValidateSystemSimulationDataBuffers;                       // 0x0002   (0x0001)  
	bool                                               bValidateParticleDataBuffers;                               // 0x0003   (0x0001)  
	bool                                               bOverviewEnabled;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	ENiagaraDebugHUDOverviewMode                       OverviewMode;                                               // 0x0008   (0x0004)  
	ENiagaraDebugHudFont                               OverviewFont;                                               // 0x000C   (0x0004)  
	FVector2D                                          OverviewLocation;                                           // 0x0010   (0x0010)  
	bool                                               bShowRegisteredComponents;                                  // 0x0020   (0x0001)  
	bool                                               bOverviewShowFilteredSystemOnly;                            // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	FString                                            ActorFilter;                                                // 0x0028   (0x0010)  
	bool                                               bComponentFilterEnabled;                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            ComponentFilter;                                            // 0x0040   (0x0010)  
	bool                                               bSystemFilterEnabled;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            SystemFilter;                                               // 0x0058   (0x0010)  
	bool                                               bEmitterFilterEnabled;                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            EmitterFilter;                                              // 0x0070   (0x0010)  
	bool                                               bActorFilterEnabled;                                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	ENiagaraDebugHudVerbosity                          SystemDebugVerbosity;                                       // 0x0084   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemEmitterVerbosity;                                     // 0x0088   (0x0004)  
	ENiagaraDebugHudVerbosity                          DataInterfaceVerbosity;                                     // 0x008C   (0x0004)  
	bool                                               bSystemShowBounds;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              SystemBoundsSolidBoxAlpha;                                  // 0x0094   (0x0004)  
	bool                                               bSystemShowActiveOnlyInWorld;                               // 0x0098   (0x0001)  
	bool                                               bShowSystemVariables;                                       // 0x0099   (0x0001)  
	unsigned char                                      UnknownData07_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   SystemVariables;                                            // 0x00A0   (0x0010)  
	FNiagaraDebugHudTextOptions                        SystemTextOptions;                                          // 0x00B0   (0x0018)  
	bool                                               bShowParticleVariables;                                     // 0x00C8   (0x0001)  
	bool                                               bEnableGpuParticleReadback;                                 // 0x00C9   (0x0001)  
	bool                                               bShowParticleIndex;                                         // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData08_5[0x5];                                       // 0x00CB   (0x0005)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   ParticlesVariables;                                         // 0x00D0   (0x0010)  
	FNiagaraDebugHudTextOptions                        ParticleTextOptions;                                        // 0x00E0   (0x0018)  
	bool                                               bShowParticlesVariablesWithSystem;                          // 0x00F8   (0x0001)  
	bool                                               bShowParticleVariablesVertical;                             // 0x00F9   (0x0001)  
	bool                                               bUseMaxParticlesToDisplay;                                  // 0x00FA   (0x0001)  
	bool                                               bUseParticleDisplayClip;                                    // 0x00FB   (0x0001)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector2D                                          ParticleDisplayClip;                                        // 0x0100   (0x0010)  
	bool                                               bUseParticleDisplayCenterRadius;                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              ParticleDisplayCenterRadius;                                // 0x0114   (0x0004)  
	int32_t                                            MaxParticlesToDisplay;                                      // 0x0118   (0x0004)  
	int32_t                                            PerfReportFrames;                                           // 0x011C   (0x0004)  
	ENiagaraDebugHUDPerfSampleMode                     PerfSampleMode;                                             // 0x0120   (0x0004)  
	ENiagaraDebugHUDPerfGraphMode                      PerfGraphMode;                                              // 0x0124   (0x0004)  
	int32_t                                            PerfHistoryFrames;                                          // 0x0128   (0x0004)  
	float                                              PerfGraphTimeRange;                                         // 0x012C   (0x0004)  
	FVector2D                                          PerfGraphSize;                                              // 0x0130   (0x0010)  
	FLinearColor                                       PerfGraphAxisColor;                                         // 0x0140   (0x0010)  
	bool                                               bEnableSmoothing;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	int32_t                                            SmoothingWidth;                                             // 0x0154   (0x0004)  
	FLinearColor                                       DefaultBackgroundColor;                                     // 0x0158   (0x0010)  
	FLinearColor                                       OverviewHeadingColor;                                       // 0x0168   (0x0010)  
	FLinearColor                                       OverviewDetailColor;                                        // 0x0178   (0x0010)  
	FLinearColor                                       OverviewDetailHighlightColor;                               // 0x0188   (0x0010)  
	FLinearColor                                       InWorldErrorTextColor;                                      // 0x0198   (0x0010)  
	FLinearColor                                       InWorldTextColor;                                           // 0x01A8   (0x0010)  
	FLinearColor                                       MessageInfoTextColor;                                       // 0x01B8   (0x0010)  
	FLinearColor                                       MessageWarningTextColor;                                    // 0x01C8   (0x0010)  
	FLinearColor                                       MessageErrorTextColor;                                      // 0x01D8   (0x0010)  
	float                                              SystemColorTableOpacity;                                    // 0x01E8   (0x0004)  
	uint32_t                                           SystemColorSeed;                                            // 0x01EC   (0x0004)  
	FVector                                            SystemColorHSVMin;                                          // 0x01F0   (0x0018)  
	FVector                                            SystemColorHSVMax;                                          // 0x0208   (0x0018)  
	ENiagaraDebugPlaybackMode                          PlaybackMode;                                               // 0x0220   (0x0001)  
	bool                                               bPlaybackRateEnabled;                                       // 0x0221   (0x0001)  
	unsigned char                                      UnknownData12_5[0x2];                                       // 0x0222   (0x0002)  MISSED
	float                                              PlaybackRate;                                               // 0x0224   (0x0004)  
	bool                                               bLoopTimeEnabled;                                           // 0x0228   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0229   (0x0003)  MISSED
	float                                              LoopTime;                                                   // 0x022C   (0x0004)  
	bool                                               bShowGlobalBudgetInfo;                                      // 0x0230   (0x0001)  
	unsigned char                                      UnknownData14_6[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraRequestSimpleClientInfoMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraOutlinerCaptureSettings
{ 
	bool                                               bTriggerCapture;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           CaptureDelayFrames;                                         // 0x0004   (0x0004)  
	bool                                               bGatherPerfData;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	uint32_t                                           SimCacheCaptureFrames;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraSimpleClientInfo
{ 
	TArray<FString>                                    Systems;                                                    // 0x0000   (0x0010)  
	TArray<FString>                                    Actors;                                                     // 0x0010   (0x0010)  
	TArray<FString>                                    Components;                                                 // 0x0020   (0x0010)  
	TArray<FString>                                    Emitters;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemSimCacheCaptureRequest
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	uint32_t                                           CaptureDelayFrames;                                         // 0x0008   (0x0004)  
	uint32_t                                           CaptureFrames;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureReply
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraSystemSimCacheCaptureReply
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	TArray<char>                                       SimCacheData;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0010)  
	float                                              Zoom;                                                       // 0x0010   (0x0004)  
	bool                                               bIsValid;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraLinearRamp
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraLinearRamp
{ 
	float                                              StartX;                                                     // 0x0000   (0x0004)  
	float                                              StartY;                                                     // 0x0004   (0x0004)  
	float                                              EndX;                                                       // 0x0008   (0x0004)  
	float                                              EndY;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraGlobalBudgetScaling
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraGlobalBudgetScaling
{ 
	bool                                               bCullByGlobalBudget : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bScaleMaxDistanceByGlobalBudgetUse : 1;                     // 0x0000:1 (0x0001)  
	bool                                               bScaleMaxInstanceCountByGlobalBudgetUse : 1;                // 0x0000:2 (0x0001)  
	bool                                               bScaleSystemInstanceCountByGlobalBudgetUse : 1;             // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxGlobalBudgetUsage;                                       // 0x0004   (0x0004)  
	FNiagaraLinearRamp                                 MaxDistanceScaleByGlobalBudgetUse;                          // 0x0008   (0x0010)  
	FNiagaraLinearRamp                                 MaxInstanceCountScaleByGlobalBudgetUse;                     // 0x0018   (0x0010)  
	FNiagaraLinearRamp                                 MaxSystemInstanceCountScaleByGlobalBudgetUse;               // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraSystemVisibilityCullingSettings
{ 
	bool                                               bCullWhenNotRendered : 1;                                   // 0x0000:0 (0x0001)  
	bool                                               bCullByViewFrustum : 1;                                     // 0x0000:1 (0x0001)  
	bool                                               bAllowPreCullingByViewFrustum : 1;                          // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxTimeOutsideViewFrustum;                                  // 0x0004   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0098 (0x000000 - 0x000098)
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            MaxInstances;                                               // 0x003C   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x0040   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0044   (0x0004)  
	ENiagaraCullProxyMode                              CullProxyMode;                                              // 0x0048   (0x0004)  
	int32_t                                            MaxSystemProxies;                                           // 0x004C   (0x0004)  
	FNiagaraSystemVisibilityCullingSettings            VisibilityCulling;                                          // 0x0050   (0x000C)  
	FNiagaraGlobalBudgetScaling                        BudgetScaling;                                              // 0x005C   (0x0038)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x0008)  
	ENiagaraCVarConditionResponse                      PassResponse;                                               // 0x0008   (0x0001)  
	ENiagaraCVarConditionResponse                      FailResponse;                                               // 0x0009   (0x0001)  
	bool                                               Value;                                                      // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x000B   (0x0001)  MISSED
	int32_t                                            MinInt;                                                     // 0x000C   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)  
	float                                              MinFloat;                                                   // 0x0014   (0x0004)  
	float                                              MaxFloat;                                                   // 0x0018   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x001C:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x001C:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x001C:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x001C:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0x13];                                      // 0x001D   (0x0013)  MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000098 - 0x0000A0)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0098:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0098:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0098:2 (0x0001)  
	bool                                               bOverrideVisibilitySettings : 1;                            // 0x0098:3 (0x0001)  
	bool                                               bOverrideGlobalBudgetScalingSettings : 1;                   // 0x0098:4 (0x0001)  
	bool                                               bOverrideCullProxySettings : 1;                             // 0x0098:5 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)  
	FName                                              SourceEmitter;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraEmitterScriptProperties
{ 
	UNiagaraScript*                                    Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x0008)  
	bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)  
	bool                                               UpdateAttributeInitialValues;                               // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.VersionedNiagaraEmitterData
/// Size: 0x02E8 (0x000000 - 0x0002E8)
struct FVersionedNiagaraEmitterData
{ 
	FNiagaraAssetVersion                               Version;                                                    // 0x0000   (0x001C)  
	bool                                               bDeprecated;                                                // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FText                                              DeprecationMessage;                                         // 0x0020   (0x0018)  
	bool                                               bLocalSpace;                                                // 0x0038   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x003C   (0x0004)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0044   (0x0001)  
	ENiagaraEmitterCalculateBoundMode                  CalculateBoundsMode;                                        // 0x0045   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	FBox                                               FixedBounds;                                                // 0x0048   (0x0038)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0080:0 (0x0001)  
	bool                                               bCombineEventSpawn : 1;                                     // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData04_4[0x7];                                       // 0x0081   (0x0007)  MISSED
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0088   (0x0010)  
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0098   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00C8   (0x0010)  
	bool                                               bLimitDeltaTime : 1;                                        // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            MaxGPUParticlesSpawnPerFrame;                               // 0x00DC   (0x0004)  
	float                                              MaxDeltaTimePerTick;                                        // 0x00E0   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x00F0   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0118   (0x0028)  
	FNiagaraParameterStore                             RendererBindings;                                           // 0x0140   (0x0088)  
	TArray<UNiagaraRendererProperties*>                RendererProperties;                                         // 0x01C8   (0x0010)  
	TArray<UNiagaraSimulationStageBase*>               SimulationStages;                                           // 0x01D8   (0x0010)  
	UNiagaraScript*                                    GPUComputeScript;                                           // 0x01E8   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01F0   (0x0010)  
	FNiagaraEmitterScalabilitySettings                 CurrentScalabilitySettings;                                 // 0x0200   (0x0038)  
	unsigned char                                      UnknownData08_6[0xB0];                                      // 0x0238   (0x00B0)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0088 (0x000000 - 0x000088)
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<UObject*>                           Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<UNiagaraDataInterface*>                     DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<UObject*>                                   UObjects;                                                   // 0x0040   (0x0010)  
	TArray<FNiagaraPositionSource>                     OriginalPositionData;                                       // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraPositionSource
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraPositionSource
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x001C (0x00000C - 0x000028)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
	FNiagaraLwcStructConverter                         StructConverter;                                            // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (0x000000 - 0x00001C)
struct FNiagaraAssetVersion
{ 
	int32_t                                            MajorVersion;                                               // 0x0000   (0x0004)  
	int32_t                                            MinorVersion;                                               // 0x0004   (0x0004)  
	FGuid                                              VersionGuid;                                                // 0x0008   (0x0010)  
	bool                                               bIsVisibleInVersionSelector;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	UNiagaraEmitter*                                   Instance;                                                   // 0x0028   (0x0008)  
	FVersionedNiagaraEmitter                           VersionedInstance;                                          // 0x0030   (0x0018)  
};

/// Struct /Script/Niagara.VersionedNiagaraEmitter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVersionedNiagaraEmitter
{ 
	UNiagaraEmitter*                                   Emitter;                                                    // 0x0000   (0x0008)  
	FGuid                                              Version;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x0018)  
	FVector                                            CollisionNormal;                                            // 0x0018   (0x0018)  
	FVector                                            CollisionVelocity;                                          // 0x0030   (0x0018)  
	int32_t                                            ParticleIndex;                                              // 0x0048   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x004C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraMeshMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraMeshMICOverride
{ 
	UMaterialInterface*                                OriginalMaterial;                                           // 0x0000   (0x0008)  
	UMaterialInstanceConstant*                         ReplacementMaterial;                                        // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraMeshMaterialOverride
{ 
	UMaterialInterface*                                ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraMeshRendererMeshProperties
{ 
	UStaticMesh*                                       Mesh;                                                       // 0x0000   (0x0008)  
	FNiagaraParameterBinding                           MeshParameterBinding;                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            Scale;                                                      // 0x0018   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0030   (0x0018)  
	FVector                                            PivotOffset;                                                // 0x0048   (0x0018)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (0x000000 - 0x000001)
struct FParameterDefinitionsSubscription
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraPerfBaselineStats
{ 
	float                                              PerInstanceAvg_GT;                                          // 0x0000   (0x0004)  
	float                                              PerInstanceAvg_RT;                                          // 0x0004   (0x0004)  
	float                                              PerInstanceMax_GT;                                          // 0x0008   (0x0004)  
	float                                              PerInstanceMax_RT;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetRedirect
/// Size: 0x0080 (0x000000 - 0x000080)
struct FNiagaraPlatformSetRedirect
{ 
	TArray<FName>                                      ProfileNames;                                               // 0x0000   (0x0010)  
	ENiagaraDeviceProfileRedirectMode                  Mode;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              RedirectProfileName;                                        // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FNiagaraPlatformSetCVarCondition                   CVarConditionEnabled;                                       // 0x0020   (0x0030)  
	FNiagaraPlatformSetCVarCondition                   CVarConditionDisabled;                                      // 0x0050   (0x0030)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialScalarParameter
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraRendererMaterialScalarParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialVectorParameter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraRendererMaterialVectorParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FLinearColor                                       Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialTextureParameter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraRendererMaterialTextureParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	UTexture*                                          Texture;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraRendererMaterialStaticBoolParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FName                                              StaticVariableName;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialParameters
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraRendererMaterialParameters
{ 
	TArray<FNiagaraMaterialAttributeBinding>           AttributeBindings;                                          // 0x0000   (0x0010)  
	TArray<FNiagaraRendererMaterialScalarParameter>    ScalarParameters;                                           // 0x0010   (0x0010)  
	TArray<FNiagaraRendererMaterialVectorParameter>    VectorParameters;                                           // 0x0020   (0x0010)  
	TArray<FNiagaraRendererMaterialTextureParameter>   TextureParameters;                                          // 0x0030   (0x0010)  
	TArray<FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;                                      // 0x0040   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraRibbonShapeCustomVertex
{ 
	FVector2f                                          Position;                                                   // 0x0000   (0x0008)  
	FVector2f                                          Normal;                                                     // 0x0008   (0x0008)  
	float                                              TextureV;                                                   // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0000   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0004   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0010)  
	FVector2D                                          Scale;                                                      // 0x0020   (0x0010)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0030   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FNiagaraScalabilityManager
{ 
	UNiagaraEffectType*                                EffectType;                                                 // 0x0000   (0x0008)  
	TArray<UNiagaraComponent*>                         ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC8];                                      // 0x0018   (0x00C8)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x0008   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FString                                            RequiredVersion;                                            // 0x0010   (0x0010)  
	int32_t                                            OnlyEvaluateInScriptUsage;                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              Description;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraCompilerTag
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FString                                            StringValue;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bDisableDebugSwitches : 1;                                  // 0x0024:1 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:2 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:3 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
	FGuid                                              ScriptVersionID;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableByteCode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraVMExecutableByteCode
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
	int32_t                                            UncompressedSize;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x0190 (0x000000 - 0x000190)
struct FNiagaraVMExecutableData
{ 
	FNiagaraVMExecutableByteCode                       ByteCode;                                                   // 0x0000   (0x0018)  
	FNiagaraVMExecutableByteCode                       OptimizedByteCode;                                          // 0x0018   (0x0018)  
	unsigned char                                      UnknownData00_5[0x38];                                      // 0x0030   (0x0038)  MISSED
	int32_t                                            NumTempRegisters;                                           // 0x0068   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x006C   (0x0004)  
	TArray<FNiagaraCompilerTag>                        CompileTags;                                                // 0x0070   (0x0010)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0080   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0090   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x00A8   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00C8   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x00D8   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x00E8   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00F8   (0x0010)  
	FNiagaraShaderScriptParametersMetadata             ShaderScriptParametersMetadata;                             // 0x0108   (0x0058)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x0168   (0x0010)  
	TArray<char>                                       ExperimentalContextData;                                    // 0x0178   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x0188:0 (0x0001)  
	bool                                               bNeedsGPUContextInit : 1;                                   // 0x0188:1 (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0189   (0x0007)  MISSED
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FVersionedNiagaraScriptData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000088 - 0x0000A8)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0088   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x008C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0090   (0x0010)  
	bool                                               bInitialized : 1;                                           // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000088 - 0x000098)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffers
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraSimCacheDataBuffers
{ 
	uint32_t                                           NumInstances;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       FloatData;                                                  // 0x0008   (0x0010)  
	TArray<char>                                       HalfData;                                                   // 0x0018   (0x0010)  
	TArray<char>                                       Int32Data;                                                  // 0x0028   (0x0010)  
	TArray<int32_t>                                    IDToIndexTable;                                             // 0x0038   (0x0010)  
	uint32_t                                           IDAcquireTag;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<uint32_t>                                   InterpMapping;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSimCacheEmitterFrame
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FNiagaraSimCacheEmitterFrame
{ 
	FBox                                               LocalBounds;                                                // 0x0000   (0x0038)  
	int32_t                                            TotalSpawnedParticles;                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FNiagaraSimCacheDataBuffers                        ParticleDataBuffers;                                        // 0x0040   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraSimCacheSystemFrame
/// Size: 0x0098 (0x000000 - 0x000098)
struct FNiagaraSimCacheSystemFrame
{ 
	FBox                                               LocalBounds;                                                // 0x0000   (0x0038)  
	FNiagaraSimCacheDataBuffers                        SystemDataBuffers;                                          // 0x0038   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraSimCacheFrame
/// Size: 0x0120 (0x000000 - 0x000120)
struct FNiagaraSimCacheFrame
{ 
	FTransform                                         LocalToWorld;                                               // 0x0000   (0x0060)  
	FVector3f                                          LWCTile;                                                    // 0x0060   (0x000C)  
	float                                              SimulationAge;                                              // 0x006C   (0x0004)  
	FNiagaraSimCacheSystemFrame                        SystemData;                                                 // 0x0070   (0x0098)  
	TArray<FNiagaraSimCacheEmitterFrame>               EmitterData;                                                // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheVariable
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraSimCacheVariable
{ 
	FNiagaraVariableBase                               Variable;                                                   // 0x0000   (0x000C)  
	uint16_t                                           FloatOffset;                                                // 0x000C   (0x0002)  
	uint16_t                                           FloatCount;                                                 // 0x000E   (0x0002)  
	uint16_t                                           HalfOffset;                                                 // 0x0010   (0x0002)  
	uint16_t                                           HalfCount;                                                  // 0x0012   (0x0002)  
	uint16_t                                           Int32Offset;                                                // 0x0014   (0x0002)  
	uint16_t                                           Int32Count;                                                 // 0x0016   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FNiagaraSimCacheDataBuffersLayout
{ 
	FName                                              LayoutName;                                                 // 0x0000   (0x0008)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FNiagaraSimCacheVariable>                   Variables;                                                  // 0x0010   (0x0010)  
	uint16_t                                           FloatCount;                                                 // 0x0020   (0x0002)  
	uint16_t                                           HalfCount;                                                  // 0x0022   (0x0002)  
	uint16_t                                           Int32Count;                                                 // 0x0024   (0x0002)  
	bool                                               bLocalSpace;                                                // 0x0026   (0x0001)  
	bool                                               bAllowInterpolation;                                        // 0x0027   (0x0001)  
	bool                                               bAllowVelocityExtrapolation;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FName>                                      RebaseVariableNames;                                        // 0x0030   (0x0010)  
	TArray<FName>                                      InterpVariableNames;                                        // 0x0040   (0x0010)  
	uint16_t                                           ComponentVelocity;                                          // 0x0050   (0x0002)  
	unsigned char                                      UnknownData02_6[0x66];                                      // 0x0052   (0x0066)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheLayout
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FNiagaraSimCacheLayout
{ 
	FNiagaraSimCacheDataBuffersLayout                  SystemLayout;                                               // 0x0000   (0x00B8)  
	TArray<FNiagaraSimCacheDataBuffersLayout>          EmitterLayouts;                                             // 0x00B8   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0138 (0x000000 - 0x000138)
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0240 (0x000000 - 0x000240)
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0088)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0088   (0x0048)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00D0   (0x0048)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x0118   (0x0048)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0160   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0180   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x01A0   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x01C0   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01D0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01F0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x0210   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0230   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<UObject*>                                   RootObjects;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraWildcard
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPosition
/// Size: 0x0000 (0x00000C - 0x00000C)
struct FNiagaraPosition : FVector3f
{ 
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraDouble
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraDouble
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraMatrix
{ 
	FVector4f                                          Row0;                                                       // 0x0000   (0x0010)  
	FVector4f                                          Row1;                                                       // 0x0010   (0x0010)  
	FVector4f                                          Row2;                                                       // 0x0020   (0x0010)  
	FVector4f                                          Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEnumParameterMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraEnumParameterMetaData
{ 
	FName                                              OverrideName;                                               // 0x0000   (0x0008)  
	UTexture2D*                                        IconOverride;                                               // 0x0008   (0x0008)  
	bool                                               bUseColorOverride;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FLinearColor                                       ColorOverride;                                              // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoolParameterMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraBoolParameterMetaData
{ 
	ENiagaraBoolDisplayMode                            DisplayMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              OverrideNameTrue;                                           // 0x0004   (0x0008)  
	FName                                              OverrideNameFalse;                                          // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	UTexture2D*                                        IconOverrideTrue;                                           // 0x0018   (0x0008)  
	UTexture2D*                                        IconOverrideFalse;                                          // 0x0020   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0148 (0x000000 - 0x000148)
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	bool                                               bDisplayInOverviewStack;                                    // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            InlineParameterSortPriority;                                // 0x0034   (0x0004)  
	bool                                               bOverrideColor;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FLinearColor                                       InlineParameterColorOverride;                               // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FNiagaraEnumParameterMetaData>              InlineParameterEnumOverrides;                               // 0x0050   (0x0010)  
	bool                                               bEnableBoolOverride;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FNiagaraBoolParameterMetaData                      InlineParameterBoolOverride;                                // 0x0068   (0x0028)  
	int32_t                                            EditorSortPriority;                                         // 0x0090   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0098   (0x0018)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x00B0   (0x0018)  
	TMap<FName, FString>                               PropertyMetaData;                                           // 0x00C8   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x0118   (0x0008)  
	TArray<FName>                                      AlternateAliases;                                           // 0x0120   (0x0010)  
	FGuid                                              VariableGuid;                                               // 0x0130   (0x0010)  
	bool                                               bIsStaticSwitch;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x0144   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000088 - 0x0000D8)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	TMap<FNiagaraVariable, FNiagaraVariable>           UserParameterRedirects;                                     // 0x0088   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraVariant
{ 
	UObject*                                           Object;                                                     // 0x0000   (0x0008)  
	UNiagaraDataInterface*                             DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase : UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Niagara.NDIRenderTargetVolumeSimCacheData
/// Size: 0x0018 (0x000028 - 0x000040)
class UNDIRenderTargetVolumeSimCacheData : public UObject : UObject
{ 
public:
	FName                                              CompressionType;                                            // 0x0028   (0x0008)  
	TArray<FNDIRenderTargetVolumeSimCacheFrame>        Frames;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraConvertInPlaceUtilityBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataChannelReader
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraDataChannelReader : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	UNiagaraDataChannelHandler*                        Owner;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector4
	FVector4 ReadVector4(FName VarName, int32_t Index);                                                                      // [0xd173f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector2D
	FVector2D ReadVector2D(FName VarName, int32_t Index);                                                                    // [0xd17320] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector
	FVector ReadVector(FName VarName, int32_t Index);                                                                        // [0xd174d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadQuat
	FQuat ReadQuat(FName VarName, int32_t Index);                                                                            // [0xd17240] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadLinearColor
	FLinearColor ReadLinearColor(FName VarName, int32_t Index);                                                              // [0xd17170] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadInt
	int32_t ReadInt(FName VarName, int32_t Index);                                                                           // [0xd170a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadFloat
	double ReadFloat(FName VarName, int32_t Index);                                                                          // [0xd16fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadBool
	bool ReadBool(FName VarName, int32_t Index);                                                                             // [0xd16f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.Num
	int32_t Num();                                                                                                           // [0xd16ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.InitAccess
	bool InitAccess(UActorComponent* OwningComponent);                                                                       // [0xd16c60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelWriter
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraDataChannelWriter : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	UNiagaraDataChannelHandler*                        Owner;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector4
	void WriteVector4(FName VarName, int32_t Index, FVector4 InData);                                                        // [0xd17d80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector2D
	void WriteVector2D(FName VarName, int32_t Index, FVector2D InData);                                                      // [0xd17c60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector
	void WriteVector(FName VarName, int32_t Index, FVector InData);                                                          // [0xd17ec0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
	void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData);                                             // [0xd17b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteQuat
	void WriteQuat(FName VarName, int32_t Index, FQuat InData);                                                              // [0xd17a10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteLinearColor
	void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData);                                                // [0xd178f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteInt
	void WriteInt(FName VarName, int32_t Index, int32_t InData);                                                             // [0xd177e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteFloat
	void WriteFloat(FName VarName, int32_t Index, double InData);                                                            // [0xd176c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteBool
	void WriteBool(FName VarName, int32_t Index, bool InData);                                                               // [0xd175b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.Num
	int32_t Num();                                                                                                           // [0xd16ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelWriter.InitWrite
	bool InitWrite(UActorComponent* OwningComponent, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU); // [0xd16d00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataChannelDefinitions : public UObject : UObject
{ 
public:
	TArray<UNiagaraDataChannel*>                       DataChannels;                                               // 0x0028   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataChannelHandler
/// Size: 0x0040 (0x000028 - 0x000068)
class UNiagaraDataChannelHandler : public UObject : UObject
{ 
public:
	UNiagaraDataChannel*                               DataChannel;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0030   (0x0028)  MISSED
	UNiagaraDataChannelWriter*                         Writer;                                                     // 0x0058   (0x0008)  
	UNiagaraDataChannelReader*                         Reader;                                                     // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
	UNiagaraDataChannelWriter* GetDataChannelWriter();                                                                       // [0xd16c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelReader
	UNiagaraDataChannelReader* GetDataChannelReader();                                                                       // [0xd16c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannel
/// Size: 0x0110 (0x000028 - 0x000138)
class UNiagaraDataChannel : public UObject : UObject
{ 
public:
	FName                                              ChannelName;                                                // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0030   (0x0010)  
	bool                                               bKeepPreviousFrameData;                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FNiagaraDataSetCompiledData                        CompiledData;                                               // 0x0048   (0x0048)  
	FNiagaraDataSetCompiledData                        CompiledDataGPU;                                            // 0x0090   (0x0048)  
	FNiagaraDataChannelGameDataLayout                  GameDataLayout;                                             // 0x00D8   (0x0060)  
};

/// Class /Script/Niagara.NiagaraDataChannel_Global
/// Size: 0x0000 (0x000138 - 0x000138)
class UNiagaraDataChannel_Global : public UNiagaraDataChannel : UNiagaraDataChannel
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Global
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler : UNiagaraDataChannelHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0068   (0x0038)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelRead
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	FNiagaraDataChannelReference                       Channel;                                                    // 0x0038   (0x0008)  
	bool                                               bReadCurrentFrame;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FNDIDataChannelCompiledData                        CompiledData;                                               // 0x0048   (0x0068)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelSpawn
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UNiagaraDataInterfaceDataChannelSpawn : public UNiagaraDataInterfaceDataChannelRead : UNiagaraDataInterfaceDataChannelRead
{ 
public:
	FNiagaraDataInterfaceEmitterBinding                EmitterBinding;                                             // 0x00B0   (0x000C)  
	bool                                               bOverrideSpawnGroupToDataChannelIndex;                      // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
/// Size: 0x00C8 (0x000038 - 0x000100)
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	ENiagaraDataChannelAllocationMode                  AllocationMode;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	uint32_t                                           AllocationCount;                                            // 0x003C   (0x0004)  
	bool                                               bPublishToGame;                                             // 0x0040   (0x0001)  
	bool                                               bPublishToCPU;                                              // 0x0041   (0x0001)  
	bool                                               bPublishToGPU;                                              // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0043   (0x0001)  MISSED
	FNiagaraDataChannelReference                       Channel;                                                    // 0x0044   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FNDIDataChannelWriteCompiledData                   CompiledData;                                               // 0x0050   (0x00B0)  
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMessageDataBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParameterDefinitionsBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraRenderableMeshInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraRenderableMeshInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraScriptSourceBase : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x00E8 (0x000038 - 0x000120)
class UNiagaraSettings : public UDeveloperSettings : UDeveloperSettings
{ 
public:
	bool                                               bSystemsSupportLargeWorldCoordinates;                       // 0x0038   (0x0001)  
	bool                                               bEnforceStrictStackTypes;                                   // 0x0039   (0x0001)  
	bool                                               bExperimentalVMEnabled;                                     // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x003B   (0x0005)  MISSED
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0040   (0x0020)  
	FLinearColor                                       PositionPinTypeColor;                                       // 0x0060   (0x0010)  
	TArray<FText>                                      QualityLevels;                                              // 0x0070   (0x0010)  
	TMap<FString, FText>                               ComponentRendererWarningsPerClass;                          // 0x0080   (0x0050)  
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x00D0   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00D2   (0x0002)  MISSED
	ENiagaraDefaultRendererMotionVectorSetting         DefaultRendererMotionVectorSetting;                         // 0x00D4   (0x0004)  
	ENiagaraDefaultRendererPixelCoverageMode           DefaultPixelCoverageMode;                                   // 0x00D8   (0x0001)  
	ENiagaraDefaultSortPrecision                       DefaultSortPrecision;                                       // 0x00D9   (0x0001)  
	ENiagaraDefaultGpuTranslucentLatency               DefaultGpuTranslucentLatency;                               // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x00DB   (0x0001)  MISSED
	float                                              DefaultLightInverseExposureBlend;                           // 0x00DC   (0x0004)  
	TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>         NDISkelMesh_GpuMaxInfluences;                               // 0x00E0   (0x0001)  
	TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;                       // 0x00E1   (0x0001)  
	TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;               // 0x00E2   (0x0001)  
	bool                                               NDIStaticMesh_AllowDistanceFields;                          // 0x00E3   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<TEnumAsByte>                                NDICollisionQuery_AsyncGpuTraceProviderOrder;               // 0x00E8   (0x0010)  
	FString                                            SimCacheAuxiliaryFileBasePath;                              // 0x00F8   (0x0010)  
	int64_t                                            SimCacheMaxCPUMemoryVolumetrics;                            // 0x0108   (0x0008)  
	TArray<FNiagaraPlatformSetRedirect>                PlatformSetRedirects;                                       // 0x0110   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSimCacheCustomStorageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSimCacheCustomStorageInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraValidationRuleSet
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraValidationRuleSet : public UObject : UObject
{ 
public:
	TArray<UNiagaraValidationRule*>                    ValidationRules;                                            // 0x0028   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
/// Size: 0x0048 (0x000038 - 0x000080)
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	bool                                               bRequireCurrentFrameData;                                   // 0x0038   (0x0001)  
	ENDIActorComponentSourceMode                       SourceMode;                                                 // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            LocalPlayerIndex;                                           // 0x003C   (0x0004)  
	TLazyObjectPtr<AActor*>                            SourceActor;                                                // 0x0040   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       ActorOrComponentParameter;                                  // 0x0060   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	int32_t                                            MaxTracesPerParticle;                                       // 0x0038   (0x0004)  
	int32_t                                            MaxRetraces;                                                // 0x003C   (0x0004)  
	TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	uint32_t                                           OverrideMaxLineInstances;                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDynamicMesh
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FNiagaraDynamicMeshSection>                 Sections;                                                   // 0x0040   (0x0010)  
	TArray<FNiagaraDynamicMeshMaterial>                Materials;                                                  // 0x0050   (0x0010)  
	int32_t                                            NumVertices;                                                // 0x0060   (0x0004)  
	int32_t                                            NumTexCoords;                                               // 0x0064   (0x0004)  
	bool                                               bHasColors;                                                 // 0x0068   (0x0001)  
	bool                                               bHasTangentBasis;                                           // 0x0069   (0x0001)  
	bool                                               bClearTrianglesPerFrame;                                    // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x006B   (0x0005)  MISSED
	FBox                                               DefaultBounds;                                              // 0x0070   (0x0038)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceEmitterProperties
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	FNiagaraDataInterfaceEmitterBinding                EmitterBinding;                                             // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfacePhysicsAsset
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UPhysicsAsset*                                     DefaultSource;                                              // 0x0038   (0x0008)  
	TWeakObjectPtr<AActor*>                            SoftSourceActor;                                            // 0x0040   (0x0030)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0070   (0x0020)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0090   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraPhysicsAssetDICollectorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimCacheReader
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       SimCacheBinding;                                            // 0x0038   (0x0020)  
	UNiagaraSimCache*                                  SimCache;                                                   // 0x0058   (0x0008)  
	FName                                              EmitterBinding;                                             // 0x0060   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0038   (0x0004)  
	int32_t                                            InitialValue;                                               // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	UStaticMesh*                                       DefaultMesh;                                                // 0x0040   (0x0008)  
	TWeakObjectPtr<AActor*>                            SoftSourceActor;                                            // 0x0048   (0x0030)  
	UStaticMeshComponent*                              SourceComponent;                                            // 0x0078   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0080   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0090   (0x0001)  
	bool                                               bAllowSamplingFromStreamingLODs;                            // 0x0091   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	int32_t                                            LODIndex;                                                   // 0x0094   (0x0004)  
	FNiagaraUserParameterBinding                       LODIndexUserParameter;                                      // 0x0098   (0x0020)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
	void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                              // [0xdc4000] Final|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       UObjectParameterBinding;                                    // 0x0038   (0x0020)  
	TArray<FNiagaraUObjectPropertyReaderRemap>         PropertyRemap;                                              // 0x0058   (0x0010)  
	TWeakObjectPtr<AActor*>                            SourceActor;                                                // 0x0068   (0x0030)  
	UClass*                                            SourceActorComponentClass;                                  // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
	void SetUObjectReaderPropertyRemap(UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // [0xdc40e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	URuntimeVirtualTexture*                            Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection : UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00F0   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00F4   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F8   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00FC   (0x0001)  
	bool                                               bAllowScalability;                                          // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00FE   (0x0002)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack : UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack : UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack : UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x00A8   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C8   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraActor : public AActor : AActor
{ 
public:
	UNiagaraComponent*                                 NiagaraComponent;                                           // 0x0290   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x0298:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0xe3ab10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);                                                      // [0xe3a4f0] Final|Native|Private 
};

/// Class /Script/Niagara.NiagaraBakerOutput
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraBakerOutput : public UObject : UObject
{ 
public:
	FString                                            OutputName;                                                 // 0x0028   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputSimCache
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput : UNiagaraBakerOutput
{ 
public:
	FString                                            SimCacheAssetPathFormat;                                    // 0x0038   (0x0010)  
	FNiagaraSimCacheCreateParameters                   CreateParameters;                                           // 0x0048   (0x0058)  
};

/// Class /Script/Niagara.NiagaraBakerOutputTexture2D
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput : UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	bool                                               bGenerateAtlas : 1;                                         // 0x0050:0 (0x0001)  
	bool                                               bGenerateFrames : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bExportFrames : 1;                                          // 0x0050:2 (0x0001)  
	bool                                               bSetTextureAddressX : 1;                                    // 0x0050:3 (0x0001)  
	bool                                               bSetTextureAddressY : 1;                                    // 0x0050:4 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0051   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0054   (0x0008)  
	FIntPoint                                          AtlasTextureSize;                                           // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0064   (0x0008)  MISSED
	TEnumAsByte<TextureAddress>                        TextureAddressX;                                            // 0x006C   (0x0001)  
	TEnumAsByte<TextureAddress>                        TextureAddressY;                                            // 0x006D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x006E   (0x0002)  MISSED
	FString                                            AtlasAssetPathFormat;                                       // 0x0070   (0x0010)  
	FString                                            FramesAssetPathFormat;                                      // 0x0080   (0x0010)  
	FString                                            FramesExportPathFormat;                                     // 0x0090   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput : UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	bool                                               bGenerateAtlas : 1;                                         // 0x0050:0 (0x0001)  
	bool                                               bGenerateFrames : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bExportFrames : 1;                                          // 0x0050:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            AtlasAssetPathFormat;                                       // 0x0058   (0x0010)  
	FString                                            FramesAssetPathFormat;                                      // 0x0068   (0x0010)  
	FString                                            FramesExportPathFormat;                                     // 0x0078   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UNiagaraBakerSettings : public UObject : UObject
{ 
public:
	float                                              StartSeconds;                                               // 0x0028   (0x0004)  
	float                                              DurationSeconds;                                            // 0x002C   (0x0004)  
	int32_t                                            FramesPerSecond;                                            // 0x0030   (0x0004)  
	bool                                               bPreviewLooping : 1;                                        // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0035   (0x0003)  MISSED
	FIntPoint                                          FramesPerDimension;                                         // 0x0038   (0x0008)  
	TArray<UNiagaraBakerOutput*>                       Outputs;                                                    // 0x0040   (0x0010)  
	TArray<FNiagaraBakerCameraSettings>                CameraSettings;                                             // 0x0050   (0x0010)  
	int32_t                                            CurrentCameraIndex;                                         // 0x0060   (0x0004)  
	FName                                              BakeQualityLevel;                                           // 0x0064   (0x0008)  
	bool                                               bRenderComponentOnly : 1;                                   // 0x006C:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x006D   (0x0003)  MISSED
	TArray<FNiagaraBakerTextureSettings>               OutputTextures;                                             // 0x0070   (0x0010)  
	ENiagaraBakerViewMode                              CameraViewportMode;                                         // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FVector                                            CameraViewportLocation;                                     // 0x0088   (0x00A8)  
	FRotator                                           CameraViewportRotation;                                     // 0x0130   (0x00A8)  
	float                                              CameraOrbitDistance;                                        // 0x01D8   (0x0004)  
	float                                              CameraFOV;                                                  // 0x01DC   (0x0004)  
	float                                              CameraOrthoWidth;                                           // 0x01E0   (0x0004)  
	bool                                               bUseCameraAspectRatio : 1;                                  // 0x01E4:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x01E5   (0x0003)  MISSED
	float                                              CameraAspectRatio;                                          // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x02A0 (0x000570 - 0x000810)
class UNiagaraComponent : public UFXSystemComponent : UFXSystemComponent
{ 
public:
	UNiagaraSystem*                                    Asset;                                                      // 0x0568   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x0570   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0571   (0x0003)  MISSED
	int32_t                                            RandomSeedOffset;                                           // 0x0574   (0x0004)  
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0578   (0x00D8)  
	bool                                               bForceSolo : 1;                                             // 0x0650:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x0650:1 (0x0001)  
	bool                                               bOverrideWarmupSettings : 1;                                // 0x0650:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0651   (0x0003)  MISSED
	int32_t                                            WarmupTickCount;                                            // 0x0654   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0658   (0x0004)  
	unsigned char                                      UnknownData02_5[0x34];                                      // 0x065C   (0x0034)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x0690:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x0690:1 (0x0001)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x0690:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x0690:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0691   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x0694   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0698   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnSystemFinished;                                           // 0x06A0   (0x0010)  
	TWeakObjectPtr<USceneComponent*>                   AutoAttachParent;                                           // 0x06B0   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x06B8   (0x0008)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x06C0   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x06C1   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x06C2   (0x0001)  
	unsigned char                                      UnknownData05_5[0x9];                                       // 0x06C3   (0x0009)  MISSED
	unsigned char                                      UnknownBit06 : 1;                                           // 0x06CC:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit07 : 1;                                           // 0x06CC:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x06CC:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x06CC:3 (0x0001)  MISSED
	bool                                               bAllowScalability : 1;                                      // 0x06CC:4 (0x0001)  
	unsigned char                                      UnknownData10_4[0x12B];                                     // 0x06CD   (0x012B)  MISSED
	UNiagaraSimCache*                                  SimCache;                                                   // 0x07F8   (0x0008)  
	UNiagaraCullProxyComponent*                        CullProxy;                                                  // 0x0800   (0x0008)  
	unsigned char                                      UnknownData11_6[0x8];                                       // 0x0808   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0xe3d1c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0xe3d0e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0xe3d010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget);                    // [0xe3ce90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTexture
	void SetVariableTexture(FName InVariableName, UTexture* Texture);                                                        // [0xe3cd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableStaticMesh
	void SetVariableStaticMesh(FName InVariableName, UStaticMesh* InValue);                                                  // [0xe3cb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0xe3cab0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariablePosition
	void SetVariablePosition(FName InVariableName, FVector InValue);                                                         // [0xe3c9d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	void SetVariableObject(FName InVariableName, UObject* Object);                                                           // [0xe3c330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMatrix
	void SetVariableMatrix(FName InVariableName, FMatrix& InValue);                                                          // [0xe3c8d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);                                              // [0xe3c750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0xe3c670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0xe3c5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0xe3c4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0xe3c400] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	void SetVariableActor(FName InVariableName, AActor* Actor);                                                              // [0xe3c330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0xe3c2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSystemFixedBounds
	void SetSystemFixedBounds(FBox LocalBounds);                                                                             // [0xe3c1d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSimCache
	void SetSimCache(UNiagaraSimCache* SimCache, bool bResetSystem);                                                         // [0xe3c0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	void SetSeekDelta(float InSeekDelta);                                                                                    // [0xe3c050] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0xe3bfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0xe3bf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);          // [0xe3be00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	void SetPaused(bool bInPaused);                                                                                          // [0xe3bd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0xe3bc20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0xe3bae0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0xe3b9c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0xe3b8a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariablePosition
	void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);                                                // [0xe3b760] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	void SetNiagaraVariableObject(FString InVariableName, UObject* Object);                                                  // [0xe3b0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue);                                                 // [0xe3b620] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0xe3b500] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0xe3b3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0xe3b2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0xe3b1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	void SetNiagaraVariableActor(FString InVariableName, AActor* Actor);                                                     // [0xe3b0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	void SetMaxSimTime(float InMaxTime);                                                                                     // [0xe3b030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                                  // [0xe3afa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0xe3aee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	void SetForceSolo(bool bInForceSolo);                                                                                    // [0xe3ae30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect);                                                                    // [0xe3ad90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetEmitterFixedBounds
	void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);                                                         // [0xe3abb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	void SetDesiredAge(float InDesiredAge);                                                                                  // [0xe3aa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCustomTimeDilation
	void SetCustomTimeDilation(float Dilation);                                                                              // [0xe3a9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0xe3a940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0xe3a890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                           // [0xe3a7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	void SetAllowScalability(bool bAllow);                                                                                   // [0xe3a6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0xe3a670] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	void SeekToDesiredAge(float InDesiredAge);                                                                               // [0xe3a5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	void ResetSystem();                                                                                                      // [0xe3a5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	void ReinitializeSystem();                                                                                               // [0xe3a590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	bool IsPaused();                                                                                                         // [0xe3a4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	void InitForPerformanceBaseline();                                                                                       // [0xe3a430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0xe3a410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSystemFixedBounds
	FBox GetSystemFixedBounds();                                                                                             // [0xe3a3c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSimCache
	UNiagaraSimCache* GetSimCache();                                                                                         // [0xe3a3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	float GetSeekDelta();                                                                                                    // [0xe3a380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	int32_t GetRandomSeedOffset();                                                                                           // [0xe3a360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	bool GetPreviewLODDistanceEnabled();                                                                                     // [0xe3a330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	float GetPreviewLODDistance();                                                                                           // [0xe3a2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0xe39fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0xe3a150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0xe39e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	float GetMaxSimTime();                                                                                                   // [0xe39e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0xe39e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	bool GetForceSolo();                                                                                                     // [0xe39dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	bool GetForceLocalPlayerEffect();                                                                                        // [0xe39da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetEmitterFixedBounds
	FBox GetEmitterFixedBounds(FName EmitterName);                                                                           // [0xe39c30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	float GetDesiredAge();                                                                                                   // [0xe39c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	UNiagaraDataInterface* GetDataInterface(FString Name);                                                                   // [0xe39b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetCustomTimeDilation
	float GetCustomTimeDilation();                                                                                           // [0xe39b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	UNiagaraSystem* GetAsset();                                                                                              // [0xe39af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAllowScalability
	bool GetAllowScalability();                                                                                              // [0xe39ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0xe39aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.ClearSystemFixedBounds
	void ClearSystemFixedBounds();                                                                                           // [0xe399d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearSimCache
	void ClearSimCache(bool bResetSystem);                                                                                   // [0xe39910] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearEmitterFixedBounds
	void ClearEmitterFixedBounds(FName EmitterName);                                                                         // [0xe39800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0xe39700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0xe39620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject : UObject
{ 
public:
	TMap<UNiagaraSystem*, FNCPool>                     WorldParticleSystemPools;                                   // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UNiagaraRendererProperties : public UNiagaraMergeable : UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)  
	ENiagaraRendererMotionVectorSetting                MotionVectorSetting;                                        // 0x005C   (0x0004)  
	FNiagaraVariableAttributeBinding                   RendererEnabledBinding;                                     // 0x0060   (0x0058)  
	bool                                               bIsEnabled;                                                 // 0x00B8   (0x0001)  
	bool                                               bAllowInCullProxies;                                        // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00BA   (0x0002)  MISSED
	FGuid                                              OuterEmitterVersion;                                        // 0x00BC   (0x0010)  
	bool                                               bMotionBlurEnabled;                                         // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x13];                                      // 0x00CD   (0x0013)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0150 (0x0000E0 - 0x000230)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	UClass*                                            ComponentType;                                              // 0x00E0   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0148   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x01A0   (0x0001)  
	bool                                               bCreateComponentFirstParticleFrame;                         // 0x01A1   (0x0001)  
	bool                                               bOnlyActivateNewlyAquiredComponents;                        // 0x01A2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x01A3   (0x0001)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x01A4   (0x0004)  
	USceneComponent*                                   TemplateComponent;                                          // 0x01A8   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x01B0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x01C0   (0x0070)  MISSED
};

/// Class /Script/Niagara.NiagaraCullProxyComponent
/// Size: 0x0010 (0x000810 - 0x000820)
class UNiagaraCullProxyComponent : public UNiagaraComponent : UNiagaraComponent
{ 
public:
	TArray<FNiagaraCulledComponentInfo>                Instances;                                                  // 0x0808   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0818   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannelLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UTexture*                                          Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0040   (0x0004)  
	int32_t                                            MaxElements;                                                // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2f>                                  InternalFloatData;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector3f>                                  InternalFloatData;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayPosition
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FNiagaraPosition>                           PositionData;                                               // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4f>                                  InternalFloatData;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat4f>                                    InternalQuatData;                                           // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayUInt8
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<char>                                       InternalIntData;                                            // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray : UNiagaraDataInterfaceArray
{ 
public:
	TArray<FNiagaraID>                                 IntData;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	USoundSubmix*                                      Submix;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	USoundSubmix*                                      Submix;                                                     // 0x0038   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
/// Size: 0x03E0 (0x000028 - 0x000408)
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject : UObject
{ 
public:
	bool                                               bOverrideConcurrency;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	USoundConcurrency*                                 Concurrency;                                                // 0x0030   (0x0008)  
	bool                                               bOverrideAttenuationSettings;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FSoundAttenuationSettings                          AttenuationSettings;                                        // 0x0040   (0x03C8)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0058 (0x000038 - 0x000090)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	USoundBase*                                        SoundToPlay;                                                // 0x0038   (0x0008)  
	USoundAttenuation*                                 Attenuation;                                                // 0x0040   (0x0008)  
	USoundConcurrency*                                 Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	FNiagaraUserParameterBinding                       ConfigurationUserParameter;                                 // 0x0060   (0x0020)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0084   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0088   (0x0001)  
	bool                                               bAllowLoopingOneShotSounds;                                 // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0044   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0048   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0048   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0058   (0x0004)  MISSED
	bool                                               bUseLUT : 1;                                                // 0x005C:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x005C:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x005D   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x0060   (0x0008)  
	UTexture2D*                                        ExposedTexture;                                             // 0x0068   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase : UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UTexture*                                          Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase : UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)  
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParticleCallbackHandler : public UInterface : UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	bool                                               ClearBeforeNonIterationStage;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            NumCellsX;                                                  // 0x003C   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x0040   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x0044   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x0048   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (0x000060 - 0x000128)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0060   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0080   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0081:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x56];                                      // 0x0082   (0x0056)  MISSED
	TMap<uint64_t, UTextureRenderTarget2DArray*>       ManagedRenderTargets;                                       // 0x00D8   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                       // [0xf08720] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                    // [0xf08460] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex);                  // [0xf08340] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY);     // [0xf07fc0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0020 (0x000128 - 0x000148)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2DCollection
{ 
public:
	FString                                            EmitterName;                                                // 0x0128   (0x0010)  
	FString                                            DIName;                                                     // 0x0138   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	bool                                               ClearBeforeNonIterationStage;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FIntVector                                         NumCells;                                                   // 0x003C   (0x000C)  
	float                                              CellSize;                                                   // 0x0048   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x004C   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            WorldBBoxSize;                                              // 0x0058   (0x0018)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0078   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0098   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0099:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x56];                                      // 0x009A   (0x0056)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                       // [0xf08850] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                    // [0xf08590] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	bool FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t AttributeIndex);                      // [0xf08340] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	bool FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0xf08140] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3DCollection
{ 
public:
	FString                                            EmitterName;                                                // 0x00F0   (0x0010)  
	FString                                            DIName;                                                     // 0x0100   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0040   (0x0020)  
	TMap<uint64_t, UTextureRenderTarget2D*>            ManagedRenderTargets;                                       // 0x0060   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	AActor*                                            SourceLandscape;                                            // 0x0038   (0x0008)  
	ENDILandscape_SourceMode                           SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<UPhysicalMaterial*>                         PhysicalMaterials;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UNiagaraMeshRendererProperties*                    MeshRenderer;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000070 - 0x000078)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	FString                                            EmitterName;                                                // 0x0038   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
/// Size: 0x0010 (0x000070 - 0x000080)
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0070   (0x0004)  
	float                                              Precision;                                                  // 0x0074   (0x0004)  
	int32_t                                            ResetValue;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x00D0 (0x000038 - 0x000108)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x0038   (0x0008)  
	ENiagaraMipMapGeneration                           MipMapGeneration;                                           // 0x0040   (0x0001)  
	ENiagaraMipMapGenerationType                       MipMapGenerationType;                                       // 0x0041   (0x0001)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x0042   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x0043   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x0044:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0044:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0045   (0x0003)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0048   (0x0020)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0068   (0x0050)  MISSED
	TMap<uint64_t, UTextureRenderTarget2D*>            ManagedRenderTargets;                                       // 0x00B8   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x0038   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x0044   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x0045   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x0046:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0046:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0047   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0048   (0x0020)  
	TMap<uint64_t, UTextureRenderTarget2DArray*>       ManagedRenderTargets;                                       // 0x0068   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            Size;                                                       // 0x0038   (0x0004)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x003C   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x003D   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x003E:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x003E:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x003F   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0040   (0x0020)  
	TMap<uint64_t, UTextureRenderTargetCube*>          ManagedRenderTargets;                                       // 0x0060   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase : UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FIntVector                                         Size;                                                       // 0x0040   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x004C   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x004D   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x004E:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x004E:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x1];                                       // 0x004F   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0050   (0x0020)  
	TMap<uint64_t, UTextureRenderTargetVolume*>        ManagedRenderTargets;                                       // 0x0070   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	TArray<FName>                                      ActorTags;                                                  // 0x0038   (0x0010)  
	TArray<FName>                                      ComponentTags;                                              // 0x0048   (0x0010)  
	TArray<TWeakObjectPtr>                             SourceActors;                                               // 0x0058   (0x0010)  
	bool                                               OnlyUseMoveable;                                            // 0x0068   (0x0001)  
	bool                                               UseComplexCollisions;                                       // 0x0069   (0x0001)  
	bool                                               GlobalSearchAllowed;                                        // 0x006A   (0x0001)  
	bool                                               GlobalSearchForced;                                         // 0x006B   (0x0001)  
	bool                                               GlobalSearchFallback_Unscripted;                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	int32_t                                            MaxNumPrimitives;                                           // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x00C8 (0x000038 - 0x000100)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TWeakObjectPtr<AActor*>                            SoftSourceActor;                                            // 0x0040   (0x0030)  
	TArray<FName>                                      ComponentTags;                                              // 0x0070   (0x0010)  
	USkeletalMeshComponent*                            SourceComponent;                                            // 0x0080   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0088   (0x0020)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x00B0   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x00C8   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00D8   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00E8   (0x0008)  
	bool                                               bExcludeBone : 1;                                           // 0x00F0:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            UvSetIndex;                                                 // 0x00F4   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
	void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                              // [0xf68290] Final|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	AActor*                                            Source;                                                     // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       SplineUserParameter;                                        // 0x0040   (0x0020)  
	bool                                               bUseLUT;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            NumLUTSteps;                                                // 0x0064   (0x0004)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0068   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UNiagaraSpriteRendererProperties*                  SpriteRenderer;                                             // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UTexture*                                          Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase : UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase : UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase : UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UVectorField*                                      Field;                                                      // 0x0038   (0x0008)  
	bool                                               bTileX;                                                     // 0x0040   (0x0001)  
	bool                                               bTileY;                                                     // 0x0041   (0x0001)  
	bool                                               bTileZ;                                                     // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeCache
/// Size: 0x0058 (0x000038 - 0x000090)
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UVolumeCache*                                      VolumeCache;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface : UNiagaraDataInterface
{ 
public:
	UTexture*                                          Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0258 (0x000028 - 0x000280)
class UNiagaraDebugHUDSettings : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0028   (0x0020)  MISSED
	FNiagaraDebugHUDSettingsData                       Data;                                                       // 0x0048   (0x0238)  
};

/// Class /Script/Niagara.NiagaraDecalRendererProperties
/// Size: 0x0368 (0x0000E0 - 0x000448)
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	UMaterialInterface*                                Material;                                                   // 0x00E0   (0x0008)  
	FNiagaraParameterBinding                           MaterialParameterBinding;                                   // 0x00E8   (0x000C)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x00F8   (0x0004)  
	float                                              DecalScreenSizeFade;                                        // 0x00FC   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0100   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalOrientationBinding;                                    // 0x0158   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalSizeBinding;                                           // 0x01B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalFadeBinding;                                           // 0x0208   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalSortOrderBinding;                                      // 0x0260   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalColorBinding;                                          // 0x02B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalVisibleBinding;                                        // 0x0310   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0368   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x03C0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0410   (0x0038)  MISSED
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorDataBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorParametersAdapterBase : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandler : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler : UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler : UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UNiagaraEffectType : public UObject : UObject
{ 
public:
	bool                                               bAllowCullingForLocalPlayers;                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x002C   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	UNiagaraSignificanceHandler*                       SignificanceHandler;                                        // 0x0038   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0040   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0050   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0070   (0x0008)  MISSED
	UNiagaraBaselineController*                        PerformanceBaselineController;                              // 0x0078   (0x0008)  
	FNiagaraPerfBaselineStats                          PerfBaselineStats;                                          // 0x0080   (0x0010)  
	FGuid                                              PerfBaselineVersion;                                        // 0x0090   (0x0010)  
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UNiagaraEmitter : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FGuid                                              ExposedVersion;                                             // 0x0030   (0x0010)  
	bool                                               bVersioningEnabled;                                         // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FVersionedNiagaraEmitterData>               VersionData;                                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0060   (0x0010)  
	TArray<UNiagaraRendererProperties*>                RendererProperties;                                         // 0x0070   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0080   (0x0010)  
	TArray<UNiagaraSimulationStageBase*>               SimulationStages;                                           // 0x0090   (0x0010)  
	UNiagaraScript*                                    GPUComputeScript;                                           // 0x00A0   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x00A8   (0x0010)  
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEventReceiverEmitterAction : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction : UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraLensEffectBase
/// Size: 0x0090 (0x0002A0 - 0x000330)
class ANiagaraLensEffectBase : public ANiagaraActor : ANiagaraActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02A0   (0x0010)  MISSED
	FTransform                                         DesiredRelativeTransform;                                   // 0x02B0   (0x0060)  
	float                                              BaseAuthoredFOV;                                            // 0x0310   (0x0004)  
	bool                                               bAllowMultipleInstances : 1;                                // 0x0314:0 (0x0001)  
	bool                                               bResetWhenRetriggered : 1;                                  // 0x0314:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0315   (0x0003)  MISSED
	TArray<UClass*>                                    EmittersToTreatAsSame;                                      // 0x0318   (0x0010)  
	APlayerCameraManager*                              OwningCameraManager;                                        // 0x0328   (0x0008)  
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02C0 (0x0000E0 - 0x0003A0)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x00E4:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x00E4:1 (0x0001)  
	bool                                               bAlphaScalesBrightness : 1;                                 // 0x00E4:2 (0x0001)  
	bool                                               bOverrideInverseExposureBlend : 1;                          // 0x00E4:3 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x00E8   (0x0004)  
	float                                              DefaultExponent;                                            // 0x00EC   (0x0004)  
	FVector3f                                          ColorAdd;                                                   // 0x00F0   (0x000C)  
	float                                              InverseExposureBlend;                                       // 0x00FC   (0x0004)  
	int32_t                                            RendererVisibility;                                         // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x0108   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x0160   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x01B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0210   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x0268   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x02C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0318   (0x0058)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0370   (0x0030)  MISSED
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x08B8 (0x0000E0 - 0x000998)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraMeshRendererMeshProperties>         Meshes;                                                     // 0x00E0   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00F0   (0x0001)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00F2   (0x0002)  MISSED
	bool                                               bOverrideMaterials : 1;                                     // 0x00F4:0 (0x0001)  
	bool                                               bUseHeterogeneousVolumes : 1;                               // 0x00F4:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00F4:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00F5   (0x0003)  MISSED
	ENiagaraRendererSortPrecision                      SortPrecision;                                              // 0x00F8   (0x0001)  
	ENiagaraRendererGpuTranslucentLatency              GpuTranslucentLatency;                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00FA   (0x0002)  MISSED
	bool                                               bSubImageBlend : 1;                                         // 0x00FC:0 (0x0001)  
	bool                                               bEnableFrustumCulling : 1;                                  // 0x00FC:1 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00FC:2 (0x0001)  
	bool                                               bEnableMeshFlipbook : 1;                                    // 0x00FC:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00FD   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0100   (0x0010)  
	TArray<FNiagaraMeshMICOverride>                    MICOverrideMaterials;                                       // 0x0110   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x0120   (0x0010)  
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x0130   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	bool                                               bLockedAxisEnable : 1;                                      // 0x0134:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x0135   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x0138   (0x0018)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x0150   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FVector                                            MeshBoundsScale;                                            // 0x0158   (0x0018)  
	float                                              MinCameraDistance;                                          // 0x0170   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x0174   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x0178   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0180   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0230   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x0288   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x02E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0338   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0390   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x03E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0440   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0498   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x04F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0548   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x05A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x05F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0650   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshIndexBinding;                                           // 0x06A8   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0700   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0750   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevScaleBinding;                                           // 0x07A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevMeshOrientationBinding;                                 // 0x0800   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0858   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x08B0   (0x0058)  
	unsigned char                                      UnknownData08_5[0x68];                                      // 0x0908   (0x0068)  MISSED
	UStaticMesh*                                       ParticleMesh;                                               // 0x0970   (0x0008)  
	FVector                                            PivotOffset;                                                // 0x0978   (0x0018)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0990   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x0991   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UNiagaraParameterCollectionInstance : public UObject : UObject
{ 
public:
	UNiagaraParameterCollection*                       Collection;                                                 // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0088)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x106a4b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x106a3a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x106a2b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x106a1b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x106a030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x1069f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x1069e50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x1069d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	FVector GetVectorParameter(FString InVariableName);                                                                      // [0x1069a20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x1069840] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x10696b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x10694e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	int32_t GetIntParameter(FString InVariableName);                                                                         // [0x10692c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	float GetFloatParameter(FString InVariableName);                                                                         // [0x1069150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x1068fe0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	bool GetBoolParameter(FString InVariableName);                                                                           // [0x1068e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject : UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)  
	UMaterialParameterCollection*                      SourceMaterialCollection;                                   // 0x0040   (0x0008)  
	UNiagaraParameterCollectionInstance*               DefaultInstance;                                            // 0x0048   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0048 (0x000028 - 0x000070)
class UNiagaraBaselineController : public UObject : UObject
{ 
public:
	float                                              TestDuration;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	UNiagaraEffectType*                                EffectType;                                                 // 0x0030   (0x0008)  
	ANiagaraPerfBaselineActor*                         Owner;                                                      // 0x0038   (0x0008)  
	TWeakObjectPtr<UNiagaraSystem*>                    System;                                                     // 0x0040   (0x0030)  


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	bool OnTickTest();                                                                                                       // [0x1069d30] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	void OnOwnerTick(float DeltaTime);                                                                                       // [0x1069ca0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0x1069c10] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	void OnBeginTest();                                                                                                      // [0x1069bf0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	UNiagaraSystem* GetSystem();                                                                                             // [0x1069690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (0x000070 - 0x000088)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController : UNiagaraBaselineController
{ 
public:
	int32_t                                            NumInstances;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<UNiagaraComponent*>                         SpawnedComponents;                                          // 0x0078   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraPerfBaselineActor : public AActor : AActor
{ 
public:
	UNiagaraBaselineController*                        Controller;                                                 // 0x0290   (0x0008)  
	UTextRenderComponent*                              Label;                                                      // 0x0298   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject : UObject
{ 
public:
	TArray<UNiagaraScript*>                            Scripts;                                                    // 0x0028   (0x0010)  
	UNiagaraSystem*                                    System;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ANiagaraPreviewBase : public AActor : AActor
{ 
public:
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPreviewAxis : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis : UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0028   (0x0008)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0038   (0x0004)  
	int32_t                                            Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0038   (0x0004)  
	float                                              Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0038   (0x0010)  
	FVector2D                                          Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0038   (0x0018)  
	FVector                                            Max;                                                        // 0x0050   (0x0018)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0048 (0x000038 - 0x000080)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           Min;                                                        // 0x0040   (0x0020)  
	FVector4                                           Max;                                                        // 0x0060   (0x0020)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0038   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ANiagaraPreviewGrid : public AActor : AActor
{ 
public:
	UNiagaraSystem*                                    System;                                                     // 0x0290   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	UNiagaraPreviewAxis*                               PreviewAxisX;                                               // 0x02A0   (0x0008)  
	UNiagaraPreviewAxis*                               PreviewAxisY;                                               // 0x02A8   (0x0008)  
	UClass*                                            PreviewClass;                                               // 0x02B0   (0x0008)  
	float                                              SpacingX;                                                   // 0x02B8   (0x0004)  
	float                                              SpacingY;                                                   // 0x02BC   (0x0004)  
	int32_t                                            NumX;                                                       // 0x02C0   (0x0004)  
	int32_t                                            NumY;                                                       // 0x02C4   (0x0004)  
	TArray<UChildActorComponent*>                      PreviewComponents;                                          // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	void SetPaused(bool bPaused);                                                                                            // [0x106a120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x1069430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	void DeactivatePreviews();                                                                                               // [0x1068d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	void ActivatePreviews(bool bReset);                                                                                      // [0x1068ae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x09C0 (0x0000E0 - 0x000AA0)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	UMaterialInterface*                                Material;                                                   // 0x00E0   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x00E8   (0x0020)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x0110   (0x0038)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x0148   (0x0038)  
	int32_t                                            MaxNumRibbons;                                              // 0x0180   (0x0004)  
	bool                                               bUseGPUInit;                                                // 0x0184   (0x0001)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x0185   (0x0001)  
	ENiagaraRibbonShapeMode                            Shape;                                                      // 0x0186   (0x0001)  
	bool                                               bEnableAccurateGeometry;                                    // 0x0187   (0x0001)  
	int32_t                                            WidthSegmentationCount;                                     // 0x0188   (0x0004)  
	int32_t                                            MultiPlaneCount;                                            // 0x018C   (0x0004)  
	int32_t                                            TubeSubdivisions;                                           // 0x0190   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	TArray<FNiagaraRibbonShapeCustomVertex>            CustomVertices;                                             // 0x0198   (0x0010)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01A9   (0x0003)  MISSED
	float                                              CurveTension;                                               // 0x01AC   (0x0004)  
	int32_t                                            TessellationFactor;                                         // 0x01B0   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x01B4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01B5   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x01B8   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x01BD   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x01C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0218   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0270   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x02C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0320   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x0378   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x03D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0428   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x0480   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x04D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0530   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0588   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x05E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0638   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonUVDistance;                                           // 0x0690   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x06E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x0740   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0798   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x07F0   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0848   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0898   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevRibbonWidthBinding;                                     // 0x08F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevRibbonFacingBinding;                                    // 0x0948   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevRibbonTwistBinding;                                     // 0x09A0   (0x0058)  
	unsigned char                                      UnknownData05_6[0xA8];                                      // 0x09F8   (0x00A8)  MISSED
};

/// Class /Script/Niagara.NiagaraScratchPadContainer
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScratchPadContainer : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x0380 (0x000028 - 0x0003A8)
class UNiagaraScript : public UNiagaraScriptBase : UNiagaraScriptBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	ENiagaraScriptUsage                                Usage;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FGuid                                              UsageId;                                                    // 0x0034   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0048   (0x0088)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00D0   (0x00A8)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0178   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0188   (0x0058)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x01E0   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01F0   (0x0190)  
	TArray<UNiagaraParameterCollection*>               CachedParameterCollectionReferences;                        // 0x0380   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x0390   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x03A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	void RaiseOnGPUCompilationComplete();                                                                                    // [0xd0bd90] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraSimCache
/// Size: 0x01D8 (0x000028 - 0x000200)
class UNiagaraSimCache : public UObject : UObject
{ 
public:
	FGuid                                              CacheGuid;                                                  // 0x0028   (0x0010)  
	TWeakObjectPtr<UNiagaraSystem*>                    SoftNiagaraSystem;                                          // 0x0038   (0x0030)  
	float                                              StartSeconds;                                               // 0x0068   (0x0004)  
	float                                              DurationSeconds;                                            // 0x006C   (0x0004)  
	FNiagaraSimCacheCreateParameters                   CreateParameters;                                           // 0x0070   (0x0058)  
	bool                                               bNeedsReadComponentMappingRecache;                          // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FNiagaraSimCacheLayout                             CacheLayout;                                                // 0x00D0   (0x00C8)  
	TArray<FNiagaraSimCacheFrame>                      CacheFrames;                                                // 0x0198   (0x0010)  
	TMap<FNiagaraVariableBase, UObject*>               DataInterfaceStorage;                                       // 0x01A8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraSimCache.ReadVectorAttribute
	void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);        // [0x10a5500] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector4Attribute
	void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);      // [0x10a5370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector2Attribute
	void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);     // [0x10a4ff0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x10a4e20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttribute
	void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x10a4c60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x10a49f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttribute
	void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x10a4830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIntAttribute
	void ReadIntAttribute(TArray<int32_t>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x10a4500] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadFloatAttribute
	void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x10a41c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadColorAttribute
	void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);    // [0x10a3e10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsEmpty
	bool IsEmpty();                                                                                                          // [0x10a3de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsCacheValid
	bool IsCacheValid();                                                                                                     // [0x10a3db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetStartSeconds
	float GetStartSeconds();                                                                                                 // [0x10a3d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumFrames
	int32_t GetNumFrames();                                                                                                  // [0x10a3d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumEmitters
	int32_t GetNumEmitters();                                                                                                // [0x10a3d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterNames
	TArray<FName> GetEmitterNames();                                                                                         // [0x10a3c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterName
	FName GetEmitterName(int32_t EmitterIndex);                                                                              // [0x10a3b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetAttributeCaptureMode
	ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();                                                          // [0x10a3b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase : UBlueprintAsyncActionBase
{ 
public:
	UNiagaraSimCache*                                  CaptureSimCache;                                            // 0x0030   (0x0008)  
	UNiagaraComponent*                                 CaptureComponent;                                           // 0x0038   (0x0008)  
	FMulticastInlineDelegate                           CaptureComplete;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB8];                                      // 0x0050   (0x00B8)  MISSED


	/// Functions
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	void OnCaptureComplete__DelegateSignature(bool bSuccess);                                                                // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x10a34d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
	UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x10a2f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimCacheFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraSimulationStageBase : public UNiagaraMergeable : UNiagaraMergeable
{ 
public:
	UNiagaraScript*                                    Script;                                                     // 0x0028   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0030   (0x0008)  
	bool                                               bEnabled : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0268 (0x000040 - 0x0002A8)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase : UNiagaraSimulationStageBase
{ 
public:
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0040   (0x0058)  
	ENiagaraIterationSource                            IterationSource;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x009C   (0x0004)  
	FNiagaraVariableAttributeBinding                   NumIterationsBinding;                                       // 0x00A0   (0x0058)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x00FC:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0100   (0x0020)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x0120:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x7];                                       // 0x0121   (0x0007)  MISSED
	FNiagaraVariableAttributeBinding                   ParticleIterationStateBinding;                              // 0x0128   (0x0058)  
	FIntPoint                                          ParticleIterationStateRange;                                // 0x0180   (0x0008)  
	bool                                               bGpuDispatchForceLinear : 1;                                // 0x0188:0 (0x0001)  
	bool                                               bOverrideGpuDispatchNumThreads : 1;                         // 0x0188:1 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0189   (0x0003)  MISSED
	FIntVector                                         OverrideGpuDispatchNumThreads;                              // 0x018C   (0x000C)  
	ENiagaraGpuDispatchType                            DirectDispatchType;                                         // 0x0198   (0x0001)  
	ENiagaraDirectDispatchElementType                  DirectDispatchElementType;                                  // 0x0199   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x019A   (0x0006)  MISSED
	FNiagaraVariableAttributeBinding                   ElementCountXBinding;                                       // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ElementCountYBinding;                                       // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ElementCountZBinding;                                       // 0x0250   (0x0058)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0A98 (0x0000E0 - 0x000B78)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties : UNiagaraRendererProperties
{ 
public:
	UMaterialInterface*                                Material;                                                   // 0x00E0   (0x0008)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x00F0   (0x0020)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x0110   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0112   (0x0006)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x0118   (0x0010)  
	float                                              MacroUVRadius;                                              // 0x0128   (0x0004)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x012C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x0130   (0x0010)  
	bool                                               bSubImageBlend : 1;                                         // 0x0140:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x0140:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x0140:2 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0141   (0x0003)  MISSED
	ENiagaraRendererSortPrecision                      SortPrecision;                                              // 0x0144   (0x0001)  
	ENiagaraRendererGpuTranslucentLatency              GpuTranslucentLatency;                                      // 0x0145   (0x0001)  
	ENiagaraRendererPixelCoverageMode                  PixelCoverageMode;                                          // 0x0146   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0147   (0x0001)  MISSED
	float                                              PixelCoverageBlend;                                         // 0x0148   (0x0004)  
	float                                              MinFacingCameraBlendDistance;                               // 0x014C   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x0150   (0x0004)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x0154:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x0155   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x0158   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x015C   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x0160   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0168   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0218   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x0270   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x02C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x0320   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x0378   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x03D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0428   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0480   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x04D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0530   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0588   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x05E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PivotOffsetBinding;                                         // 0x0638   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0690   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x06E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0740   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0798   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x07F0   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0840   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x0898   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteRotationBinding;                                  // 0x08F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteSizeBinding;                                      // 0x0948   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteFacingBinding;                                    // 0x09A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteAlignmentBinding;                                 // 0x09F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0A50   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevPivotOffsetBinding;                                     // 0x0AA8   (0x0058)  
	unsigned char                                      UnknownData07_6[0x78];                                      // 0x0B00   (0x0078)  MISSED
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x04C8 (0x000070 - 0x000538)
class UNiagaraSystem : public UFXSystemAsset : UFXSystemAsset
{ 
public:
	bool                                               bSupportLargeWorldCoordinates : 1;                          // 0x0070:0 (0x0001)  
	bool                                               bOverrideCastShadow : 1;                                    // 0x0070:1 (0x0001)  
	bool                                               bOverrideReceivesDecals : 1;                                // 0x0070:2 (0x0001)  
	bool                                               bOverrideRenderCustomDepth : 1;                             // 0x0070:3 (0x0001)  
	bool                                               bOverrideCustomDepthStencilValue : 1;                       // 0x0070:4 (0x0001)  
	bool                                               bOverrideCustomDepthStencilWriteMask : 1;                   // 0x0070:5 (0x0001)  
	bool                                               bOverrideTranslucencySortPriority : 1;                      // 0x0070:6 (0x0001)  
	bool                                               bOverrideTranslucencySortDistanceOffset : 1;                // 0x0070:7 (0x0001)  
	bool                                               bCastShadow : 1;                                            // 0x0071:0 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0071:1 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0071:2 (0x0001)  
	bool                                               bDisableExperimentalVM : 1;                                 // 0x0071:3 (0x0001)  
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0072   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0073   (0x0001)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0074   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x0078   (0x0004)  
	float                                              TranslucencySortDistanceOffset;                             // 0x007C   (0x0004)  
	bool                                               bDumpDebugSystemInfo;                                       // 0x0080   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0081   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0082   (0x0001)  MISSED
	bool                                               bRequireCurrentFrameData;                                   // 0x0083   (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0084:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0085   (0x0003)  MISSED
	UNiagaraEffectType*                                EffectType;                                                 // 0x0088   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	bool                                               bOverrideAllowCullingForLocalPlayers : 1;                   // 0x0094:0 (0x0001)  
	bool                                               bAllowCullingForLocalPlayersOverride : 1;                   // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0098   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x00A8   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x00B8   (0x0010)  
	TArray<UNiagaraParameterCollectionInstance*>       ParameterCollectionOverrides;                               // 0x00C8   (0x0010)  
	UNiagaraScript*                                    SystemSpawnScript;                                          // 0x00D8   (0x0008)  
	UNiagaraScript*                                    SystemUpdateScript;                                         // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x00E8   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00F8   (0x0240)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x0338   (0x00D8)  
	FBox                                               FixedBounds;                                                // 0x0410   (0x0038)  
	bool                                               bAutoDeactivate;                                            // 0x0448   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0449   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x044A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x044C   (0x0004)  
	float                                              WarmupTime;                                                 // 0x0450   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x0454   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0458   (0x0004)  
	bool                                               bFixedTickDelta;                                            // 0x045C   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x045D   (0x0003)  MISSED
	float                                              FixedTickDeltaTime;                                         // 0x0460   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x0464   (0x0001)  
	bool                                               bNeedsGPUContextInitForDataInterfaces;                      // 0x0465   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x0466   (0x0002)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x0468   (0x0010)  
	TArray<UNiagaraDataChannelDefinitions*>            ReferencedDataChannelDefinitions;                           // 0x0478   (0x0010)  
	unsigned char                                      UnknownData09_6[0xB0];                                      // 0x0488   (0x00B0)  MISSED
};

/// Class /Script/Niagara.NiagaraValidationRule
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraValidationRule : public UObject : UObject
{ 
public:
};

/// Class /Script/Niagara.VolumeCache
/// Size: 0x0038 (0x000028 - 0x000060)
class UVolumeCache : public UObject : UObject
{ 
public:
	FString                                            FilePath;                                                   // 0x0028   (0x0010)  
	EVolumeCacheType                                   CacheType;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FIntVector                                         Resolution;                                                 // 0x003C   (0x000C)  
	int32_t                                            FrameRangeStart;                                            // 0x0048   (0x0004)  
	int32_t                                            FrameRangeEnd;                                              // 0x004C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Enum /Script/Niagara.ENiagaraSimCacheAttributeCaptureMode
/// Size: 0x04
enum ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
	ENiagaraSimCacheAttributeCaptureMode__All0                                       = 0,
	ENiagaraSimCacheAttributeCaptureMode__RenderingOnly1                             = 1,
	ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes2                        = 2,
	ENiagaraSimCacheAttributeCaptureMode__ENiagaraSimCacheAttributeCaptureMode_MAX3  = 3
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x05
enum ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None0                                                     = 0,
	ENiagaraCollisionMode__SceneGeometry1                                            = 1,
	ENiagaraCollisionMode__DepthBuffer2                                              = 2,
	ENiagaraCollisionMode__DistanceField3                                            = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX4                                = 4
};

/// Enum /Script/Niagara.ENiagaraBaseTypes
/// Size: 0x05
enum ENiagaraBaseTypes : uint8_t
{
	ENiagaraBaseTypes__Half0                                                         = 0,
	ENiagaraBaseTypes__Float1                                                        = 1,
	ENiagaraBaseTypes__Int322                                                        = 2,
	ENiagaraBaseTypes__Bool3                                                         = 3,
	ENiagaraBaseTypes__Max4                                                          = 4
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x04
enum ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float0                                                  = 0,
	ENiagaraGpuBufferFormat__HalfFloat1                                              = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte2                                 = 2,
	ENiagaraGpuBufferFormat__Max3                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraGpuSyncMode
/// Size: 0x05
enum ENiagaraGpuSyncMode : uint8_t
{
	ENiagaraGpuSyncMode__None0                                                       = 0,
	ENiagaraGpuSyncMode__SyncCpuToGpu1                                               = 1,
	ENiagaraGpuSyncMode__SyncGpuToCpu2                                               = 2,
	ENiagaraGpuSyncMode__SyncBoth3                                                   = 3,
	ENiagaraGpuSyncMode__ENiagaraGpuSyncMode_MAX4                                    = 4
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x04
enum ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled0                                              = 0,
	ENiagaraMipMapGeneration__PostStage1                                             = 1,
	ENiagaraMipMapGeneration__PostSimulate2                                          = 2,
	ENiagaraMipMapGeneration__ENiagaraMipMapGeneration_MAX3                          = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x05
enum ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value0                                                      = 0,
	ENiagaraDefaultMode__Binding1                                                    = 1,
	ENiagaraDefaultMode__Custom2                                                     = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet3                                     = 3,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX4                                    = 4
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x03
enum ENiagaraDefaultRendererMotionVectorSetting : uint8_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise0                             = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate1                         = 1,
	ENiagaraDefaultRendererMotionVectorSetting__ENiagaraDefaultRendererMotionVectorSetting_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x05
enum ENiagaraRendererMotionVectorSetting : uint8_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect0                                 = 0,
	ENiagaraRendererMotionVectorSetting__Precise1                                    = 1,
	ENiagaraRendererMotionVectorSetting__Approximate2                                = 2,
	ENiagaraRendererMotionVectorSetting__Disable3                                    = 3,
	ENiagaraRendererMotionVectorSetting__ENiagaraRendererMotionVectorSetting_MAX4    = 4
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x03
enum ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim0                                                       = 0,
	ENiagaraSimTarget__GPUComputeSim1                                                = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX2                                        = 2
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x04
enum ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime0                                            = 0,
	ENiagaraAgeUpdateMode__DesiredAge1                                               = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek2                                         = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX3                                = 3
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x03
enum ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average0                                             = 0,
	ENiagaraStatEvaluationType__Maximum1                                             = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX2                      = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x03
enum ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent0                                                = 0,
	ENiagaraStatDisplayMode__Absolute1                                               = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX2                            = 2
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x04
enum ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData0                                               = 0,
	ENiagaraDataSetType__Shared1                                                     = 1,
	ENiagaraDataSetType__Event2                                                      = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX3                                    = 3
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x07
enum ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined0                                               = 0,
	ENiagaraInputNodeUsage__Parameter1                                               = 1,
	ENiagaraInputNodeUsage__Attribute2                                               = 2,
	ENiagaraInputNodeUsage__SystemConstant3                                          = 3,
	ENiagaraInputNodeUsage__TranslatorConstant4                                      = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter5                                 = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX6                              = 6
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x08
enum ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown0                                        = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty1                                          = 1,
	ENiagaraScriptCompileStatus__NCS_Error2                                          = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate3                                       = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated4                                   = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings5                           = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings6                    = 6,
	ENiagaraScriptCompileStatus__NCS_MAX7                                            = 7
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x14
enum ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function0                                                   = 0,
	ENiagaraScriptUsage__Module1                                                     = 1,
	ENiagaraScriptUsage__DynamicInput2                                               = 2,
	ENiagaraScriptUsage__ParticleSpawnScript3                                        = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated4                            = 4,
	ENiagaraScriptUsage__ParticleUpdateScript5                                       = 5,
	ENiagaraScriptUsage__ParticleEventScript6                                        = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript7                              = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript8                                   = 8,
	ENiagaraScriptUsage__EmitterSpawnScript9                                         = 9,
	ENiagaraScriptUsage__EmitterUpdateScript10                                       = 10,
	ENiagaraScriptUsage__SystemSpawnScript11                                         = 11,
	ENiagaraScriptUsage__SystemUpdateScript12                                        = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX13                                   = 13
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x06
enum ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn0                                         = 0,
	ENiagaraCompileUsageStaticSwitch__Update1                                        = 1,
	ENiagaraCompileUsageStaticSwitch__Event2                                         = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage3                               = 3,
	ENiagaraCompileUsageStaticSwitch__Default4                                       = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX5          = 5
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x04
enum ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System0                                       = 0,
	ENiagaraScriptContextStaticSwitch__Emitter1                                      = 1,
	ENiagaraScriptContextStaticSwitch__Particle2                                     = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX3        = 3
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x04
enum ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle0                                                   = 0,
	ENiagaraScriptGroup__Emitter1                                                    = 1,
	ENiagaraScriptGroup__System2                                                     = 2,
	ENiagaraScriptGroup__Max3                                                        = 3
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x07
enum ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource0                                                              = 0,
	ExplicitParticles1                                                               = 1,
	ExplicitEmitter2                                                                 = 2,
	ExplicitSystem3                                                                  = 3,
	ExplicitUser4                                                                    = 4,
	MaxBindingSource5                                                                = 5,
	ENiagaraBindingSource_MAX6                                                       = 6
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x03
enum ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles0                                       = 0,
	ENiagaraRendererSourceDataMode__Emitter1                                         = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX2              = 2
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x04
enum ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre0                                        = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst1                                         = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond2                                        = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX3                  = 3
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x08
enum ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None0                                               = 0,
	ENiagaraSystemInstanceState__PendingSpawn1                                       = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused2                                 = 2,
	ENiagaraSystemInstanceState__Spawning3                                           = 3,
	ENiagaraSystemInstanceState__Running4                                            = 4,
	ENiagaraSystemInstanceState__Paused5                                             = 5,
	ENiagaraSystemInstanceState__Num6                                                = 6,
	ENiagaraSystemInstanceState__ENiagaraSystemInstanceState_MAX7                    = 7
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x03
enum ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug0                                             = 0,
	ENiagaraFunctionDebugState__Basic1                                               = 1,
	ENiagaraFunctionDebugState__ENiagaraFunctionDebugState_MAX2                      = 2
};

/// Enum /Script/Niagara.ENiagaraGpuComputeTickStage
/// Size: 0x06
enum ENiagaraGpuComputeTickStage : uint8_t
{
	ENiagaraGpuComputeTickStage__PreInitViews0                                       = 0,
	ENiagaraGpuComputeTickStage__PostInitViews1                                      = 1,
	ENiagaraGpuComputeTickStage__PostOpaqueRender2                                   = 2,
	ENiagaraGpuComputeTickStage__Max3                                                = 3,
	ENiagaraGpuComputeTickStage__First4                                              = 0,
	ENiagaraGpuComputeTickStage__Last5                                               = 2
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x06
enum ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None0                                                             = 0,
	ENCPoolMethod__AutoRelease1                                                      = 1,
	ENCPoolMethod__ManualRelease2                                                    = 2,
	ENCPoolMethod__ManualRelease_OnComplete3                                         = 3,
	ENCPoolMethod__FreeInPool4                                                       = 4,
	ENCPoolMethod__ENCPoolMethod_MAX5                                                = 5
};

/// Enum /Script/Niagara.ENiagaraDataChannelAllocationMode
/// Size: 0x02
enum ENiagaraDataChannelAllocationMode : uint8_t
{
	ENiagaraDataChannelAllocationMode__Static0                                       = 0,
	ENiagaraDataChannelAllocationMode__ENiagaraDataChannelAllocationMode_MAX1        = 1
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x06
enum ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None0                                                          = 0,
	ENiagaraSortMode__ViewDepth1                                                     = 1,
	ENiagaraSortMode__ViewDistance2                                                  = 2,
	ENiagaraSortMode__CustomAscending3                                               = 3,
	ENiagaraSortMode__CustomDecending4                                               = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX5                                          = 5
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x04
enum ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax40                                        = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax81                                        = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited2                                        = 2,
	ENDISkelMesh_GpuMaxInfluences__ENDISkelMesh_MAX3                                 = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x04
enum ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full0                                     = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_241                               = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_232                               = 2,
	ENDISkelMesh_GpuUniformSamplingFormat__ENDISkelMesh_MAX3                         = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x03
enum ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full0                                 = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half1                                 = 1,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__ENDISkelMesh_MAX2                     = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererPixelCoverageMode
/// Size: 0x03
enum ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	ENiagaraDefaultRendererPixelCoverageMode__Enabled0                               = 0,
	ENiagaraDefaultRendererPixelCoverageMode__Disabled1                              = 1,
	ENiagaraDefaultRendererPixelCoverageMode__ENiagaraDefaultRendererPixelCoverageMode_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultSortPrecision
/// Size: 0x03
enum ENiagaraDefaultSortPrecision : uint8_t
{
	ENiagaraDefaultSortPrecision__Low0                                               = 0,
	ENiagaraDefaultSortPrecision__High1                                              = 1,
	ENiagaraDefaultSortPrecision__ENiagaraDefaultSortPrecision_MAX2                  = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultGpuTranslucentLatency
/// Size: 0x03
enum ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
	ENiagaraDefaultGpuTranslucentLatency__Immediate0                                 = 0,
	ENiagaraDefaultGpuTranslucentLatency__Latent1                                    = 1,
	ENiagaraDefaultGpuTranslucentLatency__ENiagaraDefaultGpuTranslucentLatency_MAX2  = 2
};

/// Enum /Script/Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
/// Size: 0x05
enum ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	ENDICollisionQuery_AsyncGpuTraceProvider__Default0                               = 0,
	ENDICollisionQuery_AsyncGpuTraceProvider__HWRT1                                  = 1,
	ENDICollisionQuery_AsyncGpuTraceProvider__GSDF2                                  = 2,
	ENDICollisionQuery_AsyncGpuTraceProvider__None3                                  = 3,
	ENDICollisionQuery_AsyncGpuTraceProvider__ENDICollisionQuery_MAX4                = 4
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x05
enum ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs0                                                = 0,
	ENiagaraTickBehavior__UseComponentTickGroup1                                     = 1,
	ENiagaraTickBehavior__ForceTickFirst2                                            = 2,
	ENiagaraTickBehavior__ForceTickLast3                                             = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX4                                  = 4
};

/// Enum /Script/Niagara.ENDIActorComponentSourceMode
/// Size: 0x04
enum ENDIActorComponentSourceMode : uint8_t
{
	ENDIActorComponentSourceMode__Default0                                           = 0,
	ENDIActorComponentSourceMode__AttachParent1                                      = 1,
	ENDIActorComponentSourceMode__LocalPlayer2                                       = 2,
	ENDIActorComponentSourceMode__ENDIActorComponentSourceMode_MAX3                  = 3
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x05
enum ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default0                                              = 0,
	ENDIStaticMesh_SourceMode__Source1                                               = 1,
	ENDIStaticMesh_SourceMode__AttachParent2                                         = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly3                                      = 3,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX4                                   = 4
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x02
enum ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate0                               = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX1 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x03
enum ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive0                  = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None1                                = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04
enum ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive0                        = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate1                               = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None2                                     = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX3 = 3
};

/// Enum /Script/Niagara.ENiagaraCompilationState
/// Size: 0x10
enum ENiagaraCompilationState : uint8_t
{
	ENiagaraCompilationState__CheckDDC0                                              = 0,
	ENiagaraCompilationState__Precompile1                                            = 1,
	ENiagaraCompilationState__StartCompileJob2                                       = 2,
	ENiagaraCompilationState__AwaitResult3                                           = 3,
	ENiagaraCompilationState__OptimizeByteCode4                                      = 4,
	ENiagaraCompilationState__ProcessResult5                                         = 5,
	ENiagaraCompilationState__PutToDDC6                                              = 6,
	ENiagaraCompilationState__Finished7                                              = 7,
	ENiagaraCompilationState__Aborted8                                               = 8,
	ENiagaraCompilationState__ENiagaraCompilationState_MAX9                          = 9
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x09
enum ENiagaraBakerViewMode : uint8_t
{
	ENiagaraBakerViewMode__Perspective0                                              = 0,
	ENiagaraBakerViewMode__OrthoFront1                                               = 1,
	ENiagaraBakerViewMode__OrthoBack2                                                = 2,
	ENiagaraBakerViewMode__OrthoLeft3                                                = 3,
	ENiagaraBakerViewMode__OrthoRight4                                               = 4,
	ENiagaraBakerViewMode__OrthoTop5                                                 = 5,
	ENiagaraBakerViewMode__OrthoBottom6                                              = 6,
	ENiagaraBakerViewMode__Num7                                                      = 7,
	ENiagaraBakerViewMode__ENiagaraBakerViewMode_MAX8                                = 8
};

/// Enum /Script/Niagara.ENiagaraDataInterfaceEmitterBindingMode
/// Size: 0x03
enum ENiagaraDataInterfaceEmitterBindingMode : uint8_t
{
	ENiagaraDataInterfaceEmitterBindingMode__Self0                                   = 0,
	ENiagaraDataInterfaceEmitterBindingMode__Other1                                  = 1,
	ENiagaraDataInterfaceEmitterBindingMode__ENiagaraDataInterfaceEmitterBindingMode_MAX2 = 2
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x03
enum ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize0                                         = 0,
	ENDIExport_GPUAllocationMode__PerParticle1                                       = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX2                                    = 2
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x04
enum ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default0                                               = 0,
	ENDILandscape_SourceMode__Source1                                                = 1,
	ENDILandscape_SourceMode__AttachParent2                                          = 2,
	ENDILandscape_SourceMode__ENDILandscape_MAX3                                     = 3
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04
enum ESetResolutionMethod : uint8_t
{
	ESetResolutionMethod__Independent0                                               = 0,
	ESetResolutionMethod__MaxAxis1                                                   = 1,
	ESetResolutionMethod__CellSize2                                                  = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX3                                  = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x04
enum ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default0                                            = 0,
	ENDISkeletalMesh_SourceMode__Source1                                             = 1,
	ENDISkeletalMesh_SourceMode__AttachParent2                                       = 2,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX3                               = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x05
enum ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid0                                          = 255,
	ENDISkeletalMesh_SkinningMode__None1                                             = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly2                                     = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin3                                          = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX4                             = 256
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x05
enum ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play0                                                 = 0,
	ENiagaraDebugPlaybackMode__Loop1                                                 = 1,
	ENiagaraDebugPlaybackMode__Paused2                                               = 2,
	ENiagaraDebugPlaybackMode__Step3                                                 = 3,
	ENiagaraDebugPlaybackMode__ENiagaraDebugPlaybackMode_MAX4                        = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x04
enum ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left0                                                    = 0,
	ENiagaraDebugHudHAlign__Center1                                                  = 1,
	ENiagaraDebugHudHAlign__Right2                                                   = 2,
	ENiagaraDebugHudHAlign__ENiagaraDebugHudHAlign_MAX3                              = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x04
enum ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top0                                                     = 0,
	ENiagaraDebugHudVAlign__Center1                                                  = 1,
	ENiagaraDebugHudVAlign__Bottom2                                                  = 2,
	ENiagaraDebugHudVAlign__ENiagaraDebugHudVAlign_MAX3                              = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x03
enum ENiagaraDebugHudFont : uint8_t
{
	ENiagaraDebugHudFont__Small0                                                     = 0,
	ENiagaraDebugHudFont__Normal1                                                    = 1,
	ENiagaraDebugHudFont__ENiagaraDebugHudFont_MAX2                                  = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04
enum ENiagaraDebugHudVerbosity : uint8_t
{
	ENiagaraDebugHudVerbosity__None0                                                 = 0,
	ENiagaraDebugHudVerbosity__Basic1                                                = 1,
	ENiagaraDebugHudVerbosity__Verbose2                                              = 2,
	ENiagaraDebugHudVerbosity__ENiagaraDebugHudVerbosity_MAX3                        = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
/// Size: 0x05
enum ENiagaraDebugHUDOverviewMode : uint8_t
{
	ENiagaraDebugHUDOverviewMode__Overview0                                          = 0,
	ENiagaraDebugHUDOverviewMode__Scalability1                                       = 1,
	ENiagaraDebugHUDOverviewMode__Performance2                                       = 2,
	ENiagaraDebugHUDOverviewMode__GpuComputePerformance3                             = 3,
	ENiagaraDebugHUDOverviewMode__ENiagaraDebugHUDOverviewMode_MAX4                  = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfGraphMode
/// Size: 0x05
enum ENiagaraDebugHUDPerfGraphMode : uint8_t
{
	ENiagaraDebugHUDPerfGraphMode__None0                                             = 0,
	ENiagaraDebugHUDPerfGraphMode__GameThread1                                       = 1,
	ENiagaraDebugHUDPerfGraphMode__RenderThread2                                     = 2,
	ENiagaraDebugHUDPerfGraphMode__GPU3                                              = 3,
	ENiagaraDebugHUDPerfGraphMode__ENiagaraDebugHUDPerfGraphMode_MAX4                = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfSampleMode
/// Size: 0x03
enum ENiagaraDebugHUDPerfSampleMode : uint8_t
{
	ENiagaraDebugHUDPerfSampleMode__FrameTotal0                                      = 0,
	ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage1                              = 1,
	ENiagaraDebugHUDPerfSampleMode__ENiagaraDebugHUDPerfSampleMode_MAX2              = 2
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x05
enum ENiagaraCullReaction : uint8_t
{
	ENiagaraCullReaction__Deactivate0                                                = 0,
	ENiagaraCullReaction__DeactivateImmediate1                                       = 1,
	ENiagaraCullReaction__DeactivateResume2                                          = 2,
	ENiagaraCullReaction__DeactivateImmediateResume3                                 = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX4                                  = 4
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x06
enum ENiagaraScalabilityUpdateFrequency : uint8_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly0                                   = 0,
	ENiagaraScalabilityUpdateFrequency__Low1                                         = 1,
	ENiagaraScalabilityUpdateFrequency__Medium2                                      = 2,
	ENiagaraScalabilityUpdateFrequency__High3                                        = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous4                                  = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX5      = 5
};

/// Enum /Script/Niagara.ENiagaraCullProxyMode
/// Size: 0x03
enum ENiagaraCullProxyMode : uint8_t
{
	ENiagaraCullProxyMode__None0                                                     = 0,
	ENiagaraCullProxyMode__Instanced_Rendered1                                       = 1,
	ENiagaraCullProxyMode__ENiagaraCullProxyMode_MAX2                                = 2
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x04
enum EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle0                                             = 0,
	EScriptExecutionMode__SpawnedParticles1                                          = 1,
	EScriptExecutionMode__SingleParticle2                                            = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX3                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x04
enum EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate0                                      = 0,
	EParticleAllocationMode__ManualEstimate1                                         = 1,
	EParticleAllocationMode__FixedCount2                                             = 2,
	EParticleAllocationMode__EParticleAllocationMode_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraEmitterCalculateBoundMode
/// Size: 0x04
enum ENiagaraEmitterCalculateBoundMode : uint8_t
{
	ENiagaraEmitterCalculateBoundMode__Dynamic0                                      = 0,
	ENiagaraEmitterCalculateBoundMode__Fixed1                                        = 1,
	ENiagaraEmitterCalculateBoundMode__Programmable2                                 = 2,
	ENiagaraEmitterCalculateBoundMode__ENiagaraEmitterCalculateBoundMode_MAX3        = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x05
enum ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default0                                                 = 0,
	ENiagaraMeshFacingMode__Velocity1                                                = 1,
	ENiagaraMeshFacingMode__CameraPosition2                                          = 2,
	ENiagaraMeshFacingMode__CameraPlane3                                             = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX4                              = 4
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x05
enum ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh0                                              = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation1                                        = 1,
	ENiagaraMeshPivotOffsetSpace__World2                                             = 2,
	ENiagaraMeshPivotOffsetSpace__Local3                                             = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX4                  = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x04
enum ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation0                                         = 0,
	ENiagaraMeshLockedAxisSpace__World1                                              = 1,
	ENiagaraMeshLockedAxisSpace__Local2                                              = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX3                    = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x04
enum ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default0                                         = 0,
	ENiagaraPlatformSelectionState__Enabled1                                         = 1,
	ENiagaraPlatformSelectionState__Disabled2                                        = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX3              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x05
enum ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled0                                              = 0,
	ENiagaraPlatformSetState__Enabled1                                               = 1,
	ENiagaraPlatformSetState__Active2                                                = 2,
	ENiagaraPlatformSetState__Unknown3                                               = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX4                          = 4
};

/// Enum /Script/Niagara.ENiagaraCVarConditionResponse
/// Size: 0x04
enum ENiagaraCVarConditionResponse : uint8_t
{
	ENiagaraCVarConditionResponse__None0                                             = 0,
	ENiagaraCVarConditionResponse__Enable1                                           = 1,
	ENiagaraCVarConditionResponse__Disable2                                          = 2,
	ENiagaraCVarConditionResponse__ENiagaraCVarConditionResponse_MAX3                = 3
};

/// Enum /Script/Niagara.ENiagaraDeviceProfileRedirectMode
/// Size: 0x03
enum ENiagaraDeviceProfileRedirectMode : uint8_t
{
	ENiagaraDeviceProfileRedirectMode__CVar0                                         = 0,
	ENiagaraDeviceProfileRedirectMode__DeviceProfile1                                = 1,
	ENiagaraDeviceProfileRedirectMode__ENiagaraDeviceProfileRedirectMode_MAX2        = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x04
enum ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never0                                             = 0,
	ENiagaraPreviewGridResetMode__Individual1                                        = 1,
	ENiagaraPreviewGridResetMode__All2                                               = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX3                  = 3
};

/// Enum /Script/Niagara.ENiagaraRendererSortPrecision
/// Size: 0x04
enum ENiagaraRendererSortPrecision : uint8_t
{
	ENiagaraRendererSortPrecision__Default0                                          = 0,
	ENiagaraRendererSortPrecision__Low1                                              = 1,
	ENiagaraRendererSortPrecision__High2                                             = 2,
	ENiagaraRendererSortPrecision__ENiagaraRendererSortPrecision_MAX3                = 3
};

/// Enum /Script/Niagara.ENiagaraRendererGpuTranslucentLatency
/// Size: 0x04
enum ENiagaraRendererGpuTranslucentLatency : uint8_t
{
	ENiagaraRendererGpuTranslucentLatency__ProjectDefault0                           = 0,
	ENiagaraRendererGpuTranslucentLatency__Immediate1                                = 1,
	ENiagaraRendererGpuTranslucentLatency__Latent2                                   = 2,
	ENiagaraRendererGpuTranslucentLatency__ENiagaraRendererGpuTranslucentLatency_MAX3 = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x04
enum ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen0                                                = 0,
	ENiagaraRibbonFacingMode__Custom1                                                = 1,
	ENiagaraRibbonFacingMode__CustomSideVector2                                      = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX3                          = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x03
enum ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale0                                              = 0,
	ENiagaraRibbonAgeOffsetMode__Clip1                                               = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX2                    = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x03
enum ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack0                                        = 0,
	ENiagaraRibbonDrawDirection__BackToFront1                                        = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX2                    = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x05
enum ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane0                                                  = 0,
	ENiagaraRibbonShapeMode__MultiPlane1                                             = 1,
	ENiagaraRibbonShapeMode__Tube2                                                   = 2,
	ENiagaraRibbonShapeMode__Custom3                                                 = 3,
	ENiagaraRibbonShapeMode__ENiagaraRibbonShapeMode_MAX4                            = 4
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x04
enum ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic0                                       = 0,
	ENiagaraRibbonTessellationMode__Custom1                                          = 1,
	ENiagaraRibbonTessellationMode__Disabled2                                        = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX3              = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x03
enum ENiagaraRibbonUVEdgeMode : uint8_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition0                                      = 0,
	ENiagaraRibbonUVEdgeMode__Locked1                                                = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX2                          = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x05
enum ENiagaraRibbonUVDistributionMode : uint8_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly0                               = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength1                = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength2                         = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength3                = 3,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX4          = 4
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x06
enum EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy0                                                 = 0,
	EUnusedAttributeBehaviour__Zero1                                                 = 1,
	EUnusedAttributeBehaviour__None2                                                 = 2,
	EUnusedAttributeBehaviour__MarkInvalid3                                          = 3,
	EUnusedAttributeBehaviour__PassThrough4                                          = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX5                        = 5
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x03
enum ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency0                                     = 0,
	ENiagaraModuleDependencyType__PostDependency1                                    = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX2                  = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x03
enum ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript0                            = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts1                            = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x05
enum ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid0                                        = 0,
	ENiagaraScriptLibraryVisibility__Unexposed1                                      = 1,
	ENiagaraScriptLibraryVisibility__Library2                                        = 2,
	ENiagaraScriptLibraryVisibility__Hidden3                                         = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX4            = 4
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x04
enum ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None0                                       = 0,
	ENiagaraScriptTemplateSpecification__Template1                                   = 1,
	ENiagaraScriptTemplateSpecification__Behavior2                                   = 2,
	ENiagaraScriptTemplateSpecification__ENiagaraScriptTemplateSpecification_MAX3    = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyUsage
/// Size: 0x06
enum ENiagaraModuleDependencyUsage : uint8_t
{
	ENiagaraModuleDependencyUsage__None0                                             = 0,
	ENiagaraModuleDependencyUsage__Spawn1                                            = 1,
	ENiagaraModuleDependencyUsage__Update2                                           = 2,
	ENiagaraModuleDependencyUsage__Event3                                            = 3,
	ENiagaraModuleDependencyUsage__SimulationStage4                                  = 4,
	ENiagaraModuleDependencyUsage__ENiagaraModuleDependencyUsage_MAX5                = 5
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x04
enum ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned0                                              = 0,
	ENiagaraSpriteAlignment__VelocityAligned1                                        = 1,
	ENiagaraSpriteAlignment__CustomAlignment2                                        = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x06
enum ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera0                                            = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane1                                       = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector2                                    = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition3                                    = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend4                               = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX5                          = 5
};

/// Enum /Script/Niagara.ENiagaraRendererPixelCoverageMode
/// Size: 0x07
enum ENiagaraRendererPixelCoverageMode : uint8_t
{
	ENiagaraRendererPixelCoverageMode__Automatic0                                    = 0,
	ENiagaraRendererPixelCoverageMode__Disabled1                                     = 1,
	ENiagaraRendererPixelCoverageMode__Enabled2                                      = 2,
	ENiagaraRendererPixelCoverageMode__Enabled_RGBA3                                 = 3,
	ENiagaraRendererPixelCoverageMode__Enabled_RGB4                                  = 4,
	ENiagaraRendererPixelCoverageMode__Enabled_A5                                    = 5,
	ENiagaraRendererPixelCoverageMode__ENiagaraRendererPixelCoverageMode_MAX6        = 6
};

/// Enum /Script/Niagara.ENiagaraStructConversionType
/// Size: 0x07
enum ENiagaraStructConversionType : uint8_t
{
	ENiagaraStructConversionType__CopyOnly0                                          = 0,
	ENiagaraStructConversionType__DoubleToFloat1                                     = 1,
	ENiagaraStructConversionType__Vector22                                           = 2,
	ENiagaraStructConversionType__Vector33                                           = 3,
	ENiagaraStructConversionType__Vector44                                           = 4,
	ENiagaraStructConversionType__Quat5                                              = 5,
	ENiagaraStructConversionType__ENiagaraStructConversionType_MAX6                  = 6
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x06
enum ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None0                                    = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest1                                 = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest2                                = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar3                                  = 3,
	ENiagaraNumericOutputTypeSelectionMode__Custom4                                  = 4,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX5 = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x05
enum ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability0                                       = 0,
	ENiagaraExecutionStateSource__Internal1                                          = 1,
	ENiagaraExecutionStateSource__Owner2                                             = 2,
	ENiagaraExecutionStateSource__InternalCompletion3                                = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX4                  = 4
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x07
enum ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active0                                                  = 0,
	ENiagaraExecutionState__Inactive1                                                = 1,
	ENiagaraExecutionState__InactiveClear2                                           = 2,
	ENiagaraExecutionState__Complete3                                                = 3,
	ENiagaraExecutionState__Disabled4                                                = 4,
	ENiagaraExecutionState__Num5                                                     = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX6                              = 6
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x04
enum ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation0                                             = 0,
	ENiagaraCoordinateSpace__World1                                                  = 1,
	ENiagaraCoordinateSpace__Local2                                                  = 2,
	ENiagaraCoordinateSpace__ENiagaraCoordinateSpace_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x04
enum ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None0                                       = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset1                                = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry2                            = 2,
	ENiagaraPythonUpdateScriptReference__ENiagaraPythonUpdateScriptReference_MAX3    = 3
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x04
enum ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis0                                                  = 0,
	ENiagaraOrientationAxis__YAxis1                                                  = 1,
	ENiagaraOrientationAxis__ZAxis2                                                  = 2,
	ENiagaraOrientationAxis__ENiagaraOrientationAxis_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraBoolDisplayMode
/// Size: 0x04
enum ENiagaraBoolDisplayMode : uint8_t
{
	ENiagaraBoolDisplayMode__DisplayAlways0                                          = 0,
	ENiagaraBoolDisplayMode__DisplayIfTrue1                                          = 1,
	ENiagaraBoolDisplayMode__DisplayIfFalse2                                         = 2,
	ENiagaraBoolDisplayMode__ENiagaraBoolDisplayMode_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraValidationSeverity
/// Size: 0x04
enum ENiagaraValidationSeverity : uint8_t
{
	ENiagaraValidationSeverity__Info0                                                = 0,
	ENiagaraValidationSeverity__Warning1                                             = 1,
	ENiagaraValidationSeverity__Error2                                               = 2,
	ENiagaraValidationSeverity__ENiagaraValidationSeverity_MAX3                      = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x05
enum ENiagaraVariantMode : uint8_t
{
	ENiagaraVariantMode__None0                                                       = 0,
	ENiagaraVariantMode__Object1                                                     = 1,
	ENiagaraVariantMode__DataInterface2                                              = 2,
	ENiagaraVariantMode__Bytes3                                                      = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX4                                    = 4
};

/// Enum /Script/Niagara.EVolumeCacheType
/// Size: 0x02
enum EVolumeCacheType : uint8_t
{
	EVolumeCacheType__OpenVDB0                                                       = 0,
	EVolumeCacheType__EVolumeCacheType_MAX1                                          = 1
};

