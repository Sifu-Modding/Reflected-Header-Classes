#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DodgeConfigStruct.h"
#include "Templates/SubclassOf.h"
#include "DodgeDB.generated.h"

class UCurveFloat;
class UDodgeAnimRequest;

UCLASS(Blueprintable)
class SIFU_API UDodgeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDodgeRetargettingDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDodgeConfigStruct m_dodgeConfigs[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantDodgeLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDodgeOpponentAttackRangeTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultDodgeQuadrantSwitchActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvertRedirectOnBackQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_GuardGaugeCostOverWeightRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSmoothedOrderDodgeNotifyStartDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDodgeAnimRequest> m_animRequest;
    
    UDodgeDB();

};

