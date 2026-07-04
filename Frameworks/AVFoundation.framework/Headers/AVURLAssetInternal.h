/* Runtime dump - AVURLAssetInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAssetInternal : NSObject
{
    AVAssetInspectorLoader * loader;
    NSURL * URL;
    NSArray * tracks;
    AVAssetResourceLoader * resourceLoader;
    long makeOneResourceLoaderOnly;
    NSObject<OS_dispatch_queue> * tracksAccessQueue;
    AVAssetCache * assetCache;
    char shouldMatchDataInCacheByURLPathComponentOnly;
    char shouldMatchDataInCacheByURLWithoutQueryComponent;
    char shouldOptimizeAccessForLinearMoviePlayback;
    NSURL * downloadDestinationURL;
    unsigned int referenceRestrictions;
}

@end
