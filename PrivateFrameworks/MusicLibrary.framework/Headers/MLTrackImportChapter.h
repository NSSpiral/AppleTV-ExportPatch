/* Runtime dump - MLTrackImportChapter
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLTrackImportChapter : NSObject <NSCopying>
{
    NSData * _imageData;
    NSString * _imageCacheKey;
    unsigned int _startTimeInMilliseconds;
    NSString * _title;
    NSURL * _url;
    NSString * _urlTitle;
}

@property (copy, nonatomic) NSData * imageData;
@property (copy, nonatomic) NSString * imageCacheKey;
@property (nonatomic) unsigned int startTimeInMilliseconds;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSURL * URL;
@property (copy, nonatomic) NSString * URLTitle;

- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (NSString *)title;
- (MLTrackImportChapter *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (void)setURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (unsigned int)startTimeInMilliseconds;
- (NSData *)imageData;
- (NSString *)imageCacheKey;
- (NSString *)URLTitle;
- (void)normalizeProperties;
- (char)isEqualIgnoringTimesAndTitle:(NSString *)arg0;
- (void)setImageData:(NSData *)arg0;
- (void)setStartTimeInMilliseconds:(unsigned int)arg0;
- (void)setURLTitle:(NSString *)arg0;
- (void)setImageCacheKey:(NSString *)arg0;

@end
