#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EActivityType.h"
#include "OnlineActivitiesTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FOnlineActivitiesTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_activityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityType m_eActivityType;
    
    FOnlineActivitiesTableRow();
};

