/* Runtime dump - MFMixedMessageFragment
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMixedMessageFragment : NSObject
{
    NSString * _markupString;
    NSData * _markupData;
    NSString * _mimeType;
    NSString * _textEncodingName;
    NSURL * _baseURL;
}

- (MFMixedMessageFragment *)initWithMarkupString:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (MFMixedMessageFragment *)initWithMarkupData:(NSData *)arg0 textEncodingName:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (NSData *)markupData;
- (NSString *)encodingName;
- (void)dealloc;
- (NSString *)description;
- (NSString *)mimeType;
- (NSURL *)baseURL;
- (NSString *)markupString;

@end
