/* Runtime dump - AVItem
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItem : NSObject
{
    struct AVItemPrivate * _priv;
}

+ (AVItem *)avItem;
+ (NSString *)avItemWithPath:(NSString *)arg0 error:(id *)arg1;

- (void)dealloc;
- (AVItem *)init;
- (double)duration;
- (NSURL *)url;
- (NSString *)path;
- (char)setAttribute:(char *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (AVItem *)initWithPath:(NSString *)arg0 error:(id *)arg1;
- (struct CGSize)naturalSize;
- (char)setPath:(NSString *)arg0 error:(id *)arg1;
- (void)stopDownload;
- (NSArray *)formatDetailsForTracks;
- (id)nextThumbnailTimesStartingAt:(double)arg0 minimumInterval:(double)arg1 forwards:(char)arg2 maxCount:(int)arg3;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg0 toEndTime:(double)arg1 maxCount:(int)arg2;
- (NSString *)urlFromPath:(NSString *)arg0;
- (int)_instantiateItem;
- (void)setEQPreset:(int)arg0;
- (UIImage *)chapterImageForImageID:(int)arg0;
- (void *)downloadThread;
- (long)beginDownloading;
- (float)downloadProgress;
- (void)cancelDownload;
- (long)downloadStatus;
- (int)eqPreset;
- (NSString *)attributeForKey:(NSString *)arg0;
- (AVItem *)initWithError:(id *)arg0;
- (float)volume;
- (void)setVolume:(float)arg0;
- (id)accessLog;
- (MPMovieErrorLog *)errorLog;

@end
