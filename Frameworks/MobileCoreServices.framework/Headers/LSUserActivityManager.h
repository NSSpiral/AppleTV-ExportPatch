/* Runtime dump - LSUserActivityManager
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol>
{
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _serverQ;
    char _connectionInitializationSucceeded;
    char _needToSendInitialMessage;
    NSMapTable * _userActivitiesByUUID;
    char _supportsActivityContinuation;
    char _activityContinuationIsEnabled;
    NSUUID * _activeUserActivityUUID;
}

@property (readonly, retain) NSXPCConnection * connection;
@property (copy) NSUUID * activeUserActivityUUID;
@property (readonly) char supportsActivityContinuation;
@property (readonly) char activityContinuationIsEnabled;
@property (readonly) NSObject<OS_dispatch_queue> * serverQ;
@property (retain) NSMapTable * userActivitiesByUUID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)shouldSupportActivityContinuation;
+ (char)userActivityContinuationSupported;
+ (LSUserActivityManager *)defaultManager;

- (void)sendInitialMessage;
- (NSObject<OS_dispatch_queue> *)serverQ;
- (NSMapTable *)userActivitiesByUUID;
- (void)setActiveUserActivityUUID:(NSUUID *)arg0;
- (id)_findUserActivityForUUID:(id)arg0;
- (void)addUserActivity:(NSUserActivity *)arg0;
- (void)askClientUserActivityToSave:(id)arg0;
- (void)askClientUserActivityToSave:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)tellClientUserActivityItWasResumed:(id)arg0;
- (char)activityContinuationIsEnabled;
- (void)didReceiveInputStreamWithUUID:(id)arg0 inputStream:(id *)arg1 outputStream:(NSOutputStream *)arg2;
- (id)encodeUserActivity:(id)arg0;
- (id)createByDecodingUserActivity:(id)arg0;
- (char)supportsActivityContinuation;
- (void)setUserActivitiesByUUID:(NSMapTable *)arg0;
- (void)fetchUUID:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)markUserActivityAsDirty:(id)arg0 forceImmediate:(char)arg1;
- (char)userActivityIsActive:(id)arg0;
- (void)makeActive:(id)arg0;
- (void)makeInactive:(id)arg0;
- (void)removeUserActivity:(NSUserActivity *)arg0;
- (NSUUID *)activeUserActivityUUID;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg0;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg0 makeCurrent:(char)arg1;
- (void)dealloc;
- (LSUserActivityManager *)init;
- (NSXPCConnection *)connection;
- (LSUserActivityManager *)initWithConnection:(NSXPCConnection *)arg0;

@end
