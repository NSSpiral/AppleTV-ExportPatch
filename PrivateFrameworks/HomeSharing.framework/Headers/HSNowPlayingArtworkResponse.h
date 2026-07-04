/* Runtime dump - HSNowPlayingArtworkResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSNowPlayingArtworkResponse : HSResponse
{
    NSData * _artworkData;
    NSString * _artworkMIMEType;
}

@property (retain, nonatomic) NSData * artworkData;
@property (retain, nonatomic) NSString * artworkMIMEType;

- (void).cxx_destruct;
- (void)setArtworkMIMEType:(NSString *)arg0;
- (NSString *)artworkMIMEType;
- (NSData *)artworkData;
- (void)setArtworkData:(NSData *)arg0;

@end
