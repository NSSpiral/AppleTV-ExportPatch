/* Runtime dump - NSSQLRow
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRow : NSExternalRefCountedData
{
    _CDSnapshot * _snapshot;
}

+ (NSObject *)allocForSQLEntity:(NSObject *)arg0;
+ (unsigned int)newBatchRowAllocation:(id *)arg0 count:(unsigned int)arg1 forSQLEntity:(NSObject *)arg2 withOwnedObjectIDs:(struct _NSScalarObjectID * *)arg3 andTimestamp:(struct _NSScalarObjectID)arg4;
+ (void)initialize;
+ (NSSQLRow *)allocWithZone:(struct _NSZone *)arg0;

- (NSObject *)sqlEntity;
- (long long)pk64;
- (unsigned int)sqlEntityID;
- (long long)optLock;
- (long long)foreignKeyForSlot:(unsigned int)arg0;
- (unsigned int)foreignEntityKeyForSlot:(unsigned int)arg0;
- (unsigned int)foreignOrderKeyForSlot:(unsigned int)arg0;
- (id)attributeValueForSlot:(unsigned int)arg0;
- (struct __CFBitVector *)newCalculatedDeltaMaskFrom:(NSObject *)arg0;
- (void)setOptLock:(long long)arg0;
- (unsigned int)_versionNumber;
- (id *)knownKeyValuesPointer;
- (NSObject *)_snapshot_;
- (NSSQLRow *)initWithSQLEntity:(NSObject *)arg0 objectID:(struct _NSScalarObjectID *)arg1;
- (void)setForeignEntityKeySlot:(unsigned int)arg0 entityKey:(unsigned int)arg1;
- (void)setForeignKeySlot:(unsigned int)arg0 int64:(long long)arg1;
- (void)setForeignOrderKeySlot:(unsigned int)arg0 orderKey:(unsigned int)arg1;
- (NSSQLRow *)initWithSQLEntity:(NSObject *)arg0 ownedObjectID:(struct _NSScalarObjectID *)arg1 andTimestamp:(double)arg2;
- (void)_validateToOnes;
- (struct _NSScalarObjectID *)newObjectIDForToOne:(id)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NSSQLRow *)copy;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (long long)version;
- (struct _NSScalarObjectID *)objectID;
- (void)setObjectID:(struct _NSScalarObjectID *)arg0;

@end
