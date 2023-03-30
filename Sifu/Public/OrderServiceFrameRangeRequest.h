#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OrderServiceFrameRangeRequest.generated.h"

class ABaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceFrameRangeRequest : public UObject {
    GENERATED_BODY()
public:
    UOrderServiceFrameRangeRequest();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFloatRange BPE_GetFrameRange(uint8 _uiOrderId, const ABaseCharacter* _owner) const;
    
};

