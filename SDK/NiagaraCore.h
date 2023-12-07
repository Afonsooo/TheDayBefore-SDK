
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraCore.

/// Struct /Script/NiagaraCore.NiagaraVariableCommonReference
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraVariableCommonReference
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	UObject*                                           UnderlyingType;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraCompileHash
{ 
	TArray<char>                                       DataHash;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMergeable : public UObject : UObject
{ 
public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable : UNiagaraMergeable
{ 
public:
};

/// Enum /Script/NiagaraCore.ENiagaraIterationSource
/// Size: 0x04
enum ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles0                                              = 0,
	ENiagaraIterationSource__DataInterface1                                          = 1,
	ENiagaraIterationSource__DirectSet2                                              = 2,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX3                            = 3
};

