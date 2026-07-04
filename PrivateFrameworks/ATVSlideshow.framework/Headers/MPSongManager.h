/* Runtime dump - MPSongManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPSongManager : NSObject
{
    NSMutableDictionary * mSongDescriptions;
    NSMutableDictionary * mSongBeats;
    NSMutableDictionary * mSongMetaData;
    NSString * mSongCacheFilePath;
    NSRecursiveLock * mSongLock;
    void * mDaFunc;
}

+ (void)releaseSharedManager;
+ (MPSongManager *)sharedManager;

- (void)dealloc;
- (MPSongManager *)init;
- (NSString *)cachedBeatsForSongAtPath:(NSString *)arg0;
- (NSString *)beatsForSongAtPath:(NSString *)arg0 progressCallback:(/* block */ id *)arg1 context:(void *)arg2;
- (char)hasBeatsForSongAtPath:(NSString *)arg0;
- (NSString *)songMetadataForPath:(NSString *)arg0;
- (void)storeBeats:(id)arg0 forPath:(NSString *)arg1;
- (MPSongManager *)initWithPaths:(NSArray *)arg0;

@end
