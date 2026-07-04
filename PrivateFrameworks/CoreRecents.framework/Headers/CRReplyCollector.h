/* Runtime dump - CRReplyCollector
 * Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRReplyCollector : NSMutableDictionary
{
    NSConditionLock * _lock;
    NSMutableDictionary * _dictionary;
}

- (char)tryLock;
- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (NSArray *)objectsForKeys:(NSArray *)arg0 notFoundMarker:(NSObject *)arg1;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (CRReplyCollector *)init;
- (void)removeAllObjects;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(NSString *)arg0;
- (void)lock;
- (void)unlock;
- (NSEnumerator *)objectEnumerator;
- (void)addEntriesFromDictionary:(NSDictionary *)arg0;
- (NSEnumerator *)keyEnumerator;
- (void)removeObjectsForKeys:(NSArray *)arg0;
- (unsigned int)condition;
- (CRReplyCollector *)initWithCondition:(unsigned int)arg0;
- (char)tryLockWhenCondition:(int)arg0;
- (void)unlockWithCondition:(unsigned int)arg0;
- (char)lockWhenCondition:(unsigned int)arg0 beforeDate:(NSDate *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg0;

@end
