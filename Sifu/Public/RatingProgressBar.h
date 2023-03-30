#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "RatingProgressBar.generated.h"

UCLASS(Blueprintable)
class URatingProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iImageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSteps;
    
    URatingProgressBar();
};

