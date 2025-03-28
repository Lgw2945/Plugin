// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS()
class MYIDPLUGIN_API UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	static FString UserName;

	UFUNCTION(BlueprintPure, Category = "MyIDPlugin")
	static FString GetUserName();

	UFUNCTION(BlueprintCallable, Category = "MyIDPlugin")
	static void SetUserName(const FString& NewName);

	UMyIDPluginBPLibrary(const FObjectInitializer& ObjectInitializer);
};