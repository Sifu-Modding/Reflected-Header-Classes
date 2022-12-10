#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESimpleAxis -FallbackName=ESimpleAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "TraversalActor.generated.h"

UCLASS()
class SIFU_API ATraversalActor : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool m_bTraversalActive;
    
    UPROPERTY()
    bool m_bOverrideTraversalEntryAngle;
    
    UPROPERTY()
    float m_fTraversalEntryAngle;
    
    UPROPERTY()
    bool m_bOverrideTraversalExitAngle;
    
    UPROPERTY()
    float m_fTraversalExitAngle;
    
    UPROPERTY()
    FVector m_vBoxExtentAllowed;
    
    UPROPERTY()
    FVector m_vBoxExtentForbidden;
    
    UPROPERTY()
    bool m_bHasForbiddenTraversalPart;
    
    UPROPERTY()
    ESimpleAxis m_eForbiddenAxis;
    
    UPROPERTY()
    bool m_bUseEntryMaxDistFromTraversalCenter;
    
    UPROPERTY()
    float m_fEntryMaxDistFromTraversalCenter;
    
    UPROPERTY()
    float m_fLengthBetweenTwoNavLinks;
    
    UPROPERTY()
    float m_fNavLinkOffsetFromBoxExtents;
    
    UPROPERTY()
    uint8 m_AllowedEntryTypes;
    
public:
    ATraversalActor();
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetTraversalAnimation(FAnimContainer& _outResult) const;
    
};

