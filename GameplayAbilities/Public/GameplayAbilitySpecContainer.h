#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpecContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpec> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Owner;
    
    FGameplayAbilitySpecContainer();
};

