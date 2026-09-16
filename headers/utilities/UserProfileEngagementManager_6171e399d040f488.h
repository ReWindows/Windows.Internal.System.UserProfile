#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 31 member(s).
namespace winrt::Windows::Internal::System::UserProfile::implementation {
class UserProfileEngagementManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEngagementAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@W4UserProfileEngagementItem@34567@@Z
    WindissectOpaque CheckEngagementAsync(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@SA?AU134567@XZ
    static WindissectOpaque GetDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@SA?AU134567@AEBUUser@467@@Z
    static WindissectOpaque GetForUser(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFastCheckEngagement@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA_NAEBW4UserProfileEngagementItem@34567@AEAW4UserProfileEngagementStatus@34567@@Z
    bool TryFastCheckEngagement(int const &, int &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA@XZ
    UserProfileEngagementManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@UEAA@XZ
    virtual ~UserProfileEngagementManager();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserEngagementManager@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$com_ptr@UBrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@@7@XZ
    WindissectOpaque GetBrowserEngagementManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommercialBackupPolicyState@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AW4WindowsBackupPolicyState@234567@XZ
    int GetCommercialBackupPolicyState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeCloudUrlAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@Uhstring@winrt@@@Foundation@67@Uhstring@7@@Z
    WindissectOpaque GetHomeCloudUrlAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSovereignCloudStatus@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AW4SovereignCheckResult@234567@Uhstring@7@@Z
    int GetSovereignCloudStatus(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackupDefaultEnabledForAADAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ
    WindissectOpaque IsBackupDefaultEnabledForAADAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDJorAADJUser@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool IsDJorAADJUser();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGuestUser@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool IsGuestUser();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHybridOrAADUser@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool IsHybridOrAADUser();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMsaAllowedByPolicy@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool IsMsaAllowedByPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMsaAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ
    WindissectOpaque IsMsaAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOsVersionEligible@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool IsOsVersionEligible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRegionRestricted@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool IsRegionRestricted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSecondaryMsaAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ
    WindissectOpaque IsSecondaryMsaAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupActivitiesHistorySharing@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AW4UserProfileEngagementStatus@34567@XZ
    int LookupActivitiesHistorySharing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCommercialBackupAccountAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupCommercialBackupAccountAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupMicrosoftRewardsAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupMicrosoftRewardsAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupMobileExperiencePairedPhoneAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupMobileExperiencePairedPhoneAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupMsaBackupAccountAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupMsaBackupAccountAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupMsaPrimaryAccountAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupMsaPrimaryAccountAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupOneDriveConnectionAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupOneDriveConnectionAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupOneDriveKnownFolderMoveAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupOneDriveKnownFolderMoveAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupUpToDateWindows@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AW4UserProfileEngagementStatus@34567@XZ
    int LookupUpToDateWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupWindowsHelloAsync@UserProfileEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque LookupWindowsHelloAsync();
};
} // namespace winrt::Windows::Internal::System::UserProfile::implementation
