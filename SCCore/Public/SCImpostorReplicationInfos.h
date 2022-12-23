#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CompressedPoseSnapshot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "SCImpostorReplicationInfos.generated.h"

class ASCCharacterImpostor;
class UAnimSequence;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSCImpostorReplicationInfos {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bMirrorAnimation;
    
    UPROPERTY()
    TSubclassOf<ASCCharacterImpostor> m_Class;
    
    UPROPERTY()
    TSoftObjectPtr<UAnimSequence> m_ImpostorAnimation;
    
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;
    
    UPROPERTY()
    FCompressedPoseSnapshot m_PoseToMimic;
    
    UPROPERTY()
    double m_CheckPointTimeMS;
    
    UPROPERTY()
    FVector m_vLocation;
    
    UPROPERTY()
    FQuat m_qRotation;
    
    SCCORE_API FSCImpostorReplicationInfos();
};

