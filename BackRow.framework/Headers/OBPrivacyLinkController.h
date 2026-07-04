/* Runtime dump - OBPrivacyLinkController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class OBBundle, OBPrivacyFlow;
@interface OBPrivacyLinkController : UIViewController
{
    NSArray * _bundles;
    NSArray * _bundleIdentifiers;
    char _displayIcon;
    char _displayLargeIcon;
    char _displayCaptionText;
    char _allowsOpeningSafari;
    NSString * _displayLanguage;
    unsigned int _displayDeviceType;
}

@property (readonly) OBBundle * bundle;
@property (readonly) NSArray * bundles;
@property (readonly) OBPrivacyFlow * flow;
@property char displayIcon;
@property char displayLargeIcon;
@property char displayCaptionText;
@property (retain) NSString * displayLanguage;
@property unsigned int displayDeviceType;
@property char allowsOpeningSafari;

+ (Class)_platformSpecificClass;
+ (OBPrivacyLinkController *)linkWithBundleIdentifiers:(NSArray *)arg0;
+ (NSString *)linkWithBundleIdentifier:(OBBundle *)arg0;

- (OBPrivacyLinkController *)initWithPrivacyBundle:(NSObject *)arg0;
- (void)setDisplayLargeIcon:(char)arg0;
- (void)setDisplayCaptionText:(char)arg0;
- (OBPrivacyFlow *)flow;
- (NSString *)displayLanguage;
- (char)displayLargeIcon;
- (OBPrivacyLinkController *)initWithBundleIdentifiers:(NSArray *)arg0;
- (void)setLinkEnabled:(char)arg0;
- (NSArray *)bundles;
- (void)linkPressed;
- (char)displayCaptionText;
- (void)setDisplayLanguage:(NSString *)arg0;
- (unsigned int)displayDeviceType;
- (void)setDisplayDeviceType:(unsigned int)arg0;
- (char)allowsOpeningSafari;
- (void)setAllowsOpeningSafari:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (OBBundle *)bundle;
- (void).cxx_destruct;
- (void)setDisplayIcon:(char)arg0;
- (char)displayIcon;

@end
