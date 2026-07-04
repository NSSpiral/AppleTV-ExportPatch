/* Runtime dump - SFActivityScanner
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver>
{
    char _receiving;
    <SFActivityScannerDelegate> * _delegate;
    NSUUID * _identifier;
}

@property <SFActivityScannerDelegate> * delegate;
@property char receiving;
@property (retain) NSUUID * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<SFActivityScannerDelegate> *)arg0;
- (SFActivityScanner *)init;
- (<SFActivityScannerDelegate> *)delegate;
- (NSUUID *)identifier;
- (void)stop;
- (void)setIdentifier:(NSUUID *)arg0;
- (void)start;
- (void)scanManager:(NSObject *)arg0 receivedAdvertisement:(id)arg1;
- (void)scanManager:(NSObject *)arg0 foundDeviceWithDevice:(NSObject *)arg1;
- (void)scanManager:(NSObject *)arg0 lostDeviceWithDevice:(NSObject *)arg1;
- (void)activityPayloadFromDevice:(NSObject *)arg0 forAdvertisementPayload:(NSData *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)activityPayloadFromDeviceIdentifier:(NSString *)arg0 forAdvertisementPayload:(NSData *)arg1 withCompletionHandler:(id /* block */)arg2;
- (char)receiving;
- (void)setReceiving:(char)arg0;

@end
