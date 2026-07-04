/* Runtime dump - UICollectionViewTransitionLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTransitionLayout : UICollectionViewLayout
{
    UICollectionViewLayout * _fromLayout;
    UICollectionViewLayout * _toLayout;
    struct CGRect _fromVisibleBounds;
    struct CGRect _toVisibleBounds;
    struct CGSize _contentSize;
    char _haveValidInfos;
    float _transitionProgress;
    NSMutableDictionary * _transitionInformationsDict;
    NSMutableDictionary * _currentLayoutInfos;
    char _layoutIsValid;
    NSMutableArray * _disappearingLayoutAttributes;
    NSMutableArray * _appearingLayoutAttributes;
    float _accuracy;
}

@property (nonatomic) float transitionProgress;
@property (readonly, nonatomic) UICollectionViewLayout * currentLayout;
@property (readonly, nonatomic) UICollectionViewLayout * nextLayout;

- (void)dealloc;
- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (void)prepareLayout;
- (struct CGRect)_oldVisibleBounds;
- (struct CGRect)_newVisibleBounds;
- (void)_setCollectionView:(NSObject *)arg0;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg0;
- (void)_prepareForTransitionToLayout:(NSObject *)arg0;
- (void)_prepareForTransitionFromLayout:(NSObject *)arg0;
- (void)setTransitionProgress:(float)arg0;
- (char)_supportsAdvancedTransitionAnimations;
- (void)_finalizeLayoutTransition;
- (UICollectionViewTransitionLayout *)initWithCurrentLayout:(UICollectionViewLayout *)arg0 nextLayout:(UICollectionViewLayout *)arg1;
- (UICollectionViewLayout *)currentLayout;
- (UICollectionViewLayout *)nextLayout;
- (float)transitionProgress;
- (NSDictionary *)interpolatedLayoutAttributesFromLayoutAttributes:(NSDictionary *)arg0 toLayoutAttributes:(NSDictionary *)arg1 progress:(float)arg2;
- (void)updateValue:(float)arg0 forAnimatedKey:(NSString *)arg1;
- (float)valueForAnimatedKey:(NSString *)arg0;

@end
