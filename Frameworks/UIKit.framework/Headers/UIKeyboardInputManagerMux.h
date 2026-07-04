/* Runtime dump - UIKeyboardInputManagerMux
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray * _clients;
    <_UIIVCResponseDelegateImpl> * _responseDelegate;
    <TIKeyboardInputManager> * _systemInputManager;
}

@property (readonly, nonatomic) char hasSystemInputManager;
@property (retain, nonatomic) <_UIIVCResponseDelegateImpl> * responseDelegate;
@property (retain, nonatomic) <TIKeyboardInputManager> * systemInputManager;

+ (UIKeyboardInputManagerMux *)sharedInstance;
+ (char)instancesRespondToSelector:(SEL)arg0;

- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (char)isKindOfClass:(Class)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (<_UIIVCResponseDelegateImpl> *)responseDelegate;
- (void)setResponseDelegate:(<_UIIVCResponseDelegateImpl> *)arg0;
- (char)hasSystemInputManager;
- (void)setSystemInputManagerFromKeyboardState:(NSObject *)arg0;
- (void)releaseConnectedClients;
- (void)addClient:(NSObject *)arg0;
- (void)removeClient:(NSObject *)arg0;
- (<TIKeyboardInputManager> *)systemInputManager;
- (void)setSystemInputManager:(<TIKeyboardInputManager> *)arg0;
- (char)_systemHasKbd;
- (void)updateClientResponseDelegatesWithDelegate:(NSObject *)arg0;
- (void)removeAllClients;

@end
