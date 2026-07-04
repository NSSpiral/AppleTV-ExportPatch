/* Runtime dump - UICollectionViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewLayout * _layout;
    UICollectionView * _collectionView;
    struct ? _collectionViewControllerFlags;
}

@property (retain, nonatomic) UICollectionView * collectionView;
@property (nonatomic) char clearsSelectionOnViewWillAppear;
@property (nonatomic) char useLayoutToLayoutNavigationTransitions;
@property (readonly, nonatomic) UICollectionViewLayout * collectionViewLayout;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UICollectionViewController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)dataSource;
- (NSObject *)delegate;
- (UICollectionViewLayout *)collectionViewLayout;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setView:(UIView *)arg0;
- (<UIFocusContainer> *)preferredFocusedItem;
- (UICollectionView *)collectionView;
- (void)loadView;
- (NSObject *)contentScrollView;
- (void)viewWillUnload;
- (void)__viewWillAppear:(char)arg0;
- (NSObject *)_animatorForOperation:(int)arg0 fromViewController:(BRController *)arg1 toViewController:(BRController *)arg2;
- (char)useLayoutToLayoutNavigationTransitions;
- (NSObject *)_uiCollectionView;
- (void)_clearSharedView;
- (void)_setSharedCollectionView:(NSObject *)arg0;
- (void)_setUseLayoutToLayoutNavigationTransitions:(char)arg0 withCheck:(char)arg1;
- (void)setClearsSelectionOnViewWillAppear:(char)arg0;
- (char)clearsSelectionOnViewWillAppear;
- (UICollectionViewController *)initWithCollectionViewLayout:(UICollectionViewLayout *)arg0;
- (NSObject *)_wrappingView;
- (NSObject *)_newCollectionViewWithFrame:(struct CGRect)arg0 collectionViewLayout:(struct CGSize)arg1;
- (void)setCollectionView:(UICollectionView *)arg0;
- (char)shouldCrossFadeNavigationBar;
- (char)shouldCrossFadeBottomBars;
- (void)setUseLayoutToLayoutNavigationTransitions:(char)arg0;

@end
