/* Runtime dump - MKPlaceReviewsViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewController : UITableViewController <MKPlaceReviewsViewCheckInWriteCellDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider>
{
    NSMutableDictionary * _cachedMaskedImages;
    char _hasAttribution;
    char _showCheckInAndWriteReviewButtons;
    char _showMoreReviewsButton;
    char _showAttribution;
    MKMapItem * _mapItem;
    GEORating * _rating;
    <MKPlaceCardReviewsControllerDelegate> * _reviewsControllerDelegate;
    ABMonogrammer * _monogrammer;
    _MKPlaceViewController * _owner;
    NSMutableArray * _viewDidAppearBlocks;
}

@property (retain, nonatomic) MKMapItem * mapItem;
@property (weak, nonatomic) <MKPlaceCardReviewsControllerDelegate> * reviewsControllerDelegate;
@property (weak, nonatomic) _MKPlaceViewController * owner;
@property (retain, nonatomic) GEORating * rating;
@property (nonatomic) char hasAttribution;
@property (readonly, nonatomic) char showAttributionButtons;
@property (nonatomic) char showCheckInAndWriteReviewButtons;
@property (nonatomic) char showMoreReviewsButton;
@property (retain, nonatomic) ABMonogrammer * monogrammer;
@property (retain, nonatomic) NSMutableArray * viewDidAppearBlocks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char requiresPreferredContentSizeInStackingView;
@property (nonatomic) char showAttribution;

- (void)checkInWriteReviewCellDidSelectCheckIn:(MKPlaceReviewsViewCheckInWriteCell *)arg0;
- (void)checkInWriteReviewCellDidSelectWriteReview:(MKPlaceReviewsViewCheckInWriteCell *)arg0;
- (void)setViewDidAppearBlocks:(NSMutableArray *)arg0;
- (NSMutableArray *)viewDidAppearBlocks;
- (void)setReviewsControllerDelegate:(<MKPlaceCardReviewsControllerDelegate> *)arg0;
- (void)setShowAttribution:(char)arg0;
- (char)requiresPreferredContentSizeInStackingView;
- (char)showAttribution;
- (void)setHasAttribution:(char)arg0;
- (char)showAttributionButtons;
- (void)setMonogrammer:(ABMonogrammer *)arg0;
- (void)setShowCheckInAndWriteReviewButtons:(char)arg0;
- (void)setShowMoreReviewsButton:(char)arg0;
- (<MKPlaceCardReviewsControllerDelegate> *)reviewsControllerDelegate;
- (void)_viewAllReviews;
- (char)showCheckInAndWriteReviewButtons;
- (char)showMoreReviewsButton;
- (ABMonogrammer *)monogrammer;
- (void)_showReviewWithID:(int)arg0;
- (MKPlaceReviewsViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (_MKPlaceViewController *)owner;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (GEORating *)rating;
- (char)hasAttribution;
- (void)setRating:(GEORating *)arg0;
- (void)setOwner:(_MKPlaceViewController *)arg0;

@end
