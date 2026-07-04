/* Runtime dump - CalLogWriter
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogWriter : NSObject <CalLogWriter>
{
    <CalLogFormatter> * _formatter;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) <CalLogFormatter> * formatter;

- (<CalLogFormatter> *)formatter;
- (void)setFormatter:(<CalLogFormatter> *)arg0;
- (CalLogWriter *)init;
- (NSString *)description;
- (char)flush;
- (void).cxx_destruct;
- (CalLogWriter *)initWithParameters:(NSDictionary *)arg0;
- (void)write:(char *)arg0;

@end
