#include "SVONNavigationComponent.h"

USVONNavigationComponent::USVONNavigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugPrintCurrentPosition = false;
    this->DebugPrintMortonCodes = false;
    this->DebugDrawOpenNodes = false;
    this->UseUnitCost = false;
    this->UnitCost = 10.00f;
    this->EstimateWeight = 1.00f;
    this->NodeSizeCompensation = 1.00f;
    this->PathCostType = ESVONPathCostType::EUCLIDEAN;
}


