/* Runtime dump - SASportsNewsItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsNewsItem : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * link;
@property (copy, nonatomic) NSString * summary;
@property (copy, nonatomic) NSString * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)newsItem;
+ (NSDictionary *)newsItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setLink:(NSURL *)arg0;
- (NSURL *)link;
- (NSString *)encodedClassName;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;

@end
