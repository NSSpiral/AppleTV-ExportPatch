/* Runtime dump - ATVSWUProgressView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRProgressBarWidget, BRTextControl;
@interface ATVSWUProgressView : BRControl
{
    BRImageControl * _image;
    BRProgressBarWidget * _progress;
    BRTextControl * _text;
    NSString * _secondaryProgressImagePath;
    char _generateSecondaryProgressImage;
    float _lastProgressPercentage;
    float _lastAXProgressPercentage;
}

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (ATVSWUProgressView *)initGeneratingSecondaryProgressImage:(char)arg0;
- (NSString *)secondaryProgressImagePath;
- (void)dealloc;
- (void)setText:(BRTextControl *)arg0;
- (NSString *)accessibilityLabel;
- (void)setPercentComplete:(float)arg0;

@end
