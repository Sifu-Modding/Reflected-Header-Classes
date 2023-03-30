#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "DetectEnemyBehindTraversalsBTService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDetectEnemyBehindTraversalsBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDetectionDistance;
    
public:
    UDetectEnemyBehindTraversalsBTService();
};

