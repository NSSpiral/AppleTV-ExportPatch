/* Runtime dump - CLInUseAssertionInternal
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLInUseAssertionInternal : NSObject
{
    NSString * fBundlePath;
    NSString * fBundleIdentifier;
    NSString * fReason;
    NSObject<OS_dispatch_queue> * fReplyQueue;
    struct CLConnectionClient * fLocationdConnection;
}

- (CLInUseAssertionInternal *)initWithBundle:(NSBundle *)arg0 bundleID:(NSString *)arg1 reason:(NSString *)arg2;
- (void)invalidate;

@end
