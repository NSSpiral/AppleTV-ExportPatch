/* Runtime dump - DAWaiterWrapper
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAWaiterWrapper : NSObject
{
    <DADataclassLockWatcher> * _waiter;
    int _dataclasses;
    id _completionHandler;
    int _waiterNum;
}

@property (retain, nonatomic) <DADataclassLockWatcher> * waiter;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) int dataclasses;
@property (readonly, nonatomic) int waiterNum;

- (DAWaiterWrapper *)init;
- (NSString *)description;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (<DADataclassLockWatcher> *)waiter;
- (void)setWaiter:(<DADataclassLockWatcher> *)arg0;
- (int)waiterNum;
- (int)dataclasses;
- (void)setDataclasses:(int)arg0;

@end
