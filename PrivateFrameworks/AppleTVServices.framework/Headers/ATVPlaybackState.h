/* Runtime dump - ATVPlaybackState
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPlaybackState : NSObject
{
    NSString * _name;
}

@property (retain, nonatomic) NSString * name;

+ (char)paused;
+ (char)stopped;
+ (char)playing;
+ (char)loading;
+ (char)scrubbing;

- (ATVPlaybackState *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (ATVPlaybackState *)initWithName:(NSString *)arg0;

@end
