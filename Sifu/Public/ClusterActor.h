#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
#include "ClusterStruct.h"
#include "TargetableActor.h"
#include "ClusterActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API AClusterActor : public ASCActor, public ITargetableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClusterStruct> m_MeshToThrowable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeSpawningThrowable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vImpulseWhenDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeTargeted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSoundNoiseRadius;
    
public:
    AClusterActor();
private:
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnActorFromMesh();
    
    UFUNCTION(BlueprintCallable)
    void BPF_MakeNoise(AActor* _noiseSource, FVector _vLocationOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetImpulseVector() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

