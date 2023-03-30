#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardComponent -FallbackName=BlackboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "SCDialogComponent.generated.h"

class UBlackboardData;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCDIALOGMANAGERPLUGIN_API USCDialogComponent : public UBlackboardComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FGenericDialogEventDelegate OnGenericDialogEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_ContextualDb;
    
public:
    USCDialogComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_InitBlackBoardFromAsset(UBlackboardData* _data);
    
    
    // Fix for true pure virtual functions not being implemented
};

