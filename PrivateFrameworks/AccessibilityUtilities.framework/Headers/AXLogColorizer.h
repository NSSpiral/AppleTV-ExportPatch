/* Runtime dump - AXLogColorizer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLogColorizer : NSObject
{
    char _active;
    char _managedBySettings;
    char _preferDarkColors;
    struct AXLogColorTheme _colorTheme;
}

@property (nonatomic) struct AXLogColorTheme colorTheme;
@property (nonatomic) char active;
@property (nonatomic) char preferDarkColors;
@property (nonatomic) char managedBySettings;

+ (AXLogColorizer *)defaultColorizer;
+ (char *)ansiColorSeqForAXLogColor:(int)arg0;
+ (NSString *)coloredString:(NSString *)arg0 withColor:(int)arg1;
+ (struct AXLogColorTheme)defaultLightColorsTheme;
+ (struct AXLogColorTheme)defaultDarkColorsTheme;
+ (AXLogColorizer *)colorizeStringIfEnabled:(id)arg0 withColor:(int)arg1;

- (AXLogColorizer *)init;
- (NSString *)description;
- (char)isActive;
- (void)setActive:(char)arg0;
- (NSString *)errorString:(NSString *)arg0;
- (NSString *)warningString:(NSString *)arg0;
- (NSString *)debugString:(NSString *)arg0;
- (NSString *)infoString:(NSString *)arg0;
- (NSDictionary *)_initAndManageWithSettings:(char)arg0;
- (void)setManagedBySettings:(char)arg0;
- (void)_updateSettingsFromUserPrefs;
- (void)setColorTheme:(struct AXLogColorTheme)arg0;
- (void)setPreferDarkColors:(char)arg0;
- (char)isManagedBySettings;
- (char)preferDarkColors;
- (struct AXLogColorTheme)colorTheme;
- (NSString *)whiteOrBlackString:(NSString *)arg0;
- (NSString *)greyString:(NSString *)arg0;
- (NSString *)redString:(NSString *)arg0;
- (NSString *)greenString:(NSString *)arg0;
- (NSString *)yellowString:(NSString *)arg0;
- (NSString *)blueString:(NSString *)arg0;
- (NSString *)magentaString:(NSString *)arg0;
- (NSString *)cyanString:(NSString *)arg0;

@end
