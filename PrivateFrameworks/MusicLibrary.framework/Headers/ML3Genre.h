/* Runtime dump - ML3Genre
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Genre : ML3Collection

+ (NSObject *)propertyForMPMediaEntityProperty:(NSObject *)arg0;
+ (void)initialize;
+ (int)revisionTrackingCode;
+ (NSObject *)joinClausesForProperty:(NSString *)arg0;
+ (ML3DatabaseTable *)databaseTable;
+ (NSDictionary *)allProperties;
+ (char)propertyIsCountProperty:(NSObject *)arg0;
+ (NSObject *)countingQueryForBaseQuery:(NSObject *)arg0 countProperty:(NSObject *)arg1 forIdentifier:(long long)arg2;
+ (NSDictionary *)predisambiguatedProperties;
+ (ML3Genre *)defaultOrderingTerms;
+ (NSObject *)foreignPropertyForProperty:(NSString *)arg0 entityClass:(Class)arg1;
+ (NSString *)propertiesForGroupingKey;
+ (NSObject *)trackForeignPersistentID;
+ (NSDictionary *)protocolItemWithProperties:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1;

- (void)updateTrackValues:(NSArray *)arg0;
- (NSString *)multiverseIdentifier;
- (NSObject *)protocolItem;

@end
