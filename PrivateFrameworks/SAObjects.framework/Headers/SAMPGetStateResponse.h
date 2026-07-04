/* Runtime dump - SAMPGetStateResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (retain, nonatomic) SAMPMediaItem * listeningToItem;
@property (copy, nonatomic) NSNumber * listeningToMusicApplication;
@property (copy, nonatomic) NSString * source;
@property (nonatomic) int state;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSURLResponse *)getStateResponse;
+ (NSDictionary *)getStateResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)source;
- (void)setSource:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAMPMediaItem *)listeningToItem;
- (void)setListeningToItem:(SAMPMediaItem *)arg0;
- (NSNumber *)listeningToMusicApplication;
- (void)setListeningToMusicApplication:(NSNumber *)arg0;

@end
