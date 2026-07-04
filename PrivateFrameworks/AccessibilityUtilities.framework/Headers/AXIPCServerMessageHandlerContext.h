/* Runtime dump - AXIPCServerMessageHandlerContext
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServerMessageHandlerContext : NSObject
{
    id _handler;
    id _target;
    SEL _selector;
}

@property (readonly, nonatomic) id handler;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

- (void)dealloc;
- (NSObject *)target;
- (SEL)selector;
- (id /* block */)handler;
- (AXIPCServerMessageHandlerContext *)initWithHandler:(id /* block */)arg0;
- (AXIPCServerMessageHandlerContext *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
