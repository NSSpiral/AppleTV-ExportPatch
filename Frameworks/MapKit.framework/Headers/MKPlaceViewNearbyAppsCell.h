/* Runtime dump - MKPlaceViewNearbyAppsCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceViewNearbyAppsCell : ABContactCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UILabel * _headerLabel;
    UICollectionView * _collectionView;
    _MKNearbyAppsFlowLayout * _flowLayout;
    NSLayoutConstraint * _headerBaselineConstraint;
    NSLayoutConstraint * _collectionHeightConstraint;
    struct CGSize _iconSize;
    NSArray * _storeItems;
    <MKPlaceViewNearbyAppsCellDelegate> * _delegate;
    NSArray * _marginConstraints;
}

@property (weak, nonatomic) <MKPlaceViewNearbyAppsCellDelegate> * delegate;
@property (retain, nonatomic) NSArray * storeItems;
@property (retain, nonatomic) NSArray * marginConstraints;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)contentHeight;
+ (UIFont *)_headerLabelFont;
+ (float)_headerBaselineOffsetFromTop;
+ (struct CGSize)_iconSize;
+ (char)requiresConstraintBasedLayout;
+ (NSString *)reuseIdentifier;

- (void)contentSizeDidChange;
- (void)refreshMarginConstraints;
- (NSArray *)marginConstraints;
- (void)setMarginConstraints:(NSArray *)arg0;
- (void)setStoreItems:(NSArray *)arg0;
- (NSArray *)storeItems;
- (void)dealloc;
- (void)setDelegate:(<MKPlaceViewNearbyAppsCellDelegate> *)arg0;
- (MKPlaceViewNearbyAppsCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg0 withVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (<MKPlaceViewNearbyAppsCellDelegate> *)delegate;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionView:(UICollectionView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)layoutMarginsDidChange;
- (struct CGSize)collectionView:(UICollectionView *)arg0 layout:(UICollectionViewLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void).cxx_destruct;

@end
