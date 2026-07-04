/* Runtime dump - TSWPTwoPartAction
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTwoPartAction : NSObject
{
    id _startAction;
    id _cancelAction;
    id _finishAction;
    char _performImmediately;
}

@property char performImmediately;

+ (NSObject *)actionWithStartAction:(NSObject *)arg0 cancelAction:(/* block */ id)arg1 finishAction:(NSObject *)arg2;

- (TSWPTwoPartAction *)initWithStartAction:(NSObject *)arg0 cancelAction:(/* block */ id)arg1 finishAction:(NSObject *)arg2;
- (void)performStartAction;
- (void)performFinishAction;
- (char)performImmediately;
- (void)setPerformImmediately:(char)arg0;
- (void)cancel;
- (void)dealloc;

@end
