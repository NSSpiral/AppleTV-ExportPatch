/* Runtime dump - PLCloudResourceRange
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourceRange : NSObject
{
    unsigned short _category;
    PLPhotoLibrary * _photoLibrary;
    PLCloudResourceNode * _rootNode;
    unsigned short _qualityClass;
}

@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly, nonatomic) unsigned short category;
@property (readonly, nonatomic) unsigned short qualityClass;

- (void)dealloc;
- (unsigned short)category;
- (unsigned long long)totalCount;
- (unsigned long long)totalSize;
- (PLCloudResourceRange *)initWithBudgetingCategory:(unsigned short)arg0 qualityClass:(unsigned short)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (void)insertCloudResource:(NSObject *)arg0;
- (char)removeCloudResource:(NSObject *)arg0;
- (unsigned long long)totalSizeInRange:(struct _NSRange)arg0;
- (unsigned short)qualityClass;
- (id)lowestCommonAncestorBetween:(id)arg0 and:(id)arg1;
- (void)insertionRebalanceCaseTwo:(id)arg0;
- (void)insertionRebalanceCaseThree:(id)arg0;
- (void)insertionRebalanceCaseOne:(id)arg0;
- (void)insertionRebalanceCaseFour:(id)arg0;
- (void)insertionRebalanceCaseFive:(id)arg0;
- (void)removeRebalance:(id)arg0;
- (void)removeTreeNode:(NSObject *)arg0;
- (void)assignSuccessorNode:(NSObject *)arg0;
- (NSObject *)cloudResourcesInRange:(struct _NSRange)arg0;
- (NSObject *)cloudResourceAtIndex:(unsigned int)arg0;
- (void)enumerateResourcesWithBlock:(id /* block */)arg0;

@end
