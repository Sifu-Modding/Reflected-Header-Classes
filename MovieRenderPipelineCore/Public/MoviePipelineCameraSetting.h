#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineShutterTiming.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineCameraSetting.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineCameraSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoviePipelineShutterTiming ShutterTiming;
    
    UMoviePipelineCameraSetting();
};

