/* Runtime dump - PTSSlider
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    char _enabled;
    char _showsValueLabel;
    _UISettings * _settings;
    NSString * _valueKeyPath;
    int _alignment;
    UISlider * _sliderControl;
    UILabel * _titleLabel;
    NSNumberFormatter * _valueLabelFormatter;
    NSArray * _valueLabelStrings;
    float _increment;
    UILabel * _valueLabel;
    UIButton * _upIncrementButton;
    UIButton * _downIncrementButton;
    NSArray * _subviewConstraints;
    NSTimer * _buttonRepeatTimer;
    struct ? _valueChangePublishTTL;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (nonatomic) char enabled;
@property (retain, nonatomic) UISlider * sliderControl;
@property (retain, nonatomic) UILabel * titleLabel;
@property (nonatomic) char showsValueLabel;
@property (retain, nonatomic) NSNumberFormatter * valueLabelFormatter;
@property (copy, nonatomic) NSArray * valueLabelStrings;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) float increment;
@property (retain, nonatomic) UILabel * valueLabel;
@property (retain, nonatomic) UIButton * upIncrementButton;
@property (retain, nonatomic) UIButton * downIncrementButton;
@property (retain, nonatomic) NSArray * subviewConstraints;
@property (retain, nonatomic) NSTimer * buttonRepeatTimer;
@property (nonatomic) struct ? valueChangePublishTTL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)sliderForSettings:(NSDictionary *)arg0 valueKeyPath:(NSString *)arg1 title:(NSString *)arg2 minimumValue:(float)arg3 maximumValue:(float)arg4;
+ (ADPrerollSlider *)slider;
+ (struct CGRect)defaultFrame;
+ (NSDictionary *)zeroToOneSliderForSettings:(NSDictionary *)arg0 valueKeyPath:(NSString *)arg1 title:(NSString *)arg2;

- (UILabel *)valueLabel;
- (float)increment;
- (void)setAlignment:(int)arg0;
- (PTSSlider *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (_UISettings *)settings;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)setEnabled:(char)arg0;
- (void)setValue:(float)arg0;
- (struct CGSize)intrinsicContentSize;
- (UILabel *)titleLabel;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (int)alignment;
- (void)setValue:(float)arg0 animated:(char)arg1;
- (char)enabled;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)setTitleLabel:(UILabel *)arg0;
- (void)valueChanged:(char)arg0;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)setSettings:(_UISettings *)arg0 valueKeyPath:(NSString *)arg1;
- (NSString *)makeTitleLabel;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;
- (NSArray *)subviewConstraints;
- (void)setSubviewConstraints:(NSArray *)arg0;
- (void)setValueLabelFormatter:(NSNumberFormatter *)arg0;
- (id)makeSliderControl;
- (void)setSliderControl:(UISlider *)arg0;
- (NSString *)makeValueLabel;
- (void)setValueLabel:(UILabel *)arg0;
- (void)upIncrementAction:(NSObject *)arg0;
- (NSObject *)makeIncrementButtonWithAction:(SEL)arg0 imageName:(NSString *)arg1;
- (void)setUpIncrementButton:(UIButton *)arg0;
- (void)downIncrementAction:(NSObject *)arg0;
- (void)setDownIncrementButton:(UIButton *)arg0;
- (void)setValueChangePublishTTL:(struct ?)arg0;
- (UISlider *)sliderControl;
- (UIButton *)upIncrementButton;
- (UIButton *)downIncrementButton;
- (NSNumberFormatter *)valueLabelFormatter;
- (NSArray *)valueLabelStrings;
- (void)publishValueChanged;
- (struct ?)valueChangePublishTTL;
- (void)updateValueLabel;
- (NSTimer *)buttonRepeatTimer;
- (void)setButtonRepeatTimer:(NSTimer *)arg0;
- (void)upIncrement;
- (void)stopIncrementRepeatAction;
- (void)downIncrement;
- (void)setShowsValueLabel:(char)arg0;
- (char)showsValueLabel;
- (void)setValueLabelStrings:(NSArray *)arg0;
- (void)setIncrement:(float)arg0;

@end
