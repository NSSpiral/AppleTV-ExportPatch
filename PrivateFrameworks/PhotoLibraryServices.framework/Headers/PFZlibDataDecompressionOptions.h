/* Runtime dump - PFZlibDataDecompressionOptions
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataDecompressionOptions : NSObject
{
    char _decompressAllAtOnce;
    int _windowBits;
    id _createBuffer;
    id _growData;
}

@property (nonatomic) int windowBits;
@property (copy, nonatomic) id createBuffer;
@property (copy, nonatomic) id growData;
@property (nonatomic) char decompressAllAtOnce;

+ (PFZlibDataDecompressionOptions *)defaultOptions;

- (void).cxx_destruct;
- (int)windowBits;
- (void)setWindowBits:(int)arg0;
- (void)setCreateBuffer:(NSObject *)arg0;
- (void)setGrowData:(NSData *)arg0;
- (NSObject *)createBuffer;
- (NSData *)growData;
- (char)decompressAllAtOnce;
- (void)setDecompressAllAtOnce:(char)arg0;

@end
