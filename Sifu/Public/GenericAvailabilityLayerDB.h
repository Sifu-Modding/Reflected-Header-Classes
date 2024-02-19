#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EALBinaryOperation.h"
#include "GenericAvailabilityLayerDB.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable)
class SIFU_API UGenericAvailabilityLayerDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EALBinaryOperation m_eALBinaryOperation;
    
    UGenericAvailabilityLayerDB();

};

