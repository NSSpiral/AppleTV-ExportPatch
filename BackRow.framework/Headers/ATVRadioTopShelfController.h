/* Runtime dump - ATVRadioTopShelfController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVRadioStationsChangeObserver;
@protocol BRTopShelfController;

@class ATVRadioStationsDataSource, BRControl, BRMediaShelfView, BRTopShelfView;
@interface ATVRadioTopShelfController : NSObject <ATVRadioStationsChangeObserver, BRTopShelfController>
{
    <BRAppliance> * _appliance;
    ATVRadioStationsDataSource * _dataSource;
    BRTopShelfView * _topShelfView;
    <BRProvider> * _nowPlayingProvider;
}

@property (retain, nonatomic) ATVRadioStationsDataSource * dataSource;
@property (retain, nonatomic) BRTopShelfView * topShelfView;
@property (retain, nonatomic) <BRProvider> * nowPlayingProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <BRAppliance> * appliance;

- (NSArray *)personalStations;
- (void)radioStationsDataSourceDidChangeStations:(ATVRadioStationsDataSource *)arg0;
- (void)radioStationsDataSourceDidChangeStatus:(ATVRadioStationsDataSource *)arg0;
- (unsigned int)_numberOfPersonalStations;
- (unsigned int)_numberOfFeaturedStations;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)mediaShelf:(BRMediaShelfView *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned int)_numberOfSections;
- (void)_reportPageView;
- (void)_dataClientStatusDidChange:(NSDictionary *)arg0;
- (<BRAppliance> *)appliance;
- (ATVRadioTopShelfController *)initWithAppliance:(<BRAppliance> *)arg0;
- (BRTopShelfView *)mainMenuShelfView;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)selectCategoryWithIdentifier:(NSString *)arg0;
- (NSString *)_titleForSectionAtIndex:(unsigned int)arg0;
- (void)_reloadShelf;
- (long)numberOfFlatColumnsInMediaShelf:(BRMediaShelfView *)arg0;
- (float)horizontalGapForMediaShelf:(BRMediaShelfView *)arg0;
- (float)coverflowMarginForMediaShelf:(id)arg0;
- (void)_nowPlayingProviderUpdated:(id)arg0;
- (BRTopShelfView *)topShelfView;
- (unsigned int)_sectionAtIndex:(unsigned int)arg0;
- (NSObject *)_personalStationAtIndex:(unsigned int)arg0;
- (NSObject *)_featuredStationAtIndex:(unsigned int)arg0;
- (void)_configureTopShelfView:(NSObject *)arg0;
- (<BRProvider> *)nowPlayingProvider;
- (NSString *)_stationForItemAtIndexPath:(NSIndexPath *)arg0;
- (unsigned int)_indexOfPersonalStationWithHash:(unsigned int)arg0;
- (unsigned int)_indexOfFeaturedStationWithHash:(unsigned int)arg0;
- (void)setTopShelfView:(BRTopShelfView *)arg0;
- (void)willBeShown;
- (void)setNowPlayingProvider:(<BRProvider> *)arg0;
- (void)refresh;
- (void)dealloc;
- (void)setDataSource:(ATVRadioStationsDataSource *)arg0;
- (ATVRadioStationsDataSource *)dataSource;
- (void).cxx_destruct;
- (NSArray *)featuredStations;

@end
