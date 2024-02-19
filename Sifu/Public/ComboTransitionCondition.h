#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComboConditionValueToNodeMap.h"
#include "Templates/SubclassOf.h"
#include "ComboTransitionCondition.generated.h"

class AActor;
class AFightingCharacter;
class UComboTransitionCondition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UComboTransitionCondition*> m_TargetConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FComboConditionValueToNodeMap> m_PerConditionValueToNodeMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_ConditionID;
    
public:
    UComboTransitionCondition();

    UFUNCTION(BlueprintCallable)
    static bool BPF_TestConditionOfClass(TSubclassOf<UComboTransitionCondition> _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestCondition(const UComboTransitionCondition* _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 BPE_GetTargetNode(const AFightingCharacter* _owner, const AActor* _target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString BPE_GetLog() const;
    
};

