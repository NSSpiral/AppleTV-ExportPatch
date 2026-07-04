/* Runtime dump - SAMovieV2MovieTheater
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieTheater : SADomainObject

@property (retain, nonatomic) SALocalSearchBusiness2 * business;
@property (copy, nonatomic) NSArray * movies;

+ (SAMovieV2MovieTheater *)movieTheater;
+ (NSDictionary *)movieTheaterWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SALocalSearchBusiness2 *)business;
- (void)setBusiness:(SALocalSearchBusiness2 *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)movies;
- (void)setMovies:(NSArray *)arg0;

@end
