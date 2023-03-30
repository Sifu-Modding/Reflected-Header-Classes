#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvTraceShape -FallbackName=EEnvTraceShape
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "AIComboCondition.h"
#include "AIConditionTraceOffset.h"
#include "EAIConditionTraceContext.h"
#include "EAIConditionTraceRotationContext.h"
#include "ComboAIConditionTraceCollision.generated.h"

class AActor;
class UAIFightingComponent;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionTraceCollision : public UAIComboCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIConditionTraceContext m_eFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIConditionTraceContext m_eTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIConditionTraceOffset m_FromOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIConditionTraceOffset m_ToOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_TraceCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTraceShape::Type> m_eShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vShapeExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIConditionTraceRotationContext m_ShapeRotationRelativeTo;
    
public:
    UComboAIConditionTraceCollision();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_TestEQCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const;
    
};

