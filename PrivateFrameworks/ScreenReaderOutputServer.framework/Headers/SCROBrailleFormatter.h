/* Runtime dump - SCROBrailleFormatter
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleFormatter : NSObject <NSCopying>
{
    struct __CFArray * _chunkArray;
    struct __CFDictionary * _chunkDictionary;
    struct __CFDictionary * _tokenDictionary;
    int _firstToken;
    int _lastToken;
    int _contractionMode;
    char _showEightDot;
    int _displayMode;
    id _appToken;
    NSAttributedString * _statusText;
    char _currentUnread;
    char _anyUnread;
    char _showDotsSevenAndEight;
    int _lineFocus;
}

@property (nonatomic) int lineFocus;

- (void)dealloc;
- (SCROBrailleFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (int)displayMode;
- (void)setDisplayMode:(int)arg0;
- (NSAttributedString *)statusText;
- (void)setStatusText:(NSAttributedString *)arg0;
- (NSObject *)deepCopyWithZone:(struct _NSZone *)arg0;
- (char)anyUnread;
- (char)currentUnread;
- (void)addText:(NSString *)arg0 selection:(struct _NSRange *)arg1 token:(int)arg2 focused:(char)arg3;
- (char)showEightDot;
- (int)contractionMode;
- (SCROBrailleFormatter *)initWithContractionMode:(int)arg0 showEightDot:(char)arg1 showDotsSevenAndEight:(char)arg2;
- (void)setLineFocus:(int)arg0;
- (void)addText:(NSString *)arg0 overrideText:(NSString *)arg1 language:(NSString *)arg2 selection:(struct _NSRange *)arg3 token:(int)arg4 focused:(char)arg5 technical:(char)arg6;
- (NSString *)appToken;
- (int)firstToken;
- (int)lastToken;
- (void)setCurrentUnread:(char)arg0;
- (void)setAnyUnread:(char)arg0;
- (void)addText:(NSString *)arg0 selection:(struct _NSRange *)arg1 token:(int)arg2 focused:(char)arg3 technical:(char)arg4;
- (void)setAppToken:(NSString *)arg0;
- (void)addText:(NSString *)arg0 language:(NSString *)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(char)arg4 technical:(char)arg5;
- (char)showDotsSevenAndEight;
- (int)lineFocus;
- (void)addText:(NSString *)arg0 language:(NSString *)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(char)arg4;
- (struct __CFArray *)chunkArray;
- (struct __CFDictionary *)chunkDictionary;
- (void)translate;

@end
