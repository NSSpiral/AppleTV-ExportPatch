/* Runtime dump - SAMovieReviewsSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieReviewsSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie * movie;

+ (SAMovieReviewsSnippet *)reviewsSnippet;
+ (NSDictionary *)reviewsSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setMovie:(SAMovieMovie *)arg0;
- (SAMovieMovie *)movie;
- (NSString *)encodedClassName;

@end
