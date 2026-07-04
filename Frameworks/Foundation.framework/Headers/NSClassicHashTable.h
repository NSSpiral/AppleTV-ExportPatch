/* Runtime dump - NSClassicHashTable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSClassicHashTable : NSHashTable
{
    struct ? _callBacks;
    struct __CFBasicHash * _ht;
}

- (void *)getItem:(void *)arg0;
- (void)insertKnownAbsentItem:(void *)arg0;
- (void)getKeys:(void * *)arg0 count:(void *)arg1;
- (void)insertItem:(void *)arg0;
- (void)removeAllItems;
- (void)dealloc;
- (unsigned int)count;
- (NSClassicHashTable *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSClassicHashTable *)copy;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSArray *)allObjects;
- (void)removeItem:(void *)arg0;

@end
