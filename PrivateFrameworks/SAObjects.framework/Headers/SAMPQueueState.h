/* Runtime dump - SAMPQueueState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (copy, nonatomic) NSString * applicationIdentifier;
@property (retain, nonatomic) SAMPMediaItem * listeningToItem;
@property (retain, nonatomic) SANPCommandInfo * nowPlayingCommandInfo;
@property (retain, nonatomic) SAMPNowPlayingQueuePosition * playbackQueuePosition;
@property (copy, nonatomic) NSNumber * playbackRate;
@property (copy, nonatomic) NSString * source;
@property (nonatomic) int state;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)queueState;
+ (NSDictionary *)queueStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)playbackRate;
- (void)setPlaybackRate:(NSNumber *)arg0;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)applicationIdentifier;
- (NSString *)source;
- (void)setSource:(NSString *)arg0;
- (void)setApplicationIdentifier:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAMPMediaItem *)listeningToItem;
- (void)setListeningToItem:(SAMPMediaItem *)arg0;
- (SANPCommandInfo *)nowPlayingCommandInfo;
- (void)setNowPlayingCommandInfo:(SANPCommandInfo *)arg0;
- (SAMPNowPlayingQueuePosition *)playbackQueuePosition;
- (void)setPlaybackQueuePosition:(SAMPNowPlayingQueuePosition *)arg0;

@end
