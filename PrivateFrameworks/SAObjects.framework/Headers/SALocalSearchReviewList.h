/* Runtime dump - SALocalSearchReviewList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * providerId;
@property (copy, nonatomic) NSString * providerId2;
@property (retain, nonatomic) SALocalSearchRating * rating;
@property (copy, nonatomic) NSArray * selectReviews;
@property (copy, nonatomic) NSNumber * totalReviewCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchReviewList *)reviewList;
+ (NSDictionary *)reviewListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SALocalSearchRating *)rating;
- (void)setRating:(SALocalSearchRating *)arg0;
- (void)setProviderId:(NSURL *)arg0;
- (NSURL *)providerId;
- (NSString *)encodedClassName;
- (NSString *)providerId2;
- (void)setProviderId2:(NSString *)arg0;
- (NSArray *)selectReviews;
- (void)setSelectReviews:(NSArray *)arg0;
- (NSNumber *)totalReviewCount;
- (void)setTotalReviewCount:(NSNumber *)arg0;

@end
