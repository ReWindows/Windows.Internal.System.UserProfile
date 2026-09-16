#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 18 member(s).
namespace winrt::Windows::Internal::System::UserProfile::implementation {
class BrowserEngagementManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA@XZ
    BrowserEngagementManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBrowserDeclutterAsync@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque CheckBrowserDeclutterAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBrowserSearchEngineAsync@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque CheckBrowserSearchEngineAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDefaultBrowserIdealAsync@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4UserProfileEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque CheckDefaultBrowserIdealAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserEngagementStatusAsync@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UBrowserEngagementStatus@UserProfile@System@Internal@Windows@winrt@@@Foundation@67@XZ
    WindissectOpaque GetBrowserEngagementStatusAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@SA?AU134567@XZ
    static WindissectOpaque GetDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@SA?AU134567@AEBUUser@467@@Z
    static WindissectOpaque GetForUser(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBrowserSearchEngineAsync@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUhstring@7@@Z
    WindissectOpaque ResetBrowserSearchEngineAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDefaultBrowserAsync@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUhstring@7@@Z
    WindissectOpaque ResetDefaultBrowserAsync(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@UEAA@XZ
    virtual ~BrowserEngagementManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBrowserDeclutterIdeal@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool CheckBrowserDeclutterIdeal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBrowserStatus@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AW4UserProfileEngagementStatus@34567@P81234567@EAA_NXZ@Z
    int CheckBrowserStatus(bool ( ::winrt::Windows::Internal::System::UserProfile::implementation::BrowserEngagementManager::*)(void));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDefaultBrowserIdeal@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool CheckDefaultBrowserIdeal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSearchEngineIdeal@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NXZ
    bool CheckSearchEngineIdeal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserSettings@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA?AUBrowserEngagementStatus@34567@XZ
    WindissectOpaque GetBrowserSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidPartnerCode@BrowserEngagementManager@implementation@UserProfile@System@Internal@Windows@winrt@@AEAA_NAEBUhstring@7@@Z
    bool IsValidPartnerCode(WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::System::UserProfile::implementation
