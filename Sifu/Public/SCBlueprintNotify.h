#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SCBlueprintNotify.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SIFU_API USCBlueprintNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USCBlueprintNotify();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReceivedNotifyFromActiveOrder(USkeletalMeshComponent* _meshComp, UAnimSequenceBase* _animation) const;
    
};

