/* Runtime dump - PLFileStats
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLFileStats : NSObject

+ (NSDate *)logStartDate;
+ (NSDate *)logEndDate;
+ (long long)fileSizeAtPath:(NSString *)arg0;
+ (PLFileStats *)tableCounts;
+ (PLFileStats *)select:(unsigned char)arg0 from:(NSObject *)arg1 where:(NSString *)arg2;
+ (double)totalLogDuration;
+ (NSObject *)cpuTimeForProcess:(NSObject *)arg0;
+ (NSObject *)energyUsageForProcess:(NSObject *)arg0;
+ (PLFileStats *)logStartDateFromTable:(id)arg0;
+ (PLFileStats *)logEndDateFromTable:(id)arg0;
+ (NSString *)statsForFile:(NSString *)arg0;
+ (double)totalLogDurationFromTable:(id)arg0 where:(NSString *)arg1;

@end
