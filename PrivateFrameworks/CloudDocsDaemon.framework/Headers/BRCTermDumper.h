/* Runtime dump - BRCTermDumper
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTermDumper : NSObject
{
    int _fd;
    unsigned long _termWidth;
    unsigned long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    char _isatty;
    char _useColor;
}

@property (readonly, nonatomic) char isatty;
@property (readonly, nonatomic) char useColor;

+ (void)setupPagerForFd:(int)arg0;
+ (void)execPagerOnFileFd:(int)arg0;

- (void)reset;
- (BRCTermDumper *)initWithFd:(int)arg0 forceColor:(char)arg1;
- (UIColor *)startStringForFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2;
- (NSSet *)stringForReset;
- (unsigned long)_startInCString:(NSString *)arg0 fgColor:(char)arg1 bgColor:(UIColor *)arg2 attr:(int)arg3;
- (void)startFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2;
- (void)puts:(char *)arg0 len:(unsigned long)arg1;
- (void)_putsAndCrop:(char *)arg0 len:(unsigned long)arg1;
- (void)startPager;
- (void)startFgColor:(int)arg0 attr:(int)arg1;
- (void)startBgColor:(int)arg0 attr:(int)arg1;
- (void)startFgColor:(int)arg0;
- (void)startBgColor:(int)arg0;
- (void)startAttributes:(int)arg0;
- (void)changeFgColor:(int)arg0;
- (void)changeBgColor:(int)arg0;
- (void)changeAttributes:(int)arg0;
- (void)eraseEndOfLine;
- (void)eraseStartOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)cursorSave;
- (void)cursorRestore;
- (void)cursorUp:(unsigned int)arg0;
- (void)cursorDown:(unsigned int)arg0;
- (void)cursorRight:(unsigned int)arg0;
- (void)cursorLeft:(unsigned int)arg0;
- (void)startNewLine;
- (void)endLine;
- (void)puts:(char *)arg0;
- (void)write:(char *)arg0;
- (char)isatty;
- (char)useColor;

@end
