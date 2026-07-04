/* Runtime dump - MFMimeCharset
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeCharset : NSObject
{
    unsigned long _encoding;
    NSString * _primaryLanguage;
    NSString * _charsetName;
    id _coversLargeUnicodeSubset;
    id _useBase64InHeaders;
    id _canBeUsedForOutgoingMessages;
}

+ (NSSet *)preferredMimeCharset;
+ (MFMimeCharset *)allMimeCharsets:(char)arg0;
+ (MFMimeCharset *)allMimeCharsets;
+ (NSString *)charsetForEncoding:(unsigned long)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)primaryLanguage;
- (NSString *)displayName;
- (void)_setPrimaryLanguage:(NSString *)arg0;
- (MFMimeCharset *)initWithEncoding:(unsigned long)arg0;
- (char)canBeUsedForOutgoingMessages;
- (char)coversLargeUnicodeSubset;
- (char)useBase64InHeaders;
- (NSString *)charsetName;
- (unsigned long)encoding;

@end
