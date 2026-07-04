/* Runtime dump - SAMovieV2ReviewListSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (copy, nonatomic) NSString * movieName;
@property (retain, nonatomic) SALocalSearchReviewList * reviewList;

+ (SAMovieV2ReviewListSnippet *)reviewListSnippet;
+ (NSDictionary *)reviewListSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)movieName;
- (void)setMovieName:(NSString *)arg0;
- (SALocalSearchReviewList *)reviewList;
- (void)setReviewList:(SALocalSearchReviewList *)arg0;

@end
