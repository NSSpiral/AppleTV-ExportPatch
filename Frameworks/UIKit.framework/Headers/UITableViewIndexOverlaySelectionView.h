/* Runtime dump - UITableViewIndexOverlaySelectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView * _collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout * _flowLayout;
    UITableView * _table;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)reloadData;
- (void)layoutSubviews;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)collectionView:(UICollectionView *)arg0 viewForSupplementaryElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (UITableViewIndexOverlaySelectionView *)initWithTable:(UITableView *)arg0;
- (void)_invalidateTable;
- (char)canBecomeFirstResponder;
- (void)_cellTapped:(id)arg0;
- (void)_doneTapped;
- (void)_setIndexColor:(UIColor *)arg0;

@end
