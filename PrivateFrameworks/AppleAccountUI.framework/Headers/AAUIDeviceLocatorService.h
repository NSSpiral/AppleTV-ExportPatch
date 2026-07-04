/* Runtime dump - AAUIDeviceLocatorService
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceLocatorService : NSObject
{
    unsigned int _lastKnownState;
    char _hasAttemptedToFetchState;
    char _wantsToEnable;
    NSObject<OS_dispatch_queue> * _stateUpdateQueue;
}

+ (AAUIDeviceLocatorService *)sharedInstance;

- (AAUIDeviceLocatorService *)init;
- (char)isEnabled;
- (void).cxx_destruct;
- (void)_updateStateAndNotify:(char)arg0;
- (char)isChangingState;
- (char)isStateKnown;
- (void)enableInContext:(unsigned int)arg0;
- (void)disableInContext:(unsigned int)arg0 withWipeToken:(NSString *)arg1;
- (void)setShouldEnable:(char)arg0;
- (char)shouldEnable;

@end
