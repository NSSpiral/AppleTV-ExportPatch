/* Runtime dump - DMConnection
 * Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol>
{
    NSString * _lastPlugin;
}

@property (readonly, nonatomic) NSString * lastPlugin;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)handleMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (void)orderedPluginIdentifiersWithCompletion:(id /* block */)arg0;
- (void)migrateWithCompletion:(id /* block */)arg0;
- (NSString *)lastPlugin;
- (void)testMigrationUIWithProgress:(char)arg0 forceInvert:(char)arg1 completion:(id /* block */)arg2;

@end
