/* Runtime dump - ATVRadioStationsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVRadioStationsChangeObserver;
@protocol ATVRadioStationsViewDataSource;
@protocol ATVRadioStationsViewDelegate;

@class ATVRadioStationControl, ATVRadioStationsDataSource, ATVRadioStationsView;
@interface ATVRadioStationsController : BRViewController <ATVRadioStationsChangeObserver, ATVRadioStationsViewDataSource, ATVRadioStationsViewDelegate>
{
    ATVRadioStationsView * _stationsView;
    ATVRadioStationsDataSource * _dataSource;
    NSTimer * _spinnerTimer;
}

@property (retain, nonatomic) ATVRadioStationsView * stationsView;
@property (retain, nonatomic) ATVRadioStationsDataSource * dataSource;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)controlWasActivated;
- (void)_showSpinner;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (NSArray *)personalStations;
- (void)radioStationsDataSourceWillChangeStations:(ATVRadioStationsDataSource *)arg0;
- (void)radioStationsDataSourceDidChangeStations:(ATVRadioStationsDataSource *)arg0;
- (void)radioStationsDataSourceDidChangeStatus:(ATVRadioStationsDataSource *)arg0;
- (id)FeaturedStationsDividerHiddenBinding;
- (void)updateBoundFeaturedStationsDividerHidden;
- (ATVRadioStationsView *)stationsView;
- (char)_shouldHideFeaturedStationsDivider;
- (void)setStationsView:(ATVRadioStationsView *)arg0;
- (unsigned int)numberOfFeaturedStationsForRadioStationsView:(ATVRadioStationsView *)arg0;
- (unsigned int)numberOfPersonalStationsForRadioStationsView:(ATVRadioStationsView *)arg0;
- (ATVRadioStationControl *)radioStationsView:(ATVRadioStationsView *)arg0 itemForFeaturedStationAtIndex:(unsigned int)arg1;
- (ATVRadioStationControl *)radioStationsView:(ATVRadioStationsView *)arg0 itemForPersonalStationAtIndex:(unsigned int)arg1;
- (unsigned int)radioStationsView:(ATVRadioStationsView *)arg0 indexForFeatuedStationWithIdentifier:(NSString *)arg1;
- (unsigned int)radioStationsView:(ATVRadioStationsView *)arg0 indexForPersonalStationWithIdentifier:(NSString *)arg1;
- (NSString *)radioStationsView:(ATVRadioStationsView *)arg0 identifierForFeaturedStationAtIndex:(unsigned int)arg1;
- (NSString *)radioStationsView:(ATVRadioStationsView *)arg0 identifierForPersonalStationAtIndex:(unsigned int)arg1;
- (void)radioStationsView:(ATVRadioStationsView *)arg0 didSelectFeaturedStationAtIndex:(unsigned int)arg1;
- (void)radioStationsView:(ATVRadioStationsView *)arg0 didSelectPersonalStationAtIndex:(unsigned int)arg1;
- (void)didSelectStationCreationButtonForRadioStationsView:(ATVRadioStationsView *)arg0;
- (void)radioStationsView:(ATVRadioStationsView *)arg0 didMovePersonalStationAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)radioStationsViewDidBeginEditing:(ATVRadioStationsView *)arg0;
- (void)radioStationsViewDidEndEditing:(ATVRadioStationsView *)arg0;
- (void)bindFeaturedStationsDividerHiddenBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)setDataSource:(ATVRadioStationsDataSource *)arg0;
- (ATVRadioStationsController *)init;
- (ATVRadioStationsDataSource *)dataSource;
- (void).cxx_destruct;
- (NSArray *)featuredStations;

@end
