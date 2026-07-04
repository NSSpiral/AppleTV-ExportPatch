/* Runtime dump - IMDInvocationForwarder
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDInvocationForwarder : NSObject
{
    NSMutableArray * _targets;
    NSLock * _lock;
}

@property (retain, nonatomic) NSMutableArray * _targets;
@property (retain, nonatomic) NSLock * _lock;

- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)removeTarget:(NSObject *)arg0;
- (IMDInvocationForwarder *)initWithTargets:(NSMutableArray *)arg0;
- (NSLock *)_lock;
- (void)addTarget:(NSObject *)arg0;
- (NSMutableArray *)_targets;
- (void)set_targets:(NSMutableArray *)arg0;
- (void)set_lock:(NSLock *)arg0;

@end
