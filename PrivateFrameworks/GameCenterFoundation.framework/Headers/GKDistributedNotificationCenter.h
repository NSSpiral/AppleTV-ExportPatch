/* Runtime dump - GKDistributedNotificationCenter
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDistributedNotificationCenter : NSObject <NSXPCListenerDelegate>
{
    id _internal;
}

@property (retain) CPDistributedNotificationCenter * notificationCenter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GKDistributedNotificationCenter *)defaultCenter;

- (void)dealloc;
- (GKDistributedNotificationCenter *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 name:(NSString *)arg2;
- (void)setNotificationCenter:(CPDistributedNotificationCenter *)arg0;
- (CPDistributedNotificationCenter *)notificationCenter;
- (void)postNotificationName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)postNotificationName:(NSString *)arg0 userInfo:(NSDictionary *)arg1 toBundleIdentifier:(NSString *)arg2;
- (void)postNotificationName:(NSString *)arg0;

@end
