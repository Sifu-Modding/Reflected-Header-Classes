#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AIBlueprintHelperLibrary.generated.h"

class APawn;
class UNavigationPath;
class UAnimInstance;
class UObject;
class UBehaviorTree;
class AActor;
class AController;
class UBlackboardComponent;
class AAIController;
class UAIAsyncTaskBlueprintProxy;

UCLASS(BlueprintType)
class AIMODULE_API UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBlueprintHelperLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APawn* SpawnAIFromClass(UObject* WorldContextObject, TSubclassOf<APawn> PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleMoveToLocation(AController* Controller, const FVector& Goal);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleMoveToActor(AController* Controller, const AActor* Goal);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidAIRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidAILocation(FVector Location);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidAIDirection(FVector DirectionVector);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNextNavLinkIndex(const AController* Controller);
    
    UFUNCTION(BlueprintPure)
    static TArray<FVector> GetCurrentPathPoints(AController* Controller);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCurrentPathIndex(const AController* Controller);
    
    UFUNCTION(BlueprintPure)
    static UNavigationPath* GetCurrentPath(AController* Controller);
    
    UFUNCTION(BlueprintPure)
    static UBlackboardComponent* GetBlackboard(AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static AAIController* GetAIController(AActor* ControlledActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
    
};
