#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGameplayCueEvent.h"
#include "GameplayCueParameters.h"
#include "GameplayCueNotify_Static.generated.h"

class AActor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueNotify_Static : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameplayCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UGameplayCueNotify_Static();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters) const;
    
};

