/* Runtime dump - MFPFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPFont : NSObject
{
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString * mName;
}

- (void)setFlags:(unsigned int)arg0;
- (void)dealloc;
- (float)size;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setSize:(float)arg0;
- (unsigned int)flags;
- (int)unit;
- (void)setUnit:(int)arg0;
- (struct __CTFont *)createCTFontWithGraphics:(id)arg0;

@end
