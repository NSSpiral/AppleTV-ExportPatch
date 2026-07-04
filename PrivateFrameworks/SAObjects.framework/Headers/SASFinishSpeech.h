/* Runtime dump - SASFinishSpeech
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * endpoint;
@property (copy, nonatomic) NSArray * orderedContext;
@property (nonatomic) int packetCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASFinishSpeech *)finishSpeech;
+ (NSDictionary *)finishSpeechWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)endpoint;
- (NSString *)encodedClassName;
- (void)setEndpoint:(NSString *)arg0;
- (NSArray *)orderedContext;
- (void)setOrderedContext:(NSArray *)arg0;
- (int)packetCount;
- (void)setPacketCount:(int)arg0;

@end
