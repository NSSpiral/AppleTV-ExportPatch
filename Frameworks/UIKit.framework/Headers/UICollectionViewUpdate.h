/* Runtime dump - UICollectionViewUpdate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdate : NSObject
{
    UICollectionView * _collectionView;
    NSArray * _updateItems;
    UICollectionViewData * _oldModel;
    UICollectionViewData * _newModel;
    struct CGRect _oldVisibleBounds;
    struct CGRect _newVisibleBounds;
    NSMutableIndexSet * _movedItems;
    NSMutableIndexSet * _movedSections;
    NSMutableIndexSet * _deletedSections;
    NSMutableIndexSet * _insertedSections;
    int * _oldSectionMap;
    int * _newSectionMap;
    int * _oldGlobalItemMap;
    int * _newGlobalItemMap;
    NSMutableArray * _deletedSupplementaryIndexesSectionArray;
    NSMutableArray * _insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary * _deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary * _insertedSupplementaryTopLevelIndexesDict;
    id * _animatedItems;
    id * _animatedHeaders;
    id * _animatedFooters;
    NSMutableArray * _viewAnimations;
    NSMutableArray * _gaps;
}

- (void)dealloc;
- (void)_computeSectionUpdates;
- (void)_computeGaps;
- (void)_computeItemUpdates;
- (UICollectionViewUpdate *)initWithCollectionView:(UICollectionView *)arg0 updateItems:(NSArray *)arg1 oldModel:(UICollectionViewData *)arg2 newModel:(UICollectionViewData *)arg3 oldVisibleBounds:(struct CGRect)arg4 newVisibleBounds:(struct CGSize)arg5;
- (void)_computeSupplementaryUpdates;
- (id)newIndexPathForSupplementaryElementOfKind:(id)arg0 oldIndexPath:(NSIndexPath *)arg1;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)arg0 newIndexPath:(NSIndexPath *)arg1;

@end
