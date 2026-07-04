/* Runtime dump - TSDGLFrameBufferTextureLookupInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLFrameBufferTextureLookupInfo : NSObject
{
    unsigned int _attachment;
    int _indexOnAttachment;
    unsigned int _textureName;
    NSString * _name;
    struct CGSize _textureSize;
}

@property (nonatomic) unsigned int attachment;
@property (nonatomic) int indexOnAttachment;
@property (readonly, nonatomic) unsigned int textureName;
@property (readonly, nonatomic) struct CGSize textureSize;
@property (readonly, nonatomic) NSString * name;

+ (NSObject *)textureLookupInfoWithAttachment:(unsigned int)arg0 indexOnAttachment:(int)arg1 textureName:(unsigned int)arg2 textureSize:(struct CGSize)arg3 name:(NSString *)arg4;

- (TSDGLFrameBufferTextureLookupInfo *)initWithAttachment:(unsigned int)arg0 indexOnAttachment:(int)arg1 textureName:(unsigned int)arg2 textureSize:(struct CGSize)arg3 name:(NSString *)arg4;
- (int)indexOnAttachment;
- (void)setIndexOnAttachment:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (void)setAttachment:(unsigned int)arg0;
- (unsigned int)attachment;
- (unsigned int)textureName;
- (struct CGSize)textureSize;

@end
