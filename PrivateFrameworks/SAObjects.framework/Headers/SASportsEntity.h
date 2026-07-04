/* Runtime dump - SASportsEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsEntity : SADomainObject

@property (copy, nonatomic) NSURL * image;
@property (copy, nonatomic) NSURL * largeImage;
@property (retain, nonatomic) SASportsLeague * league;
@property (copy, nonatomic) NSURL * listImage;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) SAUIAppPunchOut * punchout;

+ (NSEntityDescription *)entity;
+ (NSDictionary *)entityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(NSURL *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSURL *)image;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSURL *)largeImage;
- (void)setLargeImage:(NSURL *)arg0;
- (SASportsLeague *)league;
- (void)setLeague:(SASportsLeague *)arg0;
- (NSURL *)listImage;
- (void)setListImage:(NSURL *)arg0;
- (SAUIAppPunchOut *)punchout;
- (void)setPunchout:(SAUIAppPunchOut *)arg0;

@end
