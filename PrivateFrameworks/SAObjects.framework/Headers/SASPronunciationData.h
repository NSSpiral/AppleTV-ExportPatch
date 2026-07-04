/* Runtime dump - SASPronunciationData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * apgId;
@property (copy, nonatomic) NSLocale * language;
@property (copy, nonatomic) NSString * orthography;
@property (nonatomic) int tokenOffset;
@property (copy, nonatomic) NSArray * ttsPronunciations;
@property (copy, nonatomic) NSString * ttsVersion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASPronunciationData *)pronunciationData;
+ (NSDictionary *)pronunciationDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)orthography;
- (NSLocale *)language;
- (void)setLanguage:(NSLocale *)arg0;
- (NSString *)encodedClassName;
- (NSString *)apgId;
- (void)setApgId:(NSString *)arg0;
- (void)setOrthography:(NSString *)arg0;
- (int)tokenOffset;
- (void)setTokenOffset:(int)arg0;
- (NSArray *)ttsPronunciations;
- (void)setTtsPronunciations:(NSArray *)arg0;
- (NSString *)ttsVersion;
- (void)setTtsVersion:(NSString *)arg0;

@end
