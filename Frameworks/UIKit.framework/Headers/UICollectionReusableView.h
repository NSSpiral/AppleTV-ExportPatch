/* Runtime dump - UICollectionReusableView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionReusableView : UIView
{
    UICollectionViewLayoutAttributes * _layoutAttributes;
    NSString * _reuseIdentifier;
    UICollectionView * _collectionView;
    int _updateAnimationCount;
    struct ? _reusableViewFlags;
    char _preferredAttributesValid;
}

@property (copy, nonatomic) NSString * reuseIdentifier;
@property (copy, nonatomic) UICollectionViewLayoutAttributes * layoutAttributes;
@property (nonatomic) UICollectionView * collectionView;
@property (readonly, nonatomic) char inUpdateAnimation;
@property (nonatomic) char preferredAttributesValid;

- (void)dealloc;
- (UICollectionReusableView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UICollectionView *)_collectionView;
- (NSString *)reuseIdentifier;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(NSDictionary *)arg0;
- (void)_setBaseLayoutAttributes:(NSDictionary *)arg0;
- (char)_disableRasterizeInAnimations;
- (void)_setLayoutAttributes:(NSDictionary *)arg0;
- (void)_setCollectionView:(NSObject *)arg0;
- (char)_isInUpdateAnimation;
- (NSDictionary *)_layoutAttributes;
- (char)_arePreferredAttributesValid;
- (NSDictionary *)_preferredLayoutAttributesFittingAttributes:(NSDictionary *)arg0;
- (char)_wasDequeued;
- (void)_invalidatePreferredAttributes;
- (void)_markAsDequeued;
- (void)willTransitionFromLayout:(NSObject *)arg0 toLayout:(UICollectionViewLayout *)arg1;
- (void)_addUpdateAnimation;
- (void)didTransitionFromLayout:(NSObject *)arg0 toLayout:(UICollectionViewLayout *)arg1;
- (void)_clearUpdateAnimation;
- (void)_setReuseIdentifier:(NSString *)arg0;
- (NSDictionary *)preferredLayoutAttributesFittingAttributes:(NSDictionary *)arg0;
- (void)setPreferredAttributesValid:(char)arg0;

@end
