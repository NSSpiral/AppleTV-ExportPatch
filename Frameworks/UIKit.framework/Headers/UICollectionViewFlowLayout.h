/* Runtime dump - UICollectionViewFlowLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewFlowLayout : UICollectionViewLayout
{
    struct ? _gridLayoutFlags;
    float _interitemSpacing;
    float _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _estimatedItemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInset;
    _UIFlowLayoutInfo * _data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary * _insertedItemsAttributesDict;
    NSMutableDictionary * _insertedSectionHeadersAttributesDict;
    NSMutableDictionary * _insertedSectionFootersAttributesDict;
    NSMutableDictionary * _deletedItemsAttributesDict;
    NSMutableDictionary * _deletedSectionHeadersAttributesDict;
    NSMutableDictionary * _deletedSectionFootersAttributesDict;
    int _scrollDirection;
    NSDictionary * _rowAlignmentsOptionsDictionary;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    NSMutableArray * _indexPathsToValidate;
}

@property (nonatomic) float minimumLineSpacing;
@property (nonatomic) float minimumInteritemSpacing;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct CGSize estimatedItemSize;
@property (nonatomic) int scrollDirection;
@property (nonatomic) struct CGSize headerReferenceSize;
@property (nonatomic) struct CGSize footerReferenceSize;
@property (nonatomic) struct UIEdgeInsets sectionInset;
@property (readonly, nonatomic) char estimatesSizes;

+ (Class)invalidationContextClass;

- (void)dealloc;
- (UICollectionViewFlowLayout *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UICollectionViewFlowLayout *)init;
- (void)setScrollDirection:(int)arg0;
- (void)setItemSize:(struct CGSize)arg0;
- (void)setMinimumInteritemSpacing:(float)arg0;
- (void)setMinimumLineSpacing:(float)arg0;
- (float)minimumLineSpacing;
- (float)minimumInteritemSpacing;
- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0;
- (NSObject *)indexPathForItemAtPoint:(struct CGPoint)arg0;
- (struct CGSize)collectionViewContentSize;
- (char)shouldInvalidateLayoutForPreferredLayoutAttributes:(NSDictionary *)arg0 withOriginalAttributes:(NSDictionary *)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(NSObject *)arg0;
- (NSDictionary *)invalidationContextForBoundsChange:(struct CGRect)arg0;
- (NSDictionary *)invalidationContextForPreferredLayoutAttributes:(NSDictionary *)arg0 withOriginalAttributes:(NSDictionary *)arg1;
- (int)scrollDirection;
- (char)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg0;
- (void)setSectionInset:(struct UIEdgeInsets)arg0;
- (void)finalizeCollectionViewUpdates;
- (char)_estimatesSizes;
- (void)_fetchItemsInfoForRect:(struct CGRect)arg0;
- (struct CGRect)_frameForHeaderInSection:(id)arg0 usingData:(SEL)arg1;
- (struct CGRect)_frameForFooterInSection:(id)arg0 usingData:(SEL)arg1;
- (struct CGRect)_frameForItem:(NSObject *)arg0 inSection:(SEL)arg1 usingData:(int)arg2;
- (UICollectionViewLayoutAttributes *)layoutAttributesForHeaderInSection:(int)arg0 usingData:(NSData *)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForFooterInSection:(int)arg0 usingData:(NSData *)arg1;
- (int)_sectionArrayIndexForIndexPath:(NSIndexPath *)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0 usingData:(NSData *)arg1;
- (struct CGSize)itemSize;
- (NSObject *)_layoutAttributesForItemsInRect:(struct CGRect)arg0;
- (NSObject *)indexesForSectionHeadersInRect:(struct CGRect)arg0 usingData:(struct CGSize)arg1;
- (NSObject *)indexesForSectionFootersInRect:(struct CGRect)arg0 usingData:(struct CGSize)arg1;
- (void)_updateDelegateFlags;
- (void)_getSizingInfos;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg0;
- (void)_setEstimatedItemSize:(struct CGSize)arg0;
- (struct CGSize)_estimatedItemSize;
- (NSObject *)indexesForSectionHeadersInRect:(struct CGRect)arg0;
- (NSObject *)indexesForSectionFootersInRect:(struct CGRect)arg0;
- (UICollectionViewLayoutAttributes *)layoutAttributesForHeaderInSection:(int)arg0;
- (UICollectionViewLayoutAttributes *)layoutAttributesForFooterInSection:(int)arg0;
- (void)setHeaderReferenceSize:(struct CGSize)arg0;
- (void)setFooterReferenceSize:(struct CGSize)arg0;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (NSString *)initialLayoutAttributesForInsertedItemAtIndexPath:(NSIndexPath *)arg0;
- (UICollectionViewLayoutAttributes *)initialLayoutAttributesForHeaderInInsertedSection:(int)arg0;
- (UICollectionViewLayoutAttributes *)initialLayoutAttributesForFooterInInsertedSection:(int)arg0;
- (NSString *)finalLayoutAttributesForDeletedItemAtIndexPath:(NSIndexPath *)arg0;
- (UICollectionViewLayoutAttributes *)finalLayoutAttributesForHeaderInDeletedSection:(int)arg0;
- (UICollectionViewLayoutAttributes *)finalLayoutAttributesForFooterInDeletedSection:(int)arg0;
- (struct CGSize)synchronizeLayout;
- (void)_invalidateButKeepDelegateInfo;
- (void)_invalidateButKeepAllInfo;
- (void)_setRowAlignmentsOptions:(NSDictionary *)arg0;
- (NSDictionary *)_rowAlignmentOptions;
- (void)_updateContentSizeScrollingDimensionWithDelta:(float)arg0;
- (void)_setRoundsToScreenScale:(char)arg0;
- (char)_roundsToScreenScale;
- (struct CGSize)headerReferenceSize;
- (struct CGSize)footerReferenceSize;
- (struct UIEdgeInsets)sectionInset;
- (struct CGSize)estimatedItemSize;
- (void)setEstimatedItemSize:(struct CGSize)arg0;

@end
