/* Runtime dump - SAMovieMovieSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovieSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie * movie;
@property (nonatomic) char playTrailer;

+ (SAMovieMovieSnippet *)movieSnippet;
+ (NSDictionary *)movieSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setMovie:(SAMovieMovie *)arg0;
- (SAMovieMovie *)movie;
- (NSString *)encodedClassName;
- (char)playTrailer;
- (void)setPlayTrailer:(char)arg0;

@end
