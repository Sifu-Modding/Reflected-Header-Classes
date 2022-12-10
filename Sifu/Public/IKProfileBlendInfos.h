#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEasingFunc -FallbackName=EEasingFunc
#include "IKProfileBlendInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FIKProfileBlendInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fValueCoef;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendInDuration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> m_eBlendInFunction;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendOutDuration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> m_eBlendOutFunction;
    
    UPROPERTY(EditAnywhere)
    FName m_CurveName;
    
    FIKProfileBlendInfos();
};

