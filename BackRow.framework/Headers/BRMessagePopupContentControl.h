/* Runtime dump - BRMessagePopupContentControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRMessageButton, BRTextControl;
@interface BRMessagePopupContentControl : BRControl
{
    BRTextControl * _titleControl;
    BRTextControl * _textControl;
    BRImageControl * _imageControl;
    BRMessageButton * _button;
    int _style;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * text;
@property (retain, nonatomic) ATVImage * image;
@property (nonatomic) int style;

- (void)layoutSubcontrols;
- (NSArray *)accessibilityControls;
- (NSObject *)_computeFramesForSize:(struct CGSize)arg0;
- (void)setImage:(ATVImage *)arg0;
- (BRMessagePopupContentControl *)init;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)title;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (ATVImage *)image;
- (int)style;
- (NSString *)accessibilityLabel;
- (void)setStyle:(int)arg0;
- (void).cxx_destruct;

@end
