#include "AbilitySystemTestPawn.h"
#include "AbilitySystemComponent.h"

AAbilitySystemTestPawn::AAbilitySystemTestPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent0"));
}


