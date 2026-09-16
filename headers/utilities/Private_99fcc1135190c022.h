#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Internal.System.UserProfile.dll by Windissect. 3 member(s).
namespace BrowserChannels {
class Private {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstalledInfo@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAG1KPEAUInfo@2@@Z
    bool GetInstalledInfo(HKEY__*, unsigned short *, unsigned short *, unsigned long, ::BrowserChannels::Info *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z
    bool ReadExePath(HKEY__*, unsigned short *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z
    bool ReadRegStringValue(HKEY__*, unsigned short const *, unsigned short *, unsigned long);
};
} // namespace BrowserChannels
