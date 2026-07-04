/* Runtime dump - MRImageInfo
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRImageInfo : NSObject
{
    NSString * _imageBufferKey;
    NSRecursiveLock * _lock;
    unsigned int _retainCount;
    NSDate * _modDate;
    MRImage * _image;
    NSMutableDictionary * _options;
    MRGIFMoviePlayer * _gifMoviePlayer;
    NSMutableDictionary * _imagesForRemoteKeys;
    char _isMovie;
}

@property (readonly) NSString * imageBufferKey;
@property unsigned int retainCount;
@property (retain) NSDate * modDate;
@property (retain) MRImage * image;
@property (retain) NSMutableDictionary * options;
@property (retain) MRGIFMoviePlayer * gifMoviePlayer;
@property (retain) NSMutableDictionary * imagesForRemoteKeys;
@property char isMovie;

- (void)dealloc;
- (void)setImage:(MRImage *)arg0;
- (unsigned int)retainCount;
- (void)lock;
- (void)unlock;
- (MRImage *)image;
- (void)setOptions:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)options;
- (void)cleanup;
- (NSString *)imageBufferKey;
- (MRImageInfo *)initWithImageBufferKey:(NSString *)arg0;
- (void)setRetainCount:(unsigned int)arg0;
- (NSDate *)modDate;
- (void)setModDate:(NSDate *)arg0;
- (char)isMovie;
- (void)setIsMovie:(char)arg0;
- (MRGIFMoviePlayer *)gifMoviePlayer;
- (void)setGifMoviePlayer:(MRGIFMoviePlayer *)arg0;
- (NSMutableDictionary *)imagesForRemoteKeys;
- (void)setImagesForRemoteKeys:(NSMutableDictionary *)arg0;

@end
