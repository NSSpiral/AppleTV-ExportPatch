/* Runtime dump - CLInUseAssertion
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLInUseAssertion : NSObject
{
    id _internal;
}

+ (NSString *)newAssertionForBundleIdentifier:(NSString *)arg0 withReason:(NSString *)arg1;
+ (NSBundle *)newAssertionForBundle:(NSObject *)arg0 withReason:(NSString *)arg1;

- (CLInUseAssertion *)initWithInternal:(MPSongInternal *)arg0;
- (void)dealloc;
- (void)invalidate;

@end
