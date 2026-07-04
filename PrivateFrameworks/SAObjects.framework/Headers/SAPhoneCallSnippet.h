/* Runtime dump - SAPhoneCallSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * calls;

+ (SAPhoneCallSnippet *)callSnippet;
+ (NSDictionary *)callSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)calls;
- (void)setCalls:(NSArray *)arg0;

@end
