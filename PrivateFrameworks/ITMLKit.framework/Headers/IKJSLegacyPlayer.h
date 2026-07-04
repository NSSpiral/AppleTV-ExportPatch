/* Runtime dump - IKJSLegacyPlayer
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSLegacyPlayer : IKJSObject <IKJSLegacyPlayer>
{
    <IKJSPlayerAppBridge> * _appBridge;
}

@property (weak, nonatomic) <IKJSPlayerAppBridge> * appBridge;
@property (readonly, weak, nonatomic) IKDOMElement * currentAVMediaElement;

- (void).cxx_destruct;
- (void)setAppBridge:(<IKJSPlayerAppBridge> *)arg0;
- (<IKJSPlayerAppBridge> *)appBridge;
- (IKDOMElement *)currentAVMediaElement;

@end
