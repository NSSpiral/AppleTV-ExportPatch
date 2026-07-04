/* Runtime dump - ML3DatabaseMetadata
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseMetadata : ML3Entity

+ (void)initialize;
+ (ML3DatabaseTable *)databaseTable;
+ (NSDictionary *)allProperties;
+ (NSDictionary *)predisambiguatedProperties;
+ (ML3DatabaseMetadata *)defaultOrderingTerms;

@end
