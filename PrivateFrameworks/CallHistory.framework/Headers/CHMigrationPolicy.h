/* Runtime dump - CHMigrationPolicy
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHMigrationPolicy : NSEntityMigrationPolicy
{
    NSMutableDictionary * mccToISOCountryCodeMap;
    NSString * lastQueriedISOCountryCode;
    NSString * currentLocale;
}

- (CHMigrationPolicy *)init;
- (void).cxx_destruct;
- (id)isoCountryCodeForMCC:(id)arg0;
- (id)isoCountryCodeIfAbsent:(id)arg0;

@end
