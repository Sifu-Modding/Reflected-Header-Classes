#pragma once
#include "CoreMinimal.h"
#include "AvailabilityLayerCombinations.h"
#include "InputContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputAction.h"
#include "AvailabilityLayerData.generated.h"

UCLASS()
class SIFU_API UAvailabilityLayerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputContext m_eContext;
    
    UPROPERTY(EditAnywhere)
    TArray<FAvailabilityLayerCombinations> m_Combinations;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertSelection;
    
    UPROPERTY(EditAnywhere)
    TArray<InputAction> m_inputActionArray;
    
    UAvailabilityLayerData();
};

