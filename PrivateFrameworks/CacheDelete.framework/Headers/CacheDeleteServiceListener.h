/* Runtime dump - CacheDeleteServiceListener
 * Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteServiceListener : CacheDeleteListener <NSXPCListenerDelegate, CacheDeleteServiceProtocol>
{
    NSXPCListenerEndpoint * _endpoint;
    id _purgeable;
    id _purge;
    id _periodic;
    id _cancel;
    id _notify;
}

@property (readonly) NSXPCListenerEndpoint * endpoint;
@property (copy, nonatomic) id purgeable;
@property (copy, nonatomic) id purge;
@property (copy, nonatomic) id periodic;
@property (copy, nonatomic) id cancel;
@property (copy, nonatomic) id notify;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)purgeable;
- (char)cancel;
- (id)purge;
- (void).cxx_destruct;
- (NSXPCListenerEndpoint *)endpoint;
- (void)setCancel:(char)arg0;
- (void)servicePurgeable:(int)arg0 info:(NSDictionary *)arg1 replyBlock:(id /* block */)arg2;
- (void)servicePurge:(int)arg0 info:(NSDictionary *)arg1 replyBlock:(id /* block */)arg2;
- (void)servicePeriodic:(int)arg0 info:(NSDictionary *)arg1 replyBlock:(id /* block */)arg2;
- (void)serviceCancelPurge:(id)arg0;
- (void)servicePing:(id)arg0;
- (void)serviceNotify:(id)arg0 replyBlock:(id /* block */)arg1;
- (CacheDeleteServiceListener *)initWithName:(NSString *)arg0 anonymous:(char)arg1;
- (void)setNotifyCallback:(id /* block */)arg0;
- (void)setPurgeable:(char)arg0;
- (void)setPurge:(id)arg0;
- (id)periodic;
- (void)setPeriodic:(id)arg0;
- (id)notify;
- (void)setNotify:(id)arg0;

@end
