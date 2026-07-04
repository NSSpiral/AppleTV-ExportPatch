/* Runtime dump - ATVRadioAddController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMediaMenuView, BRMenuItem;
@interface ATVRadioAddController : BRViewController
{
    ATVDataClient * _dataClient;
    ATVDataQuery * _pendingQuery;
    NSTimer * _spinnerTimer;
    NSArray * _genreSections;
    BRMediaMenuView * _mediaMenuView;
}

@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataQuery * pendingQuery;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (copy, nonatomic) NSArray * genreSections;
@property (weak, nonatomic) BRMediaMenuView * mediaMenuView;

- (void)setPendingQuery:(ATVDataQuery *)arg0;
- (ATVDataQuery *)pendingQuery;
- (void)wasPushed;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)listWasActivated:(id)arg0;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)_showSpinner;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (void)windowMaxBoundsChanged;
- (BRMediaMenuView *)mediaMenuView;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setMediaMenuView:(BRMediaMenuView *)arg0;
- (void)_executeDataQuery;
- (NSArray *)genreSections;
- (void)_startQueryThenShowSpinnerIfNeeded;
- (void)setGenreSections:(NSArray *)arg0;
- (void)_setupStoreView;
- (NSObject *)_genresForSectionAtIndex:(unsigned int)arg0;
- (NSString *)_stationForRowAtIndexPath:(NSIndexPath *)arg0;
- (NSString *)_titleForRowAtIndexPath:(NSIndexPath *)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (ATVRadioAddController *)init;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;

@end
