#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineDeferredPassBase.h"
#include "MoviePipelineDeferredPass_LightingOnly.generated.h"

UCLASS()
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase {
    GENERATED_BODY()
public:
    UMoviePipelineDeferredPass_LightingOnly();
};

