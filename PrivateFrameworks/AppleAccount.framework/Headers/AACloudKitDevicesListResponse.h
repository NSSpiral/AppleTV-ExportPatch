/* Runtime dump - AACloudKitDevicesListResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AACloudKitDevicesListResponse : AAResponse
{
    NSArray * _incompatibleDevices;
    NSArray * _needUpgradeDevices;
    NSArray * _incompatibleDeviceNames;
    NSArray * _needUpgradeDeviceNames;
}

@property (readonly, nonatomic) NSArray * incompatibleDevices;
@property (readonly, nonatomic) NSArray * needUpgradeDevices;
@property (readonly, nonatomic) NSArray * incompatibleDeviceNames;
@property (readonly, nonatomic) NSArray * needUpgradeDeviceNames;

- (void).cxx_destruct;
- (AACloudKitDevicesListResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSArray *)incompatibleDevices;
- (NSArray *)needUpgradeDevices;
- (NSArray *)incompatibleDeviceNames;
- (NSArray *)needUpgradeDeviceNames;

@end
