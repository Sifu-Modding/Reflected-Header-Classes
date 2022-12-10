#pragma once
#include "CoreMinimal.h"
#include "AimOffsetStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LookAtAnimRequest.generated.h"

class ULookAtAnimInstance;

UCLASS(Abstract, Blueprintable)
class SIFU_API ULookAtAnimRequest : public UObject {
    GENERATED_BODY()
public:
    ULookAtAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    FAimOffsetStruct BPE_GetLookAtAimOffset(ULookAtAnimInstance* _animInstance) const;
    
};

