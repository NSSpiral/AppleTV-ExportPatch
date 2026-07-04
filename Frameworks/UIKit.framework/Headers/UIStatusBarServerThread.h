/* Runtime dump - UIStatusBarServerThread
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServerThread : NSThread
{
    NSMutableArray * _clientPorts;
    NSMutableArray * _publishers;
    struct ? _statusBarData;
    struct ? _composedStatusBarData;
    struct ? _overrides;
    struct __CFDictionary * _doubleHeightStatusStrings;
    struct __CFDictionary * _glowAnimationStates;
    NSMutableDictionary * _glowAnimationEndTimes;
    char _composedStatusBarDataValid;
}

- (NSObject *)_publisherForPort:(unsigned int)arg0;
- (void)_broadcastStatusBarDataWithActions:(int)arg0;
- (void)_broadcastStyleOverrides;
- (struct ? *)_statusBarData;
- (int)_styleOverrides;
- (void)_setAnimationEndTimesForOverrides:(int)arg0;
- (void)_removeAnimationEndTimesForOverrides:(int)arg0;
- (double)_glowAnimationEndTimeForStyle:(int)arg0;
- (void)main;
- (void)_addClient:(unsigned int)arg0;
- (void)_removeClient:(struct __CFMachPort *)arg0;
- (void)_removePublisher:(struct __CFMachPort *)arg0;
- (struct ? *)_statusBarOverrideData;
- (void)_postStatusBarData:(struct ? *)arg0 actions:(int)arg1;
- (void)_addStyleOverrides:(int)arg0 forPublisher:(MSPublisher *)arg1;
- (void)_removeStyleOverrides:(int)arg0 forPublisher:(MSPublisher *)arg1;
- (char)_glowAnimationStateForStyle:(int)arg0;
- (void)_postGlowAnimationState:(char)arg0 forStyle:(int)arg1;
- (NSObject *)_doubleHeightStatusStringForStyle:(int)arg0;
- (void)_postDoubleHeightStatus:(char *)arg0 forStyle:(int)arg1;
- (void)_postStatusBarOverrideData:(struct ? *)arg0;
- (char)_permanentizeStatusBarOverrideData;
- (void)_addStatusBarItem:(int)arg0 forPublisher:(MSPublisher *)arg1;
- (void)_removeStatusBarItem:(int)arg0 forPublisher:(MSPublisher *)arg1;

@end
