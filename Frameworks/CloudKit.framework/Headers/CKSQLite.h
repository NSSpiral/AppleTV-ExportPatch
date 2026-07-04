/* Runtime dump - CKSQLite
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLite : NSObject
{
    char _hasMigrated;
    char _corrupt;
    NSString * _path;
    NSString * _schema;
    NSString * _schemaVersion;
    NSString * _objectClassPrefix;
    long _userVersion;
    struct sqlite3 * _db;
    unsigned int _openCount;
    NSMutableDictionary * _statementsBySQL;
    NSDateFormatter * _dateFormatter;
}

@property (readonly, nonatomic) NSString * path;
@property (readonly, nonatomic) NSString * schema;
@property (readonly, nonatomic) NSString * schemaVersion;
@property (retain, nonatomic) NSString * objectClassPrefix;
@property (nonatomic) long userVersion;
@property (readonly, nonatomic) char isOpen;
@property (readonly, nonatomic) char hasMigrated;
@property (nonatomic) struct sqlite3 * db;
@property (nonatomic) unsigned int openCount;
@property (nonatomic) char corrupt;
@property (readonly, nonatomic) NSMutableDictionary * statementsBySQL;
@property (retain, nonatomic) NSDateFormatter * dateFormatter;

- (id)_createSchemaHash;
- (long)dbUserVersion;
- (void)removeAllStatements;
- (void)dropAllTables;
- (void)_periodicVacuum;
- (void)executeSQL:(id)arg0 arguments:(void *)arg1;
- (id)statementForSQL:(id)arg0;
- (NSArray *)allTableNames;
- (void)removePropertyForKey:(NSString *)arg0;
- (NSDateFormatter *)dateFormatter;
- (NSObject *)selectFrom:(NSObject *)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2 limit:(AWDCallHistorySyncOverLimit *)arg3;
- (NSObject *)_tableNameForClass:(Class)arg0;
- (NSObject *)selectAllObjectsOfClass:(Class)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2;
- (NSDictionary *)_boxedPropertyDictionary:(NSDictionary *)arg0 forObjCClass:(NSObject *)arg1;
- (id)_boxedValue:(id)arg0 forObjcCProperty:(NSObject *)arg1;
- (void)analyze;
- (NSObject *)selectAllFrom:(NSObject *)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2;
- (unsigned int)selectCountFrom:(NSObject *)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2;
- (NSString *)objectClassPrefix;
- (char)hasMigrated;
- (unsigned int)openCount;
- (void)setOpenCount:(unsigned int)arg0;
- (char)corrupt;
- (void)setCorrupt:(char)arg0;
- (NSMutableDictionary *)statementsBySQL;
- (void)setDateFormatter:(NSDateFormatter *)arg0;
- (void)dealloc;
- (NSString *)path;
- (void)begin;
- (void)end;
- (void)close;
- (void)remove;
- (void).cxx_destruct;
- (NSString *)schema;
- (struct sqlite3 *)db;
- (long)userVersion;
- (void)setUserVersion:(long)arg0;
- (char)openWithError:(id *)arg0;
- (void)open;
- (NSDate *)creationDate;
- (CKSQLite *)initWithPath:(NSString *)arg0 schema:(NSString *)arg1;
- (id)select:(unsigned char)arg0 from:(NSObject *)arg1 where:(NSString *)arg2 bindings:(NSDictionary *)arg3;
- (long long)insertOrReplaceInto:(id)arg0 values:(NSArray *)arg1;
- (void)deleteFrom:(NSObject *)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2;
- (void)executeSQL:(id)arg0;
- (void)setDb:(struct sqlite3 *)arg0;
- (long long)insertOrReplaceObject:(NSObject *)arg0;
- (long long)lastInsertRowID;
- (NSObject *)selectObjectOfClass:(Class)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2;
- (NSObject *)selectAllObjectsOfClass:(Class)arg0 where:(NSString *)arg1 bindings:(NSDictionary *)arg2 limit:(AWDCallHistorySyncOverLimit *)arg3;
- (void)setObjectClassPrefix:(NSString *)arg0;
- (NSString *)propertyForKey:(NSString *)arg0;
- (void)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (id)select:(unsigned char)arg0 from:(NSObject *)arg1;
- (NSString *)datePropertyForKey:(NSString *)arg0;
- (void)setDateProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSObject *)selectAllObjectsOfClass:(Class)arg0;
- (NSString *)schemaVersion;
- (char)isOpen;
- (void)raise:(id)arg0;
- (void)rollback;
- (void)vacuum;

@end
