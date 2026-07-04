/* Runtime dump - SFCollectionViewFlowLayout
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray * _insertedIndexPaths;
    NSMutableArray * _movedIndexPaths;
    NSMutableArray * _deletedIndexPaths;
    NSMutableArray * _handledIndexPaths;
}

- (SFCollectionViewFlowLayout *)init;
- (void).cxx_destruct;
- (NSString *)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath *)arg0;
- (NSString *)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath *)arg0;
- (NSObject *)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(NSDictionary *)arg1 type:(NSObject *)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg0;
- (void)finalizeCollectionViewUpdates;
- (void)_applyToLayoutAttributes:(NSDictionary *)arg0 toView:(UIView *)arg1;

@end
