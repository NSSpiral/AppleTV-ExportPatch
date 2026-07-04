/* Runtime dump - ATVPodcastGUID
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPodcastGUID : NSObject
{
    NSString * _guid;
    NSString * _episodeURL;
}

@property (readonly, nonatomic) NSString * stringValue;

- (ATVPodcastGUID *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)stringValue;
- (void).cxx_destruct;
- (ATVPodcastGUID *)initWithGUID:(NSString *)arg0 episodeURL:(NSString *)arg1;

@end
