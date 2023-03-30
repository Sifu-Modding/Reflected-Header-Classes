#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseSnapshot.h"
#include "AnimNode_CopyPoseFromMesh.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CopyPoseFromMesh : public FAnimNode_PoseSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAttachedParent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCopyCurves: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyCustomAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMeshPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBoneToCopy;
    
    FAnimNode_CopyPoseFromMesh();
};

