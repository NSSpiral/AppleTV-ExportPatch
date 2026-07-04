/* Runtime dump - NEProfileIngestion
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>
{
    NSString * _clientName;
    NSString * _payloadType;
    NEConfigurationManager * _manager;
    NSMutableArray * _currentConfigurations;
    NEConfiguration * _ingestedConfiguration;
}

@property (readonly) NSString * clientName;
@property (readonly) NSString * payloadType;
@property (readonly) NEConfigurationManager * manager;
@property (retain) NSMutableArray * currentConfigurations;
@property (retain) NEConfiguration * ingestedConfiguration;

+ (NSData *)getServiceIDForPayload:(NSData *)arg0;
+ (void)profileMigrationComplete;

- (char)removeConfiguration:(NSDictionary *)arg0;
- (NEProfileIngestion *)initWithNameAndType:(NSObject *)arg0 payloadType:(NSString *)arg1;
- (NSMutableArray *)currentConfigurations;
- (void)setCurrentConfigurations:(NSMutableArray *)arg0;
- (NEConfiguration *)ingestedConfiguration;
- (NSDictionary *)findConfigurationByConfigurationID:(NSDictionary *)arg0;
- (void)setIngestedConfiguration:(NEConfiguration *)arg0;
- (char)loadConfigurationsWithRefreshOption:(char)arg0;
- (NSString *)findConfigurationByName:(NSString *)arg0;
- (char)saveConfiguration:(NSDictionary *)arg0;
- (NSData *)findConfigurationByPayloadUUID:(NSData *)arg0;
- (id)resolveConfigurationNameConflict:(id)arg0;
- (char)loadConfigurationsForceReloadFromDisk;
- (char)enableAlwaysOnVpnInternal:(char)arg0;
- (char)createConfigurationFromPayload:(NSData *)arg0 payloadType:(NSString *)arg1;
- (char)saveIngestedConfiguration;
- (char)removeIngestedConfiguration;
- (char)removeConfigurationWithIdentifier:(NSString *)arg0;
- (NSString *)setAsideConfigurationName:(NSString *)arg0 unsetAside:(char)arg1;
- (char)isInstalled:(char)arg0;
- (char)lockConfigurations;
- (void)unlockConfigurations;
- (void)enableDefaultService;
- (char)enableAlwaysOnVpn;
- (char)updateDefaultAfterAddingConfiguration;
- (char)updateDefaultAfterDeletingConfiguration;
- (id)copyManagedConfigurationIDs;
- (char)updateAppLayerVPNMappingRules:(id)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (NEProfileIngestion *)initWithName:(NSString *)arg0;
- (NSString *)payloadType;
- (NEConfigurationManager *)manager;
- (NSString *)clientName;

@end
