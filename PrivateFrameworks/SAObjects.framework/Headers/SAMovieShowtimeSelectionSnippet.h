/* Runtime dump - SAMovieShowtimeSelectionSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieShowtimeSelectionSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie * movie;

+ (SAMovieShowtimeSelectionSnippet *)showtimeSelectionSnippet;
+ (NSDictionary *)showtimeSelectionSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setMovie:(SAMovieMovie *)arg0;
- (SAMovieMovie *)movie;
- (NSString *)encodedClassName;

@end
