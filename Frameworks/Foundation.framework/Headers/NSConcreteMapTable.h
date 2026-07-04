/* Runtime dump - NSConcreteMapTable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMapTable : NSMapTable
{
    struct NSSlice keys;
    struct NSSlice values;
    unsigned int count;
    unsigned int capacity;
    unsigned int keyOptions;
    unsigned int valueOptions;
    unsigned int mutations;
    int growLock;
    BOOL shouldRehash;
}

- (void)_initBlock;
- (void)raiseCountUnderflowException;
- (unsigned int)rehashAround:(unsigned int)arg0;
- (void)rehash;
- (NSPointerFunctions *)keyPointerFunctions;
- (NSPointerFunctions *)valuePointerFunctions;
- (void)setItem:(void *)arg0 forAbsentKey:(void)arg1;
- (void)setItem:(void *)arg0 forKnownAbsentKey:(void)arg1;
- (void *)existingItemForSetItem:(void *)arg0 forAbsentKey:(void)arg1;
- (void)replaceItem:(void *)arg0 forExistingKey:(void)arg1;
- (char)mapMember:(void *)arg0 originalKey:(void)arg1 value:(void * *)arg2;
- (unsigned int)getKeys:(void * *)arg0 values:(void *)arg1;
- (unsigned int)realCount;
- (void)_setBackingStore;
- (void)assign:(unsigned int)arg0 key:(void *)arg1 value:(void)arg2 isNew:(void *)arg3;
- (void)grow;
- (void)checkCount:(char *)arg0;
- (void)zeroPairedEntries;
- (char)containsKeys:(void * *)arg0 values:(void *)arg1 count:(void * *)arg2;
- (void)removeAllItems;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSConcreteMapTable *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSConcreteMapTable *)init;
- (NSConcreteMapTable *)copy;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)removeObjectForKey:(NSString *)arg0;
- (Class)classForCoder;
- (NSEnumerator *)objectEnumerator;
- (NSConcreteMapTable *)initWithKeyOptions:(unsigned int)arg0 valueOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (NSConcreteMapTable *)initWithKeyPointerFunctions:(NSPointerFunctions *)arg0 valuePointerFunctions:(NSPointerFunctions *)arg1 capacity:(unsigned int)arg2;
- (id)dump;
- (void)finalize;

@end
