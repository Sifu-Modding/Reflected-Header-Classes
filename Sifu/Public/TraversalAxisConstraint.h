#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESimpleAxis -FallbackName=ESimpleAxis
#include "ESimpleAxisSide.h"
#include "TraversalAxisConstraint.generated.h"

USTRUCT(BlueprintType)
struct FTraversalAxisConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxis m_eAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxisSide m_eForbiddenAxisSide;
    
    SIFU_API FTraversalAxisConstraint();
};

