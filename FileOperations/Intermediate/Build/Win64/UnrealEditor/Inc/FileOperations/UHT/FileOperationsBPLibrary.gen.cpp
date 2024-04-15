// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileOperations/Public/FileOperationsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileOperationsBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FILEOPERATIONS_API UClass* Z_Construct_UClass_UFileOperationsBPLibrary();
	FILEOPERATIONS_API UClass* Z_Construct_UClass_UFileOperationsBPLibrary_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FileOperations();
// End Cross Module References
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execLoadMediaSourceFromAbsolutePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbsolutePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaSource**)Z_Param__Result=UFileOperationsBPLibrary::LoadMediaSourceFromAbsolutePath(Z_Param_AbsolutePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetActorByName)
	{
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UFileOperationsBPLibrary::GetActorByName(Z_Param_Actors,Z_Param_ActorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execLoadImageFromAbsolutePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbsolutePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFileOperationsBPLibrary::LoadImageFromAbsolutePath(Z_Param_AbsolutePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetFileNamePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileOperationsBPLibrary::GetFileNamePath(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetAllSaveFileNames)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::GetAllSaveFileNames(Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execDestoryLine)
	{
		P_GET_TARRAY(ULineBatchComponent*,Z_Param_LineList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileOperationsBPLibrary::DestoryLine(Z_Param_LineList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execDrawRayLine)
	{
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_STRUCT(FVector,Z_Param_EndPos);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fLifeTime);
		P_GET_STRUCT(FLinearColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULineBatchComponent*>*)Z_Param__Result=UFileOperationsBPLibrary::DrawRayLine(Z_Param_StartPos,Z_Param_EndPos,Z_Param_fLifeTime,Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::DeleteFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execLoadConstraintArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::LoadConstraintArray(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execSaveConstraintArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_TARRAY(FString,Z_Param_SaveText);
		P_GET_UBOOL(Z_Param_AllowOverWriting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::SaveConstraintArray(Z_Param_SaveDirectory,Z_Param_Filename,Z_Param_SaveText,Z_Param_AllowOverWriting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execSetSUVM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFileOperationsBPLibrary::SetSUVM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execDeleteFileAtPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::DeleteFileAtPath(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetFileNameFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileOperationsBPLibrary::GetFileNameFromPath(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetMP3FilePaths)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::GetMP3FilePaths(Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetFilesInDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::GetFilesInDirectory(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execIsValidFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::IsValidFilePath(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execPasteMessageFromClipboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileOperationsBPLibrary::PasteMessageFromClipboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execCopyMessageToClipboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileOperationsBPLibrary::CopyMessageToClipboard(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGetFolderFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::GetFolderFiles(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execFindFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_UBOOL(Z_Param_Files);
		P_GET_UBOOL(Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::FindFolder(Z_Param_Path,Z_Param_Filter,Z_Param_Files,Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execGitFileSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFileOperationsBPLibrary::GitFileSize(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execDeleteDic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileOperationsBPLibrary::DeleteDic(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execCreateDic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileOperationsBPLibrary::CreateDic(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execOpenFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileOperationsBPLibrary::OpenFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execDeleteFileTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::DeleteFileTo(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execCopyFileTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_To);
		P_GET_PROPERTY(FStrProperty,Z_Param_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFileOperationsBPLibrary::CopyFileTo(Z_Param_To,Z_Param_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execMoveFileTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_To);
		P_GET_PROPERTY(FStrProperty,Z_Param_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::MoveFileTo(Z_Param_To,Z_Param_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execFindFilesTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_UBOOL(Z_Param_Files);
		P_GET_UBOOL(Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileOperationsBPLibrary::FindFilesTo(Z_Param_Path,Z_Param_Filter,Z_Param_Files,Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execWriteStringToFileU8)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileOperationsBPLibrary::WriteStringToFileU8(Z_Param_FileName,Z_Param_content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execWriteStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileOperationsBPLibrary::WriteStringToFile(Z_Param_FileName,Z_Param_content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execReadStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileOperationsBPLibrary::ReadStringToFile(Z_Param_Dir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileOperationsBPLibrary::execFileOperationsSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFileOperationsBPLibrary::FileOperationsSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UFileOperationsBPLibrary::StaticRegisterNativesUFileOperationsBPLibrary()
	{
		UClass* Class = UFileOperationsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFileTo", &UFileOperationsBPLibrary::execCopyFileTo },
			{ "CopyMessageToClipboard", &UFileOperationsBPLibrary::execCopyMessageToClipboard },
			{ "CreateDic", &UFileOperationsBPLibrary::execCreateDic },
			{ "DeleteDic", &UFileOperationsBPLibrary::execDeleteDic },
			{ "DeleteFile", &UFileOperationsBPLibrary::execDeleteFile },
			{ "DeleteFileAtPath", &UFileOperationsBPLibrary::execDeleteFileAtPath },
			{ "DeleteFileTo", &UFileOperationsBPLibrary::execDeleteFileTo },
			{ "DestoryLine", &UFileOperationsBPLibrary::execDestoryLine },
			{ "DrawRayLine", &UFileOperationsBPLibrary::execDrawRayLine },
			{ "FileOperationsSampleFunction", &UFileOperationsBPLibrary::execFileOperationsSampleFunction },
			{ "FindFilesTo", &UFileOperationsBPLibrary::execFindFilesTo },
			{ "FindFolder", &UFileOperationsBPLibrary::execFindFolder },
			{ "GetActorByName", &UFileOperationsBPLibrary::execGetActorByName },
			{ "GetAllSaveFileNames", &UFileOperationsBPLibrary::execGetAllSaveFileNames },
			{ "GetFileNameFromPath", &UFileOperationsBPLibrary::execGetFileNameFromPath },
			{ "GetFileNamePath", &UFileOperationsBPLibrary::execGetFileNamePath },
			{ "GetFilesInDirectory", &UFileOperationsBPLibrary::execGetFilesInDirectory },
			{ "GetFolderFiles", &UFileOperationsBPLibrary::execGetFolderFiles },
			{ "GetMP3FilePaths", &UFileOperationsBPLibrary::execGetMP3FilePaths },
			{ "GitFileSize", &UFileOperationsBPLibrary::execGitFileSize },
			{ "IsValidFilePath", &UFileOperationsBPLibrary::execIsValidFilePath },
			{ "LoadConstraintArray", &UFileOperationsBPLibrary::execLoadConstraintArray },
			{ "LoadImageFromAbsolutePath", &UFileOperationsBPLibrary::execLoadImageFromAbsolutePath },
			{ "LoadMediaSourceFromAbsolutePath", &UFileOperationsBPLibrary::execLoadMediaSourceFromAbsolutePath },
			{ "MoveFileTo", &UFileOperationsBPLibrary::execMoveFileTo },
			{ "OpenFile", &UFileOperationsBPLibrary::execOpenFile },
			{ "PasteMessageFromClipboard", &UFileOperationsBPLibrary::execPasteMessageFromClipboard },
			{ "ReadStringToFile", &UFileOperationsBPLibrary::execReadStringToFile },
			{ "SaveConstraintArray", &UFileOperationsBPLibrary::execSaveConstraintArray },
			{ "SetSUVM", &UFileOperationsBPLibrary::execSetSUVM },
			{ "WriteStringToFile", &UFileOperationsBPLibrary::execWriteStringToFile },
			{ "WriteStringToFileU8", &UFileOperationsBPLibrary::execWriteStringToFileU8 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics
	{
		struct FileOperationsBPLibrary_eventCopyFileTo_Parms
		{
			FString To;
			FString From;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_To;
		static const UECodeGen_Private::FStrPropertyParams NewProp_From;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventCopyFileTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventCopyFileTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventCopyFileTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "CopyFileTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::FileOperationsBPLibrary_eventCopyFileTo_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics
	{
		struct FileOperationsBPLibrary_eventCopyMessageToClipboard_Parms
		{
			FString text;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventCopyMessageToClipboard_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "CopyMessageToClipboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::FileOperationsBPLibrary_eventCopyMessageToClipboard_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics
	{
		struct FileOperationsBPLibrary_eventCreateDic_Parms
		{
			FString filePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventCreateDic_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::NewProp_filePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "CreateDic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::FileOperationsBPLibrary_eventCreateDic_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics
	{
		struct FileOperationsBPLibrary_eventDeleteDic_Parms
		{
			FString filePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDeleteDic_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::NewProp_filePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "DeleteDic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::FileOperationsBPLibrary_eventDeleteDic_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics
	{
		struct FileOperationsBPLibrary_eventDeleteFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDeleteFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb5\xb5\n" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb5\xb5" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::FileOperationsBPLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics
	{
		struct FileOperationsBPLibrary_eventDeleteFileAtPath_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDeleteFileAtPath_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventDeleteFileAtPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventDeleteFileAtPath_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "DeleteFileAtPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::FileOperationsBPLibrary_eventDeleteFileAtPath_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics
	{
		struct FileOperationsBPLibrary_eventDeleteFileTo_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDeleteFileTo_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventDeleteFileTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventDeleteFileTo_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "DeleteFileTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::FileOperationsBPLibrary_eventDeleteFileTo_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics
	{
		struct FileOperationsBPLibrary_eventDestoryLine_Parms
		{
			TArray<ULineBatchComponent*> LineList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LineList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LineList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList_Inner = { "LineList", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList = { "LineList", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDestoryLine_Parms, LineList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::NewProp_LineList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xc9\xbe\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Keywords", "Destroy" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xc9\xbe\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "DestoryLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::FileOperationsBPLibrary_eventDestoryLine_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics
	{
		struct FileOperationsBPLibrary_eventDrawRayLine_Parms
		{
			FVector StartPos;
			FVector EndPos;
			float fLifeTime;
			FLinearColor color;
			TArray<ULineBatchComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fLifeTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDrawRayLine_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDrawRayLine_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_fLifeTime = { "fLifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDrawRayLine_Parms, fLifeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDrawRayLine_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventDrawRayLine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_fLifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Keywords", "Draw" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "DrawRayLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::FileOperationsBPLibrary_eventDrawRayLine_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics
	{
		struct FileOperationsBPLibrary_eventFileOperationsSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFileOperationsSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFileOperationsSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileOperationsTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "FileOperations sample test testing" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "FileOperationsSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::FileOperationsBPLibrary_eventFileOperationsSampleFunction_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics
	{
		struct FileOperationsBPLibrary_eventFindFilesTo_Parms
		{
			FString Path;
			FString Filter;
			bool Files;
			bool Directory;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
		static void NewProp_Files_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Files;
		static void NewProp_Directory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFindFilesTo_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFindFilesTo_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Files_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventFindFilesTo_Parms*)Obj)->Files = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventFindFilesTo_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Files_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Directory_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventFindFilesTo_Parms*)Obj)->Directory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventFindFilesTo_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Directory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFindFilesTo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "File operation" },
		{ "Comment", "// \xd1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xd1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "FindFilesTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::FileOperationsBPLibrary_eventFindFilesTo_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics
	{
		struct FileOperationsBPLibrary_eventFindFolder_Parms
		{
			FString Path;
			FString Filter;
			bool Files;
			bool Directory;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
		static void NewProp_Files_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Files;
		static void NewProp_Directory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFindFolder_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFindFolder_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Files_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventFindFolder_Parms*)Obj)->Files = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventFindFolder_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Files_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Directory_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventFindFolder_Parms*)Obj)->Directory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventFindFolder_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Directory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventFindFolder_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xc4\xbf\xc2\xbc\xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "DisplayName", "FindFolder" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xc4\xbf\xc2\xbc\xef\xbf\xbd\xc2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "FindFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::FileOperationsBPLibrary_eventFindFolder_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics
	{
		struct FileOperationsBPLibrary_eventGetActorByName_Parms
		{
			TArray<AActor*> Actors;
			FString ActorName;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetActorByName_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ActorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetActorByName_Parms, ActorName), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ActorName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetActorByName_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdUAID\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1""Actor\n" },
		{ "Keywords", "GetActor" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdUAID\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1""Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetActorByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::FileOperationsBPLibrary_eventGetActorByName_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics
	{
		struct FileOperationsBPLibrary_eventGetAllSaveFileNames_Parms
		{
			FString Directory;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetAllSaveFileNames_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_Directory_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetAllSaveFileNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xc4\xb4\xe6\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Keywords", "SavedFileName" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb5\xc4\xb4\xe6\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetAllSaveFileNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::FileOperationsBPLibrary_eventGetAllSaveFileNames_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics
	{
		struct FileOperationsBPLibrary_eventGetFileNameFromPath_Parms
		{
			FString FilePath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFileNameFromPath_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFileNameFromPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetFileNameFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::FileOperationsBPLibrary_eventGetFileNameFromPath_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics
	{
		struct FileOperationsBPLibrary_eventGetFileNamePath_Parms
		{
			FString FilePath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFileNamePath_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFileNamePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Keywords", "ExtraceSavedFileName" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetFileNamePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::FileOperationsBPLibrary_eventGetFileNamePath_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics
	{
		struct FileOperationsBPLibrary_eventGetFilesInDirectory_Parms
		{
			FString DirectoryPath;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFilesInDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFilesInDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd \xd6\xbb\xef\xbf\xbd\xdc\xbb\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd \xd6\xbb\xef\xbf\xbd\xdc\xbb\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetFilesInDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::FileOperationsBPLibrary_eventGetFilesInDirectory_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics
	{
		struct FileOperationsBPLibrary_eventGetFolderFiles_Parms
		{
			FString Path;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFolderFiles_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetFolderFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xc4\xbf\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xc9\xbe\xd1\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "DisplayName", "GetFolderFiles" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xc4\xbf\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xc9\xbe\xd1\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetFolderFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::FileOperationsBPLibrary_eventGetFolderFiles_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics
	{
		struct FileOperationsBPLibrary_eventGetMP3FilePaths_Parms
		{
			FString Directory;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetMP3FilePaths_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_Directory_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGetMP3FilePaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd \xd6\xbb\xef\xbf\xbd\xdc\xbb\xef\xbf\xbd\xc8\xa1mp3\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xd6\xb8\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd \xd6\xbb\xef\xbf\xbd\xdc\xbb\xef\xbf\xbd\xc8\xa1mp3\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GetMP3FilePaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::FileOperationsBPLibrary_eventGetMP3FilePaths_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics
	{
		struct FileOperationsBPLibrary_eventGitFileSize_Parms
		{
			FString filePath;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGitFileSize_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventGitFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "GitFileSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::FileOperationsBPLibrary_eventGitFileSize_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics
	{
		struct FileOperationsBPLibrary_eventIsValidFilePath_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventIsValidFilePath_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventIsValidFilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventIsValidFilePath_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "IsValidFilePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::FileOperationsBPLibrary_eventIsValidFilePath_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics
	{
		struct FileOperationsBPLibrary_eventLoadConstraintArray_Parms
		{
			FString FilePath;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventLoadConstraintArray_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventLoadConstraintArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb4\xe6\xb5\xb5\n" },
		{ "Keywords", "Load" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb4\xe6\xb5\xb5" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "LoadConstraintArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::FileOperationsBPLibrary_eventLoadConstraintArray_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics
	{
		struct FileOperationsBPLibrary_eventLoadImageFromAbsolutePath_Parms
		{
			FString AbsolutePath;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_AbsolutePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventLoadImageFromAbsolutePath_Parms, AbsolutePath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_AbsolutePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_AbsolutePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventLoadImageFromAbsolutePath_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_AbsolutePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xcd\xbc\xc6\xac\n" },
		{ "Keywords", "Image" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xcd\xbc\xc6\xac" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "LoadImageFromAbsolutePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::FileOperationsBPLibrary_eventLoadImageFromAbsolutePath_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics
	{
		struct FileOperationsBPLibrary_eventLoadMediaSourceFromAbsolutePath_Parms
		{
			FString AbsolutePath;
			UMediaSource* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_AbsolutePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventLoadMediaSourceFromAbsolutePath_Parms, AbsolutePath), METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_AbsolutePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_AbsolutePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventLoadMediaSourceFromAbsolutePath_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_AbsolutePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Keywords", "media" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "LoadMediaSourceFromAbsolutePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::FileOperationsBPLibrary_eventLoadMediaSourceFromAbsolutePath_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics
	{
		struct FileOperationsBPLibrary_eventMoveFileTo_Parms
		{
			FString To;
			FString From;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_To;
		static const UECodeGen_Private::FStrPropertyParams NewProp_From;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventMoveFileTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventMoveFileTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventMoveFileTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventMoveFileTo_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xc6\xb6\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc6\xb6\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "MoveFileTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::FileOperationsBPLibrary_eventMoveFileTo_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics
	{
		struct FileOperationsBPLibrary_eventOpenFile_Parms
		{
			FString FilePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventOpenFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "OpenFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::FileOperationsBPLibrary_eventOpenFile_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics
	{
		struct FileOperationsBPLibrary_eventPasteMessageFromClipboard_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventPasteMessageFromClipboard_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xd5\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xd5\xb3\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "PasteMessageFromClipboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::FileOperationsBPLibrary_eventPasteMessageFromClipboard_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics
	{
		struct FileOperationsBPLibrary_eventReadStringToFile_Parms
		{
			FString Dir;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dir;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventReadStringToFile_Parms, Dir), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventReadStringToFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::NewProp_Dir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "ReadStringToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::FileOperationsBPLibrary_eventReadStringToFile_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics
	{
		struct FileOperationsBPLibrary_eventSaveConstraintArray_Parms
		{
			FString SaveDirectory;
			FString Filename;
			TArray<FString> SaveText;
			bool AllowOverWriting;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventSaveConstraintArray_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventSaveConstraintArray_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventSaveConstraintArray_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventSaveConstraintArray_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventSaveConstraintArray_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventSaveConstraintArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventSaveConstraintArray_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_SaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_SaveText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_SaveText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_AllowOverWriting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb5\xb5\n" },
		{ "CPP_Default_AllowOverWriting", "false" },
		{ "Keywords", "Save" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xb5\xb5" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "SaveConstraintArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::FileOperationsBPLibrary_eventSaveConstraintArray_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics
	{
		struct FileOperationsBPLibrary_eventSetSUVM_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventSetSUVM_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "// \xef\xbf\xbd\xc9\xba\xef\xbf\xbd\xcc\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc9\xba\xef\xbf\xbd\xcc\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "SetSUVM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::FileOperationsBPLibrary_eventSetSUVM_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics
	{
		struct FileOperationsBPLibrary_eventWriteStringToFile_Parms
		{
			FString FileName;
			FString content;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventWriteStringToFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventWriteStringToFile_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::NewProp_content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb7\xef\xbf\xbd UTF-16\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb7\xef\xbf\xbd UTF-16" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "WriteStringToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::FileOperationsBPLibrary_eventWriteStringToFile_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics
	{
		struct FileOperationsBPLibrary_eventWriteStringToFileU8_Parms
		{
			FString FileName;
			FString content;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_content;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventWriteStringToFileU8_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileOperationsBPLibrary_eventWriteStringToFileU8_Parms, content), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileOperationsBPLibrary_eventWriteStringToFileU8_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileOperationsBPLibrary_eventWriteStringToFileU8_Parms), &Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileHandle" },
		{ "Comment", "// \xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd UTF-8\n" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "\xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbc\xef\xbf\xbd UTF-8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileOperationsBPLibrary, nullptr, "WriteStringToFileU8", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::FileOperationsBPLibrary_eventWriteStringToFileU8_Parms), Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileOperationsBPLibrary);
	UClass* Z_Construct_UClass_UFileOperationsBPLibrary_NoRegister()
	{
		return UFileOperationsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFileOperationsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileOperationsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileOperations,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileOperationsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_CopyFileTo, "CopyFileTo" }, // 2372997151
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_CopyMessageToClipboard, "CopyMessageToClipboard" }, // 1091220867
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_CreateDic, "CreateDic" }, // 3791573646
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteDic, "DeleteDic" }, // 153164910
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFile, "DeleteFile" }, // 590014925
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileAtPath, "DeleteFileAtPath" }, // 3368981663
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_DeleteFileTo, "DeleteFileTo" }, // 3247489734
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_DestoryLine, "DestoryLine" }, // 1821482654
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_DrawRayLine, "DrawRayLine" }, // 789247223
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_FileOperationsSampleFunction, "FileOperationsSampleFunction" }, // 1633323088
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_FindFilesTo, "FindFilesTo" }, // 9146231
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_FindFolder, "FindFolder" }, // 3275811041
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetActorByName, "GetActorByName" }, // 660284666
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetAllSaveFileNames, "GetAllSaveFileNames" }, // 4008631350
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNameFromPath, "GetFileNameFromPath" }, // 96872688
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetFileNamePath, "GetFileNamePath" }, // 2570083455
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetFilesInDirectory, "GetFilesInDirectory" }, // 290811639
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetFolderFiles, "GetFolderFiles" }, // 2570095223
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GetMP3FilePaths, "GetMP3FilePaths" }, // 1158187422
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_GitFileSize, "GitFileSize" }, // 3953456920
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_IsValidFilePath, "IsValidFilePath" }, // 3800974560
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_LoadConstraintArray, "LoadConstraintArray" }, // 2683396845
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_LoadImageFromAbsolutePath, "LoadImageFromAbsolutePath" }, // 225415581
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_LoadMediaSourceFromAbsolutePath, "LoadMediaSourceFromAbsolutePath" }, // 2842172553
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_MoveFileTo, "MoveFileTo" }, // 3456839702
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_OpenFile, "OpenFile" }, // 1680788523
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_PasteMessageFromClipboard, "PasteMessageFromClipboard" }, // 322002879
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_ReadStringToFile, "ReadStringToFile" }, // 4087745495
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_SaveConstraintArray, "SaveConstraintArray" }, // 1137188732
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_SetSUVM, "SetSUVM" }, // 3631753074
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFile, "WriteStringToFile" }, // 2629167285
		{ &Z_Construct_UFunction_UFileOperationsBPLibrary_WriteStringToFileU8, "WriteStringToFileU8" }, // 2463045827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileOperationsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09""Function library class.\n *\x09""Each function in it is expected to be static and represents blueprint\n *node that can be called in any blueprint.\n *\n *\x09When declaring function you can define metadata for the node. Key\n *function specifiers will be BlueprintPure and BlueprintCallable. BlueprintPure\n *- means the function does not affect the owning object in any way and thus\n *creates a node without Exec pins. BlueprintCallable - makes a function which\n *can be executed in Blueprints - Thus it has Exec pins. DisplayName - full name\n *of the node, shown when you mouse over the node and in the blueprint drop down\n *menu. Its lets you name the node using characters not allowed in C++ function\n *names. CompactNodeTitle - the word(s) that appear on the node. Keywords -\n *the list of keywords that helps you to find node when you search for it using\n *Blueprint drop-down menu. Good example is \"Print String\" node which you can\n *find also by using keyword \"log\". Category -\x09the category your node will be\n *under in the Blueprint drop-down menu.\n *\n *\x09""For more info on custom blueprint nodes visit documentation:\n *\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n */" },
		{ "IncludePath", "FileOperationsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileOperationsBPLibrary.h" },
		{ "ToolTip", "*     Function library class.\n*     Each function in it is expected to be static and represents blueprint\n*node that can be called in any blueprint.\n*\n*     When declaring function you can define metadata for the node. Key\n*function specifiers will be BlueprintPure and BlueprintCallable. BlueprintPure\n*- means the function does not affect the owning object in any way and thus\n*creates a node without Exec pins. BlueprintCallable - makes a function which\n*can be executed in Blueprints - Thus it has Exec pins. DisplayName - full name\n*of the node, shown when you mouse over the node and in the blueprint drop down\n*menu. Its lets you name the node using characters not allowed in C++ function\n*names. CompactNodeTitle - the word(s) that appear on the node. Keywords -\n*the list of keywords that helps you to find node when you search for it using\n*Blueprint drop-down menu. Good example is \"Print String\" node which you can\n*find also by using keyword \"log\". Category - the category your node will be\n*under in the Blueprint drop-down menu.\n*\n*     For more info on custom blueprint nodes visit documentation:\n*     https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileOperationsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileOperationsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileOperationsBPLibrary_Statics::ClassParams = {
		&UFileOperationsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileOperationsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileOperationsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileOperationsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFileOperationsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileOperationsBPLibrary.OuterSingleton, Z_Construct_UClass_UFileOperationsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileOperationsBPLibrary.OuterSingleton;
	}
	template<> FILEOPERATIONS_API UClass* StaticClass<UFileOperationsBPLibrary>()
	{
		return UFileOperationsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileOperationsBPLibrary);
	UFileOperationsBPLibrary::~UFileOperationsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileOperationsBPLibrary, UFileOperationsBPLibrary::StaticClass, TEXT("UFileOperationsBPLibrary"), &Z_Registration_Info_UClass_UFileOperationsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileOperationsBPLibrary), 2279746591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_816903133(TEXT("/Script/FileOperations"),
		Z_CompiledInDeferFile_FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chru_Desktop_PluginsEditor_Plugins_FileOperations_Source_FileOperations_Public_FileOperationsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
