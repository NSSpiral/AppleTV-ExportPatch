/* Runtime dump - EDCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDCollection : NSObject <NSCopying>
{
    NSMutableArray * mObjects;
}

+ (CoreDAVItemWithNoChildren *)collection;
+ (NSObject *)collectionWithObject:(NSObject *)arg0;

- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (EDCollection *)init;
- (unsigned int)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (unsigned int)indexOfObject:(struct objc_method *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (EDCollection *)copyWithZone:(struct _NSZone *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (EDCollection *)initWithObject:(NSObject *)arg0;
- (unsigned int)addOrEquivalentObject:(NSObject *)arg0;
- (char)isEqualToCollection:(id)arg0;

@end
