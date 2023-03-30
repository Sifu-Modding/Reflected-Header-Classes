#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AttackComboDB.h"
#include "AttacksComboDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAttacksComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackComboDB m_Struct;
    
    UAttacksComboDB();
};

