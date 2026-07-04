/* Runtime dump - YTUserProfile
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTUserProfile : NSObject
{
    NSString * _username;
    int _age;
    int _maxUploadDuration;
}

@property (readonly, nonatomic) NSString * username;
@property (readonly, nonatomic) int age;
@property (readonly, nonatomic) int maxUploadDuration;

- (NSString *)username;
- (int)age;
- (YTUserProfile *)initWithUsername:(NSString *)arg0 age:(int)arg1 maxUploadDuration:(int)arg2;
- (int)maxUploadDuration;

@end
