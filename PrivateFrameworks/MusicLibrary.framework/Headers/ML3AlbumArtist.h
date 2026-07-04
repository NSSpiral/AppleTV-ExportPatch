/* Runtime dump - ML3AlbumArtist
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AlbumArtist : ML3Collection

+ (NSObject *)propertyForMPMediaEntityProperty:(NSObject *)arg0;
+ (void)initialize;
+ (int)revisionTrackingCode;
+ (ML3DatabaseTable *)databaseTable;
+ (NSDictionary *)allProperties;
+ (char)propertyIsCountProperty:(NSObject *)arg0;
+ (NSObject *)countingQueryForBaseQuery:(NSObject *)arg0 countProperty:(NSObject *)arg1 forIdentifier:(long long)arg2;
+ (char)deleteFromLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3 usingConnection:(unsigned int)arg4;
+ (NSDictionary *)predisambiguatedProperties;
+ (ML3AlbumArtist *)defaultOrderingTerms;
+ (NSObject *)sectionPropertyForProperty:(NSString *)arg0;
+ (NSObject *)foreignPropertyForProperty:(NSString *)arg0 entityClass:(Class)arg1;
+ (NSString *)propertiesForGroupingKey;
+ (NSObject *)trackForeignPersistentID;
+ (ML3AlbumArtist *)propertiesForGroupingUniqueCollections;
+ (NSDictionary *)protocolItemWithProperties:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1;

- (void)updateTrackValues:(NSArray *)arg0;
- (void)updateRepresentativeItem:(NSObject *)arg0 inLibrary:(NSObject *)arg1;
- (NSString *)multiverseIdentifier;
- (NSObject *)protocolItem;

@end
