#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 3 member(s).
namespace winrt::CloudExperienceHostAPI::factory_implementation {
class BrowserEngagementPlatform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BrowserEngagementPlatform@factory_implementation@CloudExperienceHostAPI@winrt@@UEBA?AW4TrustLevel@Foundation@Windows@4@XZ
    virtual int GetTrustLevel() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?abi_enter@BrowserEngagementPlatform@factory_implementation@CloudExperienceHostAPI@winrt@@QEBAXXZ
    void abi_enter() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityForClient@BrowserEngagementPlatform@factory_implementation@CloudExperienceHostAPI@winrt@@AEBAXXZ
    void CheckCapabilityForClient() const;
};
} // namespace winrt::CloudExperienceHostAPI::factory_implementation
