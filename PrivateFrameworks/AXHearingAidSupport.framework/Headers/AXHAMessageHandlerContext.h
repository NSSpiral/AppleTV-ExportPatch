/* Runtime dump - AXHAMessageHandlerContext
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAMessageHandlerContext : NSObject
{
    id _target;
    SEL _selector;
}

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

- (NSObject *)target;
- (SEL)selector;
- (AXHAMessageHandlerContext *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
