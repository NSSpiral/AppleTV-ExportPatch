/* Runtime dump - UICollectionViewFlowLayoutInvalidationContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    struct ? _flowLayoutInvalidationFlags;
}

@property (nonatomic) char invalidateFlowLayoutDelegateMetrics;
@property (nonatomic) char invalidateFlowLayoutAttributes;

- (UICollectionViewFlowLayoutInvalidationContext *)init;
- (void)setInvalidateFlowLayoutAttributes:(char)arg0;
- (char)invalidateFlowLayoutAttributes;
- (void)setInvalidateFlowLayoutDelegateMetrics:(char)arg0;
- (char)invalidateFlowLayoutDelegateMetrics;

@end
