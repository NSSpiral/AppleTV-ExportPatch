/* Runtime dump - BRMovieTrailersProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRNetworkMediaProvider.h>
@interface BRMovieTrailersProvider : BRNetworkMediaProvider
{
    NSMutableArray * _mediaCollections;
    int _lastError;
}

+ (char)trailersAvailable;
+ (void)initialize;

- (int)errorCodeForProvider;
- (void)_loadTrailers;
- (void)_postLoadedNotification:(NSNotification *)arg0;
- (NSString *)mediaForEntityName:(NSString *)arg0;
- (void)_loadTrailersWithResolution:(id)arg0 forURL:(NSURL *)arg1;
- (char)_addMediaAsset:(NSSet *)arg0;
- (void)dealloc;
- (BRMovieTrailersProvider *)init;
- (NSSet *)mediaTypes;
- (int)load;
- (void)_networkStatusChanged:(NSNotification *)arg0;
- (int)lastError;
- (NSString *)providerID;
- (int)unload;

@end
