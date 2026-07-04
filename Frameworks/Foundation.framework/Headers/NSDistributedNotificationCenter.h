/* Runtime dump - NSDistributedNotificationCenter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDistributedNotificationCenter : NSNotificationCenter

@property char suspended;

+ (NSObject *)notificationCenterForType:(NSObject *)arg0;
+ (NSDistributedNotificationCenter *)defaultCenter;

- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 name:(NSString *)arg2 object:(NSObject *)arg3 suspensionBehavior:(unsigned int)arg4;
- (NSString *)addObserverForName:(NSString *)arg0 object:(NSObject *)arg1 suspensionBehavior:(unsigned int)arg2 queue:(NSObject *)arg3 usingBlock:(id /* block */)arg4;
- (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2 options:(unsigned int)arg3;
- (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2 deliverImmediately:(char)arg3;
- (char)suspended;
- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 name:(NSString *)arg2 object:(NSObject *)arg3;
- (NSDistributedNotificationCenter *)init;
- (void)removeObserver:(NSObject *)arg0 name:(NSString *)arg1 object:(NSObject *)arg2;
- (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
- (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1;
- (NSString *)addObserverForName:(NSString *)arg0 object:(NSObject *)arg1 queue:(NSObject *)arg2 usingBlock:(id /* block */)arg3;
- (void)postNotification:(NSNotification *)arg0;
- (void)setSuspended:(char)arg0;

@end
