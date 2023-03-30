#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WidgetData.generated.h"

UCLASS(Blueprintable)
class UWidgetData : public UObject {
    GENERATED_BODY()
public:
    UWidgetData();
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdated();
    
};

