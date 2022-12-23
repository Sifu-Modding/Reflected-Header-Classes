#pragma once
#include "CoreMinimal.h"
#include "HittedAnimContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "DefenseAnimInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FDefenseAnimInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHittedAnimContainer m_ParryToStructureBrokenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHittedAnimContainer m_ParryToDizzyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bMirrorFightingStateLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESCCardinalPoints, FAnimContainer> m_PushFromGrabAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESCCardinalPoints, FAnimContainer> m_PushFromGrabCloseWallAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_ParrySuccessAnim;
    
    FDefenseAnimInfos();
};

