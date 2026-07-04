/* Runtime dump - PTSGraphView
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    char _enabled;
    _UISettings * _settings;
    _UISettingsGroup * _settingsGroup;
    NSString * _xAxisValueKeyPath;
    NSString * _yAxisValueKeyPath;
    NSString * _valueKeyPath;
    int _alignment;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (nonatomic) char enabled;
@property (weak, nonatomic) _UISettingsGroup * settingsGroup;
@property (copy, nonatomic) NSString * xAxisValueKeyPath;
@property (copy, nonatomic) NSString * yAxisValueKeyPath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGRect)defaultFrame;
+ (NSObject *)graphView;

- (void)setAlignment:(int)arg0;
- (PTSGraphView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (_UISettings *)settings;
- (void)setEnabled:(char)arg0;
- (int)alignment;
- (char)enabled;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)setSettings:(_UISettings *)arg0 valueKeyPath:(NSString *)arg1;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;
- (_UISettingsGroup *)settingsGroup;
- (void)setSettingsGroup:(_UISettingsGroup *)arg0;
- (void)updateGraphData;
- (NSString *)xAxisValueKeyPath;
- (NSString *)yAxisValueKeyPath;
- (void)setXAxisValueKeyPath:(NSString *)arg0;
- (void)setYAxisValueKeyPath:(NSString *)arg0;

@end
