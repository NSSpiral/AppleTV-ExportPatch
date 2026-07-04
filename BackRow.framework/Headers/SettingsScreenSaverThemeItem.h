/* Runtime dump - SettingsScreenSaverThemeItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVScreenSaverTheme;
@interface SettingsScreenSaverThemeItem : NSObject
{
    ATVScreenSaverTheme * _theme;
    NSString * _title;
    int _target;
}

@property (retain, nonatomic) ATVScreenSaverTheme * theme;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) int target;

- (void)setTitle:(NSString *)arg0;
- (void)setTarget:(int)arg0;
- (NSString *)title;
- (int)target;
- (void).cxx_destruct;
- (ATVScreenSaverTheme *)theme;
- (void)setTheme:(ATVScreenSaverTheme *)arg0;

@end
