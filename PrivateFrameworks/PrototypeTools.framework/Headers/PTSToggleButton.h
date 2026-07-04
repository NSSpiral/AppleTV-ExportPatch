/* Runtime dump - PTSToggleButton
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSToggleButton : PTSButton <PTSHUDControl, _UISettingsKeyPathObserver>
{
    NSString * _titleForOnState;
    NSString * _titleForOffState;
    id _valueForOnState;
    id _valueForOffState;
}

@property (copy, nonatomic) NSString * titleForOnState;
@property (copy, nonatomic) NSString * titleForOffState;
@property (copy, nonatomic) id valueForOnState;
@property (copy, nonatomic) id valueForOffState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) _UISettings * settings;
@property (copy, nonatomic) NSString * valueKeyPath;
@property (nonatomic) int alignment;
@property (nonatomic) char enabled;

+ (NSDictionary *)toggleButtonForSettings:(NSDictionary *)arg0 valueKeyPath:(NSString *)arg1 titleForOnState:(NSString *)arg2 titleForOffState:(NSString *)arg3;

- (void)dealloc;
- (void)settings:(_UISettings *)arg0 changedValueForKeyPath:(NSString *)arg1;
- (void).cxx_destruct;
- (void)setSettings:(_UISettings *)arg0 valueKeyPath:(NSString *)arg1;
- (void)pressed:(char)arg0;
- (void)setTitleForOnState:(NSString *)arg0;
- (void)setTitleForOffState:(NSString *)arg0;
- (NSObject *)valueForOnState;
- (NSObject *)valueForOffState;
- (NSString *)titleForOnState;
- (NSString *)titleForOffState;
- (void)setValueForOnState:(NSObject *)arg0;
- (void)setValueForOffState:(NSObject *)arg0;

@end
