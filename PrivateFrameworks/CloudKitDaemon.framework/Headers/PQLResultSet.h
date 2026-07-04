/* Runtime dump - PQLResultSet
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface PQLResultSet : NSObject <NSFastEnumeration>
{
    PQLStatement * _stmt;
    Class _objectsClass;
    SEL _objectsClassInitializer;
    char _hasValuable;
    id _objectsConstructor;
    id _lastEnumeratedObject;
    char _inTransaction;
    char _requiresSecureCoding;
    NSSet * _defaultUnarchivingAllowedClasses;
    NSError * _error;
    unsigned int _rowNumber;
    unsigned int _columns;
    PQLConnection * _db;
}

@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) unsigned int rowNumber;
@property (readonly, nonatomic) unsigned int columns;
@property (readonly, nonatomic) PQLConnection * db;
@property (readonly, nonatomic) struct sqlite3_stmt * stmt;
@property (retain, nonatomic) NSSet * defaultUnarchivingAllowedClasses;
@property (nonatomic) char requiresSecureCoding;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (char)next;
- (void)dealloc;
- (NSObject *)objectAtIndex:(int)arg0;
- (NSObject *)objectAtIndexedSubscript:(unsigned int)arg0;
- (NSString *)description;
- (void)close;
- (void).cxx_destruct;
- (NSObject *)stringAtIndex:(int)arg0;
- (NSError *)error;
- (PQLConnection *)db;
- (NSObject *)numberAtIndex:(int)arg0;
- (NSArray *)archivedObjectOfClasses:(NSArray *)arg0 atIndex:(int)arg1;
- (struct PQLResultSet *)enumerateObjects:(NSArray *)arg0;
- (unsigned int)columns;
- (unsigned int)unsignedIntAtIndex:(int)arg0;
- (unsigned long long)unsignedLongLongAtIndex:(int)arg0;
- (NSObject *)archivedObjectOfClass:(Class)arg0 atIndex:(int)arg1;
- (int)intAtIndex:(int)arg0;
- (long)longAtIndex:(int)arg0;
- (NSObject *)objectOfClass:(Class)arg0 atIndex:(int)arg1;
- (struct PQLResultSet *)enumerateObjectsOfClass:(Class)arg0;
- (void)setRequiresSecureCoding:(char)arg0;
- (unsigned long)unsignedLongAtIndex:(int)arg0;
- (long long)longLongAtIndex:(int)arg0;
- (char)boolAtIndex:(int)arg0;
- (NSObject *)dataAtIndex:(int)arg0;
- (unsigned int)rowNumber;
- (NSObject *)uuidAtIndex:(int)arg0;
- (unsigned int)unsignedIntegerAtIndex:(int)arg0;
- (int)integerAtIndex:(int)arg0;
- (char)charAtIndex:(int)arg0;
- (NSObject *)object:(NSObject *)arg0;
- (PQLResultSet *)initWithStatement:(NSSQLiteStatement *)arg0 usingDatabase:(struct sqlite3 *)arg1;
- (NSObject *)onlyObjectOfClass:(Class)arg0 initializer:(SEL)arg1;
- (NSObject *)onlyObject:(NSObject *)arg0;
- (char)_next:(char)arg0;
- (char)isNullAtIndex:(int)arg0;
- (NSSet *)defaultUnarchivingAllowedClasses;
- (struct sqlite3_stmt *)stmt;
- (NSObject *)onlyObjectOfClass:(Class)arg0;
- (NSObject *)objectOfClass:(Class)arg0;
- (NSObject *)objectOfClass:(Class)arg0 initializer:(SEL)arg1;
- (NSObject *)columnNameAtIndex:(int)arg0;
- (struct Mem *)sqliteValueAtIndex:(int)arg0;
- (unsigned char)unsignedCharAtIndex:(int)arg0;
- (short)shortAtIndex:(int)arg0;
- (unsigned short)unsignedShortAtIndex:(int)arg0;
- (float)floatAtIndex:(int)arg0;
- (double)doubleAtIndex:(int)arg0;
- (char *)UTF8StringAtIndex:(SEL)arg0;
- (NSObject *)dateAtIndex:(int)arg0;
- (NSObject *)dataAtIndex:(int)arg0 noCopy:(char)arg1;
- (NSObject *)plistAtIndex:(int)arg0;
- (struct PQLResultSet *)enumerateObjectsOfClass:(Class)arg0 initializer:(SEL)arg1;
- (char)requiresSecureCoding;
- (void)setDefaultUnarchivingAllowedClasses:(NSSet *)arg0;

@end
