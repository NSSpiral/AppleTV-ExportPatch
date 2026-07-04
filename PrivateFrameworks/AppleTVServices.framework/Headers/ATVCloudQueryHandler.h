/* Runtime dump - ATVCloudQueryHandler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudQueryHandler : NSObject <ATVCloudQueryHandler>
{
    ML3MusicLibrary * mlLibrary;
    ATVDataClient * cloudDataClient;
}

@property (retain, nonatomic) ML3MusicLibrary * mlLibrary;
@property (retain, nonatomic) ATVDataClient * cloudDataClient;

+ (NSObject *)mlPredicatePropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlQueryPropertyForATVProperty:(NSObject *)arg0;
+ (ATVCloudQueryHandler *)mlArtworkTrackForAlbumOrAlbumArtist:(id)arg0 isAlbumArtistID:(char)arg1;
+ (NSString *)_artworkIdentifierWithArtworkToken:(NSString *)arg0 andAlbumID:(NSObject *)arg1;
+ (NSObject *)mlPropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlArtworkTrackForAlbumID:(NSObject *)arg0;
+ (NSObject *)mlArtworkTrackForAlbumArtistID:(NSObject *)arg0;
+ (NSObject *)artworkIdentifierForMLTrack:(NSObject *)arg0;

- (void)dealloc;
- (ATVDataClient *)cloudDataClient;
- (void)setMlLibrary:(ML3MusicLibrary *)arg0;
- (void)setCloudDataClient:(ATVDataClient *)arg0;
- (NSObject *)predicateForFilter:(NSObject *)arg0;
- (NSObject *)predicateForCompoundFilter:(NSObject *)arg0;
- (id)predicateFromPredicates:(id)arg0 withOperator:(int)arg1;
- (int)mlComparisonForATVOperator:(int)arg0;
- (unsigned long)mlMediaTypeForATVMediaType:(NSObject *)arg0;
- (ML3MusicLibrary *)mlLibrary;
- (void)handleQuery:(NSObject *)arg0 withContext:(void *)arg1;
- (ATVCloudQueryHandler *)initWithLibrary:(ML3MusicLibrary *)arg0 cloudDataClient:(ATVDataClient *)arg1;
- (id)predicateFromATVFilters:(id)arg0 queryType:(int)arg1;
- (NSObject *)mlPropertiesForQuery:(NSObject *)arg0;

@end
