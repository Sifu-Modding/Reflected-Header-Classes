#include "MoviePipelineQueueEngineSubsystem.h"
#include "MoviePipelineQueue.h"
#include "Templates/SubclassOf.h"

UMoviePipelineQueueEngineSubsystem::UMoviePipelineQueueEngineSubsystem() {
    this->ActiveExecutor = NULL;
    this->CurrentQueue = CreateDefaultSubobject<UMoviePipelineQueue>(TEXT("EngineMoviePipelineQueue"));
}

void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor) {
}

UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(TSubclassOf<UMoviePipelineExecutorBase> InExecutorType) {
    return NULL;
}

bool UMoviePipelineQueueEngineSubsystem::IsRendering() const {
    return false;
}

UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue() const {
    return NULL;
}

UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor() const {
    return NULL;
}


