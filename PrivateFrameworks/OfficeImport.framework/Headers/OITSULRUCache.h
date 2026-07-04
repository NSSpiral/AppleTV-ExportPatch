/* Runtime dump - OITSULRUCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULRUCache : NSObject
{
    OITSUNoCopyDictionary * mData;
    NSMutableArray * mOrderedKeys;
    unsigned int mMax;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned int maxSize;

- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (unsigned int)maxSize;
- (NSArray *)allValues;
- (void)p_removeOldestObject;
- (OITSULRUCache *)initWithMaxSize:(unsigned int)arg0;
- (void)setEvictionCallbackTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (void)clearEvictionCallbackTarget;

@end
