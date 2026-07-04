/* Runtime dump - TSKACReadArguments
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKACReadArguments : NSObject
{
    SEL _selector;
    id _target;
    void * _argument;
    id _argument2;
}

@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) void * argument;
@property (readonly, nonatomic) id argument2;

- (TSKACReadArguments *)initWithSelector:(SEL)arg0 target:(NSObject *)arg1 argument:(void *)arg2;
- (TSKACReadArguments *)initWithSelector:(SEL)arg0 target:(NSObject *)arg1 argument:(void *)arg2 argument2:(MTLArgument *)arg3;
- (id)argument2;
- (void)dealloc;
- (NSObject *)target;
- (SEL)selector;
- (void *)argument;

@end
