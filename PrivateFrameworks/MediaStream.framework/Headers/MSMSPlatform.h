/* Runtime dump - MSMSPlatform
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSMSPlatform : NSObject <MSPlatform>
{
    char _isPerfLoggingEnabled;
    NSData * _pushToken;
}

@property (retain, nonatomic) NSData * pushToken;
@property (nonatomic) char isPerfLoggingEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)thePlatform;

- (MSMSPlatform *)init;
- (void).cxx_destruct;
- (void)setPushToken:(NSData *)arg0;
- (NSData *)pushToken;
- (Class)publisherPluginClass;
- (Class)subscriberPluginClass;
- (Class)sharingPluginClass;
- (Class)deletePluginClass;
- (NSString *)fullNameFromFirstName:(NSString *)arg0 lastName:(NSString *)arg1;
- (NSObject *)baseURLForPersonID:(NSObject *)arg0;
- (char)policyMayUpload;
- (NSObject *)contentURLForPersonID:(NSObject *)arg0;
- (void)didDetectUnrecoverableCondition;
- (char)policyMayDownload;
- (char)shouldLogAtLevel:(int)arg0;
- (id)pathMediaStreamDir;
- (NSDictionary *)socketOptions;
- (char)shouldEnableNewFeatures;
- (id)theDaemon;
- (NSObject *)authTokenForPersonID:(NSObject *)arg0;
- (NSString *)appBundleInfoString;
- (void)logFacility:(int)arg0 level:(int)arg1 format:(NSString *)arg2 args:(void *)arg3;
- (void)logFile:(char *)arg0 func:(char *)arg1 line:(int)arg2 facility:(int)arg3 level:(int)arg4 format:(NSString *)arg5 args:(void *)arg6;
- (char)isPerformanceLoggingEnabled;
- (NSString *)hardwareString;
- (NSString *)OSString;
- (id)UDID;
- (NSObject *)pushTokenForPersonID:(NSObject *)arg0;
- (NSObject *)_accountForPersonID:(NSObject *)arg0;
- (void)_rereadDefaults;
- (struct __CFString *)_facilityStringForFacility:(int)arg0;
- (char)_mayPerformFileTransfer;
- (NSString *)OSVersion;
- (char)personIDUsesProductionPushEnvironment:(NSDictionary *)arg0;
- (char)isPerfLoggingEnabled;
- (void)setIsPerfLoggingEnabled:(char)arg0;

@end
