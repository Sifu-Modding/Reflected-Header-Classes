#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDropReason.h"
#include "OrderService.h"
#include "DropWeaponOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDropWeaponOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDropImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDropReason m_eDropReason;
    
    UDropWeaponOrderService();
};

