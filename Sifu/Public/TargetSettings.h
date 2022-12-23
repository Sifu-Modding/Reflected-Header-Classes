#pragma once
#include "CoreMinimal.h"
#include "TargetEvaluationSettings.h"
#include "ETargetingPrio.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "TargetSettings.generated.h"

class UEvaluateTargetCondition;

USTRUCT(BlueprintType)
struct SIFU_API FTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fUpdateFrequency;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UEvaluateTargetCondition*> m_Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTargetEvaluationSettings> m_Evaluations;
    
    UPROPERTY(EditAnywhere)
    FString m_DebugConsoleVariable;
    
    UPROPERTY(EditAnywhere)
    ETargetingPrio m_eDebugConsoleVariableMinTargettingPrio;
    
    UPROPERTY(EditAnywhere)
    FColor m_DebugActionColor;
    
    FTargetSettings();
};

