#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayAbilityBindInfo.h"
#include "GameplayAbilitySet.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayAbilitySet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilityBindInfo> Abilities;
    
    UGameplayAbilitySet();

};

