#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NetOrderStructHelper.generated.h"

class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UNetOrderStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetOrderStructHelper();
    UFUNCTION(BlueprintCallable)
    static bool GetBaseNetOrderStruct(UOrderComponent* _OrderComponent, uint8 _uiOrderId, bool _bCheck, FNetOrderStruct& _outNetOrderStruct);
    
};

