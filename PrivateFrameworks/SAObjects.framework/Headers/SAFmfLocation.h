/* Runtime dump - SAFmfLocation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfLocation : SALocation

@property (retain, nonatomic) NSNumber * distance;
@property (copy, nonatomic) NSString * emailAddress;
@property (retain, nonatomic) SAPersonAttribute * friend;
@property (retain, nonatomic) NSNumber * locationDate;

+ (CLLocation *)location;
+ (NSDictionary *)locationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (void)setDistance:(NSNumber *)arg0;
- (NSNumber *)distance;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAPersonAttribute *)friend;
- (void)setFriend:(SAPersonAttribute *)arg0;
- (NSNumber *)locationDate;
- (void)setLocationDate:(NSNumber *)arg0;

@end
