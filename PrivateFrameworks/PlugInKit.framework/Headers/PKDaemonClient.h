/* Runtime dump - PKDaemonClient
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKDaemonClient : NSObject
{
    NSObject<OS_xpc_object> * _pkd;
    NSObject<OS_dispatch_queue> * _replyQueue;
    long long _protocolVersion;
}

@property (retain) NSObject<OS_xpc_object> * pkd;
@property (retain) NSObject<OS_dispatch_queue> * replyQueue;
@property long long protocolVersion;

+ (PKDaemonClient *)convertToXPC:(id)arg0 version:(unsigned long long)arg1;

- (void).cxx_destruct;
- (PKDaemonClient *)initWithServiceName:(char *)arg0;
- (NSObject<OS_dispatch_queue> *)replyQueue;
- (long long)protocolVersion;
- (void)setProtocolVersion:(long long)arg0;
- (id)errorInReply:(id /* block */)arg0;
- (id)convertFromXPC:(id)arg0;
- (void)matchPlugIns:(id)arg0 flags:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)accessPlugIns:(id)arg0 flags:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)readyPlugIns:(id)arg0 flags:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setPluginAnnotations:(NSArray *)arg0 annotations:(NSArray *)arg1 reply:(id /* block */)arg2;
- (void)copyReceipt:(id)arg0;
- (void)setPkd:(NSObject<OS_xpc_object> *)arg0;
- (NSURLRequest *)request:(char *)arg0 paths:(NSArray *)arg1;
- (void)send:(id)arg0 reply:(id /* block */)arg1;
- (NSURLRequest *)request:(char *)arg0;
- (void)set:(NSSet *)arg0 uuids:(NSArray *)arg1;
- (void)addPlugIns:(id)arg0 reply:(id /* block */)arg1;
- (void)removePlugIns:(id)arg0 reply:(id /* block */)arg1;
- (void)bulkPlugins:(unsigned long long)arg0 reply:(id /* block */)arg1;
- (void)holdPlugins:(id)arg0 flags:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)releaseHold:(id)arg0 reply:(id /* block */)arg1;
- (NSObject<OS_xpc_object> *)pkd;
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
