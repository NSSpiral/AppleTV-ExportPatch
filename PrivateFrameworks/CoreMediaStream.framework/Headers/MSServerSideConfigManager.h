/* Runtime dump - MSServerSideConfigManager
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate>
{
    NSString * _personID;
    NSDictionary * _config;
    MSMediaStreamDaemon * _daemon;
    NSString * _configPath;
    MSServerSideConfigProtocol * _protocol;
    int _state;
}

@property (readonly, nonatomic) NSString * personID;
@property (retain, nonatomic) NSDictionary * config;
@property (nonatomic) MSMediaStreamDaemon * daemon;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)configManagerForPersonID:(NSObject *)arg0;
+ (NSObject *)existingConfigManagerForPersonID:(NSObject *)arg0;
+ (void)abortAllActivities;
+ (long long)longLongValueForParameter:(id)arg0 forPersonID:(NSObject *)arg1 defaultValue:(long long)arg2;
+ (int)intValueForParameter:(id)arg0 forPersonID:(NSObject *)arg1 defaultValue:(int)arg2;
+ (NSString *)objectForKey:(NSString *)arg0 forPersonID:(NSObject *)arg1 defaultValue:(NSString *)arg2;
+ (double)doubleValueForParameter:(id)arg0 forPersonID:(NSObject *)arg1 defaultValue:(double)arg2;
+ (long)longValueForParameter:(id)arg0 forPersonID:(NSObject *)arg1 defaultValue:(long)arg2;
+ (void)forgetPersonID:(NSObject *)arg0;

- (void)dealloc;
- (void).cxx_destruct;
- (MSMediaStreamDaemon *)daemon;
- (NSDictionary *)config;
- (void)setConfig:(NSDictionary *)arg0;
- (void)setDaemon:(MSMediaStreamDaemon *)arg0;
- (void)refreshConfiguration;
- (MSServerSideConfigManager *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)serverSideConfigProtocol:(NSObject *)arg0 didFinishWithConfiguration:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)serverSideConfigProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (NSString *)personID;
- (void)abort;

@end
