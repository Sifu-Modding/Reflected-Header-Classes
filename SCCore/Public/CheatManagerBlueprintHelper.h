#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "CheatManagerBlueprintHelper.generated.h"

class USCCheatManagerSettings;

UCLASS(BlueprintType)
class SCCORE_API UCheatManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCheatManagerBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_UnapplyCheats();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_UnapplyCheat(FGameplayTag _cheatTag);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsCheatApplied(FGameplayTag _cheatToFind);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsCheatActivated(FGameplayTag _cheatToFind);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_HasAppliedCheats();
    
    UFUNCTION(BlueprintPure)
    static USCCheatManagerSettings* BPF_GetCheatDefaultSettings();
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetCheatArgument(FGameplayTag _cheatWanted);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer BPF_GetAppliedCheats();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer BPF_GetActivatedCheats();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DeactivateCheats(FGameplayTagContainer _cheatsToDeactivate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DeactivateCheat(FGameplayTag _cheatToDeactivate);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DeactivateAllCheats();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_AreCheatsAllowed();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ApplyCheats(bool _bForceApply);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ApplyCheat(FGameplayTag _cheatTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ActivateCheats(FGameplayTagContainer _cheatsToActivate, const FString& _argument);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ActivateCheat(FGameplayTag _cheatToActivate, const FString& _argument);
    
};

