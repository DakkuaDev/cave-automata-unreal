// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conway_Cell_Automata/ConwayAutomata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConwayAutomata() {}
// Cross Module References
	CONWAY_CELL_AUTOMATA_API UClass* Z_Construct_UClass_AConwayAutomata_NoRegister();
	CONWAY_CELL_AUTOMATA_API UClass* Z_Construct_UClass_AConwayAutomata();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Conway_Cell_Automata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AConwayAutomata::execInputKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputKey();
		P_NATIVE_END;
	}
	void AConwayAutomata::StaticRegisterNativesAConwayAutomata()
	{
		UClass* Class = AConwayAutomata::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputKey", &AConwayAutomata::execInputKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConwayAutomata_InputKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConwayAutomata_InputKey_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Intercepta pulsaci?n tecla\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "Intercepta pulsaci?n tecla" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConwayAutomata_InputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConwayAutomata, nullptr, "InputKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConwayAutomata_InputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConwayAutomata_InputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConwayAutomata_InputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConwayAutomata_InputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConwayAutomata_NoRegister()
	{
		return AConwayAutomata::StaticClass();
	}
	struct Z_Construct_UClass_AConwayAutomata_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wall_percentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wall_percentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_use_random_seed_MetaData[];
#endif
		static void NewProp_use_random_seed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_use_random_seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_liveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_liveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voidColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_voidColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_genericCellPrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_genericCellPrefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConwayAutomata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Conway_Cell_Automata,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConwayAutomata_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConwayAutomata_InputKey, "InputKey" }, // 271430229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConwayAutomata.h" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_wall_percentage_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/// <summary>\n/// Porcentaje de la pared del aut?mata\n/// </summary>\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nPorcentaje de la pared del aut?mata\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_wall_percentage = { "wall_percentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, wall_percentage), METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_wall_percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_wall_percentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "//TODO: Agregar Hash map para guardar seed concreta\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "TODO: Agregar Hash map para guardar seed concreta" },
	};
#endif
	void Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed_SetBit(void* Obj)
	{
		((AConwayAutomata*)Obj)->use_random_seed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed = { "use_random_seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConwayAutomata), &Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_seed_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, seed), METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_liveColor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/// <summary>\n/// Color para una c?lula live\n/// </summary>\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nColor para una c?lula live\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_liveColor = { "liveColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, liveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_liveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_liveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_voidColor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/// <summary>\n/// Color para una c?lula void\n/// </summary>\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nColor para una c?lula void\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_voidColor = { "voidColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, voidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_voidColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_voidColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/// <summary>\n/// Alto del aut?mata\n/// </summary>\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nAlto del aut?mata\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, height), METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_width_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/// <summary>\n/// Ancho del aut?mata\n/// </summary>\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nAncho del aut?mata\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, width), METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_genericCellPrefab_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/// <summary>\n/// Prefab de una c?lula est?ndar.\n/// </summary>\n" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nPrefab de una c?lula est?ndar.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_genericCellPrefab = { "genericCellPrefab", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, genericCellPrefab), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_genericCellPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_genericCellPrefab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConwayAutomata_Statics::NewProp_sceneComponent_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/// <summary>\n/// Componente de escena\n/// </summary>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ConwayAutomata.h" },
		{ "ToolTip", "<summary>\nComponente de escena\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConwayAutomata_Statics::NewProp_sceneComponent = { "sceneComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConwayAutomata, sceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_sceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::NewProp_sceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConwayAutomata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_wall_percentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_use_random_seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_liveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_voidColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_genericCellPrefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConwayAutomata_Statics::NewProp_sceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConwayAutomata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConwayAutomata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConwayAutomata_Statics::ClassParams = {
		&AConwayAutomata::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConwayAutomata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConwayAutomata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConwayAutomata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConwayAutomata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConwayAutomata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConwayAutomata, 1601215579);
	template<> CONWAY_CELL_AUTOMATA_API UClass* StaticClass<AConwayAutomata>()
	{
		return AConwayAutomata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConwayAutomata(Z_Construct_UClass_AConwayAutomata, &AConwayAutomata::StaticClass, TEXT("/Script/Conway_Cell_Automata"), TEXT("AConwayAutomata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConwayAutomata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
