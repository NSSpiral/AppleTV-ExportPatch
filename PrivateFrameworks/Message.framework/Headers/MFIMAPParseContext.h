/* Runtime dump - MFIMAPParseContext
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPParseContext : NSObject
{
    MFIMAPConnection * _connection;
    MFIMAPResponse * _response;
    char * _start;
    char * _end;
    char * _originalStart;
    char * _originalEnd;
    char * _lastLoggedChar;
    char _invalid;
}

+ (char)hadWarningOrError;
+ (void)resetWarningOrError;

- (void)increment;
- (void)dealloc;
- (char)isValid;
- (char *)start;
- (char *)end;
- (MFIMAPResponse *)response;
- (void)setStart:(char *)arg0;
- (void)setEnd:(char *)arg0;
- (MFIMAPConnection *)connection;
- (MFIMAPParseContext *)initWithConnection:(MFIMAPConnection *)arg0 response:(MFIMAPResponse *)arg1 start:(char *)arg2 end:(char *)arg3;
- (unsigned char)lookAhead;
- (char)parseSpace;
- (void)emitWarning:(id)arg0;
- (id)copyAtom;
- (void)emitError:(NSError *)arg0;
- (char)getNumber:(unsigned long long *)arg0;
- (char *)nextSeparator;
- (char)match:(char *)arg0;
- (NSString *)copyLiteralString;
- (NSArray *)copyArray;
- (NSString *)copyQuotedString;
- (NSNumber *)copyNumber;
- (NSString *)copyNilOrString;
- (NSString *)copyAString;
- (char)match:(char *)arg0 upToSpecial:(char *)arg1;
- (NSObject *)copyStringFrom:(char *)arg0 to:(char *)arg1 withCaseOption:(int)arg2;
- (void)logReadChars;
- (id)copyDateTime;
- (struct __CFArray *)copyArrayAllowingNulls:(char)arg0;
- (char)literalWithResponseConsumer:(MFIMAPResponse *)arg0 section:(UITableViewSection *)arg1;
- (id)copyLiteral;
- (NSSet *)copyMessageSet;

@end
