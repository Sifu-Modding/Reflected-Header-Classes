#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MessageManager.generated.h"

class UMessengerComponent;

UCLASS(Blueprintable)
class SIFU_API UMessageManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMessengerComponent* m_MessengerComponent;
    
public:
    UMessageManager();
};

