/* Runtime dump - IKAppKeyboard
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature>
{
    NSString * _featureName;
    IKAppContext * _appContext;
    <IKAppKeyboardDelegate> * _delegate;
    NSString * _text;
    IKJSKeyboard * _jsKeyboard;
}

@property (weak, nonatomic) <IKAppKeyboardDelegate> * delegate;
@property (copy, nonatomic) NSString * text;
@property (weak, nonatomic) IKJSKeyboard * jsKeyboard;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * featureName;
@property (readonly, weak, nonatomic) IKAppContext * appContext;

+ (NSObject *)makeFeatureJSObjectForFeature:(NSObject *)arg0;

- (void)setDelegate:(<IKAppKeyboardDelegate> *)arg0;
- (<IKAppKeyboardDelegate> *)delegate;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (IKAppContext *)appContext;
- (void)textDidChangeForJSKeyboard:(id)arg0;
- (void)setJSKeyboard:(IKJSKeyboard *)arg0;
- (IKJSKeyboard *)jsKeyboard;
- (IKAppKeyboard *)initWithDOMNode:(NSObject *)arg0 featureName:(NSString *)arg1;
- (NSString *)featureName;

@end
