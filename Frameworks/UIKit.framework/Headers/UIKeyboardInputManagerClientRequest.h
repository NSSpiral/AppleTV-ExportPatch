/* Runtime dump - UIKeyboardInputManagerClientRequest
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerClientRequest : NSObject
{
    NSInvocation * _invocation;
    unsigned int _errorCount;
}

@property (readonly, nonatomic) NSInvocation * invocation;
@property (nonatomic) unsigned int errorCount;

+ (NSObject *)untargetedInvocationWithInvocation:(NSInvocation *)arg0 withCompletion:(char)arg1;

- (void)dealloc;
- (NSInvocation *)invocation;
- (UIKeyboardInputManagerClientRequest *)initWithInvocation:(NSInvocation *)arg0;
- (unsigned int)errorCount;
- (void)setErrorCount:(unsigned int)arg0;

@end
