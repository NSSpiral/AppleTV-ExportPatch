/* Runtime dump - SAUISnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippet : SAAceView

@property (retain, nonatomic) SAUIConfirmationOptions * confirmationOptions;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUIConfirmationOptions *)confirmationOptions;
- (void)setConfirmationOptions:(SAUIConfirmationOptions *)arg0;

@end
