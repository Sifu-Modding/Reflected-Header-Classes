#include "EnvQueryGenerator_ActorClassFromManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Actor -FallbackName=EnvQueryItemType_Actor

UEnvQueryGenerator_ActorClassFromManager::UEnvQueryGenerator_ActorClassFromManager() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->m_ActorClass = NULL;
}


