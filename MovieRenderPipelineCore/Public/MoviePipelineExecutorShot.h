#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "Templates/SubclassOf.h"
#include "MoviePipelineExecutorShot.generated.h"

class UMoviePipelineShotConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorShot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath InnerPathKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath OuterPathKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OuterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InnerName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StatusMessage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineShotConfig* ShotOverrideConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;
    
public:
    UMoviePipelineExecutorShot();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineShotConfig* GetShotOverridePresetOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineShotConfig* GetShotOverrideConfiguration() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<UMoviePipelineShotConfig> InConfigType);
    
};

