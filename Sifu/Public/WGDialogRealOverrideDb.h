#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=SCDialogRealOverrideDb -FallbackName=SCDialogRealOverrideDb
#include "EJoinDialogActors.h"
#include "WGDialogRealOverrideDb.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGDialogRealOverrideDb : public USCDialogRealOverrideDb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    
    UWGDialogRealOverrideDb();

};

