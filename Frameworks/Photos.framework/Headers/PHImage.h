/* Runtime dump - PHImage
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImage : NSObject
{
    char _isPlaceholder;
    UIImage * _uiImage;
    NSData * _data;
    unsigned int _width;
    unsigned int _height;
    unsigned int _bytesPerRow;
    unsigned int _dataWidth;
    unsigned int _dataHeight;
    unsigned int _dataOffset;
    int _format;
}

@property (readonly, nonatomic) UIImage * uiImage;
@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int bytesPerRow;
@property (readonly, nonatomic) unsigned int dataWidth;
@property (readonly, nonatomic) unsigned int dataHeight;
@property (readonly, nonatomic) unsigned int dataOffset;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) char isPlaceholder;

+ (UIImage *)imageWithUIImage:(UIImage *)arg0 format:(int)arg1 isPlaceholder:(char)arg2;
+ (NSData *)imageWithData:(NSData *)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 dataWidth:(unsigned int)arg4 dataHeight:(unsigned int)arg5 dataOffset:(unsigned int)arg6 format:(int)arg7 isPlaceholder:(char)arg8;

- (unsigned int)bytesPerRow;
- (UIImage *)uiImage;
- (PHImage *)initWithUIImage:(UIImage *)arg0 format:(int)arg1 isPlaceholder:(char)arg2;
- (PHImage *)initWithData:(NSData *)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 dataWidth:(unsigned int)arg4 dataHeight:(unsigned int)arg5 dataOffset:(unsigned int)arg6 format:(int)arg7 isPlaceholder:(char)arg8;
- (unsigned int)dataWidth;
- (unsigned int)dataHeight;
- (unsigned int)dataOffset;
- (NSString *)description;
- (NSData *)data;
- (unsigned int)width;
- (unsigned int)height;
- (void).cxx_destruct;
- (char)isPlaceholder;
- (int)format;

@end
