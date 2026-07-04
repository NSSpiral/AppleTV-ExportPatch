/* Runtime dump - WLOMetrics
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface WLOMetrics : NSObject

+ (void)LogEventMetric:(unsigned int)arg0;
+ (void)LogResultMetric:(unsigned int)arg0 resultCode:(int)arg1 duration:(double)arg2 transportType:(unsigned int)arg3 isClient:(char)arg4;
+ (void)LogConfigurationMetric:(NSObject *)arg0;

@end
