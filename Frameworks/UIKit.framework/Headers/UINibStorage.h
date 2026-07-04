/* Runtime dump - UINibStorage
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibStorage : NSObject
{
    NSString * bundleResourceName;
    NSString * bundleDirectoryName;
    NSBundle * bundle;
    NSString * identifierForStringsFile;
    NSData * archiveData;
    UINibDecoder * nibDecoder;
    char instantiatingForSimulator;
    char captureImplicitLoadingContextOnDecode;
}

@property (copy, nonatomic) NSString * bundleResourceName;
@property (copy, nonatomic) NSString * bundleDirectoryName;
@property (retain, nonatomic) NSBundle * bundle;
@property (copy, nonatomic) NSString * identifierForStringsFile;
@property (copy, nonatomic) NSData * archiveData;
@property (retain, nonatomic) UINibDecoder * nibDecoder;
@property (nonatomic) char instantiatingForSimulator;
@property char captureImplicitLoadingContextOnDecode;

- (void)dealloc;
- (NSBundle *)bundle;
- (NSString *)bundleResourceName;
- (void)setBundleResourceName:(NSString *)arg0;
- (NSString *)bundleDirectoryName;
- (void)setBundleDirectoryName:(NSString *)arg0;
- (void)setBundle:(NSBundle *)arg0;
- (NSString *)identifierForStringsFile;
- (void)setIdentifierForStringsFile:(NSString *)arg0;
- (NSData *)archiveData;
- (void)setArchiveData:(NSData *)arg0;
- (UINibDecoder *)nibDecoder;
- (void)setNibDecoder:(UINibDecoder *)arg0;
- (char)instantiatingForSimulator;
- (void)setInstantiatingForSimulator:(char)arg0;
- (char)captureImplicitLoadingContextOnDecode;
- (void)setCaptureImplicitLoadingContextOnDecode:(char)arg0;

@end
