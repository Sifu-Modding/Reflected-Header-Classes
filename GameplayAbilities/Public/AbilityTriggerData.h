#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGameplayAbilityTriggerSource.h"
#include "AbilityTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FAbilityTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityTriggerSource::Type> TriggerSource;
    
    GAMEPLAYABILITIES_API FAbilityTriggerData();
};

