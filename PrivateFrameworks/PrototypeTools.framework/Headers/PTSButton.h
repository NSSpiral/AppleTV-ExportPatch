/* Runtime dump - PTSButton
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSButton : UIButton <PTSHUDControl, _UISettingsKeyPathObserver>
{
    _UISettings * _settings;
    int _alignment;
    NSString * _valueKeyPath;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (nonatomic) char enabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TPLegacyButton *)button;
+ (struct CGRect)defaultFrame;
+ (PTSButton *)hideHUDButton;
+ (PTSButton *)restoreDefaultValuesButton;
+ (PTSButton *)saveSettingsButton;
+ (PTSButton *)showSavedModeButton;
+ (PTSButton *)editSavedModeTableButton;
+ (PTSButton *)addSettingsButton;
+ (PTSButton *)showControlsModeButton;

- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (_UISettings *)settings;
- (int)alignment;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;
- (PTSButton *)initWithDefaultFrame;

@end
