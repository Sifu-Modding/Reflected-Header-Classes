#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "Templates/SubclassOf.h"
#include "MoviePipelineQueueEngineSubsystem.generated.h"

class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorBase* ActiveExecutor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineQueue* CurrentQueue;
    
public:
    UMoviePipelineQueueEngineSubsystem();

    UFUNCTION(BlueprintCallable)
    void RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<UMoviePipelineExecutorBase> InExecutorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineQueue* GetQueue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineExecutorBase* GetActiveExecutor() const;
    
};

