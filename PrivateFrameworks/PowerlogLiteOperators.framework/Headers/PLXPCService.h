/* Runtime dump - PLXPCService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLXPCService : PLService
{
    NSObject<OS_xpc_object> * _xpcConnection;
    NSMutableDictionary * _registeredListeners;
    NSMutableDictionary * _registeredResponders;
    NSDictionary * _permissionCache;
    PLNSNotificationOperatorComposition * _registrationNotification;
    NSArray * _clientIDs;
    NSDictionary * _clientNames;
    PLNSTimerOperatorComposition * _resetPermissionsForClientsTimer;
    PLNSNotificationOperatorComposition * _dailyTaskNotification;
}

@property (retain) NSObject<OS_xpc_object> * xpcConnection;
@property (retain) NSMutableDictionary * registeredListeners;
@property (retain) NSMutableDictionary * registeredResponders;
@property (retain) NSDictionary * permissionCache;
@property (retain) PLNSNotificationOperatorComposition * registrationNotification;
@property (retain) NSArray * clientIDs;
@property (retain) NSDictionary * clientNames;
@property (retain) PLNSTimerOperatorComposition * resetPermissionsForClientsTimer;
@property (retain) PLNSNotificationOperatorComposition * dailyTaskNotification;

+ (void)load;
+ (PLXPCService *)defaults;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryAggregateDefinitions;
+ (PLXPCService *)entryEventPointDefinitionClientLogging;
+ (NSObject *)entryAggregateDefinitionXPCEvent;

- (PLXPCService *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (PLNSNotificationOperatorComposition *)dailyTaskNotification;
- (void)setDailyTaskNotification:(PLNSNotificationOperatorComposition *)arg0;
- (void)dailyTasks;
- (NSMutableDictionary *)registeredListeners;
- (NSMutableDictionary *)registeredResponders;
- (void)handlePeer:(NSObject *)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)resetPermissionsForClients;
- (NSArray *)clientIDs;
- (NSDictionary *)permissionCache;
- (NSDictionary *)clientNames;
- (void)handlePeerShouldLogEvent:(NSObject *)arg0 withMessage:(NSString *)arg1 withClientID:(short)arg2 withProcessName:(NSString *)arg3 withKey:(NSString *)arg4;
- (void)handlePeerResponderEvent:(NSObject *)arg0 withMessage:(NSString *)arg1 withClientID:(short)arg2 withProcessName:(NSString *)arg3 withKey:(NSString *)arg4 withPayload:(NSData *)arg5;
- (void)handlePeerListenerEvent:(NSObject *)arg0 withMessage:(NSString *)arg1 withClientID:(short)arg2 withProcessName:(NSString *)arg3 withKey:(NSString *)arg4 withPayload:(NSData *)arg5;
- (short)permissionForClientID:(short)arg0 withKey:(NSString *)arg1 withType:(NSObject *)arg2 withProcessName:(NSString *)arg3;
- (void)respondToEvent:(NSObject *)arg0 withResponse:(NSURLResponse *)arg1;
- (NSDictionary *)registeredOperatorFromDictionary:(NSDictionary *)arg0 forMessage:(NSString *)arg1;
- (void)logMessage:(NSString *)arg0 withPayload:(NSData *)arg1;
- (NSObject<OS_xpc_object> *)xpcConnection;
- (void)setXpcConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)setRegisteredListeners:(NSMutableDictionary *)arg0;
- (void)setRegisteredResponders:(NSMutableDictionary *)arg0;
- (void)setPermissionCache:(NSDictionary *)arg0;
- (PLNSNotificationOperatorComposition *)registrationNotification;
- (void)setRegistrationNotification:(PLNSNotificationOperatorComposition *)arg0;
- (void)setClientIDs:(NSArray *)arg0;
- (void)setClientNames:(NSDictionary *)arg0;
- (PLNSTimerOperatorComposition *)resetPermissionsForClientsTimer;
- (void)setResetPermissionsForClientsTimer:(PLNSTimerOperatorComposition *)arg0;

@end
