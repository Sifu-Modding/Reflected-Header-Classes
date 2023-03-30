#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzClockSettings -FallbackName=QuartzClockSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "QuartzSubsystem.generated.h"

class UObject;
class UQuartzClockHandle;

UCLASS(Blueprintable)
class AUDIOMIXER_API UQuartzSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UQuartzSubsystem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetRoundTripMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetRoundTripMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetRoundTripAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UQuartzClockHandle* GetHandleForClock(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetGameThreadToAudioRenderThreadMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetGameThreadToAudioRenderThreadMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetGameThreadToAudioRenderThreadAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMinLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMaxLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadAverageLatency();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool DoesClockExist(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UQuartzClockHandle* CreateNewClock(const UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists);
    
};

