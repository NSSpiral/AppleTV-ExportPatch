/* Runtime dump - AWDMetricManager
 * Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDMetricManager : NSObject

+ (void)postMetricWithId:(unsigned int)arg0 unsignedIntegerValue:(unsigned int)arg1;
+ (void)postMetricWithId:(unsigned int)arg0 integerValue:(int)arg1;
+ (void)postMetricWithId:(unsigned int)arg0;
+ (void)postMetricWithId:(unsigned int)arg0 boolValue:(char)arg1;
+ (void)postMetricWithId:(unsigned int)arg0 stringValue:(NSString *)arg1;
+ (void)postMetricWithId:(unsigned int)arg0 numberValue:(id)arg1;
+ (void)postMetricWithId:(unsigned int)arg0 object:(NSObject *)arg1;

@end
