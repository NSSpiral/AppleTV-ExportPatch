/* Runtime dump - FirmwareBundle
 * Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface FirmwareBundle : NSObject
{
    NSString * _bundleDescription;
    NSData * _firmwareImage;
    NSData * _hash;
    NSData * _certificate;
    NSData * _signature;
    unsigned int _productIDCode;
    unsigned int _firmwareImageBaseAddress;
    unsigned int _firmwareImageSize;
}

@property (readonly) NSData * hash;
@property (readonly) NSData * firmwareImage;
@property (readonly) NSData * signature;
@property (readonly) NSData * certificate;
@property (readonly) unsigned int productIDCode;
@property (readonly) unsigned int firmwareImageBaseAddress;
@property (readonly) unsigned int firmwareImageSize;

+ (FirmwareBundle *)defaultBundlePath;

- (void)dealloc;
- (NSData *)hash;
- (NSString *)description;
- (FirmwareBundle *)initWithBundle:(NSBundle *)arg0;
- (NSData *)signature;
- (NSData *)certificate;
- (FirmwareBundle *)initWithBundlePath:(NSString *)arg0;
- (unsigned int)productIDCode;
- (void)parseFileName:(NSString *)arg0 intoPath:(id *)arg1 andExtension:(id *)arg2;
- (NSString *)parseSRECFile:(NSString *)arg0 withDefaultByteValue:(unsigned char)arg1;
- (NSString *)parseMSP430TXTFile:(NSString *)arg0 withDefaultByteValue:(unsigned char)arg1;
- (NSData *)parseResourceFileIntoData:(NSData *)arg0;
- (void)parseSRECLine:(id)arg0 intoImage:(UIImage *)arg1;
- (FirmwareBundle *)initWithBundleName:(NSString *)arg0;
- (NSData *)firmwareImage;
- (unsigned int)firmwareImageBaseAddress;
- (unsigned int)firmwareImageSize;

@end
