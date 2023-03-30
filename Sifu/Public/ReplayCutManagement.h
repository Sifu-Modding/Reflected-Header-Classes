#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplayCutManagement.generated.h"

class UReplayKey;
class UReplayTimelineModel;

UCLASS(Blueprintable)
class SIFU_API UReplayCutManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayTimelineModel* m_Model;
    
public:
    UReplayCutManagement();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCut(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanAddCut(float _fDemoTime) const;
    
};

