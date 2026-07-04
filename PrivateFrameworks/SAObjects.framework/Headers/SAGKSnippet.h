/* Runtime dump - SAGKSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut * appPunchOut;
@property (copy, nonatomic) NSArray * pods;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * title;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)appPunchOut;
- (void)setAppPunchOut:(SAUIAppPunchOut *)arg0;
- (NSArray *)pods;
- (void)setPods:(NSArray *)arg0;

@end
