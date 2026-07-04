/* Runtime dump - TSCH3DMipmaps
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMipmaps : NSObject
{
    int mWidth;
    int mHeight;
    unsigned int mComponents;
    NSData * mData;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) unsigned int components;
@property (readonly, nonatomic) NSData * data;

+ (NSString *)mipmapPathFromPath:(NSString *)arg0;
+ (struct CGSize)optimizedMipmapLevel0Size;
+ (struct CGSize)mipmapSizeForTexturableSize:(struct CGSize)arg0;
+ (TSCH3DMipmaps *)mipmapsWithWidth:(int)arg0 height:(int)arg1 components:(unsigned int)arg2 mipmapData:(NSData *)arg3;
+ (NSData *)mipmapsFromData:(NSData *)arg0;

- (TSCH3DMipmaps *)initWithWidth:(int)arg0 height:(int)arg1 components:(unsigned int)arg2 mipmapData:(NSData *)arg3;
- (TSCH3DMipmaps *)initFromData:(NSData *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSData *)data;
- (int)width;
- (int)height;
- (char)valid;
- (unsigned int)components;
- (char)writeToFile:(NSString *)arg0;

@end
