#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIDebugSpawnerInstance.h"
#include "AIDebugSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIDebugSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDebugSpawnerInstance> m_Spawners;
    
    UAIDebugSpawnerComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnAIs(int32 _iCoun);
    
};

