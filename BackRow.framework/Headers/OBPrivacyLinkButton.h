/* Runtime dump - OBPrivacyLinkButton
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVImageAndTextControl.h>
@interface OBPrivacyLinkButton : ATVImageAndTextControl
{
    NSAttributedString * _title;
}

- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (OBPrivacyLinkButton *)initWithText:(NSString *)arg0 image:(UIImage *)arg1 imageSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (NSDictionary *)_titleAttributes;

@end
