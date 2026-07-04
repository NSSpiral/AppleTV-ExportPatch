/* Runtime dump - SAGKLinkedAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * descriptionText;
@property (copy, nonatomic) NSString * displayLink;
@property (copy, nonatomic) NSURL * link;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;
@property (copy, nonatomic) NSString * query;
@property (copy, nonatomic) NSURL * searchUri;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAGKLinkedAnswer *)linkedAnswer;
+ (NSDictionary *)linkedAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)query;
- (void)setDisplayLink:(NSString *)arg0;
- (NSString *)displayLink;
- (void)setQuery:(NSString *)arg0;
- (void)setLink:(NSURL *)arg0;
- (NSURL *)link;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (NSURL *)searchUri;
- (void)setSearchUri:(NSURL *)arg0;

@end
