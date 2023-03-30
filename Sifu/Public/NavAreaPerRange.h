#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "Templates/SubclassOf.h"
#include "NavAreaPerRange.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FNavAreaPerRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> m_associatedArea;
    
    SIFU_API FNavAreaPerRange();
};

