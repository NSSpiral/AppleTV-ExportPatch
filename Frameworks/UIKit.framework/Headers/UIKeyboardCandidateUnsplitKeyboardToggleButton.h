/* Runtime dump - UIKeyboardCandidateUnsplitKeyboardToggleButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton
{
    UIKeyboardCandidatePocketShadow * _pocketShadow;
    UIImage * _backgroundNormal;
    UIImage * _backgroundHighlighted;
    char _drawsBackground;
    char _drawsPocketShadow;
}

@property (nonatomic) char drawsBackground;
@property (nonatomic) char drawsPocketShadow;

- (UIKeyboardCandidateUnsplitKeyboardToggleButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (void)setDrawsBackground:(char)arg0;
- (char)drawsBackground;
- (void)setDrawsPocketShadow:(char)arg0;
- (void)updateBackgroundImages;
- (id)toggleButtonBackgroundImageWithHighlight:(char)arg0;
- (char)drawsPocketShadow;

@end
