/* Runtime dump - MPStoreArtworkRequestToken
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreArtworkRequestToken : NSObject <NSCopying>
{
    char _shouldIgnoreImage;
    NSURL * _artworkURL;
    NSArray * _lookupItemArtworks;
    NSString * _cropStyle;
    NSString * _sourceEditorialArtworkKind;
}

@property (copy, nonatomic) NSURL * artworkURL;
@property (copy, nonatomic) NSArray * lookupItemArtworks;
@property (copy, nonatomic) NSString * cropStyle;
@property (nonatomic) char shouldIgnoreImage;
@property (copy, nonatomic) NSString * sourceEditorialArtworkKind;

- (void)setArtworkURL:(NSURL *)arg0;
- (void)setLookupItemArtworks:(NSArray *)arg0;
- (void)setSourceEditorialArtworkKind:(NSString *)arg0;
- (char)shouldIgnoreImage;
- (NSArray *)lookupItemArtworks;
- (NSURL *)artworkURL;
- (NSString *)cropStyle;
- (void)setCropStyle:(NSString *)arg0;
- (void)setShouldIgnoreImage:(char)arg0;
- (NSString *)sourceEditorialArtworkKind;
- (MPStoreArtworkRequestToken *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
