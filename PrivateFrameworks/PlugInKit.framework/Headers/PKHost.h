/* Runtime dump - PKHost
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKHost : NSObject
{
    NSDictionary * _hostInfoPlist;
    NSMutableDictionary * _activePlugIns;
    NSObject<OS_dispatch_queue> * _hostQueue;
    PKDaemonClient * _client;
}

@property (retain) NSMutableDictionary * activePlugIns;
@property (retain) NSObject<OS_dispatch_queue> * hostQueue;
@property (retain) PKDaemonClient * client;
@property (readonly) NSDictionary * hostInfoPlist;

+ (PKHost *)defaultHost;

- (PKHost *)init;
- (void).cxx_destruct;
- (void)setElection:(int)arg0 forPlugIn:(MCPlug *)arg1;
- (void)setExtensionState:(NSDictionary *)arg0 forPlugIn:(MCPlug *)arg1;
- (void)activatePlugIn:(id)arg0;
- (void)accessPlugIns:(id)arg0 flags:(unsigned long long)arg1 extensions:(id)arg2;
- (void)readyPlugIns:(id)arg0 ready:(char)arg1;
- (void)deactivatePlugIn:(id)arg0;
- (void)setHostQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setActivePlugIns:(NSMutableDictionary *)arg0;
- (NSDictionary *)rewriteDiscoveryAttributes:(NSDictionary *)arg0 flags:(unsigned int)arg1;
- (NSMutableDictionary *)activePlugIns;
- (NSObject<OS_dispatch_queue> *)hostQueue;
- (NSString *)activePlugInForIdentifier:(NSString *)arg0;
- (NSDictionary *)hostInfoPlist;
- (void)setClient:(PKDaemonClient *)arg0;
- (PKDaemonClient *)client;
- (void)discoverPlugInsForAttributes:(NSDictionary *)arg0 flags:(unsigned int)arg1 found:(SAAssistantNotFound *)arg2;
- (NSDictionary *)continuouslyDiscoverPlugInsForAttributes:(NSDictionary *)arg0 flags:(unsigned int)arg1 found:(SAAssistantNotFound *)arg2;
- (void)cancelPlugInDiscovery:(id)arg0;

@end
