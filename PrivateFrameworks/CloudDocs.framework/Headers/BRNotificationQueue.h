/* Runtime dump - BRNotificationQueue
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNotificationQueue : NSObject <NSFastEnumeration>
{
    NSMutableArray * _array;
    NSMutableArray * _callbacks;
    NSMutableDictionary * _index;
    unsigned int _dequeued;
}

@property (readonly, nonatomic) unsigned int count;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (BRNotificationQueue *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (void)_filterIndex:(NSObject *)arg0;
- (void)addNotification:(NSNotification *)arg0 asDead:(char)arg1;
- (void)addDequeueCallback:(id /* block */)arg0;
- (void)processDequeueCallbacks;
- (void)dequeue:(unsigned int)arg0 block:(id /* block */)arg1;

@end
