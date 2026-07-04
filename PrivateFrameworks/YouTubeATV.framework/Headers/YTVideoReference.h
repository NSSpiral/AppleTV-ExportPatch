/* Runtime dump - YTVideoReference
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTVideoReference : NSObject
{
    NSURL * _contentURL;
    unsigned int _duration;
    int _profile;
}

- (NSURL *)contentURL;
- (NSDictionary *)archiveDictionary;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)duration;
- (int)profile;
- (YTVideoReference *)initFromArchiveDictionary:(NSDictionary *)arg0;
- (YTVideoReference *)initWithContentURL:(NSURL *)arg0 duration:(unsigned int)arg1 profile:(int)arg2;

@end
