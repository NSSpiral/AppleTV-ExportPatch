/* Runtime dump - TSPDirectoryPackageDataWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter>
{
    NSURL * _URL;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)writeData:(NSData *)arg0 toRelativePath:(NSString *)arg1 allowEncryption:(char)arg2 error:(id *)arg3;
- (NSString *)targetDataURLForPath:(NSString *)arg0;
- (struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(NSString *)arg0;
- (TSPDirectoryPackageDataWriter *)init;
- (TSPDirectoryPackageDataWriter *)initWithURL:(NSString *)arg0;
- (void).cxx_destruct;

@end
