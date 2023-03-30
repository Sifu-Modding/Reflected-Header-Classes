#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Gauntlet -ObjectName=GauntletTestController -FallbackName=GauntletTestController
#include "WuguanTestControllerBase.generated.h"

class ASCTestingLocationsBase;

UCLASS(Blueprintable)
class UWuguanTestControllerBase : public UGauntletTestController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASCTestingLocationsBase*> m_TestingLocations;
    
public:
    UWuguanTestControllerBase();
private:
    UFUNCTION(BlueprintCallable)
    void StopProfiling();
    
    UFUNCTION(BlueprintCallable)
    void StartProfiling();
    
    UFUNCTION(BlueprintCallable)
    void OnTestLevelVisible();
    
};

