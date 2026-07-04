/* Runtime dump - SAMovieV2MovieContextObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieContextObject : SADomainObject

@property (copy, nonatomic) NSString * movieName;

+ (NSObject *)movieContextObject;
+ (NSDictionary *)movieContextObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)movieName;
- (void)setMovieName:(NSString *)arg0;

@end
