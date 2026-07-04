/* Runtime dump - UIThreadSafeNode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIThreadSafeNode : NSObject
{
    DOMNode * _node;
}

+ (UIThreadSafeNode *)threadSafeNodeWithNode:(DOMNode *)arg0;

- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (char)isKindOfClass:(Class)arg0;
- (char)isEqual:(NSObject *)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (UIThreadSafeNode *)initWithNode:(DOMNode *)arg0;
- (NSObject *)_realNode;

@end
