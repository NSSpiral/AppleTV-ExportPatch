/* Runtime dump - GateKeeper
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface GateKeeper : CHLogger
{
    char _hasDeviceBeenUnlockedSinceBoot;
}

@property char hasDeviceBeenUnlockedSinceBoot;

+ (GateKeeper *)instance;

- (GateKeeper *)init;
- (char)hasDeviceBeenUnlockedSinceBoot;
- (void)setupMobileKeyBag;
- (void)cacheUnlockSinceBootState;
- (void)setHasDeviceBeenUnlockedSinceBoot:(char)arg0;
- (void)reFetch;

@end
