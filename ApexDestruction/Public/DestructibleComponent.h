#pragma once
#include "CoreMinimal.h"
#include "ComponentFractureSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DestructibleInterface -FallbackName=DestructibleInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkinnedMeshComponent -FallbackName=SkinnedMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FractureEffect -FallbackName=FractureEffect
#include "DestructibleWakeStateDelegateDelegate.h"
#include "DestructibleComponent.generated.h"

class UDestructibleSnapshot;
class UMaterialInterface;
class UDestructibleMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class APEXDESTRUCTION_API UDestructibleComponent : public USkinnedMeshComponent, public IDestructibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFractureEffectOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FFractureEffect> FractureEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHardSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LargeChunkThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDestructibleMesh* LowEndDestructibleMesh;
    
    UPROPERTY(BlueprintAssignable)
    FComponentFractureSignature OnComponentFracture;
    
    UPROPERTY(BlueprintAssignable)
    FComponentFractureSignature OnComponentSilentFracture;
    
    UPROPERTY(Config)
    float ApexChunksMaxDistanceThreshold;
    
    UPROPERTY(Config)
    float ApexChunksUpdateSleepInterval;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FDestructibleWakeStateDelegate OnWakeStateChanged;
    
private:
    UPROPERTY(Transient)
    UDestructibleSnapshot* Snapshot;
    
public:
    UDestructibleComponent();
    UFUNCTION(BlueprintCallable)
    void SetDestructibleMesh(UDestructibleMesh* NewMesh);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceAllMaterials(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintPure)
    bool IsFractured() const;
    
    UFUNCTION(BlueprintCallable)
    UDestructibleMesh* GetDestructibleMesh();
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);
    
    
    // Fix for true pure virtual functions not being implemented
};

