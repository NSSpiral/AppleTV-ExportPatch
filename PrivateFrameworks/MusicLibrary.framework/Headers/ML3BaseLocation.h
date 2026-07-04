/* Runtime dump - ML3BaseLocation
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3BaseLocation : ML3Entity

+ (ML3DatabaseTable *)databaseTable;
+ (char)insertionChangesLibraryContents;
+ (NSDictionary *)newWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1;

- (void)enumerateOrphanedAssetsUsingBlock:(id /* block */)arg0;

@end
