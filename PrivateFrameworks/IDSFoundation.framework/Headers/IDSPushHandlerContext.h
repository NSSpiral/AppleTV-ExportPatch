/* Runtime dump - IDSPushHandlerContext
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPushHandlerContext : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _topics;
    NSSet * _commands;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (copy, nonatomic) NSSet * topics;
@property (copy, nonatomic) NSSet * commands;

- (void)dealloc;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSSet *)commands;
- (void)setCommands:(NSSet *)arg0;
- (IDSPushHandlerContext *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 topics:(NSSet *)arg1 commands:(NSSet *)arg2;
- (NSSet *)topics;
- (void)setTopics:(NSSet *)arg0;

@end
