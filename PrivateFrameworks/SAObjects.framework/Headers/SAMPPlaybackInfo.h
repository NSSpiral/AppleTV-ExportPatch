/* Runtime dump - SAMPPlaybackInfo
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>

@property (retain, nonatomic) SACalendar * lastPlayedDate;
@property (nonatomic) int playbackPositionMillis;
@property (nonatomic) int plays;
@property (nonatomic) char rememberPlaybackPosition;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)playbackInfo;
+ (NSDictionary *)playbackInfoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SACalendar *)lastPlayedDate;
- (void)setLastPlayedDate:(SACalendar *)arg0;
- (NSString *)encodedClassName;
- (int)playbackPositionMillis;
- (void)setPlaybackPositionMillis:(int)arg0;
- (int)plays;
- (void)setPlays:(int)arg0;
- (char)rememberPlaybackPosition;
- (void)setRememberPlaybackPosition:(char)arg0;

@end
