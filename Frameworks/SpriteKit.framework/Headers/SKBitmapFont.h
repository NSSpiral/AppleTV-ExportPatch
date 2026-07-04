/* Runtime dump - SKBitmapFont
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKBitmapFont : NSObject <NSCoding>
{
    NSString * _fontName;
    NSString * _filePath;
    float _lineHeight;
    float _baseLine;
    NSArray * _characterSprites;
    struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > > _characterSpriteByChar;
    struct map<unsigned short, float, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, float> > > _characterAdvanceByChar;
    struct map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > > _characterKerningByCharPair;
    char _internal;
    NSString * _fileName;
}

+ (SKBitmapFont *)fontForFileNamed:(id)arg0;
+ (NSObject *)fontWithTexture:(NSObject *)arg0 fontDataString:(NSString *)arg1;
+ (SKBitmapFont *)_fontForFileNamed:(id)arg0;

- (char)loadFontWithTexture:(NSObject *)arg0 fontDataString:(NSString *)arg1;
- (id)spriteForCharacterNamed:(unsigned short)arg0;
- (float)advanceForCharacterNamed:(unsigned short)arg0;
- (float)kerningForCharacterNamed:(unsigned short)arg0 followedBy:(unsigned short)arg1;
- (SKBitmapFont *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKBitmapFont *)init;
- (float)lineHeight;
- (NSString *)fontName;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
