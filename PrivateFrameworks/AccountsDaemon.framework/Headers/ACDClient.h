/* Runtime dump - ACDClient
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDClient : NSObject
{
    NSXPCConnection * _connection;
    ACDDatabase * _database;
    struct __CFBundle * _bundle;
    NSString * _bundleID;
    char _didManuallySetBundleID;
    NSNumber * _pid;
    NSString * _localizedAppName;
    NSString * _name;
    NSMutableDictionary * _entitlementChecks;
}

@property (retain, nonatomic) NSString * bundleID;
@property (readonly, nonatomic) struct __CFBundle * bundle;
@property (readonly, nonatomic) NSString * localizedAppName;
@property (readonly, nonatomic) NSString * adamOrDisplayID;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSNumber * pid;
@property (readonly, nonatomic) NSXPCConnection * connection;
@property (readonly, nonatomic) ACDDatabase * database;

+ (NSObject *)clientWithBundleID:(NSString *)arg0;
+ (ACDClient *)_bundleForNonPlugInPID:(int)arg0;
+ (ACDClient *)_bundleIDForPID:(int)arg0;
+ (ACDClient *)_bundleForPID:(int)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)name;
- (struct __CFBundle *)bundle;
- (void).cxx_destruct;
- (NSXPCConnection *)connection;
- (char)hasEntitlement:(id)arg0;
- (NSString *)adamOrDisplayID;
- (ACDClient *)initWithConnection:(NSXPCConnection *)arg0 database:(ACDDatabase *)arg1;
- (NSString *)_displayNameFromSpringBoardForPID:(int)arg0;
- (NSString *)_displayNameFromBundleInfoDictionaryForPID:(int)arg0;
- (NSString *)localizedAppName;
- (NSString *)shortDebugDescription;
- (NSString *)longDebugDescription;
- (NSString *)bundleID;
- (NSNumber *)pid;
- (void)setBundleID:(NSString *)arg0;
- (ACDDatabase *)database;
- (ACDClient *)initWithConnection:(NSXPCConnection *)arg0;

@end
