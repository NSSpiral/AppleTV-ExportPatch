/* Runtime dump - SAEmail
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmail : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * emailAddress;
@property (copy, nonatomic) NSNumber * favoriteFacetime;
@property (copy, nonatomic) NSNumber * favoriteFacetimeAudio;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSNumber * pseudo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAEmail *)email;
+ (NSDictionary *)emailWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSNumber *)favoriteFacetime;
- (void)setFavoriteFacetime:(NSNumber *)arg0;
- (NSNumber *)favoriteFacetimeAudio;
- (void)setFavoriteFacetimeAudio:(NSNumber *)arg0;
- (NSNumber *)pseudo;
- (void)setPseudo:(NSNumber *)arg0;

@end
