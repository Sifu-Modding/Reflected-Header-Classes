#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SignificanceManager -ObjectName=SignificanceManager -FallbackName=SignificanceManager
#include "SCSignificanceManager.generated.h"

UCLASS(Blueprintable)
class SIFU_API USCSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    USCSignificanceManager();
};

