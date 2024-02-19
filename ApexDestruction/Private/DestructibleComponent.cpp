#include "DestructibleComponent.h"

UDestructibleComponent::UDestructibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCreatePhysicsState = true;
    this->bMultiBodyOverlap = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->bFractureEffectOverride = false;
    this->bEnableHardSleeping = false;
    this->LargeChunkThreshold = 25.00f;
    this->LowEndDestructibleMesh = NULL;
    this->ApexChunksMaxDistanceThreshold = 1000.00f;
    this->ApexChunksUpdateSleepInterval = 0.50f;
    this->Snapshot = NULL;
}

void UDestructibleComponent::SetDestructibleMesh(UDestructibleMesh* NewMesh) {
}

void UDestructibleComponent::ReplaceAllMaterials(UMaterialInterface* Material) {
}

bool UDestructibleComponent::IsFractured() const {
    return false;
}

UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh() {
    return NULL;
}

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
}

void UDestructibleComponent::ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength) {
}


