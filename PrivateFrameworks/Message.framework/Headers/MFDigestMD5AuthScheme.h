/* Runtime dump - MFDigestMD5AuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDigestMD5AuthScheme : MFAuthScheme

- (NSString *)name;
- (char)canAuthenticateAccountClass:(Class)arg0 connection:(NSURLConnection *)arg1;
- (Class)authenticatorClass;
- (char)hasEncryption;
- (NSString *)humanReadableName;

@end
