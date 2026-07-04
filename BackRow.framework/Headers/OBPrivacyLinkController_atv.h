/* Runtime dump - OBPrivacyLinkController_atv
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/OBPrivacyLinkController.h>

@class OBPrivacyLinkView;
@interface OBPrivacyLinkController_atv : OBPrivacyLinkController
{
    OBPrivacyLinkView * _linkView;
}

@property (retain, nonatomic) OBPrivacyLinkView * linkView;

- (OBPrivacyLinkController_atv *)initWithPrivacyBundle:(NSObject *)arg0;
- (OBPrivacyLinkController_atv *)initWithBundleIdentifiers:(NSArray *)arg0;
- (void)setLinkEnabled:(char)arg0;
- (OBPrivacyLinkView *)linkView;
- (void)setLinkView:(OBPrivacyLinkView *)arg0;
- (void)loadView;
- (void).cxx_destruct;

@end
