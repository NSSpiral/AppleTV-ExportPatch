/* Runtime dump - SAUISetSuggestedUtterances
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * language;
@property (copy, nonatomic) NSArray * utterances;

+ (SAUISetSuggestedUtterances *)setSuggestedUtterances;
+ (NSDictionary *)setSuggestedUtterancesWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)utterances;
- (void)setUtterances:(NSArray *)arg0;

@end
