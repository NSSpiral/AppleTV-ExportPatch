/* Runtime dump - MCTimerContext
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTimerContext : NSObject
{
    char _enabled;
}

@property (nonatomic) char enabled;

- (MCTimerContext *)init;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void)disable;

@end
