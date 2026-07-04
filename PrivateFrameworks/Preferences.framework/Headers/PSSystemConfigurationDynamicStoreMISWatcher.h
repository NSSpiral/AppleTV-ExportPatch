/* Runtime dump - PSSystemConfigurationDynamicStoreMISWatcher
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreMISWatcher : NSObject
{
    struct __CFRunLoopSource * _scRunLoopSource;
    struct __SCDynamicStore * _scDynamicStore;
    int _misState;
    int _misReason;
}

+ (PSSystemConfigurationDynamicStoreMISWatcher *)sharedManager;

- (void)dealloc;
- (PSSystemConfigurationDynamicStoreMISWatcher *)init;
- (void)readMISState:(int *)arg0 andReason:(int *)arg1;
- (void)getMISState:(int *)arg0 andReason:(int *)arg1;
- (void)sendStateUpdate;

@end
