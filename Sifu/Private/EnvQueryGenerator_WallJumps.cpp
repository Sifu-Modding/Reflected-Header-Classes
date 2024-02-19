#include "EnvQueryGenerator_WallJumps.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EnvQueryItemType_WallJump.h"

UEnvQueryGenerator_WallJumps::UEnvQueryGenerator_WallJumps() {
    this->ItemType = UEnvQueryItemType_WallJump::StaticClass();
    this->m_RequiredComponentClass = NULL;
    this->m_SearchedActorClass = AActor::StaticClass();
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
}


