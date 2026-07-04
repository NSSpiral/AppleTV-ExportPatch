/* Runtime dump - BTLEClient
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEClient : NSObject <CBCentralManagerDelegate>
{
    struct LogCategory * _ucat;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _accessoryInfo;
    id _connectHandler;
    id _disconnectHandler;
    CBCentralManager * _centralManager;
    CBPeripheral * _peripheral;
    char _connectPending;
    NSMutableArray * _transactionQueue;
}

@property (copy, nonatomic) NSDictionary * accessoryInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (nonatomic) struct LogCategory * logCategory;
@property (copy, nonatomic) id connectHandler;
@property (copy, nonatomic) id disconnectHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_disconnect;
- (void)dealloc;
- (BTLEClient *)init;
- (void)connect;
- (void)disconnect;
- (void)centralManagerDidUpdateState:(NSObject *)arg0;
- (void)centralManager:(CBCentralManager *)arg0 didConnectPeripheral:(CBPeripheral *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didFailToConnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)centralManager:(CBCentralManager *)arg0 didDisconnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_connect;
- (void)_connect2;
- (void)_processTransactions;
- (void)readDataForCharacteristic:(id)arg0 readHandler:(id /* block */)arg1;
- (void)writeData:(NSData *)arg0 characteristic:(HAPCharacteristic *)arg1 writeHandler:(id /* block */)arg2;
- (void)writeData:(NSData *)arg0 requestCharacteristic:(NSString *)arg1 responseCharacteristic:(id)arg2 replyHandler:(id /* block */)arg3;
- (struct LogCategory *)logCategory;
- (void)setLogCategory:(struct LogCategory *)arg0;
- (NSDictionary *)accessoryInfo;
- (void)setAccessoryInfo:(NSDictionary *)arg0;
- (id /* block */)connectHandler;
- (void)setConnectHandler:(id /* block */)arg0;
- (id /* block */)disconnectHandler;
- (void)setDisconnectHandler:(id /* block */)arg0;

@end
