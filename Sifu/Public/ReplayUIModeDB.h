#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Templates/SubclassOf.h"
#include "ReplayUIModeDB.generated.h"

class UReplayUIModeUserWidget;

UCLASS(Blueprintable)
class SIFU_API UReplayUIModeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UReplayUIModeUserWidget>> m_UIModeUserWidgets;
    
    UReplayUIModeDB();

};

