/* Runtime dump - NSPointerArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding>

@property (readonly, copy) NSPointerFunctions * pointerFunctions;
@property unsigned int count;

+ (NSPointerArray *)pointerArrayWithOptions:(unsigned int)arg0;
+ (NSPointerArray *)pointerArrayWithPointerFunctions:(NSPointerFunctions *)arg0;
+ (NSPointerArray *)pointerArrayWithStrongObjects;
+ (NSPointerArray *)pointerArrayWithWeakObjects;
+ (NSArray *)strongObjectsPointerArray;
+ (NSArray *)weakObjectsPointerArray;
+ (NSPointerArray *)allocWithZone:(struct _NSZone *)arg0;

- (void)tsu_enumerateNonNullPointersUsingBlock:(id /* block */)arg0;
- (NSObject *)bl_firstObject;
- (NSPointerArray *)initWithPointerFunctions:(NSPointerFunctions *)arg0;
- (NSPointerFunctions *)pointerFunctions;
- (void *)pointerAtIndex:(unsigned int)arg0;
- (void)insertPointer:(void *)arg0 atIndex:(unsigned int)arg1;
- (void)replacePointerAtIndex:(unsigned int)arg0 withPointer:(void *)arg1;
- (NSMutableArray *)mutableArray;
- (void)addPointer:(void *)arg0;
- (void)removePointerAtIndex:(unsigned int)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSPointerArray *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSPointerArray *)init;
- (NSArray *)allObjects;
- (NSPointerArray *)copyWithZone:(struct _NSZone *)arg0;
- (void)setCount:(unsigned int)arg0;
- (NSPointerArray *)initWithOptions:(unsigned int)arg0;
- (void)compact;

@end
