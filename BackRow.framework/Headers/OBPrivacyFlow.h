/* Runtime dump - OBPrivacyFlow
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/OBFlow.h>
@interface OBPrivacyFlow : OBFlow
{
    NSBundle * _bundle;
    NSString * _splashContentName;
    NSDictionary * _splashPlist;
    char _buttonIconLoaded;
    struct ATVImage * _buttonIcon;
    NSString * _buttonTitle;
    NSString * _buttonCaption;
    NSString * _splashTitle;
    NSString * _splashShortTitle;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) unsigned int contentVersion;
@property (readonly, nonatomic) char platformSupported;
@property (readonly, nonatomic) char showInCombinedList;
@property (readonly, nonatomic) char personallyIdentifiable;
@property (readonly, nonatomic) ATVImage * buttonIcon;
@property (readonly, nonatomic) NSString * localizedButtonTitle;
@property (readonly, nonatomic) NSString * localizedButtonCaption;
@property (readonly, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) NSString * localizedShortTitle;
@property (readonly, nonatomic) NSArray * localizedContentList;

+ (NSBundle *)flowWithBundle:(NSBundle *)arg0;
+ (NSString *)_modelSpecificLocalizedStringKeyForKey:(NSString *)arg0 preferredDeviceType:(unsigned int)arg1;

- (NSString *)localizedButtonCaptionForLanguage:(NSString *)arg0 preferredDeviceType:(unsigned int)arg1;
- (NSString *)localizedButtonTitleForLanguage:(NSString *)arg0 preferredDeviceType:(unsigned int)arg1;
- (struct ATVImage *)buttonIcon;
- (NSString *)localizedButtonTitle;
- (char)platformSupported;
- (NSArray *)localizedContentList;
- (NSString *)_currentPlatform;
- (NSString *)_splashLocalizedStringForKey:(NSString *)arg0 language:(NSString *)arg1 table:(_UIAlertSheetTable *)arg2 preferredDeviceType:(unsigned int)arg3;
- (char)isPersonallyIdentifiable;
- (void)setButtonIcon:(struct ATVImage *)arg0;
- (char)_conformsToRequirement:(id)arg0;
- (NSString *)_splashLocalizedStringForKey:(NSString *)arg0 language:(NSString *)arg1 preferredDeviceType:(unsigned int)arg2;
- (char)_conformsToRequirements:(id)arg0;
- (NSObject *)_textForConditionalItem:(NSObject *)arg0 language:(NSString *)arg1 preferredDeviceType:(unsigned int)arg2;
- (NSString *)localizedTitleForLanguage:(NSString *)arg0 preferredDeviceType:(unsigned int)arg1;
- (NSString *)localizedShortTitleForLanguage:(NSString *)arg0 preferredDeviceType:(unsigned int)arg1;
- (NSString *)localizedContentListForLanguage:(NSString *)arg0 preferredDeviceType:(unsigned int)arg1;
- (struct ATVImage *)_bundleImageNamed:(id)arg0;
- (OBPrivacyFlow *)initWithSplashContent:(NSObject *)arg0;
- (char)showInCombinedList;
- (NSString *)localizedButtonCaption;
- (NSString *)localizedShortTitle;
- (NSString *)identifier;
- (OBPrivacyFlow *)initWithBundle:(NSBundle *)arg0;
- (void).cxx_destruct;
- (NSString *)localizedTitle;
- (unsigned int)contentVersion;

@end
