#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SoundGroundAnimNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API USoundGroundAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USoundGroundAnimNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NotifyGround(USkeletalMeshComponent* _meshComp, uint8 _surface) const;
    
};

