/* Runtime dump - OBPrivacySplashController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, OBPrivacyFlow;
@interface OBPrivacySplashController : BRViewController
{
    OBPrivacyFlow * _flow;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (OBPrivacySplashController *)initWithFlow:(OBPrivacyFlow *)arg0;
- (void)_initializeFromBundle;
- (void).cxx_destruct;

@end
