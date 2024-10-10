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
};