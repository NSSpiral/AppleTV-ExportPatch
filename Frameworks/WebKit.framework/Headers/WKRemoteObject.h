/* Runtime dump - WKRemoteObject
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRemoteObject : NSObject
{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
}

- (char)conformsToProtocol:(NSObject *)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WKRemoteObject *)_initWithObjectRegistry:(struct RetainPtr<_WKRemoteObjectRegistry>)arg0 interface:(struct RetainPtr<_WKRemoteObjectInterface>)arg1;

@end
