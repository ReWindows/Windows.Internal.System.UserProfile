#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 4 member(s).
namespace winrt::Windows::Internal::System::UserProfile::implementation {
class OneDriveEngagementManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAreKnownFoldersPartiallyMovedAsync@OneDriveEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ
    WindissectOpaque GetAreKnownFoldersPartiallyMovedAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@OneDriveEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@SA?AU134567@XZ
    static WindissectOpaque GetDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@OneDriveEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@SA?AU134567@AEBUUser@467@@Z
    static WindissectOpaque GetForUser(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OneDriveEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@UEAA@XZ
    virtual ~OneDriveEngagementManager();
};
} // namespace winrt::Windows::Internal::System::UserProfile::implementation
