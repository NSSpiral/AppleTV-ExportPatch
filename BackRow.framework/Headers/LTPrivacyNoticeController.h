/* Runtime dump - LTPrivacyNoticeController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, BRHeaderControl, BRImageControl, BRListControl, BRMediaMenuView, BRMenuItem, OBPrivacyFlow;
@interface LTPrivacyNoticeController : BRViewController
{
    BRHeaderControl * _header;
    BRImageControl * _preview;
    BRMediaMenuView * _mediaMenu;
    OBPrivacyFlow * _flow;
}

@property (retain, nonatomic) BRHeaderControl * header;
@property (retain, nonatomic) BRImageControl * preview;
@property (retain, nonatomic) BRMediaMenuView * mediaMenu;
@property (retain, nonatomic) OBPrivacyFlow * flow;

+ (char)needsToBeShown;

- (char)brEventAction:(BREvent *)arg0;
- (OBPrivacyFlow *)flow;
- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setPreview:(BRImageControl *)arg0;
- (BRImageControl *)preview;
- (NSDictionary *)_subtitleAttributes;
- (BRMediaMenuView *)mediaMenu;
- (void)setMediaMenu:(BRMediaMenuView *)arg0;
- (void)_showPrivacyNotice;
- (void)_showSplash;
- (void)setFlow:(OBPrivacyFlow *)arg0;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)setHeader:(BRHeaderControl *)arg0;
- (BRHeaderControl *)header;

@end
