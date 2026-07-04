/* Runtime dump - HAPAccessoryServerBrowser
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowser : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue;
    int _linkType;
    <HAPKeyStore> * _keyStore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, nonatomic) int linkType;
@property (retain, nonatomic) <HAPKeyStore> * keyStore;

- (HAPAccessoryServerBrowser *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (<HAPKeyStore> *)keyStore;
- (int)linkType;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)discoverAccessoryServerWithIdentifier:(NSString *)arg0;
- (void)setKeyStore:(<HAPKeyStore> *)arg0;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;

@end
