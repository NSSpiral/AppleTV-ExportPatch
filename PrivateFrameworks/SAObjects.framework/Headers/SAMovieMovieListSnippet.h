/* Runtime dump - SAMovieMovieListSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * movies;
@property (nonatomic) char shouldShowRottenTomatoesRating;

+ (SAMovieMovieListSnippet *)movieListSnippet;
+ (NSDictionary *)movieListSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)movies;
- (void)setMovies:(NSArray *)arg0;
- (char)shouldShowRottenTomatoesRating;
- (void)setShouldShowRottenTomatoesRating:(char)arg0;

@end
