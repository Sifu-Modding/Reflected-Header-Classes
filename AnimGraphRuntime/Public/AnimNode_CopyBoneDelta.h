#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "CopyBoneDeltaMode.h"
#include "AnimNode_CopyBoneDelta.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyScale;
    
    UPROPERTY(EditAnywhere)
    CopyBoneDeltaMode CopyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TranslationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleMultiplier;
    
    FAnimNode_CopyBoneDelta();
};

