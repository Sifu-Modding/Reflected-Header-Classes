#pragma once
#include "CoreMinimal.h"
#include "SCAnimPoseLooped.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCAnimPoseArray.h"
#include "SCCharacterPoseData.generated.h"

class UPoseAsset;

UCLASS()
class SCCORE_API USCCharacterPoseData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSCAnimPoseArray> m_PosesPerState;
    
    UPROPERTY(EditAnywhere)
    TArray<FSCAnimPoseLooped> m_LoopedPoses;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendBetweenStatesDuration;
    
    UPROPERTY(EditAnywhere)
    UPoseAsset* m_PoseAsset;
    
public:
    USCCharacterPoseData();
};

