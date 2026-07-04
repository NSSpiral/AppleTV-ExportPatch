/* Runtime dump - COMPUTERSTopShelfSharingView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface COMPUTERSTopShelfSharingView : BRControl
{
    BRImageControl * _sharingImage;
    BRTextControl * _title;
    BRTextControl * _text;
}

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (void)setTitle:(BRTextControl *)arg0 andDescription:(NSString *)arg1;
- (void)_updateSharingImage;
- (COMPUTERSTopShelfSharingView *)init;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;

@end
