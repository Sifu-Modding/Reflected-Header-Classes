#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EAIArchetype.h"
#include "AIWaveBucketDescription.h"
#include "AIWaveParamsRow.generated.h"

USTRUCT()
struct SIFU_API FAIWaveParamsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EAIArchetype, FAIWaveBucketDescription> m_ArchetypesBuckets;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxAIInCombatDuringWave;
    
    FAIWaveParamsRow();
};

