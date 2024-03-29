#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "CardinalMatchArray.generated.h"

USTRUCT(BlueprintType)
struct FCardinalMatchArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESCCardinalPoints> m_Array;
    
    SIFU_API FCardinalMatchArray();
};

