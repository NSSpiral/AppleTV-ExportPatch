/* Runtime dump - PTPDevicePropDescDataset
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPDevicePropDescDataset : NSObject
{
    unsigned short _devicePropertyCode;
    unsigned short _dataTypeCode;
    unsigned char _readWriteAttribute;
    id _factoryDefaultValue;
    id _currentValue;
    unsigned char _formFlag;
    id _minimumValue;
    id _maximumValue;
    id _stepSize;
    unsigned short _numberOfValues;
    NSMutableArray * _supportedValues;
    NSMutableData * _content;
    char _dirty;
    char _readOnlyObject;
}

- (void)dealloc;
- (PTPDevicePropDescDataset *)init;
- (NSString *)description;
- (PTPDevicePropDescDataset *)initWithData:(NSData *)arg0;
- (NSNumber *)minimumValue;
- (NSNumber *)maximumValue;
- (void)setMinimumValue:(NSNumber *)arg0;
- (void)setMaximumValue:(NSNumber *)arg0;
- (NSMutableData *)content;
- (PTPDevicePropDescDataset *)initWithMutableData:(NSMutableData *)arg0;
- (void)updateContent;
- (unsigned short)devicePropertyCode;
- (void)setDevicePropertyCode:(unsigned short)arg0;
- (unsigned short)dataTypeCode;
- (void)setDataTypeCode:(unsigned short)arg0;
- (unsigned char)readWriteAttribute;
- (void)setReadWriteAttribute:(unsigned char)arg0;
- (id)factoryDefaultValue;
- (void)setFactoryDefaultValue:(id)arg0;
- (unsigned char)formFlag;
- (void)setFormFlag:(unsigned char)arg0;
- (NSObject *)stepSize;
- (void)setStepSize:(NSObject *)arg0;
- (unsigned short)numberOfValues;
- (void)setNumberOfValues:(unsigned short)arg0;
- (void)setContent:(NSMutableData *)arg0;
- (NSMutableArray *)supportedValues;
- (void)setSupportedValues:(NSMutableArray *)arg0;
- (void)setCurrentValue:(id)arg0;
- (long long)currentValue;

@end
