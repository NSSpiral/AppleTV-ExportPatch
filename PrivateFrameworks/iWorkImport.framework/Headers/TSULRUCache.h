/* Runtime dump - TSULRUCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULRUCache : NSObject
{
    TSUNoCopyDictionary * mData;
    NSMutableArray * mOrderedKeys;
    unsigned int mMax;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned int maxSize;
@property (readonly, nonatomic) NSArray * allValues;
@property (readonly, nonatomic) NSArray * allKeys;

- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (unsigned int)maxSize;
- (NSArray *)allValues;
- (void)p_removeOldestObject;
- (TSULRUCache *)initWithMaxSize:(unsigned int)arg0;
- (void)setEvictionCallbackTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (void)clearEvictionCallbackTarget;

@end
