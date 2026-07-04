/* Runtime dump - OITSUMutablePointerSet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUMutablePointerSet : NSMutableSet
{
    struct __CFSet * mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)getObjects:(id *)arg0;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (OITSUMutablePointerSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (OITSUMutablePointerSet *)initWithCapacity:(unsigned int)arg0;
- (NSArray *)allObjects;
- (OITSUMutablePointerSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)setByAddingObjectsFromSet:(NSSet *)arg0;
- (OITSUMutablePointerSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (OITSUMutablePointerSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (NSArray *)setByAddingObjectsFromArray:(NSArray *)arg0;
- (OITSUMutablePointerSet *)initWithCFSet:(struct __CFSet *)arg0;
- (NSObject *)setByAddingObject:(NSObject *)arg0;

@end
