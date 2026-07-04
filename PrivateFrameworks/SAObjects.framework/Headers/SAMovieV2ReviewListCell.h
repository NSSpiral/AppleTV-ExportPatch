/* Runtime dump - SAMovieV2ReviewListCell
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2ReviewListCell : SADomainObject

@property (copy, nonatomic) NSString * reviewAuthor;
@property (copy, nonatomic) NSDate * reviewDate;
@property (copy, nonatomic) NSString * reviewText;

+ (NSObject *)reviewListCell;
+ (NSDictionary *)reviewListCellWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setReviewText:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSDate *)reviewDate;
- (void)setReviewDate:(NSDate *)arg0;
- (NSString *)reviewText;
- (NSString *)reviewAuthor;
- (void)setReviewAuthor:(NSString *)arg0;

@end
