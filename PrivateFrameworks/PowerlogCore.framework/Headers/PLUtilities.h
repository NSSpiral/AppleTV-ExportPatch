/* Runtime dump - PLUtilities
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLUtilities : NSObject

+ (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
+ (NSObject<OS_dispatch_queue> *)workQueue;
+ (PLUtilities *)processNameForPid:(int)arg0;
+ (NSString *)workQueueForKey:(NSString *)arg0;
+ (void)handleSQLResult:(int)arg0;
+ (NSString *)shortUUIDString;
+ (void)setMobileOwnerForFile:(NSString *)arg0;
+ (NSString *)extractDateStringAndUUIDStringFromFilePath:(NSString *)arg0;
+ (char)runningAsMobileUser;
+ (PLUtilities *)runningAsUser;
+ (void)_deallocatePortArray:(unsigned int *)arg0 withCount:(unsigned int)arg1;
+ (NSString *)modeForEntryKey:(NSString *)arg0 withKeyName:(NSString *)arg1;
+ (short)canLogMode:(id)arg0 fullMode:(char)arg1;
+ (int)getDisplayTypeOfDevice;
+ (int)getTorchTypeOfDevice;
+ (char)gasGaugeEnabled;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg0;
+ (unsigned int)pidForName:(NSString *)arg0;
+ (NSString *)hashString:(NSString *)arg0;
+ (short)logModeForEntryKey:(NSString *)arg0 withKey:(NSString *)arg1 andValue:(id)arg2;
+ (char)isValidString:(NSString *)arg0;
+ (NSObject *)torchTypeStringQuery;
+ (double)scaledPowerBasedOnPoint:(double)arg0 withPowerModel:(NSObject *)arg1;
+ (int)MavRev;
+ (char)internalBuild;
+ (PLUtilities *)deviceBootTime;
+ (char)isWiFiChipset4330;
+ (char)isWiFiChipset43291;
+ (char)isWiFiChipset4334;
+ (char)isWiFiChipset43342;
+ (char)isWiFiChipset4324;
+ (char)isWiFiChipset4345;
+ (char)isWiFiChipset4350;
+ (PLUtilities *)dateFromTimeval:(struct timeval)arg0;
+ (double)secondsFromMachTime:(unsigned long long)arg0;
+ (NSObject *)displayTypeStringQuery;
+ (int)getAudioRevOfDevice;
+ (char)nonUIBuild;
+ (double)defaultBatteryEnergyCapacity;
+ (char)isMav10;
+ (char)isMav7;
+ (char)isMav1;
+ (char)isMav2;
+ (char)isMav4;
+ (char)isICE;
+ (char)hasBaseband;
+ (NSObject *)MavRevStringQuery;
+ (char)isMav5;
+ (char)isIPod;
+ (char)isPingPongChargingWith:(char)arg0 andBatteryLevelPercent:(double)arg1;
+ (char)alsCurveHigherThanDefault;
+ (NSObject *)workQueueForClass:(Class)arg0;
+ (int)getProcessorRevOfDevice;
+ (NSObject *)allSubClassesForClass:(Class)arg0;

@end
