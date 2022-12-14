#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BaseHitDetectionDB.generated.h"

class ABaseCharacter;
class USkeletalMeshComponent;

UCLASS(BlueprintType)
class SIFU_API UBaseHitDetectionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseBoneTransform;
    
    UPROPERTY(EditAnywhere)
    FName m_boneName;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsSocket;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnTargetOnly;
    
    UPROPERTY(EditAnywhere)
    FVector m_vOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotationOffset;
    
    UBaseHitDetectionDB();
    UFUNCTION(BlueprintPure)
    FName BPF_GetRealBoneName(USkeletalMeshComponent* _meshComponent) const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetBoneOnCharacter(ABaseCharacter* _character, bool _bMirror, FTransform& _delta) const;
    
};

