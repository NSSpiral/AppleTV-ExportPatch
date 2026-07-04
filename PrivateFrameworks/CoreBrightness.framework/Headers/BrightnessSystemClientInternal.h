/* Runtime dump - BrightnessSystemClientInternal
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClientInternal : NSThread
{
    NSXPCConnection * _connection;
    id _remote;
    BrightnessSystemClientExportedObj * exportedObj;
    BOOL _initializationComplete;
    NSTimer * _timer;
    NSArray * clientProperties;
    BOOL shouldKeepRunning;
}

- (BrightnessSystemClientInternal *)init;
- (void)main;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)registerNotificationBlock:(id /* block */)arg0;
- (void)timerFire:(id)arg0;
- (void)destroyClient;
- (void)registerNotificationBlock:(id /* block */)arg0 forProperties:(/* block */ id)arg1;
- (NSString *)copyPropertyForKey:(NSString *)arg0;

@end
