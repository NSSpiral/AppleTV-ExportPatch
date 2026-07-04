/* Runtime dump - SASSpeechPartialResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * tokens;

+ (NSObject *)speechPartialResult;
+ (NSDictionary *)speechPartialResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)af_correctionContext;
- (id)af_userUtteranceValue;
- (id)af_bestTextInterpretation;
- (NSString *)groupIdentifier;
- (NSArray *)tokens;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setTokens:(NSArray *)arg0;

@end
