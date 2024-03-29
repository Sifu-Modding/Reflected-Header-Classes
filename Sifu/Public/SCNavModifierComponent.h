#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "SCNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    USCNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_CalcAndCacheBounds();
    
};

