#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayCueTranslator.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueTranslator : public UObject {
    GENERATED_BODY()
public:
    UGameplayCueTranslator();
};

