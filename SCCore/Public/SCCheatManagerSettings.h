#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "SCCheatManagerSettings.generated.h"

class UCheatData;

UCLASS(Blueprintable)
class SCCORE_API USCCheatManagerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UCheatData>> m_CheatData;
    
    USCCheatManagerSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCheatData* BPF_GetCheatData(const FGameplayTag& _cheatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool BPE_IsCheatLegit(const FGameplayTag& _cheatTag) const;
    
};

