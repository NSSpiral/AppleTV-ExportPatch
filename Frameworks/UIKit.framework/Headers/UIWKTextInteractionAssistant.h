/* Runtime dump - UIWKTextInteractionAssistant
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant
{
    int _selectionOperation;
    _UITextServiceSession * _definitionSession;
    _UITextServiceSession * _learnSession;
    UITextChecker * _textChecker;
    unsigned int _options;
    struct CGRect _caretBeforeTap;
    NSString * _wordBeforeTap;
    UITapGestureRecognizer * _singleTapGesture;
    UILongPressGestureRecognizer * _loupeGesture;
}

@property (readonly, retain, nonatomic) UITapGestureRecognizer * singleTapGesture;
@property (readonly, retain, nonatomic) UILongPressGestureRecognizer * loupeGesture;

- (void)dealloc;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (void)selectionChanged;
- (UIWKTextInteractionAssistant *)initWithView:(WKContentView *)arg0;
- (void)selectAll:(id)arg0;
- (void)selectWord;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg0;
- (UILongPressGestureRecognizer *)loupeGesture;
- (UITapGestureRecognizer *)singleTapGesture;
- (void)updateSelectionWithPoint:(struct CGPoint)arg0;
- (char)containerIsBrowserView;
- (char)containerIsAtom;
- (char)containerIsPlainStyleAtom;
- (void)oneFingerDoubleTap:(id)arg0;
- (void)oneFingerTap:(id)arg0;
- (void)oneFingerTripleTap:(id)arg0;
- (void)twoFingerSingleTap:(id)arg0;
- (void)tapAndAHalf:(id)arg0;
- (void)loupeGesture:(UILongPressGestureRecognizer *)arg0;
- (void)twoFingerRangedSelectGesture:(NSObject *)arg0;
- (NSString *)_asText;
- (void)scrollSelectionToVisible;
- (void)updateWithMagnifierTerminalPoint:(char)arg0;
- (char)containerAllowsSelectionTintOnly;
- (char)requiresImmediateUpdate;
- (char)containerAllowsSelection;
- (void)rangeSelectionStarted:(struct CGPoint)arg0;
- (void)rangeSelectionEnded:(struct CGPoint)arg0;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionMoved:(struct CGPoint)arg0 withTouchPoint:(struct CGPoint)arg1;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg0 withGesture:(int)arg1 withState:(int)arg2 withFlags:(int)arg3;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg0 withSelectionTouch:(int)arg1 withFlags:(int)arg2;
- (void)showDictionaryFor:(id)arg0 fromRect:(struct CGRect)arg1;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg0 withGesture:(int)arg1 withState:(int)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg0 withSelectionTouch:(int)arg1;
- (void)showTextServiceFor:(id)arg0 fromRect:(struct CGRect)arg1;
- (void)scheduleReplacementsForText:(NSString *)arg0 withOptions:(unsigned int)arg1;
- (char)shouldTryReplacementsForText:(NSString *)arg0 withOptions:(unsigned int)arg1;
- (void)showReplacementsForText:(NSString *)arg0 withOptions:(unsigned int)arg1;
- (void)selectTextForReplacement:(id)arg0 withOptions:(unsigned int)arg1;
- (void)selectWithTapGestureAt:(struct CGPoint)arg0 withGesture:(int)arg1 withState:(int)arg2;
- (void)scheduleChineseTransliterationForText:(NSString *)arg0;
- (void)scheduleReplacementsForText:(NSString *)arg0;
- (void)showTextStyleOptions;
- (void)hideTextStyleOptions;

@end
