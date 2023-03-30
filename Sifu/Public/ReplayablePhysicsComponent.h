#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CompressedPoseSnapshot -FallbackName=CompressedPoseSnapshot
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "ReplayablePhysicsComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysicsComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastPoseSnapshot, meta=(AllowPrivateAccess=true))
    FCompressedPoseSnapshot m_LastPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
public:
    UReplayablePhysicsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastPoseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Active();
    
    
    // Fix for true pure virtual functions not being implemented
};

