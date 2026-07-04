/* Runtime dump - SAPhone
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhone : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * favoriteFacetime;
@property (copy, nonatomic) NSNumber * favoriteFacetimeAudio;
@property (copy, nonatomic) NSNumber * favoriteVoice;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * number;
@property (copy, nonatomic) NSNumber * pseudo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAPhone *)phone;
+ (NSDictionary *)phoneWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setNumber:(NSString *)arg0;
- (NSString *)number;
- (NSString *)encodedClassName;
- (NSNumber *)favoriteFacetime;
- (void)setFavoriteFacetime:(NSNumber *)arg0;
- (NSNumber *)favoriteFacetimeAudio;
- (void)setFavoriteFacetimeAudio:(NSNumber *)arg0;
- (NSNumber *)pseudo;
- (void)setPseudo:(NSNumber *)arg0;
- (NSNumber *)favoriteVoice;
- (void)setFavoriteVoice:(NSNumber *)arg0;

@end
