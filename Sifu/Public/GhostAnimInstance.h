#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "GhostAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class SIFU_API UGhostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimationAsset> m_MasterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fMasterAnimCurrentCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bMasterAnimMirror;
    
    UGhostAnimInstance();
};

