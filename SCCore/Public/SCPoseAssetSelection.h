#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SmartName -FallbackName=SmartName
#include "SCPoseAssetSelection.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPoseAssetSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartName m_PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeight;
    
    FSCPoseAssetSelection();
};

