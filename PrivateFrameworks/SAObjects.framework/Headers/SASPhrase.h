/* Runtime dump - SASPhrase
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASPhrase : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * interpretations;
@property (nonatomic) char lowConfidence;
@property (nonatomic) char speechRepairApplied;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)phrase;
+ (NSDictionary *)phraseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (id)af_speechInterpretations;
- (NSString *)groupIdentifier;
- (NSArray *)interpretations;
- (NSString *)encodedClassName;
- (void)setInterpretations:(NSArray *)arg0;
- (char)lowConfidence;
- (void)setLowConfidence:(char)arg0;
- (char)speechRepairApplied;
- (void)setSpeechRepairApplied:(char)arg0;

@end
