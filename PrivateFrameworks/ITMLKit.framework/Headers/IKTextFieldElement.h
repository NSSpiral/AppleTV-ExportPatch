/* Runtime dump - IKTextFieldElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextFieldElement : IKTextElement
{
    IKAppKeyboard * _keyboard;
}

@property (readonly, nonatomic) IKAppKeyboard * keyboard;

+ (NSMutableDictionary *)supportedFeatures;

- (IKAppKeyboard *)keyboard;
- (void).cxx_destruct;
- (IKTextFieldElement *)initWithDOMElement:(NSObject *)arg0 parent:(NSObject *)arg1 elementFactory:(IKViewElementFactory *)arg2;

@end
