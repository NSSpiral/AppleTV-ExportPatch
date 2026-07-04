/* Runtime dump - TVAPPTopShelfController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRTopShelfController;

@class ATVMerchant, BRControl, BRMediaShelfView, BRTopShelfView, TVAppTopShelfData;
@interface TVAPPTopShelfController : UIViewController <BRTopShelfController>
{
    <BRAppliance> * _appliance;
    TVAppTopShelfData * _shelfData;
    NSDate * _lastLoadDate;
    NSURLSession * _urlSession;
    double _minimumReloadInterval;
}

@property (nonatomic) double minimumReloadInterval;
@property (retain, nonatomic) TVAppTopShelfData * shelfData;
@property (retain, nonatomic) NSDate * lastLoadDate;
@property (retain, nonatomic) NSURLSession * urlSession;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <BRAppliance> * appliance;

- (ATVMerchant *)_merchant;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)mediaShelf:(BRMediaShelfView *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (<BRAppliance> *)appliance;
- (TVAPPTopShelfController *)initWithAppliance:(<BRAppliance> *)arg0;
- (BRTopShelfView *)mainMenuShelfView;
- (void)selectCategoryWithIdentifier:(NSString *)arg0;
- (double)minimumReloadInterval;
- (void)setMinimumReloadInterval:(double)arg0;
- (long)numberOfFlatColumnsInMediaShelf:(BRMediaShelfView *)arg0;
- (float)horizontalGapForMediaShelf:(BRMediaShelfView *)arg0;
- (float)coverflowMarginForMediaShelf:(id)arg0;
- (void)_URLBagLoaded:(id)arg0;
- (void)_validateTopShelf;
- (void)_reloadFromDate:(NSDate *)arg0;
- (NSObject *)_posterForItem:(NSObject *)arg0;
- (void)_openAppWithScript:(NSString *)arg0;
- (NSDictionary *)_queryDictionary;
- (NSDictionary *)_basicQueryDictionary;
- (NSURL *)_topShelfURL;
- (void)setLastLoadDate:(NSDate *)arg0;
- (void)setShelfData:(TVAppTopShelfData *)arg0;
- (TVAppTopShelfData *)shelfData;
- (NSDate *)lastLoadDate;
- (void)refresh;
- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (void)_storeFrontChanged:(NSNotification *)arg0;
- (void)_networkChanged:(NSNotification *)arg0;
- (void)setUrlSession:(NSURLSession *)arg0;
- (void)_reload;
- (NSURLSession *)urlSession;

@end
