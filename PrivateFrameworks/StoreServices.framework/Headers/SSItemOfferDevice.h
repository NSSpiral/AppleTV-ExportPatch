/* Runtime dump - SSItemOfferDevice
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemOfferDevice : NSObject
{
    int _deviceIdentifier;
    SSItemOfferDeviceError * _incompatibleDeviceError;
    SSItemOfferDeviceError * _incompatibleSystemError;
    NSString * _minimumProductVersion;
}

@property (readonly, nonatomic) int deviceIdentifier;
@property (readonly, nonatomic) NSString * minimumProductVersion;
@property (readonly, nonatomic) SSItemOfferDeviceError * incompatibleDeviceError;
@property (readonly, nonatomic) SSItemOfferDeviceError * incompatibleSystemError;

- (void)dealloc;
- (SSItemOfferDevice *)init;
- (int)deviceIdentifier;
- (SSItemOfferDevice *)initWithOfferDeviceDicitionary:(id)arg0;
- (SSItemOfferDevice *)initWithDeviceIdentifier:(int)arg0;
- (SSItemOfferDeviceError *)incompatibleDeviceError;
- (SSItemOfferDeviceError *)incompatibleSystemError;
- (NSString *)minimumProductVersion;

@end
