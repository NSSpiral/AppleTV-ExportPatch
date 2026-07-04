/* Runtime dump - GKCache
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCache : NSObject <GKCache>
{
    NSMutableDictionary * _dictionary;
    GKLinkedList * _cacheList;
    unsigned int _maxCount;
    unsigned int _count;
}

@property (retain, nonatomic) NSMutableDictionary * dictionary;
@property (retain, nonatomic) GKLinkedList * cacheList;
@property (nonatomic) unsigned int maxCount;
@property (nonatomic) unsigned int count;
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
- (GKLinkedList *)cacheList;
- (void)setCacheList:(GKLinkedList *)arg0;
- (GKCache *)initWithMaxCount:(unsigned int)arg0;
- (unsigned int)maxCount;
- (void)setDictionary:(NSMutableDictionary *)arg0;

@end
