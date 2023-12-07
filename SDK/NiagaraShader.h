
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraShader.

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x0008)  
	FName                                              EnabledBinding;                                             // 0x0008   (0x0008)  
	FName                                              ElementCountXBinding;                                       // 0x0010   (0x0008)  
	FName                                              ElementCountYBinding;                                       // 0x0018   (0x0008)  
	FName                                              ElementCountZBinding;                                       // 0x0020   (0x0008)  
	ENiagaraIterationSource                            IterationSourceType;                                        // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FName                                              IterationDataInterface;                                     // 0x002C   (0x0008)  
	FName                                              IterationDirectBinding;                                     // 0x0034   (0x0008)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	bool                                               bWritesParticles : 1;                                       // 0x0040:0 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0040:1 (0x0001)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x0040:2 (0x0001)  
	bool                                               bGpuIndirectDispatch : 1;                                   // 0x0040:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	FName                                              ParticleIterationStateBinding;                              // 0x0044   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FIntPoint                                          ParticleIterationStateRange;                                // 0x0050   (0x0008)  
	TArray<FName>                                      OutputDestinations;                                         // 0x0058   (0x0010)  
	TArray<FName>                                      InputDataInterfaces;                                        // 0x0068   (0x0010)  
	int32_t                                            NumIterations;                                              // 0x0078   (0x0004)  
	FName                                              NumIterationsBinding;                                       // 0x007C   (0x0008)  
	ENiagaraGpuDispatchType                            GpuDispatchType;                                            // 0x0084   (0x0001)  
	ENiagaraDirectDispatchElementType                  GpuDirectDispatchElementType;                               // 0x0085   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0086   (0x0002)  MISSED
	FIntVector                                         GpuDispatchNumThreads;                                      // 0x0088   (0x000C)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraShaderScriptParametersMetadata
{ 
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DataInterfaceParamInfo;                                     // 0x0000   (0x0010)  
	TArray<FString>                                    LooseMetadataNames;                                         // 0x0010   (0x0010)  
	bool                                               bExternalConstantsInterpolated;                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FNiagaraShaderScriptExternalConstant>       ExternalConstants;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraShaderScriptExternalConstant
{ 
	FName                                              Type;                                                       // 0x0000   (0x0008)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	FString                                            DataInterfaceHLSLSymbol;                                    // 0x0000   (0x0010)  
	FString                                            DIClassName;                                                // 0x0010   (0x0010)  
	uint32_t                                           ShaderParametersOffset;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FNiagaraVariableCommonReference>            VariadicInputs;                                             // 0x0028   (0x0010)  
	TArray<FNiagaraVariableCommonReference>            VariadicOutputs;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            ShortDescription;                                           // 0x0018   (0x0010)  
	bool                                               bDismissable;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGuid                                              NodeGuid;                                                   // 0x002C   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FGuid>                                      StackGuids;                                                 // 0x0050   (0x0010)  
	FNiagaraCompileEventSource                         Source;                                                     // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject : UObject
{ 
public:
};

/// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
/// Size: 0x07
enum ENiagaraMipMapGenerationType : uint8_t
{
	ENiagaraMipMapGenerationType__Unfiltered0                                        = 0,
	ENiagaraMipMapGenerationType__Linear1                                            = 1,
	ENiagaraMipMapGenerationType__Blur12                                             = 2,
	ENiagaraMipMapGenerationType__Blur23                                             = 3,
	ENiagaraMipMapGenerationType__Blur34                                             = 4,
	ENiagaraMipMapGenerationType__Blur45                                             = 5,
	ENiagaraMipMapGenerationType__ENiagaraMipMapGenerationType_MAX6                  = 6
};

/// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
/// Size: 0x05
enum ENiagaraGpuDispatchType : uint8_t
{
	ENiagaraGpuDispatchType__OneD0                                                   = 0,
	ENiagaraGpuDispatchType__TwoD1                                                   = 1,
	ENiagaraGpuDispatchType__ThreeD2                                                 = 2,
	ENiagaraGpuDispatchType__Custom3                                                 = 3,
	ENiagaraGpuDispatchType__ENiagaraGpuDispatchType_MAX4                            = 4
};

/// Enum /Script/NiagaraShader.ENiagaraDirectDispatchElementType
/// Size: 0x04
enum ENiagaraDirectDispatchElementType : uint8_t
{
	ENiagaraDirectDispatchElementType__NumThreads0                                   = 0,
	ENiagaraDirectDispatchElementType__NumThreadsNoClipping1                         = 1,
	ENiagaraDirectDispatchElementType__NumGroups2                                    = 2,
	ENiagaraDirectDispatchElementType__ENiagaraDirectDispatchElementType_MAX3        = 3
};

/// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
/// Size: 0x04
enum ENiagaraSimStageExecuteBehavior : uint8_t
{
	ENiagaraSimStageExecuteBehavior__Always0                                         = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset1                              = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset2                           = 2,
	ENiagaraSimStageExecuteBehavior__ENiagaraSimStageExecuteBehavior_MAX3            = 3
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x05
enum FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log0                                               = 0,
	FNiagaraCompileEventSeverity__Display1                                           = 1,
	FNiagaraCompileEventSeverity__Warning2                                           = 2,
	FNiagaraCompileEventSeverity__Error3                                             = 3,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX4                  = 4
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
/// Size: 0x03
enum FNiagaraCompileEventSource : uint8_t
{
	FNiagaraCompileEventSource__Unset0                                               = 0,
	FNiagaraCompileEventSource__ScriptDependency1                                    = 1,
	FNiagaraCompileEventSource__FNiagaraCompileEventSource_MAX2                      = 2
};

