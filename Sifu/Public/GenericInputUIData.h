#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GenericInputUIData.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UGenericInputUIData : public UObject {
    GENERATED_BODY()
public:
    UGenericInputUIData();
};

