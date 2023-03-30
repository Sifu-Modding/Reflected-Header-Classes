#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "Killzone.generated.h"

class AActor;
class AFightingCharacter;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SIFU_API AKillzone : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxComponent;
    
public:
    AKillzone();
private:
    UFUNCTION(BlueprintCallable)
    void OnBoxTouched(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPF_IsKillzoneActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBoxTouched(AFightingCharacter* _Char, const FVector& _vImpactpoint);
    
};

