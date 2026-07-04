/* Runtime dump - ATVRadioTopShelfLogoView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVRadioTopShelfLogoView : BRControl
{
    BRImageControl * _imageControl;
    BRTextControl * _titleControl;
    BRTextControl * _messageControl;
}

@property (retain, nonatomic) BRImageControl * imageControl;
@property (retain, nonatomic) BRTextControl * titleControl;
@property (retain, nonatomic) BRTextControl * messageControl;

- (BRImageControl *)imageControl;
- (void)setImageControl:(BRImageControl *)arg0;
- (void)controlWasActivated;
- (BRTextControl *)titleControl;
- (void)setTitleControl:(BRTextControl *)arg0;
- (BRTextControl *)messageControl;
- (void)setMessageControl:(BRTextControl *)arg0;
- (ATVRadioTopShelfLogoView *)init;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (NSDictionary *)_textAttributes;
- (NSDictionary *)_titleAttributes;
- (NSDictionary *)_messageAttributes;

@end
