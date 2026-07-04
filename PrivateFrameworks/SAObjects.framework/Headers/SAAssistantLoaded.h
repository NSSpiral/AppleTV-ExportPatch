/* Runtime dump - SAAssistantLoaded
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * dataAnchor;
@property (copy, nonatomic) NSNumber * requestSync;
@property (copy, nonatomic) NSArray * syncAnchors;
@property (copy, nonatomic) NSString * version;

+ (SAAssistantLoaded *)assistantLoaded;
+ (NSDictionary *)assistantLoadedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setVersion:(NSString *)arg0;
- (NSString *)version;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)dataAnchor;
- (void)setDataAnchor:(NSString *)arg0;
- (NSNumber *)requestSync;
- (void)setRequestSync:(NSNumber *)arg0;
- (NSArray *)syncAnchors;
- (void)setSyncAnchors:(NSArray *)arg0;

@end
