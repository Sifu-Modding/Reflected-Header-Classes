#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyEvent -FallbackName=AnimNotifyEvent
#include "SCAnimationHelper.generated.h"

class UAnimNotifyState;
class UAnimSequenceBase;
class UAnimationAsset;
class UAnimSequence;
class UAnimNotify;

UCLASS(BlueprintType)
class SCCORE_API USCAnimationHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCAnimationHelper();
    UFUNCTION(BlueprintPure)
    static bool HasInvalidNotifies(UAnimSequenceBase* _sequence, const FString& _inNotifyName);
    
    UFUNCTION(BlueprintPure)
    static void GetValidUniqueMarkerNames(UAnimationAsset* _animationAsset, bool& _bOutHasValidMarkers, TArray<FName>& _outMarkerNames);
    
    UFUNCTION(BlueprintPure)
    static float GetNotifyTriggerTime(const FAnimNotifyEvent& _notify);
    
    UFUNCTION(BlueprintPure)
    static float GetNotifyEndTriggerTime(const FAnimNotifyEvent& _notify);
    
    UFUNCTION(BlueprintPure)
    static float GetNotifyDuration(const FAnimNotifyEvent& _notify);
    
    UFUNCTION(BlueprintPure)
    static void FindNotifyStateByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotifyState> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound);
    
    UFUNCTION(BlueprintPure)
    static void FindNotifyByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotify> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound);
    
    UFUNCTION(BlueprintPure)
    static void FindNotifiesStateByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotifyState> _class, bool _bIncludeChildren, TArray<FAnimNotifyEvent>& _outFoundNotifies);
    
    UFUNCTION(BlueprintPure)
    static FTransform BPF_ExtractRootTrackTransform(UAnimSequence* _sequence, float _fAnimRatio);
    
};

