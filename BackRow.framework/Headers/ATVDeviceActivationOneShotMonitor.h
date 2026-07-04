/* Runtime dump - ATVDeviceActivationOneShotMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol ATVDeviceActivationDelegate;

@class ATVDeviceActivationAction;
@interface ATVDeviceActivationOneShotMonitor : BRSingleton <ATVDeviceActivationDelegate>
{
    ATVDeviceActivationAction * _action;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVDeviceActivationOneShotMonitor *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)activationSucceeded:(ATVDeviceActivationAction *)arg0;
- (void)activationFailedForAction:(ATVDeviceActivationAction *)arg0 withReason:(int)arg1 error:(NSError *)arg2;
- (void)performOneShotActivation;

@end
