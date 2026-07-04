/* Runtime dump - TSPLazyReferenceArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPLazyReferenceArray : NSMutableArray
{
    NSMutableArray * _references;
    unsigned long _mutations;
}

@property (readonly, nonatomic) NSArray * references;

- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromArray:(NSArray *)arg1 range:(struct _NSRange)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromArray:(NSArray *)arg1;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (TSPLazyReferenceArray *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSObject *)subarrayWithRange:(struct _NSRange)arg0;
- (void)removeLastObject;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (TSPLazyReferenceArray *)initWithCapacity:(unsigned int)arg0;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (TSPLazyReferenceArray *)copyWithZone:(struct _NSZone *)arg0;
- (NSIndexSet *)objectsAtIndexes:(struct objc_method *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (TSPLazyReferenceArray *)initWithArray:(NSArray *)arg0;
- (void)removeObjectsInRange:(struct _NSRange)arg0;
- (TSPLazyReferenceArray *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSArray *)references;
- (NSObject *)referenceAtIndex:(unsigned int)arg0;
- (void)addReference:(NSObject *)arg0;

@end
