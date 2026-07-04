/* Runtime dump - CPDistributedMessagingCallout
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingCallout : NSObject
{
    id _target;
    SEL _selector;
    char _returnsVoid;
    char _returnsVoidIsValid;
}

@property (readonly, retain, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) char returnsVoid;

- (void)dealloc;
- (NSObject *)target;
- (SEL)selector;
- (char)returnsVoid;
- (CPDistributedMessagingCallout *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
