/* Runtime dump - UIDictationStreamingOperations
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationStreamingOperations : NSObject
{
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    <UITextInput> * _document;
    NSMutableArray * _operations;
}

@property (retain, nonatomic) NSMutableArray * operations;

- (void)dealloc;
- (UIDictationStreamingOperations *)init;
- (char)isEmpty;
- (id)pop;
- (void)setOperations:(NSMutableArray *)arg0;
- (NSMutableArray *)operations;
- (void)popAndInvoke;
- (void)performSelectRangeForSpeech:(id)arg0;
- (char)hasOperations;
- (void)pushSpeechOperation:(NSObject *)arg0;
- (void)clearOperations;
- (void)setDocument:(<UITextInput> *)arg0;
- (void)pushSpeechOperationWithTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2;
- (void)_performReplaceSelectedText:(NSString *)arg0;
- (double)delayAfterSelector:(SEL)arg0;
- (void)dictationWillBeginInDocument:(NSObject *)arg0;
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg0;
- (void)pushInsertTextForSpeech:(id)arg0;
- (void)pushReplaceSelectionWithText:(NSString *)arg0;
- (void)willEndEditingInInputDelegate:(NSObject *)arg0;
- (char)isNotEmpty;
- (unsigned int)selectionChangeDelta;

@end
