#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputBlendPose -FallbackName=InputBlendPose
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSection -FallbackName=MovieSceneParameterSection
#include "IntegerParameterNameAndCurve.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneTransformMask -FallbackName=MovieSceneTransformMask
#include "ChannelMapInfo.h"
#include "EnumParameterNameAndCurve.h"
#include "MovieSceneControlRigParameterSection.generated.h"

class UControlRig;

UCLASS()
class CONTROLRIG_API UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    UControlRig* ControlRig;
    
    UPROPERTY()
    TArray<bool> ControlsMask;
    
    UPROPERTY()
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY(EditAnywhere)
    bool bAdditive;
    
    UPROPERTY(EditAnywhere)
    bool bApplyBoneFilter;
    
    UPROPERTY(EditAnywhere)
    FInputBlendPose BoneFilter;
    
    UPROPERTY()
    FMovieSceneFloatChannel Weight;
    
    UPROPERTY()
    TMap<FName, FChannelMapInfo> ControlChannelMap;
    
protected:
    UPROPERTY()
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;
    
public:
    UMovieSceneControlRigParameterSection();
};

