// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conway_Cell_Automata/CellClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellClass() {}
// Cross Module References
	CONWAY_CELL_AUTOMATA_API UClass* Z_Construct_UClass_ACellClass_NoRegister();
	CONWAY_CELL_AUTOMATA_API UClass* Z_Construct_UClass_ACellClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Conway_Cell_Automata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
// End Cross Module References
	void ACellClass::StaticRegisterNativesACellClass()
	{
	}
	UClass* Z_Construct_UClass_ACellClass_NoRegister()
	{
		return ACellClass::StaticClass();
	}
	struct Z_Construct_UClass_ACellClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACellClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Conway_Cell_Automata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CellClass.h" },
		{ "ModuleRelativePath", "CellClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellClass_Statics::NewProp_info_MetaData[] = {
		{ "Category", "Cell Info" },
		{ "Comment", "/// <summary>\n/// Informaci?n de la c?lula -> posici?n en el mundo\n/// </summary>\n" },
		{ "ModuleRelativePath", "CellClass.h" },
		{ "ToolTip", "<summary>\nInformaci?n de la c?lula -> posici?n en el mundo\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACellClass_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACellClass, info), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACellClass_Statics::NewProp_info_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACellClass_Statics::NewProp_info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellClass_Statics::NewProp_Sprite_MetaData[] = {
		{ "Category", "Sprite Component" },
		{ "Comment", "/// <summary>\n/// Componente de Sprite\n/// </summary>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CellClass.h" },
		{ "ToolTip", "<summary>\nComponente de Sprite\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellClass_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACellClass, Sprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACellClass_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACellClass_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACellClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellClass_Statics::NewProp_info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellClass_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACellClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACellClass_Statics::ClassParams = {
		&ACellClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACellClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACellClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACellClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACellClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACellClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACellClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACellClass, 242881074);
	template<> CONWAY_CELL_AUTOMATA_API UClass* StaticClass<ACellClass>()
	{
		return ACellClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACellClass(Z_Construct_UClass_ACellClass, &ACellClass::StaticClass, TEXT("/Script/Conway_Cell_Automata"), TEXT("ACellClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACellClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
