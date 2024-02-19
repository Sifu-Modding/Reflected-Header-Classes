#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InputAction.h"
#include "InputManagerHelpers.generated.h"

class ASCPlayerController;
class UInputPad;

UCLASS(Blueprintable)
class SIFU_API UInputManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputManagerHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInputPad* BPF_GetControllerInputPad(ASCPlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D BPF_GetActionVectorValue(ASCPlayerController* _player, InputAction _eAction, bool _bRaw);
    
    UFUNCTION(BlueprintCallable)
    static float BPF_GetActionValue(const ASCPlayerController* _player, InputAction _eAction, bool _bRaw);
    
};

