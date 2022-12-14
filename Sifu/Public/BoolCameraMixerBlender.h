#pragma once
#include "CoreMinimal.h"
#include "OverTimeCameraMixerBlender.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCBlendType -FallbackName=ESCBlendType
#include "BoolCameraMixerBlender.generated.h"

class UCameraComponentThird;
class UCurveFloat;

UCLASS(Abstract)
class SIFU_API UBoolCameraMixerBlender : public UOverTimeCameraMixerBlender {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bInversed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDuration;
    
    UPROPERTY(EditDefaultsOnly)
    ESCBlendType m_eBlendType;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_Curve;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bConstantSpeed;
    
public:
    UBoolCameraMixerBlender();
protected:
    UFUNCTION(BlueprintPure)
    bool GetOldValue() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_GetBool(UCameraComponentThird* _camera, bool _bNoDamping) const;
    
};

