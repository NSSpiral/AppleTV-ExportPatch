/* Runtime dump - TSWPTranscriber
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTranscriber : NSObject
{
    NSString * _displayName;
    NSString * _identifier;
    NSString * _transformIdentifier;
    NSLocale * _romanizationLocale;
}

@property (readonly) NSLocale * romanizationLocale;

+ (NSString *)transcriberWithIdentifier:(NSString *)arg0 displayName:(NSString *)arg1 romanizationLocaleID:(NSObject *)arg2 transformIdentifier:(NSString *)arg3;

- (TSWPTranscriber *)initWithIdentifier:(NSString *)arg0 displayName:(NSString *)arg1 romanizationLocaleID:(NSObject *)arg2 transformIdentifier:(NSString *)arg3;
- (NSString *)transcribeText:(NSString *)arg0 withLocale:(NSObject *)arg1;
- (NSString *)transcribeText:(NSString *)arg0;
- (NSLocale *)romanizationLocale;
- (void)dealloc;

@end
