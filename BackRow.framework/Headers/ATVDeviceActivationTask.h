/* Runtime dump - ATVDeviceActivationTask
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVDeviceActivationDelegate;

@class ATVDeviceActivationAction;
@interface ATVDeviceActivationTask : ATVBackgroundTask <ATVDeviceActivationDelegate>
{
    char _processingActivation;
    ATVDeviceActivationAction * _action;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)scheduleOneShotActivationCheck;
+ (void)scheduleRepeatingActivationCheck;

- (void)activationSucceeded:(ATVDeviceActivationAction *)arg0;
- (void)activationFailedForAction:(ATVDeviceActivationAction *)arg0 withReason:(int)arg1 error:(NSError *)arg2;
- (void)dealloc;
- (char)perform;

@end
