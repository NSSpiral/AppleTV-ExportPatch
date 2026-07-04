/* Runtime dump - IKRunLoopSourceRecord
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKRunLoopSourceRecord : NSObject
{
    id _evaluateBlock;
    id _completionBlock;
}

@property (copy, nonatomic) id evaluateBlock;
@property (copy, nonatomic) id completionBlock;

- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (IKRunLoopSourceRecord *)initWithEvaluateBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1;
- (id /* block */)evaluateBlock;
- (void)setEvaluateBlock:(id /* block */)arg0;

@end
