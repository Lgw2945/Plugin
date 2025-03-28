// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

//#include "CoreMinimal.h" //추가하기 (안하면 UMyIDPluginBPLibrary 빨간줄 뜸)
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