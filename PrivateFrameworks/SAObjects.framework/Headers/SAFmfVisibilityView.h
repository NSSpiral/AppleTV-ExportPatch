/* Runtime dump - SAFmfVisibilityView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfVisibilityView : SAUISnippet

@property (copy, nonatomic) NSURL * searchContext;
@property (nonatomic) char visible;

+ (NSObject *)visibilityView;
+ (NSDictionary *)visibilityViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setVisible:(char)arg0;
- (char)visible;
- (void)setSearchContext:(NSURL *)arg0;
- (NSURL *)searchContext;
- (NSString *)encodedClassName;

@end
