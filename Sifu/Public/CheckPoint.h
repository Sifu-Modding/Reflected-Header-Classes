#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "SCPlayerStart.h"
#include "CheckPoint.generated.h"

class AActor;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SIFU_API ACheckPoint : public ASCPlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_TriggerCheckpointEnter;
    
public:
    ACheckPoint();
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetNewCheckPointInSave();
    
};

