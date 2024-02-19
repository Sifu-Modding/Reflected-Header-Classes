#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent
#include "ELinkWithExternalBehavior.h"
#include "TraversalInfo.h"
#include "TraversalNavLinkCustomComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UTraversalNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiCurrentTraversalVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> m_ExternalLinkedTraversalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELinkWithExternalBehavior m_eExternalLinkBehavior;
    
public:
    UTraversalNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

};

