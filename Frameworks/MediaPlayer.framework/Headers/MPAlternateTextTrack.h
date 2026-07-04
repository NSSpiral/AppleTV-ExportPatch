/* Runtime dump - MPAlternateTextTrack
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTextTrack : MPAlternateTrack
{
    int _type;
    NSString * _name;
    NSLocale * _locale;
    int _tag;
}

@property (readonly, nonatomic) char isInBand;
@property (readonly, nonatomic) NSLocale * locale;
@property (readonly, nonatomic) int type;
@property (nonatomic) int tag;

+ (NSObject *)offTrack;
+ (NSObject *)autoTrack;

- (char)isInBand;
- (NSString *)_displayNameForName:(NSString *)arg0;
- (MPAlternateTextTrack *)initWithType:(int)arg0 name:(NSString *)arg1 locale:(NSLocale *)arg2;
- (int)compare:(NSObject *)arg0;
- (int)type;
- (int)tag;
- (void)setTag:(int)arg0;
- (NSLocale *)locale;
- (void).cxx_destruct;
- (NSString *)displayName;

@end
