/* Runtime dump - MSVDistributedNotificationObserver
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVDistributedNotificationObserver : NSObject
{
    int _notifyToken;
    NSString * _distributedName;
    NSString * _localName;
    NSObject<OS_dispatch_queue> * _queue;
    <MSVDistributedNotificationObserverDelegate> * _delegate;
    NSDictionary * _userInfoForLocalNotification;
}

@property (readonly, nonatomic) NSString * distributedName;
@property (readonly, nonatomic) NSString * localName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (weak, nonatomic) <MSVDistributedNotificationObserverDelegate> * delegate;
@property (copy, nonatomic) NSDictionary * userInfoForLocalNotification;

+ (NSString *)observerWithDistributedName:(NSString *)arg0 localName:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;

- (void)dealloc;
- (void)setDelegate:(<MSVDistributedNotificationObserverDelegate> *)arg0;
- (MSVDistributedNotificationObserver *)init;
- (<MSVDistributedNotificationObserverDelegate> *)delegate;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSString *)localName;
- (NSDictionary *)userInfoForLocalNotification;
- (void)_handleDistributedNotificationWithNotifyToken:(int)arg0;
- (void)setUserInfoForLocalNotification:(NSDictionary *)arg0;
- (MSVDistributedNotificationObserver *)initWithDistributedName:(NSString *)arg0 localName:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSString *)distributedName;
- (int)notifyToken;

@end
