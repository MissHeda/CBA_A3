// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE! ok
// -----------------------------------------------------------------------------

class CfgFunctions {
    class CBA {
        class Diagnostic {
            PATHTO_FNC(debug);
            PATHTO_FNC(error);
            PATHTO_FNC(log);
            PATHTO_FNC(test);
        };
        class ProjectileTracking {
            PATHTO_FNC(addUnitTrackProjectiles);
            PATHTO_FNC(removeUnitTrackProjectiles);
        };
    };
    class A3 {
        class Debug {
            class isDebugConsoleAllowed {
                file = QPATHTOF(fnc_isDebugConsoleAllowed.sqf);
            };
        };
    };
};
