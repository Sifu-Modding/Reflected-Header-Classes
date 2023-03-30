#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ActorLayerUtilities -ObjectName=ActorLayer -FallbackName=ActorLayer
#include "MoviePipelineImagePassBase.h"
#include "MoviePipelinePostProcessPass.h"
#include "MoviePipelineDeferredPassBase.generated.h"

class UMaterialInterface;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccumulatorIncludesAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMultisampleEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDefaultLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorLayer> StencilLayers;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> ActivePostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StencilLayerMaterial;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> TileRenderTargets;
    
public:
    UMoviePipelineDeferredPassBase();
};

