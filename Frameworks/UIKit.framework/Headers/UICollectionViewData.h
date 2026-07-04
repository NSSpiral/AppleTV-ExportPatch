/* Runtime dump - UICollectionViewData
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewData : NSObject
{
    UICollectionView * _collectionView;
    UICollectionViewLayout * _layout;
    NSMapTable * _screenPageMap;
    NSMutableIndexSet * _globalIndexesOfItemsAwaitingValidation;
    id * _globalItems;
    NSMutableDictionary * _supplementaryLayoutAttributes;
    NSMutableDictionary * _decorationLayoutAttributes;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    struct CGRect _validLayoutRect;
    int _numItems;
    int _numSections;
    int * _sectionItemCounts;
    int _lastSectionTestedForNumberOfItemsBeforeSection;
    int _lastResultForNumberOfItemsBeforeSection;
    struct CGSize _contentSize;
    NSMutableArray * _clonedCellAttributes;
    NSMutableArray * _clonedSupplementaryAttributes;
    NSMutableArray * _clonedDecorationAttributes;
    struct ? _collectionViewDataFlags;
}

@property (readonly, nonatomic) char layoutIsPrepared;
@property (nonatomic) char layoutLocked;
@property (readonly, nonatomic) NSArray * clonedCellAttributes;
@property (readonly, nonatomic) NSArray * clonedSupplementaryAttributes;
@property (readonly, nonatomic) NSArray * clonedDecorationAttributes;

+ (void)initialize;

- (void)dealloc;
- (int)numberOfItemsInSection:(int)arg0;
- (int)numberOfSections;
- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0;
- (int)numberOfItems;
- (UICollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (void)invalidateItemsAtIndexPaths:(NSArray *)arg0;
- (int)numberOfItemsBeforeSection:(int)arg0;
- (int)globalIndexForItemAtIndexPath:(NSIndexPath *)arg0;
- (id)knownSupplementaryElementKinds;
- (NSObject *)layoutAttributesForGlobalItemIndex:(int)arg0;
- (UICollectionViewLayoutAttributes *)layoutAttributesForElementsInSection:(int)arg0;
- (void)invalidate:(char)arg0;
- (char)layoutIsPrepared;
- (struct CGRect)collectionViewContentRect;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryElementOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (NSArray *)clonedCellAttributes;
- (NSArray *)clonedSupplementaryAttributes;
- (NSArray *)clonedDecorationAttributes;
- (void)validateLayoutInRect:(struct CGRect)arg0;
- (UICollectionViewData *)initWithCollectionView:(UICollectionView *)arg0 layout:(UICollectionViewLayout *)arg1;
- (void)_prepareToLoadData;
- (void)setLayoutLocked:(char)arg0;
- (NSObject *)indexPathForItemAtGlobalIndex:(int)arg0;
- (id)existingSupplementaryLayoutAttributesInSection:(int)arg0;
- (NSDictionary *)existingSupplementaryLayoutAttributes;
- (struct CGRect)rectForDecorationElementOfKind:(id)arg0 atIndexPath:(SEL)arg1;
- (struct CGRect)rectForSupplementaryElementOfKind:(id)arg0 atIndexPath:(SEL)arg1;
- (id)knownDecorationElementKinds;
- (void)invalidateSupplementaryIndexPaths:(NSArray *)arg0;
- (void)invalidateDecorationIndexPaths:(NSArray *)arg0;
- (void)shimMoveForItemAtIndexPath:(NSIndexPath *)arg0 toIndexPath:(NSIndexPath *)arg1;
- (void)_updateItemCounts;
- (void)_validateItemCounts;
- (void)_validateContentSize;
- (NSObject *)_screenPageForPoint:(struct CGPoint)arg0;
- (void)_setupMutableIndexPath:(id *)arg0 forGlobalItemIndex:(int)arg1;
- (void)_setLayoutAttributes:(NSDictionary *)arg0 atGlobalItemIndex:(int)arg1;
- (void)validateSupplementaryViews;
- (void)validateDecorationViews;
- (struct CGRect)rectForItemAtIndexPath:(NSIndexPath *)arg0;
- (void)_loadEverything;
- (struct CGRect)rectForGlobalItemIndex:(NSObject *)arg0;
- (char)isLayoutLocked;

@end
