/* Runtime dump - SSDistributedNotificationCenterObserver
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDistributedNotificationCenterObserver : NSObject
{
    id _block;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _name;
}

@property (readonly, nonatomic) id block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (readonly, nonatomic) NSString * name;

- (void)dealloc;
- (NSString *)name;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (id /* block */)block;
- (SSDistributedNotificationCenterObserver *)initWithName:(NSString *)arg0 queue:(NSObject *)arg1 block:(id /* block */)arg2;

@end
