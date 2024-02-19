#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DetailedMoveTransition.h"
#include "EMoveStatus.h"
#include "ETransitionGlobalType.h"
#include "DetailedMoveTransitionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDetailedMoveTransitionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetailedMoveTransition> m_TransitionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETransitionGlobalType, EMoveStatus> m_NeededMoveStatusMap;
    
    UDetailedMoveTransitionDB();

};

