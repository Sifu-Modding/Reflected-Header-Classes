#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EAIArchetype.h"
#include "AICharacterSpawnParams.h"
#include "AIArchetypeBankRow.generated.h"

USTRUCT()
struct SIFU_API FAIArchetypeBankRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAIArchetype m_eAIArchetype;
    
    UPROPERTY(EditAnywhere)
    TArray<FAICharacterSpawnParams> m_SpawnParams;
    
    FAIArchetypeBankRow();
};

