// Copyright Chris Swezy, Dion Tryban, Jake Younan. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Logging/LogMacros.h"
#include "BabylonCharacter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ABabylonCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABabylonCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UAbilitySystemComponent* AbilitySystem;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystem;
	}

	UPROPERTY()
	class UBabylonAttributeSet* AttributeSet;
	
protected:
	// To add mapping context
	virtual void BeginPlay() override;
};
