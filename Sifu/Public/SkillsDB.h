#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SkillsDB.generated.h"

class USkillsChilds;

UCLASS(Blueprintable)
class USkillsDB : public UDataAsset, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillsChilds* m_Root;
    
    USkillsDB();
    
    // Fix for true pure virtual functions not being implemented
};

