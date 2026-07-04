/* Runtime dump - SALocalSearchRating
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRating : AceObject <SAAceSerializable>

@property (nonatomic) int count;
@property (nonatomic) double maxValue;
@property (copy, nonatomic) NSString * providerId;
@property (nonatomic) double value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSNumber *)rating;
+ (NSDictionary *)ratingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)count;
- (double)value;
- (void)setValue:(double)arg0;
- (void)setCount:(int)arg0;
- (void)setMaxValue:(double)arg0;
- (double)maxValue;
- (void)setProviderId:(NSString *)arg0;
- (NSString *)providerId;
- (NSString *)encodedClassName;

@end
