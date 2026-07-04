/* Runtime dump - COMPUTERSTopShelfController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol BRTopShelfController;

@class BRControl, BRMediaShelfView, BRTopShelfView, PlayHandler;
@interface COMPUTERSTopShelfController : BRSingleton <BRTopShelfController>
{
    <BRProvider> * _nowPlayingProvider;
    ATVDataQuery * _homeShareDateAddedQuery;
    ATVDataQuery * _homeShareDatePlayedQuery;
    ATVDataQuery * _homeShareSongsToAlbumQuery;
    char _queryResultsParsed;
    NSString * _homeShareTitle;
    NSArray * _homeShareItems;
    long _numOfRentalsOnShelf;
    <BRControlFactory> * _homeShareFactory;
    BRTopShelfView * _topShelf;
    ATVDataType * _lastAccessedMediaType;
    ATVDataServer * _lastAccessedDataServer;
    NSTimer * _homeShareRefreshDelayTimer;
    ATVBackgroundTask * _homeShareRefreshTask;
    PlayHandler * _playHandler;
    <BRAppliance> * _appliance;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <BRAppliance> * appliance;

+ (COMPUTERSTopShelfController *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)_handleWindowMaxBoundsChanged:(NSNotification *)arg0;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (<BRAppliance> *)appliance;
- (COMPUTERSTopShelfController *)initWithAppliance:(<BRAppliance> *)arg0;
- (BRTopShelfView *)mainMenuShelfView;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)selectCategoryWithIdentifier:(NSString *)arg0;
- (long)numberOfFlatColumnsInMediaShelf:(BRMediaShelfView *)arg0;
- (float)horizontalGapForMediaShelf:(BRMediaShelfView *)arg0;
- (float)coverflowMarginForMediaShelf:(id)arg0;
- (void)_validateTopShelf;
- (NSObject *)newBaseQuery:(NSObject *)arg0;
- (void)_nowPlayingProviderUpdated:(id)arg0;
- (void)_reloadHomeShareItems;
- (void)_homeShareServersChanged:(NSNotification *)arg0;
- (void)_dataServerStatusChanged:(NSNotification *)arg0;
- (void)_preferredAccountStateChanged:(NSNotification *)arg0;
- (void)_willWakeFromSleep:(id)arg0;
- (void)_cancelHomeShareRefreshTask;
- (void)_setLastAccessedMediaType:(NSObject *)arg0 fromDataServer:(NSObject *)arg1;
- (void)requeryHomeShare;
- (NSObject *)_serverIDForMediaItem:(NSObject *)arg0;
- (void)_submitSongsToAlbumsQuery:(NSObject *)arg0 forAlbumID:(NSObject *)arg1;
- (void)setLastAccessedMediaType:(ATVDataType *)arg0 fromDataServer:(NSObject *)arg1;
- (ATVDataType *)lastAccessedMediaType;
- (void)_submitHomeShareDateAddedQuery:(NSObject *)arg0;
- (void)_submitHomeShareDatePlayedQuery:(NSObject *)arg0;
- (void)_scheduleHomeShareRefreshTask;
- (void)_homeShareQueryComplete;
- (void)_songsToAlbumsQueryComplete;
- (void)_homeShareRefreshDelayTimerFired:(id)arg0;
- (void)refresh;
- (void)dealloc;
- (COMPUTERSTopShelfController *)init;
- (void).cxx_destruct;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;

@end
