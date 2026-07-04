/* Runtime dump - SAMPAddMediaEntityToAcousticIdHistory
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * adamId;
@property (copy, nonatomic) NSString * affiliateId;

+ (NSArray *)addMediaEntityToAcousticIdHistory;
+ (NSDictionary *)addMediaEntityToAcousticIdHistoryWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)adamId;
- (void)setAdamId:(NSString *)arg0;
- (NSString *)affiliateId;
- (void)setAffiliateId:(NSString *)arg0;

@end
