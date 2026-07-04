/* Runtime dump - MKPlaceInfoViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInfoViewController : ABContactViewController <ABContactViewControllerDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider>
{
    ABCardGroup * _dealsGroup;
    ABCardGroup * _businessInfoGroup;
    ABCardGroup * _inlineMapGroup;
    char _showAttribution;
    _MKPlaceViewController * _owner;
    <MKPlaceInfoViewControllerDelegate> * _infoDelegate;
    MKMapItem * _mapItem;
    NSArray * _businessInfoOrder;
    UIImage * _inlineMap;
    <MKMapItemVendorDeal> * _deal;
    _MKPlaceInfoViewControllerRouter * _actionsProxy;
}

@property (weak, nonatomic) <MKPlaceInfoViewControllerDelegate> * infoDelegate;
@property (retain, nonatomic) MKMapItem * mapItem;
@property (retain, nonatomic) <MKMapItemVendorDeal> * deal;
@property (readonly, nonatomic) NSAttributedString * infoAttributionString;
@property (weak, nonatomic) _MKPlaceViewController * owner;
@property (retain, nonatomic) NSArray * businessInfoOrder;
@property (retain, nonatomic) UIImage * inlineMap;
@property (retain, nonatomic) _MKPlaceInfoViewControllerRouter * actionsProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char requiresPreferredContentSizeInStackingView;
@property (nonatomic) char showAttribution;

- (MKPlaceInfoViewController *)initWithContact:(CNContact *)arg0;
- (ABContactHeaderView *)contactHeaderView;
- (NSObject *)contactView:(ABContactView *)arg0 cellForItemAtIndex:(int)arg1 inGroup:(NSObject *)arg2;
- (char)contactViewController:(ABContactViewController *)arg0 shouldPerformDefaultActionForContact:(CNContact *)arg1 property:(NSString *)arg2 labeledValue:(CNLabeledValue *)arg3;
- (int)contactView:(ABContactView *)arg0 numberOfItemsInGroup:(NSObject *)arg1;
- (float)contactView:(ABContactView *)arg0 heightForItemAtIndex:(int)arg1 inGroup:(NSObject *)arg2;
- (void)setInfoDelegate:(<MKPlaceInfoViewControllerDelegate> *)arg0;
- (void)setShowAttribution:(char)arg0;
- (NSAttributedString *)infoAttributionString;
- (void)updateInlineMapWithRefinedMapItem:(NSObject *)arg0;
- (void)setDeal:(<MKMapItemVendorDeal> *)arg0;
- (<MKMapItemVendorDeal> *)deal;
- (char)requiresPreferredContentSizeInStackingView;
- (void)_setupActions;
- (void)_setupBusinessInfo;
- (char)showAttribution;
- (void)setBusinessInfoOrder:(NSArray *)arg0;
- (<MKPlaceInfoViewControllerDelegate> *)infoDelegate;
- (void)_directionsToAddress:(NSString *)arg0;
- (void)_directionsFromAddress:(NSString *)arg0;
- (void)_flyoverTour:(id)arg0;
- (void)setInlineMap:(UIImage *)arg0;
- (NSArray *)businessInfoOrder;
- (UIImage *)inlineMap;
- (void)_handleBusinessAttributionRequest;
- (void)_launchMaps;
- (void)_showDeal;
- (void)_launchMapsDirectionsWithSource:(NSObject *)arg0 destination:(NSObject *)arg1 directionsMode:(id)arg2;
- (_MKPlaceInfoViewControllerRouter *)actionsProxy;
- (void)setActionsProxy:(_MKPlaceInfoViewControllerRouter *)arg0;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForFooterInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewDidLayoutSubviews;
- (void)tableViewDidFinishReload:(id)arg0;
- (void)viewDidLoad;
- (void)_updatePreferredContentSize;
- (void).cxx_destruct;
- (_MKPlaceViewController *)owner;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (void)setOwner:(_MKPlaceViewController *)arg0;

@end
