/* Runtime dump - XPCClientUser
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface XPCClientUser : NSObject
{
    NSObject<OS_dispatch_queue> * queue;
    id block;
}

@property NSObject<OS_dispatch_queue> * queue;
@property (copy, nonatomic) id block;

- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;

@end
