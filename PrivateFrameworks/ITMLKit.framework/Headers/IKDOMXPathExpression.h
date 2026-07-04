/* Runtime dump - IKDOMXPathExpression
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression>
{
    id _evaluatingBlock;
}

@property (copy, nonatomic) id evaluatingBlock;

- (void).cxx_destruct;
- (id /* block */)evaluatingBlock;
- (IKDOMXPathExpression *)initWithAppContext:(<IKApplication> *)arg0 evaluatingBlock:(id /* block */)arg1;
- (void)setEvaluatingBlock:(id /* block */)arg0;
- (id)evaluate:(CPMLModelEvaluate *)arg0 :(int)arg1 :(id)arg2;

@end
