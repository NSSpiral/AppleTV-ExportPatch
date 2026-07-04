/* Runtime dump - UIInputViewControllerInterface
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface>
{
    <_UIIVCResponseDelegate> * _responseDelegate;
    <_UIIVCInterface> * _forwardingInterface;
    _UIInputViewControllerState * _cachedState;
}

@property (retain, nonatomic) <_UIIVCInterface> * forwardingInterface;
@property (retain, nonatomic) _UIInputViewControllerState * cachedState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) <_UIIVCResponseDelegate> * responseDelegate;

- (void)dealloc;
- (UIInputViewControllerInterface *)init;
- (<_UIIVCResponseDelegate> *)responseDelegate;
- (void)setResponseDelegate:(<_UIIVCResponseDelegate> *)arg0;
- (void)syncToKeyboardState:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (_UIInputViewControllerState *)_cachedState;
- (<_UIIVCInterface> *)forwardingInterface;
- (void)_handleInputViewControllerState:(NSObject *)arg0;
- (void)_setCachedState:(NSObject *)arg0;
- (void)_tearDownRemoteService;
- (void)setForwardingInterface:(<_UIIVCInterface> *)arg0;

@end
