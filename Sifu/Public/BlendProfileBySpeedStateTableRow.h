#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BlendProfileBySpeedStateTableRow.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct SIFU_API FBlendProfileBySpeedStateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* m_BlendProfileBySpeedState[4];
    
    FBlendProfileBySpeedStateTableRow();
};

