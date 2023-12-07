
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TypedElementRuntime.

/// Struct /Script/TypedElementRuntime.TypedElementSelectionOptions
/// Size: 0x0005 (0x000000 - 0x000005)
struct FTypedElementSelectionOptions
{ 
	bool                                               bAllowHidden;                                               // 0x0000   (0x0001)  
	bool                                               bAllowGroups;                                               // 0x0001   (0x0001)  
	bool                                               bAllowLegacyNotifications;                                  // 0x0002   (0x0001)  
	bool                                               bWarnIfLocked;                                              // 0x0003   (0x0001)  
	ETypedElementChildInclusionMethod                  ChildElementInclusionMethod;                                // 0x0004   (0x0001)  
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionSetState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTypedElementSelectionSetState
{ 
	TWeakObjectPtr<UTypedElementSelectionSet*>         CreatedFromSelectionSet;                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/TypedElementRuntime.TypedElementIsSelectedOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTypedElementIsSelectedOptions
{ 
	bool                                               bAllowIndirect;                                             // 0x0000   (0x0001)  
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FTypedElementSelectionNormalizationOptions
{ 
	bool                                               bExpandGroups;                                              // 0x0000   (0x0001)  
	bool                                               bFollowAttachment;                                          // 0x0001   (0x0001)  
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionSetLibrary : public UObject : UObject
{ 
public:
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSet
/// Size: 0x0870 (0x000028 - 0x000898)
class UTypedElementSelectionSet : public UObject : UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x800];                                     // 0x0028   (0x0800)  MISSED
	FMulticastInlineDelegate                           OnPreSelectionChange;                                       // 0x0828   (0x0010)  
	FMulticastInlineDelegate                           OnSelectionChange;                                          // 0x0838   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0848   (0x0050)  MISSED


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SetSelection
	bool SetSelection(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x3aa35f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElements
	bool SelectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x3aa32c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElement
	bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);        // [0x3aa3140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState);                                            // [0x3aa2e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	void OnPreChangeDynamic__DelegateSignature(UTypedElementSelectionSet* SelectionSet);                                     // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	void OnChangeDynamic__DelegateSignature(UTypedElementSelectionSet* SelectionSet);                                        // [0x2407bf0] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(UClass* InBaseInterfaceType);                             // [0x3aa2cd0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions);   // [0x3aa2b50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	bool HasSelectedObjects(UClass* InRequiredClass);                                                                        // [0x3aa27f0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	bool HasSelectedElements(UClass* InBaseInterfaceType);                                                                   // [0x3aa2750] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	UObject* GetTopSelectedObject(UClass* InRequiredClass);                                                                  // [0x3aa2640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // [0x3aa2510] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	TArray<UObject*> GetSelectedObjects(UClass* InRequiredClass);                                                            // [0x3aa2160] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	int32_t GetNumSelectedElements();                                                                                        // [0x3aa1e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	FTypedElementSelectionSetState GetCurrentSelectionState();                                                               // [0x3aa1a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	UObject* GetBottomSelectedObject(UClass* InRequiredClass);                                                               // [0x3aa1760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	bool DeselectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x3aa10a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);      // [0x3aa0f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	int32_t CountSelectedObjects(UClass* InRequiredClass);                                                                   // [0x3aa0bb0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	int32_t CountSelectedElements(UClass* InBaseInterfaceType);                                                              // [0x3aa0b10] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions);                                                   // [0x3aa0a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);     // [0x3aa0850] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);   // [0x3aa0510] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle);                                                // [0x3aa02c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementRuntime.TypedElementAssetDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementAssetDataInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/TypedElementRuntime.TypedElementHierarchyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHierarchyInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/TypedElementRuntime.TypedElementObjectInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementObjectInterface : public UInterface : UInterface
{ 
public:
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionInterface : public UInterface : UInterface
{ 
public:
};

/// Enum /Script/TypedElementRuntime.ETypedElementChildInclusionMethod
/// Size: 0x04
enum ETypedElementChildInclusionMethod : uint8_t
{
	ETypedElementChildInclusionMethod__None0                                         = 0,
	ETypedElementChildInclusionMethod__Immediate1                                    = 1,
	ETypedElementChildInclusionMethod__Recursive2                                    = 2,
	ETypedElementChildInclusionMethod__ETypedElementChildInclusionMethod_MAX3        = 3
};

/// Enum /Script/TypedElementRuntime.ETypedElementSelectionMethod
/// Size: 0x03
enum ETypedElementSelectionMethod : uint8_t
{
	ETypedElementSelectionMethod__Primary0                                           = 0,
	ETypedElementSelectionMethod__Secondary1                                         = 1,
	ETypedElementSelectionMethod__ETypedElementSelectionMethod_MAX2                  = 2
};

