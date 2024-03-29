#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "SwapperStructBase.h"
#include "AnimStructBase.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructBase : public FSwapperStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimContainer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimContainer2;
    
    FAnimStructBase();
};

