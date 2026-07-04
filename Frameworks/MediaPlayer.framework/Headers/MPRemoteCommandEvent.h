/* Runtime dump - MPRemoteCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandEvent : NSObject
{
    NSDictionary * _mediaRemoteOptions;
    NSString * _contextID;
    MPRemoteCommand * _command;
    double _timestamp;
}

@property (readonly, nonatomic) MPRemoteCommand * command;
@property (readonly, nonatomic) double timestamp;

+ (NSObject *)eventWithCommand:(MPRemoteCommand *)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;

- (MPRemoteCommandEvent *)initWithCommand:(MPRemoteCommand *)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (NSDictionary *)mediaRemoteOptions;
- (MPRemoteCommand *)command;
- (MPRemoteCommandEvent *)init;
- (double)timestamp;
- (NSString *)contextID;
- (void).cxx_destruct;

@end
