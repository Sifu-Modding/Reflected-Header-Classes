#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DialogActionArrayContainer.h"
#include "SCDialogRealOverrideDb.generated.h"

UCLASS(Blueprintable)
class SCDIALOGMANAGERPLUGIN_API USCDialogRealOverrideDb : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogActionArrayContainer> m_FirstLinesActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogActionArrayContainer m_LastLineActions;
    
    USCDialogRealOverrideDb();

};

