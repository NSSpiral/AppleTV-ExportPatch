/* Runtime dump - CAMEffectSelectionViewController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _layout;
    NSArray * _effects;
    NSIndexPath * __selectedIndexPath;
    struct CGSize _cellSize;
    struct CGSize _thumbnailSize;
    <CAMEffectSelectionViewControllerDelegate> * _delegate;
}

@property (nonatomic) <CAMEffectSelectionViewControllerDelegate> * delegate;
@property (retain, nonatomic) CIFilter * selectedEffect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<CAMEffectSelectionViewControllerDelegate> *)arg0;
- (CAMEffectSelectionViewController *)init;
- (<CAMEffectSelectionViewControllerDelegate> *)delegate;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInCollectionView:(UICollectionView *)arg0;
- (char)collectionView:(UICollectionView *)arg0 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionView:(UICollectionView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionView:(UICollectionView *)arg0 didDeselectItemAtIndexPath:(NSIndexPath *)arg1;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg0 layout:(UICollectionViewFlowLayout *)arg1 insetForSectionAtIndex:(int)arg2;
- (CAMEffectSelectionViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void).cxx_destruct;
- (void)_generateFilters;
- (void)_resetSelectedToOriginal;
- (void)_setSelectedIndexPath:(NSIndexPath *)arg0;
- (NSString *)_selectedIndexPath;
- (void)_scrollToSelectedIndexAnimated:(char)arg0;
- (NSString *)_textForItemAtIndexPath:(NSIndexPath *)arg0;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (CIFilter *)selectedEffect;
- (void)_scrollToShowNextFilterNearEdge;
- (CAMEffectSelectionViewController *)initWithImageSize:(struct CGSize)arg0;
- (void)setSelectedEffect:(CIFilter *)arg0;

@end
