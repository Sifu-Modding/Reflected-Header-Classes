#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputAction.h"
#include "InputManager.generated.h"

class ASCPlayerController;
class UInputPad;
class UInputsDB;

UCLASS(Blueprintable)
class SIFU_API UInputManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputsDB* m_inputsDB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputPad*> m_pads;
    
public:
    UInputManager();

    UFUNCTION(BlueprintCallable)
    static void BPF_ResetAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FlushAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ConsumeAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
};

