#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "EControllerIconAxisTypes.h"
#include "EControllerIconStyles.h"
#include "InputAction.h"
#include "ControllerButtonInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class UControllerButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IControllerButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_SetInputAction(InputAction _eAction, UWidget* _owner, EControllerIconStyles _eIconStyle, EControllerIconAxisTypes _eAxisType, const FSCUserDefinedEnumHandler& _drawingStyle);
    
};

