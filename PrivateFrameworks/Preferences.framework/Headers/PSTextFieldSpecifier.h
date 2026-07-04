/* Runtime dump - PSTextFieldSpecifier
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTextFieldSpecifier : PSSpecifier
{
    SEL bestGuess;
    NSString * _placeholder;
}

+ (PSTextFieldSpecifier *)preferenceSpecifierNamed:(id)arg0 target:(NSObject *)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(int)arg5 edit:(Class)arg6;
+ (PSTextFieldSpecifier *)specifierWithSpecifier:(id)arg0;

- (void)dealloc;
- (void)setPlaceholder:(NSString *)arg0;
- (NSString *)placeholder;
- (char)isEqualToSpecifier:(id)arg0;

@end
