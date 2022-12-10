#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "CarriedProps.generated.h"

USTRUCT(BlueprintType)
struct FCarriedProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDataTableRowHandle m_props;
    
    SIFU_API FCarriedProps();
};

