#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCPoseAssetSelection.h"
#include "SCAnimPoseLooped.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSCAnimPoseLooped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCPoseAssetSelection m_Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_WeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_RandomDelay;
    
    SCCORE_API FSCAnimPoseLooped();
};

