// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileOperationsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULineBatchComponent;
class UMediaSource;
class UTexture2D;
struct FLinearColor;
#ifdef FILEOPERATIONS_FileOperationsBPLibrary_generated_h
#error "FileOperationsBPLibrary.generated.h already included, missing '#pragma once' in FileOperationsBPLibrary.h"
#endif
#define FILEOPERATIONS_FileOperationsBPLibrary_generated_h

#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_SPARSE_DATA
#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMediaSourceFromAbsolutePath); \
	DECLARE_FUNCTION(execGetActorByName); \
	DECLARE_FUNCTION(execLoadImageFromAbsolutePath); \
	DECLARE_FUNCTION(execGetFileNamePath); \
	DECLARE_FUNCTION(execGetAllSaveFileNames); \
	DECLARE_FUNCTION(execDestoryLine); \
	DECLARE_FUNCTION(execDrawRayLine); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execLoadConstraintArray); \
	DECLARE_FUNCTION(execSaveConstraintArray); \
	DECLARE_FUNCTION(execSetSUVM); \
	DECLARE_FUNCTION(execDeleteFileAtPath); \
	DECLARE_FUNCTION(execGetFileNameFromPath); \
	DECLARE_FUNCTION(execGetMP3FilePaths); \
	DECLARE_FUNCTION(execGetFilesInDirectory); \
	DECLARE_FUNCTION(execIsValidFilePath); \
	DECLARE_FUNCTION(execPasteMessageFromClipboard); \
	DECLARE_FUNCTION(execCopyMessageToClipboard); \
	DECLARE_FUNCTION(execGetFolderFiles); \
	DECLARE_FUNCTION(execFindFolder); \
	DECLARE_FUNCTION(execGitFileSize); \
	DECLARE_FUNCTION(execDeleteDic); \
	DECLARE_FUNCTION(execCreateDic); \
	DECLARE_FUNCTION(execOpenFile); \
	DECLARE_FUNCTION(execDeleteFileTo); \
	DECLARE_FUNCTION(execCopyFileTo); \
	DECLARE_FUNCTION(execMoveFileTo); \
	DECLARE_FUNCTION(execFindFilesTo); \
	DECLARE_FUNCTION(execWriteStringToFileU8); \
	DECLARE_FUNCTION(execWriteStringToFile); \
	DECLARE_FUNCTION(execReadStringToFile); \
	DECLARE_FUNCTION(execFileOperationsSampleFunction);


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMediaSourceFromAbsolutePath); \
	DECLARE_FUNCTION(execGetActorByName); \
	DECLARE_FUNCTION(execLoadImageFromAbsolutePath); \
	DECLARE_FUNCTION(execGetFileNamePath); \
	DECLARE_FUNCTION(execGetAllSaveFileNames); \
	DECLARE_FUNCTION(execDestoryLine); \
	DECLARE_FUNCTION(execDrawRayLine); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execLoadConstraintArray); \
	DECLARE_FUNCTION(execSaveConstraintArray); \
	DECLARE_FUNCTION(execSetSUVM); \
	DECLARE_FUNCTION(execDeleteFileAtPath); \
	DECLARE_FUNCTION(execGetFileNameFromPath); \
	DECLARE_FUNCTION(execGetMP3FilePaths); \
	DECLARE_FUNCTION(execGetFilesInDirectory); \
	DECLARE_FUNCTION(execIsValidFilePath); \
	DECLARE_FUNCTION(execPasteMessageFromClipboard); \
	DECLARE_FUNCTION(execCopyMessageToClipboard); \
	DECLARE_FUNCTION(execGetFolderFiles); \
	DECLARE_FUNCTION(execFindFolder); \
	DECLARE_FUNCTION(execGitFileSize); \
	DECLARE_FUNCTION(execDeleteDic); \
	DECLARE_FUNCTION(execCreateDic); \
	DECLARE_FUNCTION(execOpenFile); \
	DECLARE_FUNCTION(execDeleteFileTo); \
	DECLARE_FUNCTION(execCopyFileTo); \
	DECLARE_FUNCTION(execMoveFileTo); \
	DECLARE_FUNCTION(execFindFilesTo); \
	DECLARE_FUNCTION(execWriteStringToFileU8); \
	DECLARE_FUNCTION(execWriteStringToFile); \
	DECLARE_FUNCTION(execReadStringToFile); \
	DECLARE_FUNCTION(execFileOperationsSampleFunction);


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_ACCESSORS
#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileOperationsBPLibrary(); \
	friend struct Z_Construct_UClass_UFileOperationsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileOperationsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileOperations"), NO_API) \
	DECLARE_SERIALIZER(UFileOperationsBPLibrary)


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUFileOperationsBPLibrary(); \
	friend struct Z_Construct_UClass_UFileOperationsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileOperationsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileOperations"), NO_API) \
	DECLARE_SERIALIZER(UFileOperationsBPLibrary)


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileOperationsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileOperationsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileOperationsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileOperationsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileOperationsBPLibrary(UFileOperationsBPLibrary&&); \
	NO_API UFileOperationsBPLibrary(const UFileOperationsBPLibrary&); \
public: \
	NO_API virtual ~UFileOperationsBPLibrary();


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileOperationsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileOperationsBPLibrary(UFileOperationsBPLibrary&&); \
	NO_API UFileOperationsBPLibrary(const UFileOperationsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileOperationsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileOperationsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileOperationsBPLibrary) \
	NO_API virtual ~UFileOperationsBPLibrary();


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_55_PROLOG
#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_SPARSE_DATA \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_RPC_WRAPPERS \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_ACCESSORS \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_INCLASS \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_SPARSE_DATA \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_ACCESSORS \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_INCLASS_NO_PURE_DECLS \
	FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_57_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FileOperationsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILEOPERATIONS_API UClass* StaticClass<class UFileOperationsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
