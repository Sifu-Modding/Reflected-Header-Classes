#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "DeathStandupAnimationFromAnimation.h"
#include "DeathStandupAnimations.generated.h"

USTRUCT(BlueprintType)
struct FDeathStandupAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FaceDown;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_FaceUp;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SideLeft;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_SideRight;
    
    UPROPERTY(EditAnywhere)
    float m_fMinFaceAngle;
    
    UPROPERTY(EditAnywhere)
    TArray<FDeathStandupAnimationFromAnimation> m_SpecialCases;
    
    SIFU_API FDeathStandupAnimations();
};

