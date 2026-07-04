/* Runtime dump - NSUserActivity
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUserActivity : NSObject
{
    id _internal;
    id _delegate;
    id _frameworkDelegate;
}

@property (readonly, retain) NSUUID * _uniqueIdentifier;
@property (readonly) unsigned int _suggestedActionType;
@property (readonly, copy) NSDate * _lastActivityDate;
@property (copy) NSDictionary * _options;
@property (copy) NSDictionary * _frameworkPayload;
@property (weak) <NSUserActivityDelegate> * _frameworkDelegate;
@property (readonly, copy) NSString * activityType;
@property (copy) NSString * title;
@property (copy) NSDictionary * userInfo;
@property char needsSave;
@property (copy) NSURL * webpageURL;
@property char supportsContinuationStreams;
@property (weak) <NSUserActivityDelegate> * delegate;
@property (readonly, retain) LSUserActivity * _internalUserActivity;

+ (void)_reportToCoreDuet:(id)arg0;
+ (NSError *)_userFacingErrorForLaunchServicesError:(NSError *)arg0 userInfo:(NSDictionary *)arg1;
+ (void)_fetchUserActivityWithUUID:(id)arg0 completionHandler:(id /* block */)arg1;

- (void)_setOptions:(NSDictionary *)arg0;
- (LSUserActivity *)_internalUserActivity;
- (NSString *)typeIdentifier;
- (NSURL *)webpageURL;
- (void)setWebpageURL:(NSURL *)arg0;
- (char)supportsContinuationStreams;
- (void)setSupportsContinuationStreams:(char)arg0;
- (void)getContinuationStreamsWithCompletionHandler:(id /* block */)arg0;
- (NSUserActivity *)initWithInternalUserActivity:(id)arg0;
- (NSUserActivity *)initWithTypeIdentifier:(NSString *)arg0;
- (NSURL *)webPageURL;
- (void)setWebPageURL:(NSURL *)arg0;
- (void)willSynchronizeActivity;
- (void)didSynchronizeActivity;
- (void)didReceiveInputStream:(NSObject *)arg0 outputStream:(NSOutputStream *)arg1;
- (NSString *)_initWithTypeIdentifier:(NSString *)arg0 suggestedActionType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (void)_updateUserInfoValue:(id)arg0 forKey:(NSString *)arg1;
- (void)_removeUserInfoValueForKey:(NSString *)arg0;
- (NSDictionary *)_frameworkPayload;
- (void)_setFrameworkPayload:(NSData *)arg0;
- (void)_updateFrameworkPayloadValue:(id)arg0 forKey:(NSString *)arg1;
- (void)_removeFrameworkPayloadValueForKey:(NSString *)arg0;
- (unsigned int)_suggestedActionType;
- (NSDate *)_lastActivityDate;
- (void)_setLastActivityDate:(NSDate *)arg0;
- (void)_resignCurrent;
- (void)dealloc;
- (void)setDelegate:(<NSUserActivityDelegate> *)arg0;
- (NSUserActivity *)init;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (<NSUserActivityDelegate> *)delegate;
- (void)invalidate;
- (void)becomeCurrent;
- (NSString *)title;
- (NSUUID *)_uniqueIdentifier;
- (void)setUserInfo:(NSDictionary *)arg0;
- (<NSUserActivityDelegate> *)_frameworkDelegate;
- (void)_setFrameworkDelegate:(NSObject *)arg0;
- (NSDictionary *)userInfo;
- (NSDictionary *)_options;
- (NSString *)activityType;
- (NSUserActivity *)initWithActivityType:(NSString *)arg0;
- (void)setNeedsSave:(char)arg0;
- (void)addUserInfoEntriesFromDictionary:(NSDictionary *)arg0;
- (char)needsSave;

@end
