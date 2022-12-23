#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AIPhaseNodeHardLink.h"
#include "EAIPhaseNodeType.h"
#include "AICustomBehaviorTreeList.h"
#include "PhaseTransitionNodeHandler.h"
#include "PhaseNodeHandler.generated.h"

class USkeletalMesh;
class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FPhaseNodeHandler {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid m_Guid;
    
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(VisibleAnywhere)
    FAIPhaseNodeHardLink m_Link;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UArchetypeAsset> m_PhaseArchetype;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UArchetypeAsset> m_WeakerPhaseArchetype;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UArchetypeAsset> m_StrongerPhaseArchetype;
    
    UPROPERTY(VisibleAnywhere)
    USkeletalMesh* m_OverrideSkeletalMesh;
    
    UPROPERTY(VisibleAnywhere)
    EAIPhaseNodeType m_eType;
    
    UPROPERTY(VisibleAnywhere)
    FAICustomBehaviorTreeList m_CustomBehaviorTrees;
    
    UPROPERTY(VisibleAnywhere)
    FName m_DialogToLaunch;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhaseTransitionNodeHandler> m_PhaseTransitions;
    
    SIFU_API FPhaseNodeHandler();
};

