/* Runtime dump - GKThreadsafeDictionary
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKThreadsafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _dictionary;
}

@property (retain, nonatomic) NSMutableDictionary * dictionary;

- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)removeAllObjects;
- (NSString *)description;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (NSMutableDictionary *)dictionary;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSArray *)allObjects;
- (GKThreadsafeDictionary *)initWithName:(NSString *)arg0;
- (void)writeToDictionary:(NSDictionary *)arg0;
- (void)readFromDictionary:(NSDictionary *)arg0;
- (NSString *)objectForKey:(NSString *)arg0 objectProducerBlock:(id /* block */)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg0;

@end
