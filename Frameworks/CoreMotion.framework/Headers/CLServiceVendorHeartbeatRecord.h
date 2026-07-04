/* Runtime dump - CLServiceVendorHeartbeatRecord
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLServiceVendorHeartbeatRecord : NSObject
{
    int _synCount;
    int _ackCount;
    CLSilo * _silo;
    <CLIntersiloServiceProtocol> * _service;
}

@property (readonly, nonatomic) CLSilo * silo;
@property (readonly, weak, nonatomic) <CLIntersiloServiceProtocol> * service;
@property (readonly, nonatomic) int synCount;
@property (readonly, nonatomic) int ackCount;

- (CLSilo *)silo;
- (CLServiceVendorHeartbeatRecord *)initTrackingService:(NSObject *)arg0;
- (void)syn;
- (void)ack;
- (int)synCount;
- (int)ackCount;
- (void).cxx_destruct;
- (<CLIntersiloServiceProtocol> *)service;

@end
