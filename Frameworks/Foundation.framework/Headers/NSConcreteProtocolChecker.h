/* Runtime dump - NSConcreteProtocolChecker
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteProtocolChecker : NSProtocolChecker
{
    NSObject * _target;
    Protocol * _protocol;
}

- (NSConcreteProtocolChecker *)initWithTarget:(NSObject *)arg0 protocol:(Protocol *)arg1;
- (void)dealloc;
- (NSObject *)target;
- (Protocol *)protocol;

@end
