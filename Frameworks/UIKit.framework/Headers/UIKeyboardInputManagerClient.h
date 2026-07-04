/* Runtime dump - UIKeyboardInputManagerClient
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection * _connection;
}

@property (retain, nonatomic) NSXPCConnection * connection;

+ (char)instancesRespondToSelector:(SEL)arg0;

- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (UIKeyboardInputManagerClient *)init;
- (char)isKindOfClass:(Class)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (void)handleRequest:(NSURLRequest *)arg0;
- (void)handleError:(NSError *)arg0 forRequest:(NSURLRequest *)arg1;

@end
