/* Runtime dump - NSMigrationContext
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMigrationContext : NSObject
{
    NSMutableDictionary * _bySourceAssociationTable;
    NSMutableDictionary * _byDestinationAssociationTable;
    NSMutableDictionary * _byMappingBySourceAssociationTable;
    NSMutableDictionary * _byMappingByDestinationAssociationTable;
    NSMigrationManager * _migrationManager;
    NSEntityMapping * _currentMapping;
    unsigned int _currentStep;
    NSPropertyMapping * _currentPropertyMapping;
}

@property (retain) NSEntityMapping * currentEntityMapping;
@property (retain) NSPropertyMapping * currentPropertyMapping;
@property unsigned int currentMigrationStep;

- (void)setCurrentPropertyMapping:(NSPropertyMapping *)arg0;
- (void)associateSourceInstance:(id)arg0 withDestinationInstance:(id)arg1 forEntityMapping:(NSEntityMapping *)arg2;
- (void)clearAssociationTables;
- (void)setCurrentMigrationStep:(unsigned int)arg0;
- (void)_createAssociationsBySource:(NSObject *)arg0 withDestination:(NSObject *)arg1 forEntityMapping:(NSEntityMapping *)arg2;
- (void)_createAssociationsByDestination:(NSObject *)arg0 fromSource:(NSObject *)arg1 forEntityMapping:(NSEntityMapping *)arg2;
- (NSMigrationContext *)initWithMigrationManager:(NSMigrationManager *)arg0;
- (NSEntityMapping *)currentEntityMapping;
- (void)setCurrentEntityMapping:(NSEntityMapping *)arg0;
- (NSPropertyMapping *)currentPropertyMapping;
- (unsigned int)currentMigrationStep;
- (id)destinationInstancesForEntityMapping:(id)arg0 sourceInstance:(id)arg1;
- (id)sourceInstancesForEntityMapping:(id)arg0 destinationInstance:(id)arg1;
- (void)dealloc;

@end
