/* Runtime dump - NSSQLColumn
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLColumn : NSSQLProperty
{
    NSString * _columnName;
    int _sqlType;
    unsigned int _precision;
    int _scale;
    unsigned int _fetchIndex;
    unsigned int _slot;
    unsigned int _allowAliasing;
}

- (NSSQLColumn *)initWithColumnName:(NSString *)arg0 sqlType:(unsigned int)arg1;
- (void)setAllowAliasing:(char)arg0;
- (char)allowAliasing;
- (unsigned int)sqlType;
- (unsigned int)slot;
- (NSSQLColumn *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (void)_setSQLType:(unsigned int)arg0;
- (NSSQLColumn *)initForReadOnlyFetching;
- (void)_setColumnName:(NSString *)arg0;
- (void)copyValuesForReadOnlyFetch:(id)arg0;
- (unsigned int)precision;
- (void)setPrecision:(unsigned int)arg0;
- (unsigned int)roughSizeEstimate;
- (unsigned int)fetchIndex;
- (void)_setFetchIndex:(unsigned int)arg0;
- (void)_setSlotIfDefault:(unsigned int)arg0;
- (id)cloneForReadOnlyFetching;
- (void)dealloc;
- (NSString *)description;
- (int)scale;
- (void)setScale:(int)arg0;
- (NSString *)columnName;

@end
