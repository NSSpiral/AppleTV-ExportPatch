/* Runtime dump - AMSBTLEAdvertisementManager
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate>
{
    CBPeripheralManager * peripheralManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isLECapableHardware;
- (void)advertiseMIDIService;
- (void)stopAdvertisingMIDIService;
- (char)isAdvertising;
- (void)dealloc;
- (AMSBTLEAdvertisementManager *)init;
- (void)peripheralManagerDidUpdateState:(CBPeripheralManager *)arg0;
- (void)peripheralManagerDidStartAdvertising:(CBPeripheralManager *)arg0 error:(NSError *)arg1;
- (void)peripheralManager:(CBPeripheralManager *)arg0 didReceiveReadRequest:(CBATTRequest *)arg1;

@end
