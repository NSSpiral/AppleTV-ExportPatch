/* Runtime dump - AVItemErrorLogEvent
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemErrorLogEvent : NSObject <NSCopying>
{
    AVItemErrorLogEventInternal * _playerItemErrorLogEvent;
}

@property (readonly, nonatomic) NSDate * date;
@property (readonly, nonatomic) NSString * URI;
@property (readonly, nonatomic) NSString * serverAddress;
@property (readonly, nonatomic) NSString * playbackSessionID;
@property (readonly, nonatomic) int errorStatusCode;
@property (readonly, nonatomic) NSString * errorDomain;
@property (readonly, nonatomic) NSString * errorComment;

- (NSString *)URI;
- (NSString *)serverAddress;
- (NSString *)playbackSessionID;
- (int)errorStatusCode;
- (NSString *)errorComment;
- (void)dealloc;
- (AVItemErrorLogEvent *)init;
- (AVItemErrorLogEvent *)initWithDictionary:(NSDictionary *)arg0;
- (NSDate *)date;
- (AVItemErrorLogEvent *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)errorDomain;
- (void)finalize;

@end
