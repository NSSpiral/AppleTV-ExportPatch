/* Runtime dump - SettingsAccessibilityCaptioningStyleBaseController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>
@interface SettingsAccessibilityCaptioningStyleBaseController : BRViewController
{
    NSString * _profileID;
}

- (void)wasExhumed;
- (SettingsAccessibilityCaptioningStyleBaseController *)initWithTitle:(NSString *)arg0 andProfileID:(NSString *)arg1;
- (void)_reloadList;
- (NSObject *)_videoOverridesStyleMenuItem;
- (char)_videoOverridesStyle;
- (void)_refreshCaptionPreview;
- (void)_stylesChanged:(NSNotification *)arg0;
- (void)_subtitleRendererFormattingChanged:(NSNotification *)arg0;
- (void)_refreshCaptionPreviewIfActive;
- (SettingsAccessibilityCaptioningStyleBaseController *)initWithProfileID:(NSString *)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_reload;

@end
