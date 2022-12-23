#include "AsyncTaskAiLaunchCombo.h"
#include "Templates/SubclassOf.h"

class UAsyncTaskAiLaunchCombo;
class UAIFightingComponent;
class UAIActionLaunchCombo;

UAsyncTaskAiLaunchCombo* UAsyncTaskAiLaunchCombo::BPF_AIAction_LaunchCombo(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, UAIActionLaunchCombo*& _action) {
    return NULL;
}

UAsyncTaskAiLaunchCombo::UAsyncTaskAiLaunchCombo() {
}

