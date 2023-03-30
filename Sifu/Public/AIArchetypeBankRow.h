#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "AICharacterSpawnParams.h"
#include "EAIArchetype.h"
#include "AIArchetypeBankRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAIArchetypeBankRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIArchetype m_eAIArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICharacterSpawnParams> m_SpawnParams;
    
    FAIArchetypeBankRow();
};

