#include "DeflectImpactHelpers.h"

UDeflectImpactHelpers::UDeflectImpactHelpers() {
}

FAppliedHitImpact UDeflectImpactHelpers::BPF_MakeAppliedHitImpact(const FHitImpact& _hitImpact, const AFightingCharacter* _defender) {
    return FAppliedHitImpact{};
}

FAppliedDeflectImpact UDeflectImpactHelpers::BPF_MakeAppliedDeflectImpact(const FDeflectImpact& _hitImpact, const AFightingCharacter* _defender, bool _bParriable) {
    return FAppliedDeflectImpact{};
}


