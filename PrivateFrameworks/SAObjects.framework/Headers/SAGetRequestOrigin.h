/* Runtime dump - SAGetRequestOrigin
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * desiredAccuracy;
@property (copy, nonatomic) NSNumber * maxAge;
@property (copy, nonatomic) NSNumber * searchTimeout;

+ (SAGetRequestOrigin *)getRequestOrigin;
+ (NSDictionary *)getRequestOriginWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)desiredAccuracy;
- (NSNumber *)searchTimeout;
- (void)setDesiredAccuracy:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)maxAge;
- (void)setMaxAge:(NSNumber *)arg0;
- (void)setSearchTimeout:(NSNumber *)arg0;

@end
