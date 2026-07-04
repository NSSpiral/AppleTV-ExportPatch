/* Runtime dump - PLQMIClient
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQMIClient : NSObject

+ (PLQMIClient *)shortNameFromServiceCode:(id)arg0;
+ (PLQMIClient *)fullNameFromServiceCode:(id)arg0;
+ (PLQMIClient *)sharedQMIClient;

- (void)dealloc;
- (PLQMIClient *)init;
- (NSDate *)getBasebandTimeWithAPTimestamp:(id *)arg0;
- (id)getLTESleepManagerStats;
- (id)getBasebandTime;

@end
