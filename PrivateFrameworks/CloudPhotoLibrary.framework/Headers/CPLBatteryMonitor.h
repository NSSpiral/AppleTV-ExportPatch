/* Runtime dump - CPLBatteryMonitor
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBatteryMonitor : NSObject

+ (void)_updateBatteryWithBatteryEntry:(unsigned int)arg0;
+ (void)startMonitoringPowerEvents;
+ (unsigned char)powerStatus;

@end
