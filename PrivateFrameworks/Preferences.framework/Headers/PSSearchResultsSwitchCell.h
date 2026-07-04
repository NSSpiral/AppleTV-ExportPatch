/* Runtime dump - PSSearchResultsSwitchCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResultsSwitchCell : PSSearchResultsCell
{
    UISwitch * _switch;
    SEL _getter;
    SEL _setter;
    id _target;
    PSSpecifier * _specifier;
}

@property (nonatomic) SEL getter;
@property (nonatomic) SEL setter;
@property (nonatomic) id target;
@property (retain, nonatomic) PSSpecifier * specifier;

- (SEL)setter;
- (void)setSetter:(SEL)arg0;
- (PSSpecifier *)specifier;
- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)dealloc;
- (PSSearchResultsSwitchCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (void)prepareForReuse;
- (void)setGetter:(SEL)arg0;
- (SEL)getter;
- (void)reloadValue:(char)arg0;
- (void)_switchValueChanged:(NSNotification *)arg0;

@end
