/* Runtime dump - MKPlacePhotosViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotosViewController : UITableViewController <UICollectionViewDataSource, UICollectionViewDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider>
{
    char _showAddPhotoButton;
    char _showMorePhotosButton;
    char _hasAttribution;
    char _showAttribution;
    MKMapItem * _mapItem;
    <MKPlaceCardPhotosControllerDelegate> * _photosControllerDelegate;
    unsigned int _photosCount;
    float _photoWidth;
    _MKPlacePhotosCollectionView * _photoGrid;
    _MKPlaceViewController * _owner;
}

@property (weak, nonatomic) _MKPlaceViewController * owner;
@property (retain, nonatomic) MKMapItem * mapItem;
@property (weak, nonatomic) <MKPlaceCardPhotosControllerDelegate> * photosControllerDelegate;
@property (nonatomic) char hasAttribution;
@property (readonly, nonatomic) char showAttributionButtons;
@property (nonatomic) char showMorePhotosButton;
@property (nonatomic) char showAddPhotoButton;
@property (nonatomic) unsigned int photosCount;
@property (nonatomic) float photoWidth;
@property (retain, nonatomic) _MKPlacePhotosCollectionView * photoGrid;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char requiresPreferredContentSizeInStackingView;
@property (nonatomic) char showAttribution;

- (void)setPhotosControllerDelegate:(<MKPlaceCardPhotosControllerDelegate> *)arg0;
- (void)setShowAttribution:(char)arg0;
- (char)requiresPreferredContentSizeInStackingView;
- (char)showAttribution;
- (void)setHasAttribution:(char)arg0;
- (void)setShowAddPhotoButton:(char)arg0;
- (void)setShowMorePhotosButton:(char)arg0;
- (<MKPlaceCardPhotosControllerDelegate> *)photosControllerDelegate;
- (void)_calculatePhotoSizeForSize:(struct CGSize)arg0;
- (void)setPhotoWidth:(float)arg0;
- (_MKPlacePhotosCollectionView *)photoGrid;
- (void)_morePhotos;
- (char)showAttributionButtons;
- (char)showMorePhotosButton;
- (char)showAddPhotoButton;
- (void)setPhotoGrid:(_MKPlacePhotosCollectionView *)arg0;
- (float)_photoCellHeight;
- (void)_addPhoto;
- (float)photoWidth;
- (MKPlacePhotosViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInCollectionView:(UICollectionView *)arg0;
- (void)collectionView:(UICollectionView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg0 layout:(UICollectionViewLayout *)arg1 insetForSectionAtIndex:(int)arg2;
- (float)collectionView:(UICollectionView *)arg0 layout:(UICollectionViewLayout *)arg1 minimumLineSpacingForSectionAtIndex:(int)arg2;
- (float)collectionView:(UICollectionView *)arg0 layout:(UICollectionViewLayout *)arg1 minimumInteritemSpacingForSectionAtIndex:(int)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (struct CGSize)collectionView:(UICollectionView *)arg0 layout:(UICollectionViewLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (_MKPlaceViewController *)owner;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (NSArray *)photos;
- (char)hasAttribution;
- (void)setPhotosCount:(unsigned int)arg0;
- (unsigned int)photosCount;
- (void)setOwner:(_MKPlaceViewController *)arg0;

@end
