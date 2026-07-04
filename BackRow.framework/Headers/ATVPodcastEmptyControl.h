/* Runtime dump - ATVPodcastEmptyControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRReflectedImageControl, BRTextControl;
@interface ATVPodcastEmptyControl : BRControl
{
    BRTextControl * _headerTextControl;
    BRTextControl * _footerTextControl;
    BRReflectedImageControl * _podcastLogo;
}

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (ATVPodcastEmptyControl *)init;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (void)setHeaderText:(NSString *)arg0;
- (void)setFooterText:(NSString *)arg0;

@end
