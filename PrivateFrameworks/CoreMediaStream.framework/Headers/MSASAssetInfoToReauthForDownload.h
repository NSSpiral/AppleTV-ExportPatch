/* Runtime dump - MSASAssetInfoToReauthForDownload
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetInfoToReauthForDownload : NSObject
{
    MSAsset * _asset;
    MSASAlbum * _album;
}

@property (retain, nonatomic) MSAsset * asset;
@property (retain, nonatomic) MSASAlbum * album;

- (void).cxx_destruct;
- (MSAsset *)asset;
- (void)setAsset:(MSAsset *)arg0;
- (void)setAlbum:(MSASAlbum *)arg0;
- (MSASAlbum *)album;

@end
