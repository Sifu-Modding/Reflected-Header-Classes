#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "InputPresetsEnumHandler.generated.h"

USTRUCT(BlueprintType)
struct FInputPresetsEnumHandler : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FInputPresetsEnumHandler();
};
FORCEINLINE uint32 GetTypeHash(const FInputPresetsEnumHandler) { return 0; }

