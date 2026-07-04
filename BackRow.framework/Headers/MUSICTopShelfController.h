/* Runtime dump - MUSICTopShelfController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRTopShelfController;

@class ATVMusicStorePresentsProvider, BRControl, BRMediaShelfView, BRTopShelfView, MUSICDataClientTopShelfHelper, PlayHandler;
@interface MUSICTopShelfController : UIViewController <BRTopShelfController>
{
    <BRProvider> * _nowPlayingProvider;
    MUSICDataClientTopShelfHelper * _topShelfHelper;
    ATVCloudDataClient * _cloudClient;
    NSArray * _mediaItems;
    ATVMusicStorePresentsProvider * _topMusic;
    <BRControlFactory> * _homeShareFactory;
    PlayHandler * _playHandler;
    <BRAppliance> * _appliance;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <BRAppliance> * appliance;

- (void)_internetAvailabilityChanged:(NSNotification *)arg0;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (<BRAppliance> *)appliance;
- (MUSICTopShelfController *)initWithAppliance:(<BRAppliance> *)arg0;
- (BRTopShelfView *)mainMenuShelfView;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)selectCategoryWithIdentifier:(NSString *)arg0;
- (void)_reloadShelf;
- (long)numberOfFlatColumnsInMediaShelf:(BRMediaShelfView *)arg0;
- (float)horizontalGapForMediaShelf:(BRMediaShelfView *)arg0;
- (float)coverflowMarginForMediaShelf:(id)arg0;
- (void)_validateTopShelf;
- (id)MusicSyncStatusBinding;
- (void)updateBoundMusicSyncStatus;
- (void)bindMusicSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_topMusicUpdated:(id)arg0;
- (void)_nowPlayingProviderUpdated:(id)arg0;
- (void)refresh;
- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (void)_networkStateChanged:(NSNotification *)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;

@end
