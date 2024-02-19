#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayEffectReferencer.generated.h"

class USCGameplayEffect;

UCLASS(Blueprintable)
class SCCORE_API UGameplayEffectReferencer : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USCGameplayEffect*> m_ListOfAllGameplayEffect;
    
public:
    UGameplayEffectReferencer();

    UFUNCTION(BlueprintCallable)
    void RetrieveAllGameplayEffects();
    
};

