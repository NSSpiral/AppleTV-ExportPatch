/* Runtime dump - MusicGeniusMixesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRPageStripView;
@interface MusicGeniusMixesController : BRViewController
{
    BRPageStripView * _geniusMixesView;
    unsigned int _dataClientType;
    ATVDataClient * _dataClient;
    NSArray * _data;
    ATVDataQuery * _dataQuery;
    ATVDataQuery * _geniusMixSongsQuery;
    NSTimer * _spinnerTimer;
    char _showingSpinner;
    char _handlingDataClientUpdate;
    char _refreshNeeded;
    int _geniusQueryIndex;
}

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)wasPushed;
- (void)_executeDataQuery;
- (void)_showSpinner:(char)arg0;
- (void)wasExhumed;
- (MusicGeniusMixesController *)initWithDataClient:(ATVDataClient *)arg0 dataClientType:(unsigned int)arg1;
- (void)_dataQueryComplete;
- (long)numberOfPagesInPageStripView:(NSObject *)arg0;
- (NSObject *)pageStripView:(BRPageStripView *)arg0 pageAtIndex:(long)arg1;
- (float)xPagePositionOffsetForPageStripView:(NSObject *)arg0;
- (void)_dataClientUpdated:(id)arg0;
- (void)pageStripView:(BRPageStripView *)arg0 didSelectPageAtIndex:(long)arg1;
- (NSObject *)pageStripView:(BRPageStripView *)arg0 detailedPageAtIndex:(long)arg1;
- (float)yPagePositionOffsetForPageStripView:(NSObject *)arg0;
- (float)yDetailedPagePositionOffsetForPageStripView:(NSObject *)arg0;
- (void)pageStripView:(BRPageStripView *)arg0 didPlayPageAtIndex:(long)arg1;
- (void)_spinnerTimerFired;
- (void)_setDataQuery:(NSObject *)arg0;
- (NSArray *)_filterDataQueryResults:(NSArray *)arg0;
- (void)_geniusMixSongsQueryComplete;
- (void)dealloc;
- (NSString *)accessibilityLabel;

@end
