#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MenuDataSource.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMenuDataSource : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMenuDataSource();
};

