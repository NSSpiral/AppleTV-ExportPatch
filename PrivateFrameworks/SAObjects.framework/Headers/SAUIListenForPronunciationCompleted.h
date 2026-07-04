/* Runtime dump - SAUIListenForPronunciationCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSNumber * errorCode;
@property (copy, nonatomic) NSString * interactionId;
@property (retain, nonatomic) SASPronunciationData * pronunciationData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAUIListenForPronunciationCompleted *)listenForPronunciationCompleted;
+ (NSDictionary *)listenForPronunciationCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setErrorCode:(NSNumber *)arg0;
- (NSNumber *)errorCode;
- (NSString *)encodedClassName;
- (SASPronunciationData *)pronunciationData;
- (NSString *)interactionId;
- (void)setInteractionId:(NSString *)arg0;
- (void)setPronunciationData:(SASPronunciationData *)arg0;

@end
