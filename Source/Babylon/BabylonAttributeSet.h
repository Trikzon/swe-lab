// Copyright Chris Swezy, Dion Tryban, Jake Younan. All Rights Reserved.

#pragma once

#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BabylonAttributeSet.generated.h"

#define BABYLON_ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class UBabylonAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FGameplayAttributeData HP;
	BABYLON_ATTRIBUTE_ACCESSORS(UBabylonAttributeSet, HP);
	

	UPROPERTY()
	FGameplayAttributeData AStr; //Attack Strength
	BABYLON_ATTRIBUTE_ACCESSORS(UBabylonAttributeSet, AStr)

	UPROPERTY()
	FGameplayAttributeData Def; //Defense
	BABYLON_ATTRIBUTE_ACCESSORS(UBabylonAttributeSet, Def);

	UPROPERTY()
	FGameplayAttributeData WStr; //Weapon Strength
	BABYLON_ATTRIBUTE_ACCESSORS(UBabylonAttributeSet, WStr);

	UPROPERTY()
	FGameplayAttributeData Block; //Block, only used while blocking
	BABYLON_ATTRIBUTE_ACCESSORS(UBabylonAttributeSet, Block);
};
