/* Runtime dump - NSConcretePointerArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePointerArray : NSPointerArray
{
    struct NSSlice slice;
    unsigned int count;
    unsigned int capacity;
    unsigned int options;
    unsigned int mutations;
    char needsCompaction;
}

- (NSConcretePointerArray *)initWithPointerFunctions:(NSPointerFunctions *)arg0;
- (NSPointerFunctions *)pointerFunctions;
- (void *)pointerAtIndex:(unsigned int)arg0;
- (void)insertPointer:(void *)arg0 atIndex:(unsigned int)arg1;
- (void)replacePointerAtIndex:(unsigned int)arg0 withPointer:(void *)arg1;
- (void)_initBlock;
- (void)arrayGrow:(unsigned int)arg0;
- (void)_markNeedsCompaction;
- (unsigned int)indexOfPointer:(void *)arg0;
- (void)removePointer:(void *)arg0;
- (void)addPointer:(void *)arg0;
- (void)removePointerAtIndex:(unsigned int)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSConcretePointerArray *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSConcretePointerArray *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSConcretePointerArray *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (void)setCount:(unsigned int)arg0;
- (NSConcretePointerArray *)initWithOptions:(unsigned int)arg0;
- (void)finalize;
- (void)compact;

@end
