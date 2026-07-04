/* Runtime dump - BRInvocationSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface BRInvocationSelectionHandler : NSObject <BRSelectionHandler>
{
    NSInvocation * _invocation;
    char _useInvocationReturnValue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)handlerWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
+ (NSObject *)handlerWithInvocation:(NSInvocation *)arg0;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)setUseInvocationReturnValue:(char)arg0;
- (char)useInvocationReturnValue;
- (void)dealloc;
- (NSInvocation *)invocation;
- (BRInvocationSelectionHandler *)initWithInvocation:(NSInvocation *)arg0;

@end
