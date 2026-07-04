/* Runtime dump - BRNetworkMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRNetworkMonitor : BRSingleton
{
    NSTimer * _networkDropTimer;
}

+ (BRNetworkMonitor *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_completeNetworkTransition;
- (void)handleSysConfigCallbackWithStore:(struct __SCDynamicStore *)arg0 changedKeys:(struct __CFArray *)arg1 info:(void *)arg2;

@end
