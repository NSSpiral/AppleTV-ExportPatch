/* Runtime dump - NSPointerFunctions
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPointerFunctions : NSObject <NSCopying>

@property /* block */ id * hashFunction;
@property /* block */ id * isEqualFunction;
@property /* block */ id * sizeFunction;
@property /* block */ id * descriptionFunction;
@property /* block */ id * relinquishFunction;
@property /* block */ id * acquireFunction;
@property char usesStrongWriteBarrier;
@property char usesWeakReadAndWriteBarriers;

+ (NSPointerFunctions *)allocWithZone:(struct _NSZone *)arg0;
+ (NSPointerFunctions *)pointerFunctionsWithOptions:(unsigned int)arg0;

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
- (NSPointerFunctions *)copyWithZone:(struct _NSZone *)arg0;
- (NSPointerFunctions *)initWithOptions:(unsigned int)arg0;

@end
