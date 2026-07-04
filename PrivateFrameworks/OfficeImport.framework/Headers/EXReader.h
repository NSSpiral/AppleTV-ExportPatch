/* Runtime dump - EXReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXReader : OCXReader
{
    NSString * mTemporaryDirectory;
}

@property (retain, nonatomic) NSString * temporaryDirectory;

- (void)dealloc;
- (NSObject *)read;
- (id)defaultPassphrase;
- (NSString *)temporaryDirectory;
- (void)setTemporaryDirectory:(NSString *)arg0;

@end
