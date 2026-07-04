/* Runtime dump - IMMultiDict
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMultiDict : NSObject
{
    NSMutableDictionary * _dictionary;
    unsigned int _count;
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) NSArray * allKeys;
@property (retain, nonatomic) NSMutableDictionary * dictionary;

- (unsigned int)countForKey:(NSString *)arg0;
- (NSArray *)allKeys;
- (void)dealloc;
- (unsigned int)count;
- (IMMultiDict *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (NSMutableDictionary *)dictionary;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (void)pushObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)peekObjectForKey:(NSString *)arg0;
- (NSString *)popObjectForKey:(NSString *)arg0;
- (void)enqueueObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)headObjectForKey:(NSString *)arg0;
- (NSString *)dequeueObjectForKey:(NSString *)arg0;
- (NSString *)objectsForKey:(NSString *)arg0;
- (void)removeObjectsForKey:(NSString *)arg0;
- (void)removeObject:(struct objc_method *)arg0 forKey:(NSString *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg0;

@end
