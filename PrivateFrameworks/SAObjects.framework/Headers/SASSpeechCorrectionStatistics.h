/* Runtime dump - SASSpeechCorrectionStatistics
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) int alternativeSelectCount;
@property (nonatomic) int characterChangeCount;
@property (copy, nonatomic) NSString * correctionSource;
@property (copy, nonatomic) NSString * correctionText;
@property (copy, nonatomic) NSString * interactionId;
@property (copy, nonatomic) NSString * sessionId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)speechCorrectionStatistics;
+ (NSDictionary *)speechCorrectionStatisticsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)sessionId;
- (void)setSessionId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)interactionId;
- (void)setInteractionId:(NSString *)arg0;
- (int)alternativeSelectCount;
- (void)setAlternativeSelectCount:(int)arg0;
- (int)characterChangeCount;
- (void)setCharacterChangeCount:(int)arg0;
- (NSString *)correctionSource;
- (void)setCorrectionSource:(NSString *)arg0;
- (NSString *)correctionText;
- (void)setCorrectionText:(NSString *)arg0;

@end
