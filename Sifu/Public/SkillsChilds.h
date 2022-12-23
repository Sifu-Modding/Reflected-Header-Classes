#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkillFilter.h"
#include "SkillTreeNode.h"
#include "SkillsChilds.generated.h"

class USkillsChilds;
class USCAbilitySystemComponent;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class USkillsChilds : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FEnumerateChildsDelegate);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSkillTreeNode> m_Skills;
    
    USkillsChilds();
    UFUNCTION(BlueprintPure)
    bool BPF_GetParent(const FSkillTreeNode& _node, FSkillTreeNode& _parent) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_FindSkillBySocket(FName _socketName, FSkillTreeNode& _node) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_FindChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, TArray<FSkillTreeNode>& _result, const USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_FindChild(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, FSkillTreeNode& _result, const USkillsChilds* _rootToEnumerateVirtualChilds) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_EnumerateChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, USkillsChilds::FEnumerateChildsDelegate _enumerator, const USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_CountChilds(USCAbilitySystemComponent* _component, const FSkillFilter& _filter, bool _bStopOnFilterFailed) const;
    
};

