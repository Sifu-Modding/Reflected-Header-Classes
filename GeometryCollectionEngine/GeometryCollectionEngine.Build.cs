using UnrealBuildTool;

public class GeometryCollectionEngine : ModuleRules {
    public GeometryCollectionEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "ChaosSolverEngine",
            "Core",
            "CoreUObject",
            "Engine",
            "FieldSystemEngine",
            "PhysicsCore",
        });
    }
}
