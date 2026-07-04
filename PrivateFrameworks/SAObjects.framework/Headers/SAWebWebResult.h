/* Runtime dump - SAWebWebResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebWebResult : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * descriptionText;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSURL * url;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)webResult;
+ (NSDictionary *)webResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSURL *)url;
- (NSString *)title;
- (void)setUrl:(NSURL *)arg0;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (NSString *)encodedClassName;

@end
