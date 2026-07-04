/* Runtime dump - MPMediaLibraryArtworkRequest
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtworkRequest : NSObject
{
    unsigned int _mediaType;
    char _hasRetrievedTokens;
    ML3MusicLibrary * _library;
    int _artworkType;
    int _entityType;
    MPMediaLibraryArtwork * _libraryArtwork;
    NSString * _availableArtworkToken;
    NSString * _fetchableArtworkToken;
    NSNumber * _fetchableArtworkSource;
    unsigned long long _libraryID;
    double _retrievalTime;
}

@property (readonly, nonatomic) ML3MusicLibrary * library;
@property (readonly, nonatomic) int artworkType;
@property (readonly, nonatomic) unsigned long long libraryID;
@property (readonly, nonatomic) int entityType;
@property (retain, nonatomic) MPMediaLibraryArtwork * libraryArtwork;
@property (nonatomic) double retrievalTime;
@property (readonly, nonatomic) unsigned int mediaType;
@property (copy, nonatomic) NSString * availableArtworkToken;
@property (copy, nonatomic) NSString * fetchableArtworkToken;
@property (copy, nonatomic) NSNumber * fetchableArtworkSource;

- (MPMediaLibraryArtworkRequest *)initWithLibrary:(ML3MusicLibrary *)arg0 identifier:(unsigned long long)arg1 entityType:(int)arg2 artworkType:(int)arg3;
- (void)setAvailableArtworkToken:(NSString *)arg0;
- (void)setFetchableArtworkToken:(NSString *)arg0;
- (void)setFetchableArtworkSource:(NSNumber *)arg0;
- (MPMediaLibraryArtworkRequest *)initWithML3Library:(NSObject *)arg0 identifier:(unsigned long long)arg1 entityType:(int)arg2 artworkType:(int)arg3;
- (void)_updateTokens;
- (unsigned long long)libraryID;
- (NSNumber *)fetchableArtworkSource;
- (MPMediaLibraryArtwork *)libraryArtwork;
- (void)setLibraryArtwork:(MPMediaLibraryArtwork *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (int)entityType;
- (ML3MusicLibrary *)library;
- (NSString *)availableArtworkToken;
- (NSString *)fetchableArtworkToken;
- (double)retrievalTime;
- (void)setRetrievalTime:(double)arg0;
- (int)artworkType;
- (unsigned int)mediaType;

@end
