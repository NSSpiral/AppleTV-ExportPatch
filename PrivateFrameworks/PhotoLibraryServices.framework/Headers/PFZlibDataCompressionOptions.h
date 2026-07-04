/* Runtime dump - PFZlibDataCompressionOptions
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataCompressionOptions : NSObject
{
    int _compressionLevel;
    int _strategy;
    int _windowBits;
    int _memoryLevel;
    int _chunkSize;
}

@property (nonatomic) int compressionLevel;
@property (nonatomic) int strategy;
@property (nonatomic) int windowBits;
@property (nonatomic) int memoryLevel;
@property (nonatomic) int chunkSize;

+ (PFZlibDataCompressionOptions *)defaultOptions;

- (void)setCompressionLevel:(int)arg0;
- (void)setCompressionStrategy:(int)arg0;
- (int)compressionLevel;
- (int)strategy;
- (void)setStrategy:(int)arg0;
- (int)windowBits;
- (void)setWindowBits:(int)arg0;
- (int)memoryLevel;
- (void)setMemoryLevel:(int)arg0;
- (int)chunkSize;
- (void)setChunkSize:(int)arg0;

@end
