/* Runtime dump - AVExternalProtectionMonitor
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalProtectionMonitor : NSObject
{
    AVExternalProtectionMonitorInternal * _monitor;
}

@property (readonly, nonatomic) int externalProtectionState;

- (int)externalProtectionState;
- (void)dealloc;
- (AVExternalProtectionMonitor *)init;

@end
