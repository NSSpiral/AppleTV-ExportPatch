/* Runtime dump - LTSpringboardServices
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface LTSpringboardServices : NSObject

+ (void)_configureAggregateReporting;
+ (void)_monitorOSMemoryNotifications;
+ (void)_configurePrediction;
+ (void)_monitorBackgroundTaskNotifications;
+ (void)_reportNANDUsage;
+ (void)_sendEDIDLogs;
+ (void)submitAggregateReportingNow;
+ (void)noteApplianceDidStart:(id)arg0;
+ (void)schedulePeriodicTrigger;
+ (void)_sendDiagnosticLogs:(id)arg0;
+ (void)_postOSMemoryNotification;
+ (void)_generateDPLog;
+ (NSArray *)_collectMediaserverLogPaths;
+ (NSArray *)_collectPlaybackLogPaths;
+ (NSArray *)_collectWiFiLogPaths;
+ (NSArray *)_collectThermalLogPaths;
+ (void)_pushDiagnosticLogsAtPaths:(NSArray *)arg0;
+ (void)_showIndicatorFor:(unsigned int)arg0;
+ (void)_requestCompleted:(SARequestCompleted *)arg0;
+ (void)_sendEDIDURLRequest:(NSURLRequest *)arg0;
+ (void)setup;

@end
