/* Runtime dump - ATVPrivacyWelcomeController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVPrivacyWelcomeHeader, BRImageControl, BRListControl, BRMediaMenuView, BRMenuItem, OBPrivacyLinkController;
@interface ATVPrivacyWelcomeController : BRViewController
{
    char _didAcknowledge;
    id _dismissalHander;
    <BRAppliance> * _appliance;
    NSString * _bundleIdentifier;
    NSDictionary * _privacyDictionary;
    ATVPrivacyWelcomeHeader * _header;
    BRImageControl * _preview;
    BRMediaMenuView * _mediaMenu;
    OBPrivacyLinkController * _linkController;
}

@property (copy, nonatomic) id dismissalHander;
@property (retain, nonatomic) <BRAppliance> * appliance;
@property (retain, nonatomic) NSString * bundleIdentifier;
@property (retain, nonatomic) NSDictionary * privacyDictionary;
@property (retain, nonatomic) ATVPrivacyWelcomeHeader * header;
@property (retain, nonatomic) BRImageControl * preview;
@property (retain, nonatomic) BRMediaMenuView * mediaMenu;
@property (retain, nonatomic) OBPrivacyLinkController * linkController;
@property (nonatomic) char didAcknowledge;

- (NSDictionary *)privacyDictionary;
- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setPreview:(BRImageControl *)arg0;
- (BRImageControl *)preview;
- (void)setAppliance:(<BRAppliance> *)arg0;
- (<BRAppliance> *)appliance;
- (void)setDismissalHander:(id)arg0;
- (ATVPrivacyWelcomeController *)initWithApplicance:(id)arg0;
- (NSDictionary *)_subtitleAttributes;
- (char)didAcknowledge;
- (void)setDidAcknowledge:(char)arg0;
- (NSString *)applianceIdentifier;
- (id)dismissalHander;
- (void)setPrivacyDictionary:(NSDictionary *)arg0;
- (BRMediaMenuView *)mediaMenu;
- (void)setMediaMenu:(BRMediaMenuView *)arg0;
- (OBPrivacyLinkController *)linkController;
- (void)setLinkController:(OBPrivacyLinkController *)arg0;
- (void)_setupViews;
- (NSString *)bundleIdentifier;
- (void).cxx_destruct;
- (NSDictionary *)_titleAttributes;
- (void)setBundleIdentifier:(NSString *)arg0;
- (void)setHeader:(ATVPrivacyWelcomeHeader *)arg0;
- (ATVPrivacyWelcomeHeader *)header;

@end
