/* Runtime dump - BRDisplayManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRDisplayManager : BRSingleton
{
    CADisplay * _display;
    int _modeChangeFailureCount;
    NSTimer * _modeChangeFailureRetryTimer;
    char _computingAllModes;
    char _availableModesChangedDuringModeComputation;
    char _settingCurrentMode;
    NSMutableArray * _nonVirtualModes;
    NSMutableArray * _virtualModes;
    NSString * _displayIDMatchingModes;
    NSMutableSet * _seenEDIDs;
    NSMutableDictionary * _infoEDIDs;
}

+ (BRDisplayManager *)singleton;
+ (NSDictionary *)logConfiguration;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)logMessage:(NSString *)arg0;

- (void)resetEDIDList;
- (id)EDIDsToSubmit;
- (NSArray *)allPotentialModes;
- (id)uiStringForDisplayMode:(id)arg0;
- (char)currentModeIsAuto;
- (char)setUserPreferredMode:(id)arg0;
- (char)setCurrentModeToAuto;
- (char)displayModeSupported:(id)arg0;
- (void)_recordPeriodicDiagnostics;
- (NSString *)stringForDisplayMode:(id)arg0;
- (char)_setCurrentMode:(id)arg0;
- (void)_wakeDeviceIfNecessary;
- (void)_availableModesDidChange;
- (char)_currentModeIsValid;
- (void)_recordEDID;
- (void)dealloc;
- (BRDisplayManager *)init;
- (UIScreenMode *)currentMode;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)_displayModeDidChange;
- (void)_setDisplay:(NSObject *)arg0;
- (int)colorMode;
- (char)setColorMode:(int)arg0;
- (void)_computeAllModesForDisplay;
- (void)_setDisplayToDefaultMode;
- (NSObject *)_uniqueDisplayID;
- (void)_clearUserPreferredModeForCurrentDisplay;
- (void)_setDisplayToDefaultColorMode;
- (NSObject *)_userPreferredModeForCurrentDisplay;

@end
