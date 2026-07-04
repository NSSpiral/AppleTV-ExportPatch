/* Runtime dump - UIAutocorrectInlinePrompt
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList>
{
    struct CGRect m_originalTypedTextRect;
    NSString * m_typedText;
    NSString * m_correction;
    NSArray * m_usageTrackingTypes;
    NSMutableArray * m_typedTextViews;
    UIView * m_correctionView;
    UIView * m_correctionAnimationView;
    UIView * m_typedTextAnimationView;
    UIView * m_correctionShadowView;
    char m_fits;
    char m_mouseDown;
    id m_delegate;
    int m_index;
    int m_promptTextType;
    float m_originalTypedTextRectCorrectionAmount;
    float m_maxX;
    char _showHiddenCandidatesOnly;
    unsigned int m_usageTrackingMask;
    TIKeyboardCandidateResultSet * _candidateResultSet;
}

@property (nonatomic) unsigned int usageTrackingMask;
@property (readonly, nonatomic) TIKeyboardCandidateResultSet * candidates;
@property (retain, nonatomic) TIKeyboardCandidateResultSet * candidateResultSet;
@property (nonatomic) char showHiddenCandidatesOnly;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIAutocorrectInlinePrompt *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)pointInside:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (TIKeyboardCandidateResultSet *)candidates;
- (void)showCandidateAtIndex:(unsigned int)arg0;
- (void)showNextCandidate;
- (char)hasCandidates;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg0 inlineText:(NSString *)arg1 inlineRect:(struct CGRect)arg2 maxX:(struct CGSize)arg3 layout:(NSObject *)arg4;
- (NSString *)statisticsIdentifier;
- (char)isExtendedList;
- (char)isHiddenCandidatesList;
- (void)setUIKeyboardCandidateListDelegate:(NSObject *)arg0;
- (char)showCandidate:(NSDate *)arg0;
- (void)showPreviousCandidate;
- (void)showNextPage;
- (void)showPreviousPage;
- (void)showNextRow;
- (void)showPreviousRow;
- (TIKeyboardCandidate *)currentCandidate;
- (unsigned int)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned int)arg0;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (unsigned int)selectedSortIndex;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg0 type:(int)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(struct CGSize)arg4 layout:(NSObject *)arg5;
- (void)candidatesDidChange;
- (void)revealHiddenCandidates;
- (NSString *)inlineText;
- (void)setSelectedItem:(unsigned int)arg0;
- (int)textEffectsVisibilityLevel;
- (TIKeyboardCandidateResultSet *)candidateResultSet;
- (void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg0;
- (unsigned int)index;
- (char)showHiddenCandidatesOnly;
- (void)setShowHiddenCandidatesOnly:(char)arg0;
- (unsigned int)usageTrackingMask;
- (NSArray *)activeCandidateList;
- (void)setUsageTrackingMask:(unsigned int)arg0;
- (void)setCorrection:(CIPerspectiveCorrection *)arg0 typedText:(NSString *)arg1 inRect:(struct CGRect)arg2 maxX:(struct CGSize)arg3;
- (void)addTypedTextRect:(struct CGRect)arg0;
- (char)prepareForAnimation:(struct CGRect)arg0;
- (NSObject *)typedTextView;
- (NSObject *)correctionView;
- (NSObject *)correctionAnimationView;
- (NSObject *)correctionShadowView;
- (NSString *)typedText;
- (CIPerspectiveCorrection *)correction;
- (void)removePromptSubviews;
- (void)setCandidateObject:(NSObject *)arg0 candidateSet:(TIKeyboardCandidateResultSet *)arg1 type:(int)arg2 typedText:(NSString *)arg3 inRect:(struct CGRect)arg4 maxX:(struct CGSize)arg5 showHiddenCandidatesOnly:(char)arg6;
- (unsigned int)numberOfShownItems;
- (void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg0 showHiddenCandidatesOnly:(char)arg1;
- (float)maximumCandidateWidth;
- (void)_candidateSelected:(id)arg0;
- (struct CGRect)horizontallySquishedCorrectionFrame:(NSObject *)arg0;
- (struct CGRect)correctionFrameFromDesiredFrame:(NSObject *)arg0 textHeight:(SEL)arg1 withExtraGap:(struct CGRect)arg2;
- (char)isAcceptableTextEffectsFrame:(struct CGRect)arg0 afterScrollBy:(struct CGSize)arg1;
- (void)dismiss;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (struct CGRect)shadowFrameForFrame:(NSObject *)arg0;
- (NSObject *)typedTextAnimationView;

@end
