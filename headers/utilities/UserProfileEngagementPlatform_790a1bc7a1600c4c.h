#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 4 member(s).
namespace winrt::CloudExperienceHostAPI::implementation {
class UserProfileEngagementPlatform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEngagementAsync@UserProfileEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@SA?AU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@4@Uhstring@4@@Z
    static WindissectOpaque CheckEngagementAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFastCheckEngagement@UserProfileEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@SA_NAEBUhstring@4@AEAU54@@Z
    static bool TryFastCheckEngagement(WindissectOpaque const &, WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupItemFromString@UserProfileEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@CA?AW4UserProfileEngagementItem@UserProfile@System@Internal@Windows@4@AEBUhstring@4@@Z
    static int LookupItemFromString(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupStringFromStatus@UserProfileEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@CA?AUhstring@4@AEBW4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@4@@Z
    static WindissectOpaque LookupStringFromStatus(int const &);
};
} // namespace winrt::CloudExperienceHostAPI::implementation
