/* Runtime dump - MusicCloudAdView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRImageControl, BRTextControl;
@interface MusicCloudAdView : BRControl
{
    BRTextControl * _titleControl;
    BRTextControl * _descriptionControl;
    BRAsyncImageControl * _iTunesMatchLogo;
    BRImageControl * _okButtonImageControl;
    BRTextControl * _okButtonTextControl;
    struct CGRect _iTunesMatchLogoFrame;
}

@property (nonatomic) struct CGRect iTunesMatchLogoFrame;
@property (retain, nonatomic) BRTextControl * titleControl;
@property (retain, nonatomic) BRTextControl * descriptionControl;
@property (retain, nonatomic) BRAsyncImageControl * iTunesMatchLogo;
@property (retain, nonatomic) BRImageControl * okButtonImageControl;
@property (retain, nonatomic) BRTextControl * okButtonTextControl;

+ (NSString *)viewWithDescription:(NSString *)arg0 prompt:(NSString *)arg1;

- (void)layoutSubcontrols;
- (BRTextControl *)titleControl;
- (BRTextControl *)descriptionControl;
- (void)setTitleControl:(BRTextControl *)arg0;
- (void)setDescriptionControl:(BRTextControl *)arg0;
- (MusicCloudAdView *)initWithDescription:(NSString *)arg0 prompt:(NSString *)arg1;
- (void)setITunesMatchLogo:(BRAsyncImageControl *)arg0;
- (char)shouldDisplayConfirmationButton;
- (void)setOkButtonImageControl:(BRImageControl *)arg0;
- (BRImageControl *)okButtonImageControl;
- (void)setOkButtonTextControl:(BRTextControl *)arg0;
- (BRTextControl *)okButtonTextControl;
- (BRAsyncImageControl *)iTunesMatchLogo;
- (struct CGRect)iTunesMatchLogoFrame;
- (void)setITunesMatchLogoFrame:(struct CGRect)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
