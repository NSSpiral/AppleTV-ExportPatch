/* Runtime dump - ML3ArtworkTokenSet
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ArtworkTokenSet : NSObject
{
    ML3Entity * _entity;
    int _artworkType;
    NSString * _availableArtworkToken;
    NSString * _fetchableArtworkToken;
    int _fetchableArtworkSourceType;
    NSDictionary * _artworkSourceToTokenMap;
    char _faultedInBestTokens;
    char _faultedInTokens;
    double _retrievalTime;
}

@property (nonatomic) double retrievalTime;
@property (readonly, nonatomic) NSString * availableArtworkToken;
@property (readonly, nonatomic) NSString * fetchableArtworkToken;
@property (readonly, nonatomic) int fetchableArtworkSourceType;

- (void).cxx_destruct;
- (void)_faultInBestTokens;
- (void)_faultInTokens;
- (ML3ArtworkTokenSet *)initWithEntity:(ML3Entity *)arg0 artworkType:(int)arg1;
- (NSString *)availableArtworkToken;
- (NSString *)fetchableArtworkToken;
- (int)fetchableArtworkSourceType;
- (NSObject *)artworkTokenForSource:(int)arg0;
- (double)retrievalTime;
- (void)setRetrievalTime:(double)arg0;

@end
