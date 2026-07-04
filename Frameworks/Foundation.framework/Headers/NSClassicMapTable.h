/* Runtime dump - NSClassicMapTable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSClassicMapTable : NSMapTable
{
    struct ? _keyCallBacks;
    struct ? _valueCallBacks;
    struct __CFBasicHash * _ht;
}

- (void)setItem:(void *)arg0 forKnownAbsentKey:(void)arg1;
- (void *)existingItemForSetItem:(void *)arg0 forAbsentKey:(void)arg1;
- (char)mapMember:(void *)arg0 originalKey:(void)arg1 value:(void * *)arg2;
- (unsigned int)getKeys:(void * *)arg0 values:(void *)arg1;
- (void)removeAllItems;
- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (NSClassicMapTable *)init;
- (NSClassicMapTable *)copy;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSArray *)allValues;

@end
