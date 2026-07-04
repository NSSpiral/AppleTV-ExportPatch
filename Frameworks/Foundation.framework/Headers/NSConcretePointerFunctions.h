/* Runtime dump - NSConcretePointerFunctions
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePointerFunctions : NSPointerFunctions
{
    struct NSSlice slice;
}

+ (BOOL)initializeSlice:(struct NSSlice *)arg0 withOptions:(unsigned int)arg1;
+ (void)initializeBackingStore:(struct NSSlice *)arg0 sentinel:(char)arg1 compactable:(char)arg2;

- (void)setUsesStrongWriteBarrier:(char)arg0;
- (void)setUsesWeakReadAndWriteBarriers:(char)arg0;
- (/* block */ id *)sizeFunction;
- (/* block */ id *)hashFunction;
- (/* block */ id *)isEqualFunction;
- (/* block */ id *)descriptionFunction;
- (/* block */ id *)acquireFunction;
- (/* block */ id *)relinquishFunction;
- (char)usesStrongWriteBarrier;
- (char)usesWeakReadAndWriteBarriers;
- (void)setAcquireFunction:(/* block */ id *)arg0;
- (void)setRelinquishFunction:(/* block */ id *)arg0;
- (void)setHashFunction:(/* block */ id *)arg0;
- (void)setIsEqualFunction:(/* block */ id *)arg0;
- (void)setSizeFunction:(/* block */ id *)arg0;
- (void)setDescriptionFunction:(/* block */ id *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSConcretePointerFunctions *)copyWithZone:(struct _NSZone *)arg0;
- (NSConcretePointerFunctions *)initWithOptions:(unsigned int)arg0;

@end
