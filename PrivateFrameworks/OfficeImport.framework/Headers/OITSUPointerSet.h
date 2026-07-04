/* Runtime dump - OITSUPointerSet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPointerSet : NSSet
{
    struct __CFSet * mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)getObjects:(id *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSArray *)allObjects;
- (OITSUPointerSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)setByAddingObjectsFromSet:(NSSet *)arg0;
- (OITSUPointerSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (OITSUPointerSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (NSArray *)setByAddingObjectsFromArray:(NSArray *)arg0;
- (OITSUPointerSet *)initWithCFSet:(struct __CFSet *)arg0;
- (NSObject *)setByAddingObject:(NSObject *)arg0;

@end
