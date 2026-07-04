/* Runtime dump - PTSInfoLabel
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver>
{
    _UISettings * _settings;
    NSString * _valueKeyPath;
    int _alignment;
}

@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char enabled;

+ (struct CGRect)defaultFrame;
+ (NSDictionary *)infoLabelForSettings:(NSDictionary *)arg0 valueKeyPath:(NSString *)arg1;
+ (UILabel *)infoLabel;

- (void)setAlignment:(int)arg0;
- (PTSInfoLabel *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (_UISettings *)settings;
- (struct CGSize)intrinsicContentSize;
- (int)alignment;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void)setSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)setSettings:(_UISettings *)arg0 valueKeyPath:(NSString *)arg1;
- (void)setValueKeyPath:(NSString *)arg0;
- (NSString *)valueKeyPath;

@end
