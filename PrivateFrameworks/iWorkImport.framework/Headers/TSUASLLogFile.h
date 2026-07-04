/* Runtime dump - TSUASLLogFile
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUASLLogFile : NSObject
{
    TSUASLClient * _client;
    int _fileDescriptor;
}

@property (readonly, nonatomic) int fileDescriptor;

- (TSUASLLogFile *)initWithClient:(TSUASLClient *)arg0 fileDescriptor:(int)arg1;
- (TSUASLLogFile *)init;
- (void)close;
- (void).cxx_destruct;
- (int)fileDescriptor;

@end
