/* Runtime dump - TSUMutablePointerSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMutablePointerSet : NSMutableSet
{
    struct __CFSet * mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)getObjects:(id *)arg0;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (TSUMutablePointerSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (TSUMutablePointerSet *)initWithCapacity:(unsigned int)arg0;
- (NSArray *)allObjects;
- (TSUMutablePointerSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)setByAddingObjectsFromSet:(NSSet *)arg0;
- (TSUMutablePointerSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (TSUMutablePointerSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (NSArray *)setByAddingObjectsFromArray:(NSArray *)arg0;
- (TSUMutablePointerSet *)initWithCFSet:(struct __CFSet *)arg0;
- (NSObject *)setByAddingObject:(NSObject *)arg0;

@end
