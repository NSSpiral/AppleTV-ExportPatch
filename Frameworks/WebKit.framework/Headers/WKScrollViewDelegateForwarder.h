/* Runtime dump - WKScrollViewDelegateForwarder
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>
{
    WKWebView * _internalDelegate;
    <UIScrollViewDelegate> * _externalDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)respondsToSelector:(SEL)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (WKScrollViewDelegateForwarder *)initWithInternalDelegate:(WKWebView *)arg0 externalDelegate:(<UIScrollViewDelegate> *)arg1;

@end
