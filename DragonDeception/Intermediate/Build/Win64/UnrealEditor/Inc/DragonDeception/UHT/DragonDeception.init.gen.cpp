// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonDeception_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	DRAGONDECEPTION_API UFunction* Z_Construct_UDelegateFunction_DragonDeception_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DragonDeception;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DragonDeception()
	{
		if (!Z_Registration_Info_UPackage__Script_DragonDeception.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_DragonDeception_OnUnitMoveCompletedDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/DragonDeception",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xFDA13581,
			0x8E8F6484,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DragonDeception.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_DragonDeception.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DragonDeception(Z_Construct_UPackage__Script_DragonDeception, TEXT("/Script/DragonDeception"), Z_Registration_Info_UPackage__Script_DragonDeception, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFDA13581, 0x8E8F6484));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
