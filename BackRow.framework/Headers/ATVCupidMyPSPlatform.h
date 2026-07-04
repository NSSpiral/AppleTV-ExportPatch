/* Runtime dump - ATVCupidMyPSPlatform
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCupidDaemonDelegate;
@protocol MSPlatform;
@interface ATVCupidMyPSPlatform : NSObject <ATVCupidDaemonDelegate, MSPlatform>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)mediaStreamDaemonAuthFailed:(MSMediaStreamDaemon *)arg0 personID:(NSString *)arg1;
- (void)mediaStreamDaemonDidIdle:(MSMediaStreamDaemon *)arg0;
- (void)mediaStreamDaemonDidUnidle:(MSMediaStreamDaemon *)arg0;
- (Class)publisherPluginClass;
- (Class)subscriberPluginClass;
- (Class)sharingPluginClass;
- (Class)deletePluginClass;
- (NSString *)fullNameFromFirstName:(NSString *)arg0 lastName:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg0;
- (char)policyMayUpload;
- (NSURL *)contentURLForPersonID:(NSString *)arg0;
- (char)policyMayDownload;
- (char)shouldLogAtLevel:(int)arg0;
- (NSString *)pathMediaStreamDir;
- (NSDictionary *)socketOptions;
- (char)shouldEnableNewFeatures;
- (MSMediaStreamDaemon *)theDaemon;
- (NSString *)authTokenForPersonID:(NSString *)arg0;
- (NSString *)appBundleInfoString;
- (void)logFacility:(int)arg0 level:(int)arg1 format:(NSString *)arg2 args:(void *)arg3;
- (void)logFile:(char *)arg0 func:(char *)arg1 line:(int)arg2 facility:(int)arg3 level:(int)arg4 format:(NSString *)arg5 args:(void *)arg6;
- (char)policyMaySendDelete;
- (NSString *)hardwareString;
- (NSString *)OSString;
- (NSString *)UDID;
- (NSData *)pushTokenForPersonID:(NSString *)arg0;

@end
