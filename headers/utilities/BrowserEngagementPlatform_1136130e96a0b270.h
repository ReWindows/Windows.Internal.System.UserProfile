#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 3 member(s).
namespace winrt::CloudExperienceHostAPI::implementation {
class BrowserEngagementPlatform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeclutterBrowsersAfterUserConsentAsync@BrowserEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@Windows@4@XZ
    static WindissectOpaque DeclutterBrowsersAfterUserConsentAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinAndSetDefaultMicrosoftBrowserAsync@BrowserEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@Windows@4@XZ
    static WindissectOpaque PinAndSetDefaultMicrosoftBrowserAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBrowserSearchEngineAsync@BrowserEngagementPlatform@implementation@CloudExperienceHostAPI@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@Windows@4@AEBUhstring@4@@Z
    static WindissectOpaque ResetBrowserSearchEngineAsync(WindissectOpaque const &);
};
} // namespace winrt::CloudExperienceHostAPI::implementation
