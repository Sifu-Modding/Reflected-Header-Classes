#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQuartzMetronomeEventBP__DelegateSignature -FallbackName=OnQuartzMetronomeEventBPDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EQuartzCommandQuantization -FallbackName=EQuartzCommandQuantization
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzQuantizationBoundary -FallbackName=QuartzQuantizationBoundary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQuartzCommandEventBP__DelegateSignature -FallbackName=OnQuartzCommandEventBPDelegate
#include "QuartzClockHandle.generated.h"

UCLASS(BlueprintType, Transient)
class AUDIOMIXER_API UQuartzClockHandle : public UObject {
    GENERATED_BODY()
public:
    UQuartzClockHandle();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UnsubscribeFromTimeDivision(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UnsubscribeFromAllTimeDivisions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SubscribeToQuantizationEvent(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FOnQuartzMetronomeEventBP& OnQuantizationEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SubscribeToAllQuantizationEvents(const UObject* WorldContextObject, const FOnQuartzMetronomeEventBP& OnQuantizationEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetTicksPerSecond(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float TicksPerSecond);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetThirtySecondNotesPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float ThirtySecondsNotesPerMinute);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetSecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float SecondsPerTick);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetMillisecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float MillisecondsPerTick);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBeatsPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float BeatsPerMinute);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ResumeClock(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ResetTransport(const UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PauseClock(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetTicksPerSecond(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetThirtySecondNotesPerMinute(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetSecondsPerTick(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetMillisecondsPerTick(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetBeatsPerMinute(const UObject* WorldContextObject) const;
    
};

