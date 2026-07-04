/* Runtime dump - UIKeyboardDicationBackgroundGradientView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory>
{
    UIKBRenderConfig * _renderConfig;
    UIDictationView * _dictationView;
}

@property (retain, nonatomic) UIKBRenderConfig * renderConfig;
@property (nonatomic) UIDictationView * dictationView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIKeyboardDicationBackgroundGradientView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (NSObject *)_basicAnimationForView:(NSObject *)arg0 withKeyPath:(NSString *)arg1;
- (NSObject *)_timingFunctionForAnimation;
- (UIKBRenderConfig *)renderConfig;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (UIDictationView *)dictationView;
- (NSObject *)backgroundColorForCurrentRenderConfig;
- (void)startColorTransitionIn;
- (void)startColorTransitionOut;
- (struct CGRect)_backgroundFillFrame;
- (void)setDictationView:(UIDictationView *)arg0;

@end
