#include "ActionPlayOrderBTTask.h"

UActionPlayOrderBTTask::UActionPlayOrderBTTask() {
    this->NodeName = TEXT("Action Play Order");
    this->m_bNotifyEventOnFinishedOnlyOnSuccess = false;
    this->m_eOrderType = EOrderType::None;
    this->m_eActionState = EFightingActionState::None;
    this->m_bFailIfParamInvalid = true;
    this->m_bWaitForOrderEnd = true;
}


