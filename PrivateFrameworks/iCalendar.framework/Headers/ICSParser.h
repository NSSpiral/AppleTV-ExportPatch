/* Runtime dump - ICSParser
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSParser : NSObject
{
    int _options;
    ICSTokenizer * _lexer;
    NSData * _data;
}

@property (readonly) ICSTokenizer * lexer;

+ (NSData *)entitiesFromNSData:(NSData *)arg0 options:(int)arg1;

- (void)dealloc;
- (ICSParser *)initWithData:(NSData *)arg0 options:(unsigned int)arg1;
- (void)parseParameter:(id)arg0;
- (char)createPropertyType:(int)arg0 component:(_UIDatePickerComponent *)arg1 withName:(NSString *)arg2;
- (id)makeComponent:(char *)arg0;
- (void)parseComponent:(id)arg0;
- (char)parseProperty:(NSObject *)arg0;
- (NSData *)parseData;
- (ICSTokenizer *)lexer;

@end
