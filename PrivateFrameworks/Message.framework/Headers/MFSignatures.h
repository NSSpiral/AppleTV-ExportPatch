/* Runtime dump - MFSignatures
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSignatures : NSObject

+ (MFSignatures *)sharedInstance;
+ (NSString *)signatureMarkupFormat:(NSString *)arg0;
+ (NSString *)signaturePlainTextFormat:(NSString *)arg0;
+ (MFSignatures *)stripSignatureMarkup:(id)arg0;

- (void)dealloc;
- (MFSignatures *)init;
- (void)setSignature:(NSData *)arg0;
- (NSData *)signature;
- (NSString *)_modelSpecificLocalizedStringKeyForKey:(NSString *)arg0;
- (id)_getValue:(NSValue *)arg0;
- (NSObject *)defaultSignature;
- (void)_setValue:(NSValue *)arg0 value:(void *)arg1;
- (NSNumber *)signatureForAccount:(NSObject *)arg0;
- (char)useAccountSignatures;
- (void)setSignature:(NSData *)arg0 forAccount:(NSObject *)arg1;
- (NSString *)signatureForSendingEmailAddress:(NSString *)arg0;
- (void)clearSignature;
- (void)setUseAccountSignatures:(char)arg0;
- (void)setSignature:(NSData *)arg0 forEmailAddress:(NSString *)arg1;
- (NSString *)signatureMarkupForSendingEmailAddress:(NSString *)arg0;
- (NSString *)signaturePlainTextForSendingEmailAddress:(NSString *)arg0;

@end
