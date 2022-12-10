#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SCGameFlowData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCBaseGameSettings.generated.h"

class UGameFlow;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SCCORE_API USCBaseGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bHasCheats;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer m_AllowedContent;
    
    UPROPERTY(Config, EditAnywhere)
    FSCGameFlowData m_GameFlow;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UGameFlow> m_playingGameFlow;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UGameFlow>> m_ContenRestrictedGameFlows;
    
    USCBaseGameSettings();
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer BPF_GetAllowedContentGameplayTagContainer();
    
};

