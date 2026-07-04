/* Runtime dump - SAGetSessionCertificateResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData * certificate;

+ (NSURLResponse *)getSessionCertificateResponse;
+ (NSDictionary *)getSessionCertificateResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCertificate:(NSData *)arg0;
- (NSData *)certificate;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
