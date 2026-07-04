/* Runtime dump - SAMovieV2MovieListSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * movieListCells;
@property (copy, nonatomic) NSString * subtitle;
@property (retain, nonatomic) SALocalSearchBusiness2 * theater;
@property (copy, nonatomic) NSString * title;

+ (SAMovieV2MovieListSnippet *)movieListSnippet;
+ (NSDictionary *)movieListSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SALocalSearchBusiness2 *)theater;
- (void)setTheater:(SALocalSearchBusiness2 *)arg0;
- (NSArray *)movieListCells;
- (void)setMovieListCells:(NSArray *)arg0;

@end
