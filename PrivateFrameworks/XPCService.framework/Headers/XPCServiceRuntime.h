/* Runtime dump - XPCServiceRuntime
 * Image: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

@interface XPCServiceRuntime : NSObject
{
    NSDictionary * _entitlements;
}

+ (XPCServiceRuntime *)defaultRuntime;

- (void)dealloc;
- (XPCServiceRuntime *)init;
- (void)_initializeEntitlements;
- (NSString *)entitlementForKey:(NSString *)arg0;

@end
