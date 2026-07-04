/* Runtime dump - BTLEServer
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEServer : NSObject <CBPeripheralManagerDelegate>
{
    struct LogCategory * _ucat;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _advertiseUUID;
    NSDictionary * _configuration;
    NSMutableDictionary * _characteristics;
    id _readHandler;
    id _writeHandler;
    CBPeripheralManager * _peripheralManager;
    char _started;
    NSMutableDictionary * _pendingReplies;
}

@property (copy, nonatomic) NSUUID * advertiseUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (nonatomic) struct LogCategory * logCategory;
@property (copy, nonatomic) NSDictionary * configuration;
@property (copy, nonatomic) id readHandler;
@property (copy, nonatomic) id writeHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (BTLEServer *)init;
- (void)stop;
- (void)_start;
- (void)setConfiguration:(NSDictionary *)arg0;
- (void)start;
- (NSDictionary *)configuration;
- (void)_stop:(long)arg0;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setReadHandler:(id /* block */)arg0;
- (void)setWriteHandler:(id /* block */)arg0;
- (struct LogCategory *)logCategory;
- (void)setLogCategory:(struct LogCategory *)arg0;
- (id /* block */)readHandler;
- (id /* block */)writeHandler;
- (long)_start2;
- (void)peripheralManagerDidUpdateState:(NSObject *)arg0;
- (void)peripheralManagerDidStartAdvertising:(id)arg0 error:(NSError *)arg1;
- (void)peripheralManager:(CBPeripheralManager *)arg0 didAddService:(NSObject *)arg1 error:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg0 central:(CBCentral *)arg1 didSubscribeToCharacteristic:(id)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg0 central:(CBCentral *)arg1 didUnsubscribeFromCharacteristic:(id)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg0 didReceiveReadRequest:(NSURLRequest *)arg1;
- (void)peripheralManager:(CBPeripheralManager *)arg0 didReceiveWriteRequests:(id)arg1;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg0;
- (void)completeReadRequest:(NSURLRequest *)arg0 status:(long)arg1;
- (void)completeWriteRequests:(id)arg0 status:(long)arg1;
- (NSUUID *)advertiseUUID;
- (void)setAdvertiseUUID:(NSUUID *)arg0;

@end
