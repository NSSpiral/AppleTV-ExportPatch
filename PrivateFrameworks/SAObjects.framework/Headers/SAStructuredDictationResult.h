/* Runtime dump - SAStructuredDictationResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * items;

+ (NSObject *)structuredDictationResult;
+ (NSDictionary *)structuredDictationResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
