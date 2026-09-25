// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonDeceptionGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDragonDeceptionGameMode() {}

// ********** Begin Cross Module References ********************************************************
DRAGONDECEPTION_API UClass* Z_Construct_UClass_ADragonDeceptionGameMode();
DRAGONDECEPTION_API UClass* Z_Construct_UClass_ADragonDeceptionGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DragonDeception();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADragonDeceptionGameMode *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADragonDeceptionGameMode;
UClass* ADragonDeceptionGameMode::GetPrivateStaticClass()
{
	using TClass = ADragonDeceptionGameMode;
	if (!Z_Registration_Info_UClass_ADragonDeceptionGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DragonDeceptionGameMode"),
			Z_Registration_Info_UClass_ADragonDeceptionGameMode.InnerSingleton,
			StaticRegisterNativesADragonDeceptionGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADragonDeceptionGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADragonDeceptionGameMode_NoRegister()
{
	return ADragonDeceptionGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADragonDeceptionGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DragonDeceptionGameMode.h" },
		{ "ModuleRelativePath", "DragonDeceptionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ADragonDeceptionGameMode constinit property declarations *****************
// ********** End Class ADragonDeceptionGameMode constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADragonDeceptionGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADragonDeceptionGameMode_Statics
UObject* (*const Z_Construct_UClass_ADragonDeceptionGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DragonDeception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADragonDeceptionGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADragonDeceptionGameMode_Statics::ClassParams = {
	&ADragonDeceptionGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADragonDeceptionGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADragonDeceptionGameMode_Statics::Class_MetaDataParams)
};
void ADragonDeceptionGameMode::StaticRegisterNativesADragonDeceptionGameMode()
{
}
UClass* Z_Construct_UClass_ADragonDeceptionGameMode()
{
	if (!Z_Registration_Info_UClass_ADragonDeceptionGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADragonDeceptionGameMode.OuterSingleton, Z_Construct_UClass_ADragonDeceptionGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADragonDeceptionGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADragonDeceptionGameMode);
ADragonDeceptionGameMode::~ADragonDeceptionGameMode() {}
// ********** End Class ADragonDeceptionGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Coralie_Documents_Unreal_Projects_Dragon_Deception_DragonDeception_Source_DragonDeception_DragonDeceptionGameMode_h__Script_DragonDeception_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADragonDeceptionGameMode, ADragonDeceptionGameMode::StaticClass, TEXT("ADragonDeceptionGameMode"), &Z_Registration_Info_UClass_ADragonDeceptionGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADragonDeceptionGameMode), 1175340512U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Coralie_Documents_Unreal_Projects_Dragon_Deception_DragonDeception_Source_DragonDeception_DragonDeceptionGameMode_h__Script_DragonDeception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Documents_Unreal_Projects_Dragon_Deception_DragonDeception_Source_DragonDeception_DragonDeceptionGameMode_h__Script_DragonDeception_2730827293{
	TEXT("/Script/DragonDeception"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Documents_Unreal_Projects_Dragon_Deception_DragonDeception_Source_DragonDeception_DragonDeceptionGameMode_h__Script_DragonDeception_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Documents_Unreal_Projects_Dragon_Deception_DragonDeception_Source_DragonDeception_DragonDeceptionGameMode_h__Script_DragonDeception_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
