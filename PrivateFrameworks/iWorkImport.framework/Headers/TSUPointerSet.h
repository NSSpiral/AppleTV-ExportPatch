/* Runtime dump - TSUPointerSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPointerSet : NSSet
{
    struct __CFSet * mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)getObjects:(id *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSArray *)allObjects;
- (TSUPointerSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)setByAddingObjectsFromSet:(NSSet *)arg0;
- (TSUPointerSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (TSUPointerSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (NSArray *)setByAddingObjectsFromArray:(NSArray *)arg0;
- (TSUPointerSet *)initWithCFSet:(struct __CFSet *)arg0;
- (NSObject *)setByAddingObject:(NSObject *)arg0;

@end
