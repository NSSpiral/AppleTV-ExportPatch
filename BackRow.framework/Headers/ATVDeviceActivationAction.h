/* Runtime dump - ATVDeviceActivationAction
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVDeviceActivationAction : NSObject
{
    <ATVDeviceActivationDelegate> * _delegate;
}

- (void)_activationFailedWithReason:(int)arg0 error:(NSError *)arg1;
- (void)_activationSucceeded;
- (void)start;
- (ATVDeviceActivationAction *)initWithDelegate:(<ATVDeviceActivationDelegate> *)arg0;

@end
