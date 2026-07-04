/* Runtime dump - IKJSKeyboard
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard>
{
    NSString * _text;
    <IKAppKeyboardBridge> * _appBridge;
}

@property (retain, nonatomic) <IKAppKeyboardBridge> * appBridge;
@property (copy, nonatomic) NSString * text;

- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setAppBridge:(<IKAppKeyboardBridge> *)arg0;
- (<IKAppKeyboardBridge> *)appBridge;
- (void)setUserInputText:(NSString *)arg0;

@end
