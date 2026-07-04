/* Runtime dump - ATVRadioNavigationBarController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVRadioStationsChangeObserver;

@class ATVNavigationBarController, ATVRadioEditViewController, ATVRadioStationsDataSource;
@interface ATVRadioNavigationBarController : BRViewController <ATVRadioStationsChangeObserver>
{
    ATVNavigationBarController * _navigationBarController;
    char _isPlayingRadio;
    ATVRadioStationsDataSource * _dataSource;
    ATVRadioEditViewController * _editViewController;
}

@property (retain, nonatomic) ATVRadioStationsDataSource * dataSource;
@property (retain, nonatomic) ATVRadioEditViewController * editViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (char)_isRadioPlayerActive;
- (NSObject *)_makeNowPlayingController;
- (void)setEditViewController:(ATVRadioEditViewController *)arg0;
- (ATVRadioEditViewController *)editViewController;
- (void)_checkStoppedStateHandler:(id /* block */)arg0;
- (void)_checkPlayedStateHandler:(id /* block */)arg0;
- (void)_refreshNowPlaying;
- (void)_stationsChanged;
- (void)radioStationsDataSourceDidChangeStations:(ATVRadioStationsDataSource *)arg0;
- (void)switchToShowNowPlayingController;
- (void)dealloc;
- (void)setDataSource:(ATVRadioStationsDataSource *)arg0;
- (ATVRadioStationsDataSource *)dataSource;
- (void).cxx_destruct;

@end
