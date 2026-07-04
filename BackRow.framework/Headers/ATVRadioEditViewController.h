/* Runtime dump - ATVRadioEditViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVRadioStationsChangeObserver;

@class ATVRadioStationsDataSource, BRControl, BRListControl, BRMediaMenuView, BRMenuItem;
@interface ATVRadioEditViewController : BRViewController <ATVRadioStationsChangeObserver>
{
    char _lastExplicitContentSetting;
    ATVRadioStationsDataSource * _dataSource;
    NSTimer * _spinnerTimer;
    BRMediaMenuView * _mediaMenuView;
    ATVImage * _trashCanImage;
    ATVImage * _menuDefaultImage;
    NSTimer * _explicitSettingChangedTimer;
}

@property (retain, nonatomic) ATVRadioStationsDataSource * dataSource;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (retain, nonatomic) BRMediaMenuView * mediaMenuView;
@property (retain, nonatomic) ATVImage * trashCanImage;
@property (retain, nonatomic) ATVImage * menuDefaultImage;
@property (weak, nonatomic) NSTimer * explicitSettingChangedTimer;
@property (nonatomic) char lastExplicitContentSetting;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

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
- (void)radioStationsDataSourceWillChangeStations:(ATVRadioStationsDataSource *)arg0;
- (void)radioStationsDataSourceDidChangeStations:(ATVRadioStationsDataSource *)arg0;
- (void)radioStationsDataSourceDidChangeStatus:(ATVRadioStationsDataSource *)arg0;
- (void)windowMaxBoundsChanged;
- (BRMediaMenuView *)mediaMenuView;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setMediaMenuView:(BRMediaMenuView *)arg0;
- (ATVImage *)trashCanImage;
- (void)setTrashCanImage:(ATVImage *)arg0;
- (ATVImage *)menuDefaultImage;
- (void)setMenuDefaultImage:(ATVImage *)arg0;
- (NSString *)_stationForRowAtIndexPath:(NSIndexPath *)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)_stations;
- (void)_explicitSettingChanged:(NSNotification *)arg0;
- (NSTimer *)explicitSettingChangedTimer;
- (void)setExplicitSettingChangedTimer:(NSTimer *)arg0;
- (void)_updateExplicitSetting;
- (void)_explicitSettingChangedTimerFired:(id)arg0;
- (void)_updatePreviewForItemAtIndexPath:(NSIndexPath *)arg0;
- (id)_stringValueForCurrentExplicitnessOption;
- (id)_menuItemForStation:(id)arg0;
- (unsigned int)_numberOfStations;
- (NSString *)_titleForSectionAtIndex:(unsigned int)arg0;
- (NSString *)_indexPathForStationWithIdentifier:(NSString *)arg0;
- (void)_toggleExplicitContentAllowed;
- (char)lastExplicitContentSetting;
- (void)setLastExplicitContentSetting:(char)arg0;
- (void)dealloc;
- (void)setDataSource:(ATVRadioStationsDataSource *)arg0;
- (ATVRadioEditViewController *)init;
- (ATVRadioStationsDataSource *)dataSource;
- (void).cxx_destruct;

@end
