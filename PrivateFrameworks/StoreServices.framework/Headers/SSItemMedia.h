/* Runtime dump - SSItemMedia
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemMedia : NSObject
{
    int _duration;
    int _fullDuration;
    long long _mediaFileSize;
    NSString * _mediaKind;
    char _protected;
    NSURL * _url;
}

@property (readonly, nonatomic) int durationInMilliseconds;
@property (copy, nonatomic) NSString * mediaKind;
@property (readonly, nonatomic) char protectedMedia;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) int fullDurationInMilliseconds;
@property (readonly, nonatomic) long long mediaFileSize;

- (NSString *)mediaKind;
- (void)setMediaKind:(NSString *)arg0;
- (void)dealloc;
- (SSItemMedia *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURL *)URL;
- (int)durationInMilliseconds;
- (int)fullDurationInMilliseconds;
- (SSItemMedia *)initWithStoreOfferDictionary:(NSDictionary *)arg0;
- (long long)mediaFileSize;
- (char)isProtectedMedia;

@end
