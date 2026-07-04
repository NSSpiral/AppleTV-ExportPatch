/* Runtime dump - ATVVersionInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVVersionInfo : NSObject

+ (ATVVersionInfo *)versionSoftware;
+ (ATVVersionInfo *)currentOSBuildVersion;
+ (int)compare3PartVersion:(NSString *)arg0 with3PartVersion:(NSString *)arg1;
+ (ATVVersionInfo *)currentOSVersion;
+ (ATVVersionInfo *)versionSoftwareBuild;
+ (int)compareOSVersion:(NSString *)arg0 andBuild:(id)arg1 withOSVersion:(NSString *)arg2 andBuild:(id)arg3;
+ (ATVVersionInfo *)currentEFIVersion;
+ (int)compareEFIVersion:(NSString *)arg0 withEFIVersion:(NSString *)arg1;
+ (ATVVersionInfo *)currentIRVersion;
+ (int)compareIRVersion:(NSString *)arg0 withIRVersion:(NSString *)arg1;
+ (ATVVersionInfo *)currentSIMainVersion;
+ (ATVVersionInfo *)currentSIBootVersion;
+ (char)isSIFirmwareValid;
+ (int)compareSIVersion:(NSString *)arg0 withSIVersion:(NSString *)arg1;

@end
