/* Runtime dump - AXHearingSlaveController
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingSlaveController : AXHARemoteController <NSNetServiceDelegate, AXHARemoteUpdateProtocol>
{
    struct __CFSocket * _ipv4socket;
    struct __CFSocket * _ipv6socket;
    AXHATimer * _resolveTimer;
    char _isVisible;
    AXRemoteHearingAidDevice * _device;
    id _searchCompletion;
}

@property (retain, nonatomic) AXRemoteHearingAidDevice * device;
@property (copy, nonatomic) id searchCompletion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDevice:(AXRemoteHearingAidDevice *)arg0;
- (void)dealloc;
- (AXHearingSlaveController *)init;
- (char)initialize;
- (char)setVisible:(char)arg0;
- (void)writeValue:(id)arg0 forProperty:(int)arg1 forDeviceID:(NSString *)arg2;
- (void)updateProperty:(int)arg0 forDeviceID:(NSString *)arg1;
- (void)closeConnectionWithError:(NSError *)arg0;
- (void)resolveMasterWithCompletion:(id /* block */)arg0;
- (void)openConnectionIfNecessary;
- (char)isSlave;
- (void)validatePairedAid;
- (void)receivedData:(NSMutableData *)arg0;
- (void)acceptConnection:(int)arg0;
- (void)setSearchCompletion:(id /* block */)arg0;
- (id /* block */)searchCompletion;
- (void)netServiceWillPublish:(NSNetService *)arg0;
- (void)netServiceDidPublish:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotPublish:(NSDictionary *)arg1;
- (void)netServiceDidStop:(NSNetService *)arg0;
- (void)resetConnection;
- (AXRemoteHearingAidDevice *)device;

@end
