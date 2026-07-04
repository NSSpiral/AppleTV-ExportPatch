/* Runtime dump - ATVDataServer
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataServer : NSObject
{
    char _recoveredServer;
    NSString * _name;
    unsigned int _serverType;
    id _serverID;
    int _serverStatus;
    NSDate * _registeredDate;
    NSMutableArray * _dataClients;
    NSMutableDictionary * _metadataDict;
}

@property (nonatomic) unsigned int serverType;
@property (retain, nonatomic) id serverID;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSDate * registeredDate;
@property (nonatomic) int serverStatus;
@property (nonatomic) char recoveredServer;
@property (readonly, nonatomic) NSArray * registeredDataClients;
@property (retain) NSMutableArray * dataClients;
@property (retain) NSMutableDictionary * metadataDict;

+ (void)deregisterDataServer:(NSObject *)arg0;
+ (void)registerDataServer:(NSObject *)arg0;
+ (NSArray *)serversOfTypes:(unsigned int)arg0;
+ (NSObject *)findServerWithServerID:(NSObject *)arg0 comparator:(id /* block */)arg1;
+ (ATVDataServer *)defaultServer;
+ (char)isRegistered:(char)arg0;
+ (NSObject *)activeServer;
+ (void)setActiveServer:(NSObject *)arg0;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSURL *)serverID;
- (void)setServerType:(unsigned int)arg0;
- (void)setServerStatus:(int)arg0;
- (ATVDataServer *)initWithServerName:(NSString *)arg0 serverID:(NSObject *)arg1 serverType:(unsigned int)arg2;
- (void)concreteDataServerResolve;
- (int)serverStatus;
- (NSMutableDictionary *)metadataDict;
- (void)setMetadataDict:(NSMutableDictionary *)arg0;
- (NSArray *)registeredDataClients;
- (void)setRecoveredServer:(char)arg0;
- (void)registerDataClient:(NSObject *)arg0;
- (NSObject *)dataClientOfType:(unsigned int)arg0;
- (void)setRegisteredDate:(NSDate *)arg0;
- (NSMutableArray *)dataClients;
- (void)deregisterDataClient:(NSObject *)arg0;
- (void)resolve;
- (void)setServerID:(NSURL *)arg0;
- (NSDate *)registeredDate;
- (void)setDataClients:(NSMutableArray *)arg0;
- (char)isRecoveredServer;
- (unsigned int)serverType;

@end
