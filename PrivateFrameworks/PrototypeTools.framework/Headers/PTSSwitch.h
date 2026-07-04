/* Runtime dump - PTSSwitch
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSwitch : UIView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    char _enabled;
    _UISettings * _settings;
    NSString * _valueKeyPath;
    int _alignment;
    float _height;
    id _target;
    SEL _action;
    UISwitch * _switchControl;
    UILabel * _titleLabel;
    NSArray * _subviewConstraints;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (readonly, nonatomic) float height;
@property (nonatomic) char enabled;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) UISwitch * switchControl;
@property (retain, nonatomic) UILabel * titleLabel;
@property (retain, nonatomic) NSArray * subviewConstraints;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)switchForSettings:(NSDictionary *)arg0 valueKeyPath:(NSString *)arg1 title:(NSString *)arg2;
+ (struct CGRect)defaultFrame;
+ (UISwitch *)switch;

- (void)setAlignment:(int)arg0;
- (PTSSwitch *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (_UISettings *)settings;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (void)setEnabled:(char)arg0;
- (NSObject *)target;
- (UILabel *)titleLabel;
- (void)setAction:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (float)height;
- (int)alignment;
- (char)enabled;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)setSettings:(_UISettings *)arg0 valueKeyPath:(NSString *)arg1;
- (id)makeSwitch;
- (void)setSwitchControl:(UISwitch *)arg0;
- (NSString *)makeTitleLabel;
- (UISwitch *)switchControl;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;
- (void)pressed:(char)arg0;
- (NSArray *)subviewConstraints;
- (void)setSubviewConstraints:(NSArray *)arg0;

@end
