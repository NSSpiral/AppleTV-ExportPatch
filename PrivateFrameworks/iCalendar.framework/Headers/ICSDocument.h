/* Runtime dump - ICSDocument
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDocument : NSObject
{
    ICSCalendar * _calendar;
}

+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned int)arg0;
+ (void)suppressParserSyntaxErrorLogging;

- (NSDictionary *)ICSDataWithOptions:(unsigned int)arg0;
- (ICSDocument *)initWithData:(NSData *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (void)dealloc;
- (ICSCalendar *)calendar;
- (ICSDocument *)initWithCalendar:(ICSCalendar *)arg0;
- (ICSDocument *)initWithICSString:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)validate:(id *)arg0;
- (NSDictionary *)ICSStringWithOptions:(unsigned int)arg0;
- (ICSDocument *)initWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (NSString *)ICSChecksumStringForVersion:(int)arg0;
- (ICSDocument *)initWithData:(NSData *)arg0 encoding:(unsigned int)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (NSString *)ICSChecksumForVersion:(int)arg0;

@end
