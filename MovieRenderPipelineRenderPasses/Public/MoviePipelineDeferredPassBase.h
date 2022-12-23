#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineImagePassBase.h"
#include "MoviePipelinePostProcessPass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ActorLayerUtilities -ObjectName=ActorLayer -FallbackName=ActorLayer
#include "MoviePipelineDeferredPassBase.generated.h"

class UMaterialInterface;
class UTextureRenderTarget2D;

UCLASS()
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAccumulatorIncludesAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableMultisampleEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddDefaultLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActorLayer> StencilLayers;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UMaterialInterface*> ActivePostProcessMaterials;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInterface* StencilLayerMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTextureRenderTarget2D*> TileRenderTargets;
    
public:
    UMoviePipelineDeferredPassBase();
};

