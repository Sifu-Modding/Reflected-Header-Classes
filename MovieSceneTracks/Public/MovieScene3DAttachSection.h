#pragma once
#include "CoreMinimal.h"
#include "MovieScene3DConstraintSection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDetachmentRule -FallbackName=EDetachmentRule
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachmentRule -FallbackName=EAttachmentRule
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieScene3DAttachSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPreviewOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ChildComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AttachmentLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AttachmentRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AttachmentScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDetachmentRule DetachmentLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDetachmentRule DetachmentRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDetachmentRule DetachmentScaleRule;
    
    UMovieScene3DAttachSection();
    
    // Fix for true pure virtual functions not being implemented
};

