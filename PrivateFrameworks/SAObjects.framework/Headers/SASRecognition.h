/* Runtime dump - SASRecognition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASRecognition : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * phrases;
@property (nonatomic) int sentenceConfidence;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)recognition;
+ (NSDictionary *)recognitionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (id)af_speechPhrases;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)phrases;
- (void)setPhrases:(NSArray *)arg0;
- (int)sentenceConfidence;
- (void)setSentenceConfidence:(int)arg0;

@end
