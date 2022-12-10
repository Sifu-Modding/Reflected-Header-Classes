#pragma once
#include "CoreMinimal.h"
#include "AIComboLaunchParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAiAction -FallbackName=SCAiAction
#include "AIActionLaunchCombo.generated.h"

UCLASS()
class SIFU_API UAIActionLaunchCombo : public USCAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIComboLaunchParameters m_Parameters;
    
    UAIActionLaunchCombo();
};

