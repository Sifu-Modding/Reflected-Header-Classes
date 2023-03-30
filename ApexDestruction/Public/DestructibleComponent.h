#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DestructibleInterface -FallbackName=DestructibleInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FractureEffect -FallbackName=FractureEffect
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkinnedMeshComponent -FallbackName=SkinnedMeshComponent
#include "ComponentFractureSignatureDelegate.h"
#include "DestructibleWakeStateDelegateDelegate.h"
#include "DestructibleComponent.generated.h"

class UDestructibleMesh;
class UDestructibleSnapshot;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class APEXDESTRUCTION_API UDestructibleComponent : public USkinnedMeshComponent, public IDestructibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFractureEffectOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFractureEffect> FractureEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHardSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeChunkThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleMesh* LowEndDestructibleMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentFractureSignature OnComponentFracture;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentFractureSignature OnComponentSilentFracture;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApexChunksMaxDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApexChunksUpdateSleepInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDestructibleWakeStateDelegate OnWakeStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDestructibleSnapshot* Snapshot;
    
public:
    UDestructibleComponent();
    UFUNCTION(BlueprintCallable)
    void SetDestructibleMesh(UDestructibleMesh* NewMesh);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceAllMaterials(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFractured() const;
    
    UFUNCTION(BlueprintCallable)
    UDestructibleMesh* GetDestructibleMesh();
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);
    
    
    // Fix for true pure virtual functions not being implemented
};

