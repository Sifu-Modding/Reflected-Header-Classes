#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCVolume -FallbackName=SCVolume
#include "EAlertLevel.h"
#include "AISanctuaryVolume.generated.h"

class UAISanctuaryComponent;

UCLASS(Blueprintable)
class SIFU_API AAISanctuaryVolume : public ASCVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISanctuaryComponent* m_SanctuaryComponent;
    
    AAISanctuaryVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSanctuaryAssignmentUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
};

