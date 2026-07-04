/* Runtime dump - MPMediaLibraryArtwork
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtwork : NSObject
{
    NSArray * _validSizes;
    MPMediaLibraryArtworkRequest * _artworkRequest;
    ML3Artwork * _artwork;
}

@property (readonly, nonatomic) NSArray * validSizes;
@property (readonly, copy, nonatomic) NSURL * originalFileURL;
@property (copy, nonatomic) NSDictionary * effectsMetadata;
@property (weak, nonatomic) MPMediaLibraryArtworkRequest * artworkRequest;
@property (retain, nonatomic) ML3Artwork * artwork;

+ (NSURLRequest *)availableArtworkWithRequest:(NSURLRequest *)arg0;
+ (char)artworkExistsForRequest:(NSURLRequest *)arg0;
+ (char)needsToFetchArtworkForRequest:(NSURLRequest *)arg0;
+ (void)fetchArtworkForRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
+ (void)cancelFetchingArtworkForRequest:(NSURLRequest *)arg0;

- (void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg0;
- (MPMediaLibraryArtworkRequest *)artworkRequest;
- (void)setArtwork:(ML3Artwork *)arg0;
- (NSObject *)imageFileURLForSize:(struct CGSize)arg0;
- (NSArray *)validSizes;
- (NSDictionary *)effectsMetadata;
- (void)setEffectsMetadata:(NSDictionary *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_destruct;
- (NSURL *)originalFileURL;
- (ML3Artwork *)artwork;

@end
