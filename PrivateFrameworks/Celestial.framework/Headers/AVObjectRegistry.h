/* Runtime dump - AVObjectRegistry
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVObjectRegistry : NSObject
{
    NSHashTable * _registeredObjects;
    NSRecursiveLock * _lock;
}

+ (AVObjectRegistry *)defaultObjectRegistry;

- (void)dealloc;
- (AVObjectRegistry *)init;
- (void)registerObject:(NSObject *)arg0;
- (char)safeRetainObject:(NSObject *)arg0;
- (void)safeInvokeWithDescription:(NSString *)arg0;
- (void)safeInvokeWithDescriptionDelayed:(id)arg0;
- (void)safePerformOnMainThreadTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2;
- (void)safePostDelayedNotificationFromMainThreadTarget:(NSObject *)arg0 name:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)safePerformOnThread:(NSObject *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 object:(NSObject *)arg3;
- (void)registerObjectForSafeRetain:(id)arg0;
- (void)unregisterObject:(NSObject *)arg0;
- (void)safePerformTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2 delay:(double)arg3;
- (void)safePerformOnMainThreadTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2 delay:(double)arg3;
- (void)safePostNotificationFromMainThreadTarget:(NSObject *)arg0 name:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)safePostNotificationFromThread:(NSObject *)arg0 target:(NSObject *)arg1 name:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)safePostDelayedNotificationFromThread:(NSObject *)arg0 target:(NSObject *)arg1 name:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@end
