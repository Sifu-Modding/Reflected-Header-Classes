#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BaseShapeHitDetectionDB.h"
#include "BoxHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UBoxHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Extent;
    
    UBoxHitDetectionDB();
};

