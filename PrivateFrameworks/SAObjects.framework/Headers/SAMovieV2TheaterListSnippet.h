/* Runtime dump - SAMovieV2TheaterListSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2TheaterListSnippet : SAUISnippet

@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSArray * theaterListCells;
@property (copy, nonatomic) NSString * title;

+ (SAMovieV2TheaterListSnippet *)theaterListSnippet;
+ (NSDictionary *)theaterListSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)theaterListCells;
- (void)setTheaterListCells:(NSArray *)arg0;

@end
