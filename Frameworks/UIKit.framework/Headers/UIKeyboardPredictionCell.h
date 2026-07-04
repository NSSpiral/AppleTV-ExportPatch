/* Runtime dump - UIKeyboardPredictionCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPredictionCell : UIView
{
    UIMorphingLabel * m_label;
    UIView * m_maskView;
    UIKBKeyView * m_activeKeyView;
    UIKBKeyView * m_enabledKeyView;
    char m_lightKeyboard;
    struct CGSize m_keyViewSize;
    char _isAutocorrection;
    char _isTypedString;
    char _isCenter;
    char _isLongCandidate;
    TIKeyboardCandidate * _prediction;
    int _state;
    struct CGRect _collapsedFrame;
    struct CGRect _baseFrame;
    struct CGRect _activeFrame;
}

@property (readonly, retain, nonatomic) TIKeyboardCandidate * prediction;
@property (nonatomic) int state;
@property (nonatomic) struct CGRect collapsedFrame;
@property (nonatomic) struct CGRect baseFrame;
@property (nonatomic) struct CGRect activeFrame;
@property (nonatomic) char isAutocorrection;
@property (nonatomic) char isTypedString;
@property (nonatomic) char isCenter;
@property (nonatomic) char isLongCandidate;

+ (UIKeyboardPredictionCell *)initKeyViewWithSize:(struct CGSize)arg0 state:(int)arg1 needsBackground:(char)arg2;

- (UIKeyboardPredictionCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)label;
- (UIColor *)textColor;
- (struct CGRect)visibleRect;
- (void)updateBackgroundWithRenderConfig:(UIKBRenderConfig *)arg0;
- (struct CGRect)baseFrame;
- (void)setVisibleRect;
- (void)setIsLongCandidate:(char)arg0;
- (char)isLongCandidate;
- (char)isAutocorrection;
- (char)isTypedString;
- (struct CGRect)activeFrame;
- (struct CGRect)collapsedFrame;
- (void)setCellAttributes;
- (void)setState:(int)arg0 withText:(NSString *)arg1;
- (void)scrollLabelWithText:(NSString *)arg0 force:(char)arg1;
- (void)touchMoved:(float)arg0;
- (void)setCollapsedFrame:(struct CGRect)arg0;
- (void)setBaseFrame:(struct CGRect)arg0;
- (void)setText:(NSString *)arg0 prediction:(TIKeyboardCandidate *)arg1 active:(char)arg2;
- (TIKeyboardCandidate *)prediction;
- (void)setActiveFrame:(struct CGRect)arg0;
- (void)setIsAutocorrection:(char)arg0;
- (void)setIsTypedString:(char)arg0;
- (char)isCenter;
- (void)setIsCenter:(char)arg0;

@end
