#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TestInputAdditionalValidationDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnInputWaitDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCBlendType -FallbackName=ESCBlendType
#include "InputAction.h"
#include "AsyncTaskWaitForInput.generated.h"

class UAsyncTaskWaitForInput;
class UObject;
class USCGameplayAbility;
class UCurveFloat;

UCLASS()
class SIFU_API UAsyncTaskWaitForInput : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnInputWait Validated;
    
    UPROPERTY(BlueprintAssignable)
    FOnInputWait Skipped;
    
    UPROPERTY(BlueprintAssignable)
    FOnInputWait Launched;
    
    UPROPERTY(BlueprintAssignable)
    FOnInputWait SkippedOnError;
    
    UAsyncTaskWaitForInput();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForInput* BPF_WaitForInputWithFreezeExtraValidationDelegate(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, FTestInputAdditionalValidationDelegate _additionalDelegate, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForInput* BPF_WaitForInputWithFreeze(UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, TSubclassOf<USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
};

