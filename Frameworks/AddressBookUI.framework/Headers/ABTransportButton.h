/* Runtime dump - ABTransportButton
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABTransportButton : UIButton
{
    int _transportType;
    UIColor * _glyphColor;
    UIImage * _image;
}

@property (nonatomic) int transportType;
@property (retain, nonatomic) UIColor * glyphColor;
@property (retain, nonatomic) UIImage * image;

+ (ABTransportButton *)transportButton;

- (void)setGlyphColor:(UIColor *)arg0;
- (NSObject *)imageNameForType:(int)arg0;
- (void)_updateImageWithType:(int)arg0;
- (UIColor *)glyphColor;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (UIImage *)image;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)backgroundRectForBounds:(id)arg0;
- (void)setTransportType:(int)arg0;
- (int)transportType;

@end
