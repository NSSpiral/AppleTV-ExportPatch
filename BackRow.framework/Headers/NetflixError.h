/* Runtime dump - NetflixError
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NetflixError : NSError

+ (NetflixError *)netflixErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1;
+ (NetflixError *)netflixInternalErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1;
+ (NetflixError *)netflixErrorWithCode:(int)arg0 extraUserInfo:(NSDictionary *)arg1 localizedDescription:(NSString *)arg2 underlyingError:(NSError *)arg3;
+ (NetflixError *)localizedMessageForNetflixInternalErrorCode:(int)arg0;
+ (NSError *)localizedDescriptionForNetflixError:(int)arg0;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 extraUserInfo:(NSDictionary *)arg2 localizedDescription:(NSString *)arg3 underlyingError:(NSError *)arg4;
+ (NetflixError *)netflixInternalErrorWithCode:(int)arg0 extraUserInfo:(NSDictionary *)arg1 underlyingError:(NSError *)arg2;
+ (NetflixError *)nrdpErrorWithCode:(int)arg0 extraUserInfo:(NSDictionary *)arg1 underlyingError:(NSError *)arg2;
+ (NetflixError *)localizedMessageForNRDPErrorCode:(int)arg0;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 underlyingError:(NSError *)arg2;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 extraUserInfo:(NSDictionary *)arg2 underlyingError:(NSError *)arg3;
+ (NetflixError *)netflixErrorWithCode:(int)arg0 extraUserInfo:(NSDictionary *)arg1 underlyingError:(NSError *)arg2;
+ (NetflixError *)nrdpErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1;

- (NetflixError *)initWithDomain:(NSString *)arg0 code:(int)arg1 localizedDescription:(NSString *)arg2 extraUserInfo:(NSDictionary *)arg3 underlyingError:(NSError *)arg4;

@end
