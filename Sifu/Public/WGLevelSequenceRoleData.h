#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCLevelSequenceRoleData -FallbackName=SCLevelSequenceRoleData
#include "ELevelSequenceAIBehavior.h"
#include "EQuadrantTypes.h"
#include "WGLevelSequenceRoleData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGLevelSequenceRoleData : public USCLevelSequenceRoleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_ForcedQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelSequenceAIBehavior m_ForcedAIBehavior;
    
    UWGLevelSequenceRoleData();

};

