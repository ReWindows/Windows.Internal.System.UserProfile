#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 2 member(s).
namespace winrt::Windows::Web::Http {
class HttpRequestMessage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HttpRequestMessage@Http@Web@Windows@winrt@@QEAA@AEBUHttpMethod@1234@AEBUUri@Foundation@34@@Z
    HttpRequestMessage(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HttpRequestMessage@Http@Web@Windows@winrt@@QEAA@XZ
    ~HttpRequestMessage();
};
} // namespace winrt::Windows::Web::Http
