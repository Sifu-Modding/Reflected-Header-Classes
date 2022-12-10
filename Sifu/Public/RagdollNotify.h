#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "RagdollNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API URagdollNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bRagdollEnabled;
    
    UPROPERTY(EditAnywhere)
    bool m_bCollisionEnabled;
    
public:
    URagdollNotify();
};

