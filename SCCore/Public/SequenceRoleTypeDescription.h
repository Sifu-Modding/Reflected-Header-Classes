#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "SequenceRoleTypeDescription.generated.h"

class UAssociatedActorGetter;
class UNameHandler;

USTRUCT(BlueprintType)
struct SCCORE_API FSequenceRoleTypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNameHandler> m_NameHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UAssociatedActorGetter>> m_RoleGettersMap;
    
    FSequenceRoleTypeDescription();
};

