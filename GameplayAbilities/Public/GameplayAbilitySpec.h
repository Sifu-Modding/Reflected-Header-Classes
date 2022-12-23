#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityActivationInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "GameplayAbilitySpecHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpec.generated.h"

class UObject;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpec : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayAbilitySpecHandle Handle;
    
    UPROPERTY()
    UGameplayAbility* Ability;
    
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    int32 InputID;
    
    UPROPERTY()
    UObject* SourceObject;
    
    UPROPERTY(NotReplicated)
    uint8 ActiveCount;
    
    UPROPERTY(NotReplicated)
    uint8 InputPressed: 1;
    
    UPROPERTY(NotReplicated)
    uint8 RemoveAfterActivation: 1;
    
    UPROPERTY(NotReplicated)
    uint8 PendingRemove: 1;
    
    UPROPERTY(NotReplicated)
    uint8 bActivateOnce: 1;
    
    UPROPERTY(NotReplicated)
    FGameplayAbilityActivationInfo ActivationInfo;
    
    UPROPERTY()
    FGameplayTagContainer DynamicAbilityTags;
    
    UPROPERTY(NotReplicated)
    TArray<UGameplayAbility*> NonReplicatedInstances;
    
    UPROPERTY()
    TArray<UGameplayAbility*> ReplicatedInstances;
    
    UPROPERTY(NotReplicated)
    FActiveGameplayEffectHandle GameplayEffectHandle;
    
    FGameplayAbilitySpec();
};

