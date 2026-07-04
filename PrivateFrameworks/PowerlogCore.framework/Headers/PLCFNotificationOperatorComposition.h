/* Runtime dump - PLCFNotificationOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCFNotificationOperatorComposition : NSObject
{
    char _listeningForNotifications;
    char _isStateRequired;
    NSString * _notificationName;
    id _operatorBlock;
    PLOperator * _operator;
    NSObject<OS_dispatch_queue> * _workQueue;
    int _stateToken;
}

@property (retain) NSString * notificationName;
@property (copy, nonatomic) id operatorBlock;
@property char listeningForNotifications;
@property (weak) PLOperator * operator;
@property (retain) NSObject<OS_dispatch_queue> * workQueue;
@property char isStateRequired;
@property int stateToken;

- (void)dealloc;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (PLOperator *)operator;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (PLCFNotificationOperatorComposition *)initWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg0 forNotification:(NSNotification *)arg1 requireState:(char)arg2 withBlock:(id /* block */)arg3;
- (char)listeningForNotifications;
- (void)setListeningForNotifications:(char)arg0;
- (char)isStateRequired;
- (NSString *)notificationName;
- (void)setNotificationName:(NSString *)arg0;
- (void)setIsStateRequired:(char)arg0;
- (int)stateToken;
- (void)setStateToken:(int)arg0;
- (PLCFNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forNotification:(NSNotification *)arg1 requireState:(char)arg2 withBlock:(id /* block */)arg3;
- (char)listenForNotifications:(char)arg0;
- (void)setOperator:(PLOperator *)arg0;

@end
