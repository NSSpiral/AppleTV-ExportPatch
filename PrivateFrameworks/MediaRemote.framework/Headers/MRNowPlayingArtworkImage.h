/* Runtime dump - MRNowPlayingArtworkImage
 * Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData * _imageData;
    NSString * _mimeType;
}

@property (readonly, copy, nonatomic) NSData * imageData;
@property (readonly, copy, nonatomic) NSString * mimeType;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)type;
- (NSString *)mimeType;
- (MRNowPlayingArtworkImage *)initWithImageData:(NSData *)arg0 mimeType:(NSString *)arg1;
- (char)hasArtworkData;
- (void)bindToXPCDictionary:(NSDictionary *)arg0;
- (NSData *)copyImageData;
- (NSData *)imageData;

@end
