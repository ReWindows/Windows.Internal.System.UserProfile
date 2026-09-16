#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 6 member(s).
class BrowserUtilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearUserBrowserAssociations@BrowserUtilities@@SAXXZ
    static void ClearUserBrowserAssociations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBrowserSearchProviderRecommended@BrowserUtilities@@SA_NPEBG0@Z
    static bool IsBrowserSearchProviderRecommended(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultBrowserInExclusionList@BrowserUtilities@@SA_NXZ
    static bool IsDefaultBrowserInExclusionList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBrowserDefaultSearchAsync@BrowserUtilities@@SA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@Uhstring@5@0@Z
    static WindissectOpaque ResetBrowserDefaultSearchAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMicrosoftDefaultBrowser@BrowserUtilities@@SAXAEBUhstring@winrt@@0@Z
    static void ResetMicrosoftDefaultBrowser(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunCommand@BrowserUtilities@@CAXPEBG0@Z
    static void RunCommand(unsigned short const *, unsigned short const *);
};
