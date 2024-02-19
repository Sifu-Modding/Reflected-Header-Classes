#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OverrideHitBoxBehavior.h"
#include "HitBoxToChangeBehavior.generated.h"

USTRUCT(BlueprintType)
struct FHitBoxToChangeBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_TargetHitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideHitBoxBehavior m_HitboxBehavior;
    
    SIFU_API FHitBoxToChangeBehavior();
};

