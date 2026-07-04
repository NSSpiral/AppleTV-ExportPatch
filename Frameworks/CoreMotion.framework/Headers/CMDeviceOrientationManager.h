/* Runtime dump - CMDeviceOrientationManager
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceOrientationManager : NSObject
{
    id _internal;
}

+ (void)dummySelector:(NSString *)arg0;
+ (void)initialize;

- (CMDeviceOrientationManager *)initPrivate;
- (void)deallocPrivate;
- (void)onDeviceOrientation:(struct Sample *)arg0;
- (void)onNotification:(NSNotification *)arg0;
- (void)stopDeviceOrientationUpdatesPrivate;
- (void)setDeviceOrientationCallbackModePrivate:(int)arg0;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (char)isDeviceOrientationAvailable;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)updateAggregateDictionaryPrivate;
- (char)isDeviceOrientationActive;
- (void)startDeviceOrientationUpdatesToQueue:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)stopDeviceOrientationUpdates;
- (id)deviceOrientationBlocking;
- (void)dealloc;
- (CMDeviceOrientationManager *)init;

@end
