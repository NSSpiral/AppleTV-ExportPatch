/* Runtime dump - SASiriSupport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASiriSupport : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * authToken;
@property (copy, nonatomic) NSArray * endpoints;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASiriSupport *)siriSupport;
+ (NSDictionary *)siriSupportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setAuthToken:(NSString *)arg0;
- (NSString *)authToken;
- (NSString *)encodedClassName;
- (NSArray *)endpoints;
- (void)setEndpoints:(NSArray *)arg0;

@end
