/* Runtime dump - CKWaiterWrapper
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKWaiterWrapper : NSObject
{
    id _waiter;
    NSArray * _zoneIDs;
    id _completionHandler;
}

@property (retain, nonatomic) id waiter;
@property (retain, nonatomic) NSArray * zoneIDs;
@property (copy, nonatomic) id completionHandler;

- (NSString *)description;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (NSArray *)zoneIDs;
- (NSString *)CKPropertiesDescription;
- (<DADataclassLockWatcher> *)waiter;
- (void)setWaiter:(<DADataclassLockWatcher> *)arg0;
- (void)setZoneIDs:(NSArray *)arg0;

@end
