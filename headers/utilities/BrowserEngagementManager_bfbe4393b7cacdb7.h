#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 3 member(s).
namespace winrt::Windows::Internal::System::UserProfile::factory_implementation {
class BrowserEngagementManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@BrowserEngagementManager@factory_implementation@UserProfile@System@Internal@Windows@winrt@@QEAA@XZ
    GetDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@BrowserEngagementManager@factory_implementation@UserProfile@System@Internal@Windows@winrt@@QEAA@AEBUUser@467@@Z
    GetForUser(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BrowserEngagementManager@factory_implementation@UserProfile@System@Internal@Windows@winrt@@UEBA?AW4TrustLevel@Foundation@67@XZ
    virtual int GetTrustLevel() const;
};
} // namespace winrt::Windows::Internal::System::UserProfile::factory_implementation
