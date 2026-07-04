/* Runtime dump - NSProtocolChecker
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol * protocol;
@property (readonly, retain) NSObject * target;

+ (NSProtocolChecker *)protocolCheckerWithTarget:(NSObject *)arg0 protocol:(Protocol *)arg1;
+ (NSProtocolChecker *)allocWithZone:(struct _NSZone *)arg0;

- (NSString *)_imMethodSignatureForSelector:(SEL)arg0;
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg0;
- (char *)_localClassNameForClass;
- (NSProtocolChecker *)initWithTarget:(NSObject *)arg0 protocol:(Protocol *)arg1;
- (char)respondsToSelector:(SEL)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSObject *)target;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)doesNotRecognizeSelector:(SEL)arg0;
- (Protocol *)protocol;

@end
