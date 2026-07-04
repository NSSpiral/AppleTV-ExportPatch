/* Runtime dump - MPCloudControllerItemIDList
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudControllerItemIDList : NSObject
{
    HSCloudItemIDList * _cloudItemIDList;
}

- (NSArray *)HSCloudItemIDList;
- (void)addCloudItemID:(unsigned long long)arg0 idType:(int)arg1;
- (MPCloudControllerItemIDList *)init;
- (void).cxx_destruct;

@end
