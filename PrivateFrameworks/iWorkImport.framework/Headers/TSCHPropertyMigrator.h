/* Runtime dump - TSCHPropertyMigrator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMigrator : NSObject
{
    TSSPropertySet * mPropertiesToForce;
    TSUIntToIntDictionary * mShouldForceFlags;
    TSUIntegerKeyDictionary * mValuesToForce;
}

- (void)visitExistingSeries:(id)arg0;
- (void)migrateToSeries:(id)arg0;
- (void)dealloc;
- (TSCHPropertyMigrator *)initWithProperties:(NSDictionary *)arg0;

@end
