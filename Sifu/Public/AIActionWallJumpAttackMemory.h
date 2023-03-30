#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAIActionMemoryEntry -FallbackName=SCAIActionMemoryEntry
#include "AIActionWallJumpAttackMemory.generated.h"

USTRUCT(BlueprintType)
struct FAIActionWallJumpAttackMemory : public FSCAIActionMemoryEntry {
    GENERATED_BODY()
public:
    SIFU_API FAIActionWallJumpAttackMemory();
};

