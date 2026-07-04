/* Runtime dump - SALocalSearchReview
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * author;
@property (copy, nonatomic) NSString * comment;
@property (copy, nonatomic) NSString * identifier;
@property (retain, nonatomic) SACalendar * lastUpdated;
@property (copy, nonatomic) NSString * publication;
@property (retain, nonatomic) SAUIAppPunchOut * reviewPunchOut;
@property (retain, nonatomic) SALocalSearchRating * reviewRating;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ISReview *)review;
+ (NSDictionary *)reviewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void)setLastUpdated:(SACalendar *)arg0;
- (void)setComment:(NSString *)arg0;
- (void)setAuthor:(NSString *)arg0;
- (NSString *)author;
- (NSString *)comment;
- (NSString *)encodedClassName;
- (NSString *)publication;
- (void)setPublication:(NSString *)arg0;
- (SAUIAppPunchOut *)reviewPunchOut;
- (void)setReviewPunchOut:(SAUIAppPunchOut *)arg0;
- (SALocalSearchRating *)reviewRating;
- (void)setReviewRating:(SALocalSearchRating *)arg0;
- (SACalendar *)lastUpdated;

@end
