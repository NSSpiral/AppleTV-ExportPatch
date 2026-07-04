/* Runtime dump - BRCDumpContext
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDumpContext : NSObject
{
    int _indentation;
    BRCTermDumper * _termDumper;
    char _liveDaemon;
    struct __sFILE * _fp;
    PQLConnection * _db;
    NSString * _indentationBaseString;
}

@property (readonly, nonatomic) PQLConnection * db;
@property (readonly, nonatomic) struct __sFILE * fp;
@property (retain, nonatomic) NSString * indentationBaseString;
@property (nonatomic) char liveDaemon;

+ (NSObject *)stringFromItemID:(NSObject *)arg0 context:(NSObject *)arg1;
+ (NSNumber *)stringFromByteCount:(long long)arg0 context:(NSObject *)arg1;
+ (NSString *)highlightedString:(NSString *)arg0 type:(int)arg1 context:(NSObject *)arg2;
+ (NSObject *)stringFromThrottleState:(int)arg0 context:(NSObject *)arg1;
+ (BRCDumpContext *)stringFromDueStamp:(unsigned long long)arg0 now:(unsigned long long)arg1 context:(NSObject *)arg2 allowsPast:(char)arg3;
+ (NSString *)stringFromItemAsString:(NSString *)arg0 context:(NSObject *)arg1;
+ (NSNumber *)stringFromByteCount:(long long)arg0 showActualByteCount:(char)arg1 suffix:(NSString *)arg2 context:(NSObject *)arg3;
+ (NSString *)stringFromErrorString:(NSString *)arg0 context:(NSObject *)arg1;
+ (NSError *)stringFromError:(NSError *)arg0 context:(NSObject *)arg1;
+ (BRCDumpContext *)stringFromBackoff:(double)arg0 context:(NSObject *)arg1;

- (void).cxx_destruct;
- (PQLConnection *)db;
- (void)writeLineWithFormat:(NSString *)arg0;
- (NSString *)highlightedString:(NSString *)arg0 type:(int)arg1;
- (void)pushIndentation;
- (char)liveDaemon;
- (void)popIndentation;
- (BRCDumpContext *)initWithFile:(struct __sFILE *)arg0 db:(int)arg1;
- (void)setLiveDaemon:(char)arg0;
- (struct __sFILE *)fp;
- (NSString *)indentationBaseString;
- (void)setIndentationBaseString:(NSString *)arg0;

@end
