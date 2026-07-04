/* Runtime dump - ATVDevice
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDevice : NSObject

+ (char)isRunningInStoreDemoMode;
+ (NSString *)systemVersion;
+ (NSString *)appSoftwareVersion;
+ (NSString *)getMobileGestaltString:(struct __CFString *)arg0;
+ (NSData *)getMobileGestaltData:(struct __CFString *)arg0;
+ (NSString *)productType;
+ (char)getMobileGestaltBoolean:(struct __CFString *)arg0;
+ (NSData *)uniqueIDData;
+ (NSObject *)inverseUniqueID;
+ (NSObject *)bonjourID;
+ (NSObject *)hwModel;
+ (NSNumber *)modelNumber;
+ (NSNumber *)marketingPartNumber;
+ (NSString *)systemBuildVersion;
+ (NSObject *)systemReleaseType;
+ (NSDictionary *)regionInfo;
+ (char)supports1080p;
+ (char)supportsBluetoothLECapablity;
+ (char)runningAnInternalBuild;
+ (ATVDevice *)deviceName;
+ (NSString *)serialNumber;
+ (NSString *)firmwareVersion;
+ (NSString *)uniqueID;

@end
