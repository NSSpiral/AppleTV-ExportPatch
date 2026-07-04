/* Runtime dump - ATVRadioStationEditController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVRadioStationsChangeObserver;
@protocol BRTextFieldDelegate;

@class ATVRadioStationsDataSource, BRControl, BRListControl, BRMediaMenuView, BRMenuItem, BRTextEntryController;
@interface ATVRadioStationEditController : BRViewController <ATVRadioStationsChangeObserver, BRTextFieldDelegate>
{
    char _canEditName;
    char _canEditMixType;
    char _canLikeOrBanItems;
    ATVDataCollection * _station;
    ATVRadioStationsDataSource * _stationsDataSource;
    NSString * _stationName;
    NSString * _stationMixType;
    BRMediaMenuView * _mediaMenuView;
    NSTimer * _spinnerTimer;
    ATVDataQuery * _likesQuery;
    NSDictionary * _stationLikesBans;
    ATVImage * _trashCanImage;
    ATVImage * _menuDefaultImage;
    BRTextEntryController * _stationNameController;
    NSTimer * _mixTypeChangedTimer;
}

@property (retain, nonatomic) ATVDataCollection * station;
@property (retain, nonatomic) ATVRadioStationsDataSource * stationsDataSource;
@property (retain, nonatomic) NSString * stationName;
@property (retain, nonatomic) NSString * stationMixType;
@property (retain, nonatomic) BRMediaMenuView * mediaMenuView;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (retain, nonatomic) ATVDataQuery * likesQuery;
@property (retain, nonatomic) NSDictionary * stationLikesBans;
@property (retain, nonatomic) ATVImage * trashCanImage;
@property (retain, nonatomic) ATVImage * menuDefaultImage;
@property (retain, nonatomic) BRTextEntryController * stationNameController;
@property (nonatomic) char canEditName;
@property (nonatomic) char canEditMixType;
@property (weak, nonatomic) NSTimer * mixTypeChangedTimer;
@property (nonatomic) char canLikeOrBanItems;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)controlWasActivated;
- (void)_showSpinner;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (void)radioStationsDataSourceDidChangeStations:(ATVRadioStationsDataSource *)arg0;
- (char)canLikeOrBanItems;
- (NSDictionary *)stationLikesBans;
- (void)_executeQuery;
- (void)_setupMediaMenuView;
- (ATVDataQuery *)likesQuery;
- (void)setLikesQuery:(ATVDataQuery *)arg0;
- (NSTimer *)mixTypeChangedTimer;
- (void)setMixTypeChangedTimer:(NSTimer *)arg0;
- (void)_updateMixType;
- (BRTextEntryController *)stationNameController;
- (void)_didDeleteStation;
- (char)canEditName;
- (char)canEditMixType;
- (NSArray *)_sectionTypes;
- (NSArray *)_stationSectionRowTypes;
- (int)_sectionTypeForSectionAtIndex:(long)arg0;
- (long)_numberOfRowsInSectionWithType:(int)arg0;
- (NSObject *)_sectionHeaderForSectionWithType:(int)arg0;
- (unsigned int)_rowTypeForStationSectionRowAtIndex:(long)arg0;
- (void)setStationNameController:(BRTextEntryController *)arg0;
- (NSObject *)_stringForMixType:(NSObject *)arg0;
- (NSString *)stationMixType;
- (void)setStationMixType:(NSString *)arg0;
- (void)_mixTypeChangedTimerFired:(id)arg0;
- (NSObject *)_menuItemForTrack:(NSObject *)arg0 section:(int)arg1;
- (id)_seedTrackFromStationDict:(id)arg0;
- (BRMediaMenuView *)mediaMenuView;
- (void)setStationLikesBans:(NSDictionary *)arg0;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (ATVRadioStationsDataSource *)stationsDataSource;
- (void)setStationsDataSource:(ATVRadioStationsDataSource *)arg0;
- (void)setMediaMenuView:(BRMediaMenuView *)arg0;
- (ATVImage *)trashCanImage;
- (void)setTrashCanImage:(ATVImage *)arg0;
- (ATVImage *)menuDefaultImage;
- (void)setMenuDefaultImage:(ATVImage *)arg0;
- (void)setCanEditName:(char)arg0;
- (void)setCanEditMixType:(char)arg0;
- (void)setCanLikeOrBanItems:(char)arg0;
- (ATVRadioStationEditController *)initWithStation:(ATVDataCollection *)arg0;
- (ATVDataCollection *)station;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void).cxx_destruct;
- (void)setStation:(ATVDataCollection *)arg0;
- (NSString *)stationName;
- (void)setStationName:(NSString *)arg0;

@end
