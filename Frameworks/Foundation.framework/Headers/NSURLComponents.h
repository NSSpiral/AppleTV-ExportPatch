/* Runtime dump - NSURLComponents
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLComponents : NSObject <NSCopying>

@property (readonly, copy) NSURL * URL;
@property (readonly, copy) NSString * string;
@property (copy) NSString * scheme;
@property (copy) NSString * user;
@property (copy) NSString * password;
@property (copy) NSString * host;
@property (copy) NSNumber * port;
@property (copy) NSString * path;
@property (copy) NSString * query;
@property (copy) NSString * fragment;
@property (copy) NSString * percentEncodedUser;
@property (copy) NSString * percentEncodedPassword;
@property (copy) NSString * percentEncodedHost;
@property (copy) NSString * percentEncodedPath;
@property (copy) NSString * percentEncodedQuery;
@property (copy) NSString * percentEncodedFragment;
@property (copy) NSArray * queryItems;

+ (NSURLComponents *)allocWithZone:(struct _NSZone *)arg0;
+ (NSURL *)componentsWithURL:(NSString *)arg0 resolvingAgainstBaseURL:(char)arg1;
+ (NSString *)componentsWithString:(NSString *)arg0;

- (NSString *)percentEncodedPath;
- (NSString *)percentEncodedHost;
- (NSString *)percentEncodedQuery;
- (NSString *)percentEncodedFragment;
- (NSString *)percentEncodedUser;
- (NSString *)percentEncodedPassword;
- (NSURL *)URLRelativeToURL:(NSURL *)arg0;
- (void)setPercentEncodedUser:(NSString *)arg0;
- (void)setPercentEncodedPassword:(NSString *)arg0;
- (void)setPercentEncodedHost:(NSString *)arg0;
- (void)setPercentEncodedPath:(NSString *)arg0;
- (void)setPercentEncodedFragment:(NSString *)arg0;
- (NSURLComponents *)init;
- (NSString *)scheme;
- (NSString *)query;
- (NSString *)path;
- (NSURLComponents *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (void)setQuery:(NSString *)arg0;
- (NSURLComponents *)initWithString:(NSString *)arg0;
- (NSURL *)URL;
- (NSString *)host;
- (void)setPath:(NSString *)arg0;
- (NSString *)fragment;
- (NSNumber *)port;
- (void)setScheme:(NSString *)arg0;
- (void)setFragment:(NSString *)arg0;
- (NSString *)password;
- (NSURLComponents *)initWithURL:(NSString *)arg0 resolvingAgainstBaseURL:(char)arg1;
- (void)setPercentEncodedQuery:(NSString *)arg0;
- (void)setHost:(NSString *)arg0;
- (NSString *)user;
- (void)setPassword:(NSString *)arg0;
- (void)setUser:(NSString *)arg0;
- (void)setPort:(NSNumber *)arg0;
- (NSArray *)queryItems;
- (void)setQueryItems:(NSArray *)arg0;

@end
