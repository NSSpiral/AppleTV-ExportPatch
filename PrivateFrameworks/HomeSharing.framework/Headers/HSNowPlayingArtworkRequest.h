/* Runtime dump - HSNowPlayingArtworkRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSNowPlayingArtworkRequest : HSRequest
{
    unsigned int _interfaceID;
    unsigned int _playQueueIndex;
    struct CGSize _maximumSize;
}

@property (readonly, nonatomic) unsigned int interfaceID;
@property (readonly, nonatomic) struct CGSize maximumSize;
@property (readonly, nonatomic) unsigned int playQueueIndex;

- (struct CGSize)maximumSize;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (HSNowPlayingArtworkRequest *)initWithInterfaceID:(unsigned int)arg0 maximumSize:(struct CGSize)arg1 playQueueIndex:(unsigned int)arg2;
- (unsigned int)interfaceID;
- (unsigned int)playQueueIndex;

@end
