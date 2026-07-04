/* Runtime dump - EDReferenceCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReferenceCollection : EDCollection
{
    BOOL mCoalesce;
}

+ (EDReferenceCollection *)noCoalesceCollection;
+ (EDReferenceCollection *)coalesceCollection;

- (EDReferenceCollection *)init;
- (unsigned int)addObject:(struct objc_method *)arg0;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (unsigned int)countOfCellsBeingReferenced;
- (id)reverseReferencesByRow:(BOOL)arg0;
- (NSObject *)referenceToCellWithIndex:(unsigned int)arg0 byRow:(BOOL)arg1;
- (EDReferenceCollection *)initWihNoCoalesce;
- (void)coalesce;
- (BOOL)coalesceReferenceAtIndex1:(unsigned int)arg0 index2:(unsigned int)arg1;

@end
