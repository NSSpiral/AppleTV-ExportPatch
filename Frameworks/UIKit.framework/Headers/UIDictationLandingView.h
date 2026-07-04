/* Runtime dump - UIDictationLandingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory>
{
    UITextRange * _range;
    id _placeholder;
    char _didHaveText;
    char _willInsertResult;
    float _angle;
    float _diameter;
    CADisplayLink * _displayLink;
    double _startTime;
    double _shrinkStartTime;
    char _shrinking;
    NSOperation * _afterShrinkCompletionInvocation;
}

@property (nonatomic) char willInsertResult;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIDictationLandingView *)sharedInstance;
+ (UIDictationLandingView *)activeInstance;
+ (float)widthForLineHeight:(float)arg0;
+ (int)fallbackPlaceholderLength;
+ (float)diameterForLineHeight:(float)arg0;

- (UIDictationLandingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (NSObject *)_basicAnimationForView:(NSObject *)arg0 withKeyPath:(NSString *)arg1;
- (NSObject *)_timingFunctionForAnimation;
- (char)delegateWasEmpty;
- (float)fadeOutDuration;
- (void)updatePosition;
- (void)startLandingIfNecessary;
- (void)stopLandingForError;
- (void)stopLanding;
- (void)setWillInsertResult:(char)arg0;
- (void)clearRotation;
- (void)rotateBy:(float)arg0;
- (void)advanceLanding:(id)arg0;
- (void)startDisplayLinkIfNecessary;
- (void)hideCursor;
- (void)showCursor;
- (void)shrinkWithCompletion:(id /* block */)arg0;
- (void)errorShakeDidFinish;
- (char)willInsertResult;

@end
