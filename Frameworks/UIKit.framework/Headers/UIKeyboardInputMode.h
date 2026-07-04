/* Runtime dump - UIKeyboardInputMode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputMode : UITextInputMode <NSCopying>
{
    char isDisplayed;
    NSString * primaryLanguage;
    NSString * languageWithRegion;
    NSString * identifier;
    NSString * normalizedIdentifier;
    NSString * softwareLayout;
    NSString * hardwareLayout;
}

@property (retain, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * identifierWithLayouts;
@property (retain, nonatomic) NSString * normalizedIdentifier;
@property (retain, nonatomic) NSString * primaryLanguage;
@property (retain, nonatomic) NSString * languageWithRegion;
@property (retain, nonatomic) NSString * softwareLayout;
@property (retain, nonatomic) NSString * hardwareLayout;
@property (readonly, retain, nonatomic) NSArray * normalizedIdentifierLevels;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSString * extendedDisplayName;
@property (readonly, nonatomic) char isDefaultRightToLeft;
@property (readonly, nonatomic) char defaultLayoutIsASCIICapable;
@property (readonly, nonatomic) char isExtensionInputMode;
@property (readonly, nonatomic) NSExtension * extension;
@property (readonly, nonatomic) NSBundle * containingBundle;
@property (readonly, nonatomic) NSString * containingBundleDisplayName;
@property (nonatomic) char isDisplayed;

+ (UIKeyboardInputMode *)keyboardInputModeWithIdentifier:(NSString *)arg0;
+ (UIKeyboardInputMode *)dictationInputMode;
+ (UIKeyboardInputMode *)intlInputMode;
+ (NSString *)canonicalLanguageIdentifierFromIdentifier:(NSString *)arg0;
+ (NSString *)softwareLayoutFromIdentifier:(NSString *)arg0;
+ (NSString *)hardwareLayoutFromIdentifier:(NSString *)arg0;

- (void)dealloc;
- (UIKeyboardInputMode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)identifier;
- (NSString *)hardwareLayout;
- (UIKeyboardInputMode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSExtension *)extension;
- (char)isExtensionInputMode;
- (NSString *)identifierWithLayouts;
- (char)isDisplayed;
- (NSString *)primaryLanguage;
- (char)isDefaultRightToLeft;
- (char)isAllowedForTraits:(NSArray *)arg0;
- (char)defaultLayoutIsASCIICapable;
- (void)setPrimaryLanguage:(NSString *)arg0;
- (char)isDesiredForTraits:(NSArray *)arg0 forceASCIICapable:(char)arg1;
- (UIKeyboardInputMode *)initWithIdentifier:(NSString *)arg0;
- (NSBundle *)containingBundle;
- (NSString *)normalizedIdentifier;
- (NSString *)displayName;
- (NSString *)languageWithRegion;
- (void)setNormalizedIdentifier:(NSString *)arg0;
- (void)setLanguageWithRegion:(NSString *)arg0;
- (void)setSoftwareLayout:(NSString *)arg0;
- (void)setHardwareLayout:(NSString *)arg0;
- (NSArray *)normalizedIdentifierLevels;
- (NSString *)extendedDisplayName;
- (NSString *)containingBundleDisplayName;
- (NSString *)softwareLayout;
- (void)setIsDisplayed:(char)arg0;

@end
