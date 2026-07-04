/* Runtime dump - SASInterpretation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASInterpretation : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * tokens;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASInterpretation *)interpretation;
+ (NSDictionary *)interpretationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (id)af_speechTokens;
- (NSString *)groupIdentifier;
- (NSArray *)tokens;
- (NSString *)encodedClassName;
- (void)setTokens:(NSArray *)arg0;

@end
