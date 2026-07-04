/* Runtime dump - PLSlideshowSettingsViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate>
{
    NSArray * _airplayRoutes;
    unsigned int _selectedAirplayRouteIndex;
    NSArray * _transitionKeys;
    NSArray * _alternateTransitionLocalizations;
    MPMediaPickerController * _mediaPicker;
    PLSlideshowTransitionsViewController * _transitionsController;
    PLSlideshowAirPlayRoutesViewController * _airPlayRoutesController;
    UITableView * _table;
    UITableViewCell * _transitionCell;
    UITableViewCell * _selectedMusicCell;
    UITableViewCell * _playMusicSwitchCell;
    char _slideshowShouldPlayMusic;
    <PLSlideshowSettingsViewControllerDelegate> * _delegate;
    NSString * _selectedTransition;
    MPMediaItemCollection * _slideshowMusicCollection;
}

@property (nonatomic) <PLSlideshowSettingsViewControllerDelegate> * delegate;
@property (copy, nonatomic) NSString * selectedTransition;
@property (nonatomic) char slideshowShouldPlayMusic;
@property (retain, nonatomic) MPMediaItemCollection * slideshowMusicCollection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLSlideshowSettingsViewController *)AppleTVPushTransitions;
+ (PLSlideshowSettingsViewController *)TVOutTransitions;
+ (PLSlideshowSettingsViewController *)iPhoneTransitions;
+ (PLSlideshowSettingsViewController *)iPadTransitions;
+ (int)_uiTransitionForTransitionKey:(NSString *)arg0;

- (void)mediaPickerDidCancel:(MPMediaPickerController *)arg0;
- (void)mediaPicker:(MPMediaPickerController *)arg0 didPickMediaItems:(MPMediaItemCollection *)arg1;
- (void)dealloc;
- (void)setDelegate:(<PLSlideshowSettingsViewControllerDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<PLSlideshowSettingsViewControllerDelegate> *)delegate;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)_preheatMediaPicker;
- (void)setSelectedTransition:(NSString *)arg0;
- (void)setSlideshowShouldPlayMusic:(char)arg0;
- (void)setSlideshowMusicCollection:(MPMediaItemCollection *)arg0;
- (NSString *)selectedTransition;
- (char)slideshowShouldPlayMusic;
- (MPMediaItemCollection *)slideshowMusicCollection;
- (int)_mainSection;
- (void)_updateSettingsInfo;
- (id)_selectedAirplayRoute;
- (void)applySlideshowSettings:(NSDictionary *)arg0;
- (char)_includeAirPlaySection;
- (int)_airPlaySection;
- (int)_buttonSection;
- (PLSlideshowSettingsViewController *)initWithAirplayRoutes:(NSArray *)arg0 selectedRouteIndex:(unsigned int)arg1;
- (void)_playMusicSwitchValueDidChange:(NSDictionary *)arg0;
- (id)_selectedMusic;
- (void)_playButtonWasPressed:(id)arg0;
- (void)updateTransitionKeys:(NSArray *)arg0;
- (NSDictionary *)slideshowSettings;

@end
