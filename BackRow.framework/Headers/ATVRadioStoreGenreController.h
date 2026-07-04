/* Runtime dump - ATVRadioStoreGenreController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVRadioStationPreviewController, BRControl, BRListControl, BRMediaMenuView, BRMenuItem;
@interface ATVRadioStoreGenreController : BRViewController
{
    ATVDataCollection * _parentNode;
    ATVDataClient * _dataClient;
    ATVDataQuery * _subgenreQuery;
    NSTimer * _spinnerTimer;
    NSArray * _sections;
    ATVRadioStationPreviewController * _stationPreviewController;
}

@property (retain, nonatomic) ATVDataCollection * parentNode;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataQuery * subgenreQuery;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (copy, nonatomic) NSArray * sections;
@property (retain, nonatomic) ATVRadioStationPreviewController * stationPreviewController;

- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (BRMediaMenuView *)mediaMenuView;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)_stationForRowAtIndexPath:(NSIndexPath *)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (ATVRadioStoreGenreController *)initWithGenreNode:(NSDictionary *)arg0;
- (unsigned int)_numberOfSections;
- (ATVDataQuery *)subgenreQuery;
- (void)setSubgenreQuery:(ATVDataQuery *)arg0;
- (void)_spinnerTimerHandler:(id /* block */)arg0;
- (void)setStationPreviewController:(ATVRadioStationPreviewController *)arg0;
- (NSObject *)_stationsForSectionAtIndex:(unsigned int)arg0;
- (unsigned int)_numberOfStationsInSectionAtIndex:(unsigned int)arg0;
- (ATVRadioStationPreviewController *)stationPreviewController;
- (void)_updatePreviewWithStation:(id)arg0;
- (void)_updatePreviewStationMetadata;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setParentNode:(ATVDataCollection *)arg0;
- (ATVDataCollection *)parentNode;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;

@end
