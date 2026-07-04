/* Runtime dump - TSUZipFileDescriptorWrapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipFileDescriptorWrapper : NSObject
{
    NSObject<OS_dispatch_group> * _accessGroup;
    int _fileDescriptor;
    <TSUReadChannel> * _readChannel;
}

@property (readonly, nonatomic) int fileDescriptor;
@property (readonly, nonatomic) <TSUReadChannel> * readChannel;

- (<TSUReadChannel> *)readChannel;
- (void)waitForAccessToEnd;
- (void)beginAccess;
- (void)endAccess;
- (void)dealloc;
- (TSUZipFileDescriptorWrapper *)init;
- (void).cxx_destruct;
- (int)fileDescriptor;
- (TSUZipFileDescriptorWrapper *)initWithFileDescriptor:(int)arg0;

@end
