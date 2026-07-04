/* Runtime dump - NSUndoTextOperation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSUndoTextOperation : NSObject
{
    struct _NSRange _affectedRange;
    UITextInputController * _inputController;
}

@property (nonatomic) struct _NSRange affectedRange;
@property (nonatomic) UITextInputController * inputController;

- (UITextInputController *)inputController;
- (void)setInputController:(UITextInputController *)arg0;
- (NSUndoTextOperation *)initWithAffectedRange:(struct _NSRange)arg0 inputController:(UITextInputController *)arg1;
- (void)undoRedo;
- (char)supportsCoalescing;
- (struct _NSRange)affectedRange;
- (void)setAffectedRange:(struct _NSRange)arg0;

@end
