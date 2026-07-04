/* Runtime dump - CSIBitmapWrapper
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIBitmapWrapper : NSObject
{
    struct CGContext * _bitmapContext;
    NSData * _pixelData;
    NSData * _rawData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long _rowbytes;
    char _allowsMultiPassEncoding;
    unsigned int _imageAlpha;
}

@property (nonatomic) unsigned int pixelFormat;
@property char allowsMultiPassEncoding;

- (void)dealloc;
- (unsigned int)width;
- (unsigned int)height;
- (unsigned int)pixelFormat;
- (void)setPixelFormat:(unsigned int)arg0;
- (NSData *)compressedData:(char)arg0 usedEncoding:(int *)arg1 andRowChunkSize:(unsigned int *)arg2;
- (char)allowsMultiPassEncoding;
- (unsigned int)sourceImageAlpha;
- (unsigned long)rowbytes;
- (void)setAllowsMultiPassEncoding:(char)arg0;
- (struct CGContext *)bitmapContext;
- (NSData *)pixelData;
- (CSIBitmapWrapper *)initWithPixelWidth:(unsigned int)arg0 pixelHeight:(unsigned int)arg1;
- (void)setSourceAlphaInfo:(unsigned int)arg0;
- (void)setPixelData:(NSData *)arg0;
- (void)finalize;

@end
