#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineSetting.generated.h"

class UMoviePipeline;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineSetting : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMoviePipeline> CachedPipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UMoviePipelineSetting();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BuildNewProcessCommandLine(UPARAM(Ref) FString& InOutUnrealURLParams, UPARAM(Ref) FString& InOutCommandLineArgs) const;
    
};

