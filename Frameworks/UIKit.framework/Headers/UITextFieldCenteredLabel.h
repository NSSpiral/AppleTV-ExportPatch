/* Runtime dump - UITextFieldCenteredLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldCenteredLabel : UITextFieldLabel
{
    float _textXPosition;
    float _textWidth;
}

@property (nonatomic) float textXPosition;
@property (nonatomic) float textWidth;

- (char)_isTextFieldCenteredLabel;
- (void)setTextXPosition:(float)arg0;
- (void)setTextWidth:(float)arg0;
- (float)textXPosition;
- (float)textWidth;

@end
