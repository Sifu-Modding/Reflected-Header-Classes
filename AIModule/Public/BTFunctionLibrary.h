#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlackboardKeySelector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BTFunctionLibrary.generated.h"

class AActor;
class UBTNode;
class UBlackboardComponent;
class UObject;
class UBehaviorTreeComponent;

UCLASS(BlueprintType)
class AIMODULE_API UBTFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBTFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopUsingExternalEvent(UBTNode* NodeOwner);
    
    UFUNCTION(BlueprintCallable)
    static void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FName Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);
    
    UFUNCTION(BlueprintPure)
    static UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);
    
    UFUNCTION(BlueprintPure)
    static UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);
    
    UFUNCTION(BlueprintPure)
    static FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static FString GetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static FName GetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static int32 GetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static float GetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static UClass* GetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static bool GetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlackboardValue(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
};

