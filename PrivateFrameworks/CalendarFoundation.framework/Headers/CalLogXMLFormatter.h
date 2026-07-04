/* Runtime dump - CalLogXMLFormatter
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogXMLFormatter : NSObject <CalLogFormatter>
{
    char _shouldPrettyPrint;
    char _useTinyElementNames;
}

@property (nonatomic) char shouldPrettyPrint;
@property (nonatomic) char useTinyElementNames;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (CalLogXMLFormatter *)init;
- (NSString *)newFormattedString:(NSString *)arg0;
- (char)shouldPrettyPrint;
- (void)setShouldPrettyPrint:(char)arg0;
- (char)useTinyElementNames;
- (void)setUseTinyElementNames:(char)arg0;

@end
