/* Runtime dump - PTPDeviceInfoDataset
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPDeviceInfoDataset : NSObject
{
    NSMutableData * _content;
    char _dirty;
    unsigned short _standardVersion;
    unsigned long _vendorExtensionID;
    unsigned short _vendorExtensionVersion;
    NSString * _vendorExtensionDescription;
    unsigned short _functionalMode;
    NSMutableArray * _operationsSupported;
    NSMutableArray * _eventsSupported;
    NSMutableArray * _devicePropertiesSupported;
    NSMutableArray * _captureFormats;
    NSMutableArray * _imageFormats;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _deviceVersion;
    NSString * _serialNumber;
    char _readOnlyObject;
}

- (void)dealloc;
- (PTPDeviceInfoDataset *)init;
- (NSString *)description;
- (PTPDeviceInfoDataset *)initWithData:(NSData *)arg0;
- (NSString *)model;
- (NSMutableData *)content;
- (void)setModel:(NSString *)arg0;
- (void)setManufacturer:(NSString *)arg0;
- (void)setSerialNumber:(NSString *)arg0;
- (NSString *)manufacturer;
- (NSString *)serialNumber;
- (NSMutableArray *)operationsSupported;
- (unsigned short)standardVersion;
- (PTPDeviceInfoDataset *)initWithMutableData:(NSMutableData *)arg0;
- (NSMutableArray *)devicePropertiesSupported;
- (void)updateContent;
- (void)setStandardVersion:(unsigned short)arg0;
- (unsigned long)vendorExtensionID;
- (void)setVendorExtensionID:(unsigned long)arg0;
- (unsigned short)vendorExtensionVersion;
- (void)setVendorExtensionVersion:(unsigned short)arg0;
- (NSString *)vendorExtensionDescription;
- (void)setVendorExtensionDescription:(NSString *)arg0;
- (unsigned short)functionalMode;
- (void)setFunctionalMode:(unsigned short)arg0;
- (void)setOperationsSupported:(NSMutableArray *)arg0;
- (NSMutableArray *)eventsSupported;
- (void)setEventsSupported:(NSMutableArray *)arg0;
- (void)setDevicePropertiesSupported:(NSMutableArray *)arg0;
- (NSMutableArray *)captureFormats;
- (void)setCaptureFormats:(NSMutableArray *)arg0;
- (NSMutableArray *)imageFormats;
- (void)setImageFormats:(NSMutableArray *)arg0;
- (id)canonicalManufacturer;
- (void)setContent:(NSMutableData *)arg0;
- (NSString *)deviceVersion;
- (void)setDeviceVersion:(NSString *)arg0;

@end
