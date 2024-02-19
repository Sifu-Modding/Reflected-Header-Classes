#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CheatData.generated.h"

class APlayerController;
class UGameInstance;

UCLASS(Blueprintable)
class SCCORE_API UCheatData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sUsedArgument;
    
public:
    UCheatData();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCheatDeactivated(APlayerController* _playerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCheatActivated(APlayerController* _playerController, const FString& _argument) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BPE_GetArgument(const FGameplayTag& _tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_CanApplyCheat(UGameInstance* _gameInstance, APlayerController* _playerController) const;
    
};

