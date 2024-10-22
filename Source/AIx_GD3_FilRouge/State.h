// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "State.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API UState : public UObject
{
	GENERATED_BODY()
	
protected:
	virtual void EnterState(class PlayerFSM stateMachine);
	virtual void Behaviour(class PlayerFSM stateMachine);
	virtual void ExitState(class PlayerFSM stateMachine);
};
