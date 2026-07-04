/* Runtime dump - SCROBrailleChunk
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleChunk : NSObject <NSCopying>
{
    NSString * _text;
    NSString * _overrideText;
    NSString * _language;
    int _contractionMode;
    char _showEightDot;
    char _isFocused;
    char _isTechnical;
    char _hasTextSelection;
    struct _NSRange _textSelection;
    int _token;
    char _showDotsSevenAndEight;
    NSMutableAttributedString * _brailleString;
    struct _NSRange _brailleSelection;
}

@property (readonly, nonatomic) NSString * language;

+ (void)initialize;

- (void)dealloc;
- (NSString *)description;
- (SCROBrailleChunk *)copyWithZone:(struct _NSZone *)arg0;
- (char)hasSelection;
- (NSString *)language;
- (int)token;
- (SCROBrailleChunk *)initWithText:(NSString *)arg0 overrideText:(NSString *)arg1 language:(NSString *)arg2 selection:(struct _NSRange *)arg3 token:(int)arg4 focused:(char)arg5 contractionMode:(int)arg6 showEightDot:(char)arg7 showDotsSevenAndEight:(char)arg8 technical:(char)arg9;
- (SCROBrailleChunk *)initWithText:(NSString *)arg0 language:(NSString *)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(char)arg4 contractionMode:(int)arg5 showEightDot:(char)arg6 showDotsSevenAndEight:(char)arg7 technical:(char)arg8;
- (NSString *)_tableIdentifierForLanguage:(NSString *)arg0;
- (void)_translateAsTechnicalTextWithPrimaryTable:(char)arg0;
- (void)_translateAsLiteraryTextWithPrimaryTable:(char)arg0;
- (SCROBrailleChunk *)initWithText:(NSString *)arg0 language:(NSString *)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(char)arg4 contractionMode:(int)arg5 showEightDot:(char)arg6 showDotsSevenAndEight:(char)arg7;
- (char)focused;
- (char)isFocusedOrSelected;
- (int)locationForIndex:(int)arg0;
- (NSObject *)brailleWithIBeamLocation:(int *)arg0 selection:(struct _NSRange *)arg1;
- (void)translate;

@end
