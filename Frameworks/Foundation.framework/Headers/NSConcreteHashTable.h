/* Runtime dump - NSConcreteHashTable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteHashTable : NSHashTable
{
    struct NSSlice slice;
    unsigned int count;
    unsigned int capacity;
    unsigned int options;
    unsigned int mutations;
}

- (NSPointerFunctions *)pointerFunctions;
- (void)_initBlock;
- (void *)getItem:(void *)arg0;
- (void)insertKnownAbsentItem:(void *)arg0;
- (void)getKeys:(void * *)arg0 count:(void *)arg1;
- (NSConcreteHashTable *)initWithPointerFunctions:(NSPointerFunctions *)arg0 capacity:(unsigned int)arg1;
- (void)insertItem:(void *)arg0;
- (void)raiseCountUnderflowException;
- (unsigned int)rehashAround:(unsigned int)arg0;
- (void)assign:(unsigned int)arg0 key:(void *)arg1;
- (void)hashGrow;
- (void)rehash;
- (void)removeAllItems;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSConcreteHashTable *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSConcreteHashTable *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSConcreteHashTable *)copy;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSArray *)allObjects;
- (NSConcreteHashTable *)initWithOptions:(unsigned int)arg0 capacity:(unsigned int)arg1;
- (Class)classForCoder;
- (NSEnumerator *)objectEnumerator;
- (void)removeItem:(void *)arg0;
- (void)finalize;

@end
