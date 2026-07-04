/* Runtime dump - OBPrivacyLinkView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRTextControl, OBPrivacyLinkButton;
@interface OBPrivacyLinkView : BRControl
{
    OBPrivacyLinkButton * _linkButton;
    BRTextControl * _captionView;
    NSString * _captionText;
    NSString * _buttonText;
}

@property (readonly) OBPrivacyLinkButton * linkButton;
@property (readonly) BRTextControl * captionView;
@property (readonly) NSString * captionText;
@property (readonly) NSString * buttonText;

- (void)layoutSubcontrols;
- (OBPrivacyLinkView *)initWithCaption:(NSString *)arg0 buttonText:(NSString *)arg1 image:(UIImage *)arg2 imageSize:(struct CGSize)arg3 useLargeIcon:(char)arg4;
- (id)initialFocus;
- (NSString *)buttonText;
- (NSDictionary *)_captionAttributes;
- (BRTextControl *)captionView;
- (NSString *)captionText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;
- (OBPrivacyLinkButton *)linkButton;

@end
