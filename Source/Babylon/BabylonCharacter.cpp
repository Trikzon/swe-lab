// Copyright Chris Swezy, Dion Tryban, Jake Younan. All Rights Reserved.

#include "BabylonCharacter.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/Controller.h"
#include "AbilitySystemComponent.h"
#include "BabylonAttributeSet.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABabylonCharacter::ABabylonCharacter()
{
	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystem");

	AttributeSet = CreateDefaultSubobject<UBabylonAttributeSet>("AttributeSet");
}

void ABabylonCharacter::BeginPlay()
{
	Super::BeginPlay();

	AbilitySystem->InitAbilityActorInfo(this, this);
}
