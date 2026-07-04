/* Runtime dump - MFNTLMAuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFNTLMAuthScheme : MFAuthScheme

- (NSString *)name;
- (Class)authenticatorClass;
- (char)hasEncryption;
- (NSString *)humanReadableName;
- (char)sendsPlainTextPasswords;

@end
