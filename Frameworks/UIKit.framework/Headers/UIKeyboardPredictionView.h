/* Runtime dump - UIKeyboardPredictionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPredictionView : UIView
{
    UIKBBackgroundView * m_backgroundView;
    UIKeyboardPredictionBarGrabber * m_grabber;
    NSMutableArray * m_predictionCells;
    unsigned int m_activeIndex;
    float m_width;
    NSString * m_openQuote;
    NSString * m_closeQuote;
    UIView * m_message;
    UILabel * m_messageLabel;
    UIKBKeyView * m_messageKeyView;
    double m_messageShownTime;
    struct CGPoint m_initLocation;
    char m_dragging;
    char m_hasLongCandidates;
    char m_currentInputModeEnablePrediction;
    UIView * m_leftDimmingView;
    UIView * m_rightDimmingView;
    char m_touchOnDimmingView;
    char m_delayActive;
    UITouch * _activeTouch;
    int _state;
    NSTimer * _updateTimer;
    NSArray * _scheduledPredictions;
    TIKeyboardCandidate * _scheduledAutocorrection;
    NSDate * _lastUpdateDate;
}

@property (retain, nonatomic) UITouch * activeTouch;
@property (nonatomic) char show;
@property (nonatomic) int state;
@property (retain, nonatomic) NSTimer * updateTimer;
@property (retain, nonatomic) NSArray * scheduledPredictions;
@property (retain, nonatomic) TIKeyboardCandidate * scheduledAutocorrection;
@property (retain, nonatomic) NSDate * lastUpdateDate;

+ (UIKeyboardPredictionView *)sharedInstance;
+ (UIKeyboardPredictionView *)activeInstance;
+ (unsigned int)numberOfCandidates;
+ (float)predictionViewHeightForState:(int)arg0 orientation:(int)arg1;
+ (float)overlapHeight;

- (int)messageCount;
- (char)show;
- (UIKeyboardPredictionView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (UITouch *)activeTouch;
- (void)setActiveTouch:(UITouch *)arg0;
- (void)suspend;
- (float)heightForInterfaceOrientation:(int)arg0;
- (char)enabled;
- (int)stateForCurrentPreferences;
- (void)setPredictionViewState:(int)arg0 animate:(char)arg1 notify:(char)arg2;
- (void)setPredictionViewState:(int)arg0 animate:(char)arg1;
- (void)setShow:(char)arg0;
- (void)updateBackgroundWithRenderConfig:(UIKBRenderConfig *)arg0;
- (NSTimer *)updateTimer;
- (void)inputModeDidChange;
- (void)setLastUpdateDate:(NSDate *)arg0;
- (void)releaseMessage;
- (void)setTouchedCellState:(int)arg0;
- (unsigned int)indexForPoint:(struct CGPoint)arg0;
- (void)setActiveCellWithIndex:(unsigned int)arg0;
- (void)commitPrediction:(id)arg0;
- (void)delayActivateCellForPrediction:(id)arg0;
- (void)deactivateCandidate;
- (void)acceptCandidateAtCell:(NSObject *)arg0;
- (id)labelTextForPrediction:(id)arg0 typedString:(NSString *)arg1;
- (NSArray *)scheduledPredictions;
- (TIKeyboardCandidate *)scheduledAutocorrection;
- (void)_setPredictions:(id)arg0 autocorrection:(TIKeyboardCandidate *)arg1;
- (void)setScheduledPredictions:(NSArray *)arg0;
- (void)setScheduledAutocorrection:(TIKeyboardCandidate *)arg0;
- (void)updateTimerFired:(id)arg0;
- (void)setUpdateTimer:(NSTimer *)arg0;
- (NSDate *)lastUpdateDate;
- (void)touchUpdateTimer;
- (int)maxMessageCount;
- (void)removeMessage;
- (float)heightBeforeStateChangeForInterfaceOrientation:(int)arg0;
- (void)showMessageWithSize:(struct CGSize)arg0;
- (void)suppressLayoutSubviewsForCellLabels:(char)arg0;
- (unsigned int)predictionCount;
- (void)acceptCandidate;
- (void)activateCandidateAtPoint:(struct CGPoint)arg0;
- (void)setPredictions:(NSArray *)arg0 autocorrection:(TIKeyboardCandidate *)arg1;

@end
