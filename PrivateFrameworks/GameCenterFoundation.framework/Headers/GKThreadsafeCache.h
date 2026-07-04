/* Runtime dump - GKThreadsafeCache
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKThreadsafeCache : NSObject <GKCache>
{
    NSMutableDictionary * _dictionary;
    NSMutableDictionary * _missingEntryQueues;
    GKLinkedList * _cacheList;
    unsigned int _maxCount;
    unsigned int _count;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (retain, nonatomic) NSMutableDictionary * dictionary;
@property (retain, nonatomic) GKLinkedList * cacheList;
@property (retain, nonatomic) NSMutableDictionary * missingEntryQueues;
@property (nonatomic) unsigned int maxCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setMaxCount:(unsigned int)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)removeAllObjects;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (NSMutableDictionary *)dictionary;
- (void)removeObjectForKey:(NSString *)arg0;
- (void)setCount:(unsigned int)arg0;
- (NSString *)internalObjectForKey:(NSString *)arg0;
- (void)internalSetObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (GKThreadsafeCache *)initWithName:(NSString *)arg0 maxCount:(unsigned int)arg1;
- (NSString *)objectForKey:(NSString *)arg0 withMissingHandler:(id /* block */)arg1;
- (NSMutableDictionary *)missingEntryQueues;
- (void)setMissingEntryQueues:(NSMutableDictionary *)arg0;
- (GKLinkedList *)cacheList;
- (void)setCacheList:(GKLinkedList *)arg0;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (unsigned int)maxCount;
- (void)setDictionary:(NSMutableDictionary *)arg0;

@end
