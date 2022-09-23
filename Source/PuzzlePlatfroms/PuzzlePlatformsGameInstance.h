// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzlePlatformsGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFROMS_API UPuzzlePlatformsGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer);
	
	virtual void Init();
	
	UFUNCTION(exec) //exec는 playerController, Possessed Pawns, HUDs, Cheat Managers, GameModes, GameInstances에서 사용가능
		void Host();

	UFUNCTION(exec) 
		void Join(const FString& Address);
private:
	TSubclassOf<class UUserWidget> MenuClass;
};
