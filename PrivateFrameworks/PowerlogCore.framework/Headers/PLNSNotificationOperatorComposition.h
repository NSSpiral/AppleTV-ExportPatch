/* Runtime dump - PLNSNotificationOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLNSNotificationOperatorComposition : NSObject
{
    NSArray * _notificationNames;
    id _operatorBlock;
    PLOperator * _operator;
    NSObject<OS_dispatch_queue> * _workQueue;
    id _observer;
}

@property (retain) NSArray * notificationNames;
@property (readonly) NSString * notificationName;
@property (copy, nonatomic) id operatorBlock;
@property (weak) PLOperator * operator;
@property (retain) NSObject<OS_dispatch_queue> * workQueue;
@property (retain) id observer;

- (void)dealloc;
- (MCResourceProgressObserver *)observer;
- (void)setObserver:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (PLOperator *)operator;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (NSString *)notificationName;
- (PLNSNotificationOperatorComposition *)initWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg0 forNotifications:(HMDSecureSessionNotifications *)arg1 withBlock:(id /* block */)arg2;
- (NSArray *)notificationNames;
- (void)notificationCallback:(id /* block */)arg0;
- (void)setNotificationNames:(NSArray *)arg0;
- (void)listenForNotifications:(char)arg0;
- (PLNSNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forNotifications:(HMDSecureSessionNotifications *)arg1 withBlock:(id /* block */)arg2;
- (PLNSNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forNotification:(NSNotification *)arg1 withBlock:(id /* block */)arg2;
- (void)setOperator:(PLOperator *)arg0;
- (PLNSNotificationOperatorComposition *)initWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg0 forNotification:(NSNotification *)arg1 withBlock:(id /* block */)arg2;

@end
