/* Runtime dump - SKInvocationQueueProxy
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKInvocationQueueProxy : NSObject
{
    NSMutableArray * _invocationQueue;
    id _invocationTarget;
    Protocol * _protocol;
}

@property (retain, nonatomic) id invocationTarget;

- (void)setInvocationTarget:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSObject *)invocationTarget;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (SKInvocationQueueProxy *)initWithProtocol:(Protocol *)arg0;

@end
