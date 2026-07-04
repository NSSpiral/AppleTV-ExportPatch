/* Runtime dump - PSConfirmationSpecifier
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSConfirmationSpecifier : PSSpecifier
{
    NSString * _title;
    NSString * _prompt;
    NSString * _okButton;
    NSString * _cancelButton;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * prompt;
@property (retain, nonatomic) NSString * okButton;
@property (retain, nonatomic) NSString * cancelButton;

+ (PSConfirmationSpecifier *)preferenceSpecifierNamed:(id)arg0 target:(NSObject *)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(int)arg5 edit:(Class)arg6;
+ (PSConfirmationSpecifier *)specifierWithSpecifier:(id)arg0;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)prompt;
- (void)setPrompt:(NSString *)arg0;
- (NSString *)cancelButton;
- (void)setCancelButton:(NSString *)arg0;
- (char)isDestructive;
- (NSString *)okButton;
- (char)isEqualToSpecifier:(id)arg0;
- (void)setOkButton:(NSString *)arg0;
- (void)setupWithDictionary:(NSDictionary *)arg0;

@end
