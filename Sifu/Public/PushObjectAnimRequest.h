#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PushObjectAnimRequest.generated.h"

class AActor;
class APushableActor;
class UAnimSequence;

UCLASS(Blueprintable)
class SIFU_API UPushObjectAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UPushObjectAnimRequest();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimSequence* BPE_GetPushAnimation(const AActor* _Instigator, const FVector& _vTargetDir, const APushableActor* _pushable, bool& _bOutMirror) const;
    
};

