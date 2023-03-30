#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent
#include "SCCustomNavLink.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCCustomNavLink : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    USCCustomNavLink();
};

