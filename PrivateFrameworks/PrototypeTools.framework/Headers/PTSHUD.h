/* Runtime dump - PTSHUD
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSHUD : UIView <UIGestureRecognizerDelegate, _UISettingsKeyPathObserver, _UISettingsGroupObserver>
{
    char _showing;
    char _enteringModalEditingSavedModeTableViewCell;
    char _exitingModalEditingSavedModeTableViewCell;
    _UISettings * _settings;
    _UISettingsGroup * _settingsGroup;
    unsigned int _savedSettingsIndex;
    NSDictionary * _configuration;
    NSString * _mode;
    UIView * _panView;
    NSArray * _savedModeRows;
    struct CGPoint _initialPoint;
}

@property (retain, nonatomic) _UISettings * settings;
@property (retain, nonatomic) _UISettingsGroup * settingsGroup;
@property (nonatomic) char showing;
@property (nonatomic) unsigned int savedSettingsIndex;
@property (copy, nonatomic) NSDictionary * configuration;
@property (copy, nonatomic) NSString * mode;
@property (nonatomic) char enteringModalEditingSavedModeTableViewCell;
@property (nonatomic) char exitingModalEditingSavedModeTableViewCell;
@property (nonatomic) struct CGPoint initialPoint;
@property (retain, nonatomic) UIView * panView;
@property (retain, nonatomic) NSArray * savedModeRows;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PTSHUD *)sharedInstance;
+ (BRWindow *)window;
+ (struct CGRect)defaultFrame;

- (void)hide;
- (char)showing;
- (void)show;
- (void)configureForSettings:(NSDictionary *)arg0;
- (PTSHUD *)initWithFrame:(struct CGRect)arg0;
- (_UISettings *)settings;
- (void)setMode:(NSString *)arg0;
- (NSString *)mode;
- (void)setConfiguration:(NSDictionary *)arg0;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didInsertSettings:(NSDictionary *)arg1 atIndex:(unsigned int)arg2;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didRemoveSettings:(NSDictionary *)arg1 atIndex:(unsigned int)arg2;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didMoveSettings:(NSDictionary *)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)setSettings:(_UISettings *)arg0;
- (void)setShowing:(char)arg0;
- (struct CGPoint)initialPoint;
- (void)setInitialPoint:(struct CGPoint)arg0;
- (void).cxx_destruct;
- (NSDictionary *)configuration;
- (void)setSavedSettingsIndex:(unsigned int)arg0;
- (void)handleVerticalPanGesture:(NSObject *)arg0;
- (void)setPanView:(UIView *)arg0;
- (void)showInMode:(id)arg0;
- (NSArray *)savedModeRows;
- (UIView *)panView;
- (_UISettingsGroup *)settingsGroup;
- (void)configureForSettings:(NSDictionary *)arg0 settingsGroup:(_UISettingsGroup *)arg1;
- (void)setSettingsGroup:(_UISettingsGroup *)arg0;
- (unsigned int)savedSettingsIndex;
- (void)showSavedSettingsAtIndex:(unsigned int)arg0;
- (void)saveSettingsGroupWithReason:(NSString *)arg0;
- (void)updateInterface;
- (void)addSavedSettings;
- (void)setEnteringModalEditingSavedModeTableViewCell:(char)arg0;
- (void)setExitingModalEditingSavedModeTableViewCell:(char)arg0;
- (void)showMessage:(NSString *)arg0;
- (void)updateControlsModeInterface;
- (void)updateSavedModeInterface;
- (char)enteringModalEditingSavedModeTableViewCell;
- (char)exitingModalEditingSavedModeTableViewCell;
- (void)showInModeForKeyPath:(NSString *)arg0;
- (void)restoreDefaultValuesAction:(NSObject *)arg0;
- (void)saveSettingsAction:(NSObject *)arg0;
- (void)addSettingsAction:(NSObject *)arg0;
- (void)showControlsModeAction:(NSObject *)arg0;
- (void)showSavedModeAction:(NSObject *)arg0;
- (void)setModalEditingSavedModeTableViewCell:(char)arg0;
- (void)editSavedModeTableAction:(NSObject *)arg0;
- (void)removeSavedSettingsAtIndex:(unsigned int)arg0;
- (void)moveSavedSettingsAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (void)setSavedModeRows:(NSArray *)arg0;

@end
