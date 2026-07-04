/* Runtime dump - ML3Artwork
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Artwork : NSObject
{
    int _artworkType;
    int _sourceType;
    NSDictionary * _interestDictionary;
    ML3MusicLibrary * _musicLibrary;
    NSString * _artworkToken;
    NSString * _relativePath;
    NSURL * _originalFileURL;
}

@property (readonly, weak, nonatomic) ML3MusicLibrary * musicLibrary;
@property (readonly, nonatomic) NSString * artworkToken;
@property (readonly, nonatomic) int artworkType;
@property (readonly, nonatomic) int sourceType;
@property (readonly, nonatomic) NSString * relativePath;
@property (retain, nonatomic) NSDictionary * interestDictionary;
@property (readonly, nonatomic) NSURL * originalFileURL;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)sourceType;
- (void).cxx_destruct;
- (ML3Artwork *)initWithToken:(NSString *)arg0 artworkType:(int)arg1 musicLibrary:(ML3MusicLibrary *)arg2;
- (NSURL *)originalFileURL;
- (ML3MusicLibrary *)musicLibrary;
- (ML3Artwork *)initWithToken:(NSString *)arg0 relativePath:(NSString *)arg1 artworkType:(int)arg2 musicLibrary:(ML3MusicLibrary *)arg3;
- (NSString *)relativePath;
- (void)_faultInProperties;
- (NSDictionary *)_interestDataFromInterestDictionary:(NSDictionary *)arg0;
- (NSString *)artworkToken;
- (NSData *)_interestDictionaryFromInterestData:(NSData *)arg0;
- (NSObject *)fileURLForSize:(struct CGSize)arg0;
- (int)artworkType;
- (NSDictionary *)interestDictionary;
- (void)setInterestDictionary:(NSDictionary *)arg0;

@end
