/* Runtime dump - BRCTreeEnumerator
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTreeEnumerator : NSObject
{
    BRCLocalContainer * _container;
    BRCAccountSession * _session;
    id _handler;
    BRCItemID * _parentID;
    unsigned int _rowID;
    NSMutableIndexSet * _seen;
    NSMutableIndexSet * _toVisit;
    NSObject<OS_dispatch_group> * _group;
    id _whenDone;
}

@property (copy, nonatomic) id whenDone;

- (void)done;
- (void).cxx_destruct;
- (BRCTreeEnumerator *)initWithContainer:(BRCLocalContainer *)arg0 handler:(id /* block */)arg1;
- (void)enumerateBelow:(id)arg0 group:(NSObject<OS_dispatch_group> *)arg1;
- (void)_scheduleAsync;
- (void)_iterate:(unsigned int)arg0;
- (void)_iterateWithoutParent:(unsigned int)arg0;
- (void)_visitNewParent:(unsigned int)arg0;
- (id)whenDone;
- (void)setWhenDone:(id)arg0;

@end
