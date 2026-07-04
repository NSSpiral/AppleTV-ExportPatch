/* Runtime dump - CalLogFileWriter
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogFileWriter : CalLogWriter
{
    NSString * _path;
    int _fileDescriptor;
    char _fileDescriptorIsValid;
}

@property (retain, nonatomic) NSString * path;
@property (nonatomic) int fileDescriptor;
@property (nonatomic) char fileDescriptorIsValid;

- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (CalLogFileWriter *)initWithParameters:(NSDictionary *)arg0;
- (void)setFileDescriptorIsValid:(char)arg0;
- (char)fileDescriptorIsValid;
- (int)fileDescriptor;
- (void)write:(char *)arg0;
- (void)setFileDescriptor:(int)arg0;

@end
