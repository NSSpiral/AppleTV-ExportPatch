/* Runtime dump - OADPath
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPath : NSObject
{
    struct CGSize mSize;
    NSMutableArray * mElements;
    int mFillMode;
    char mStroked;
}

- (void)dealloc;
- (struct CGSize)size;
- (OADPath *)init;
- (void)setSize:(struct CGSize)arg0;
- (void)setFillMode:(int)arg0;
- (void).cxx_construct;
- (void)addElement:(NSObject *)arg0;
- (unsigned int)elementCount;
- (NSObject *)elementAtIndex:(unsigned int)arg0;
- (char)stroked;
- (void)setStroked:(char)arg0;
- (int)fillMode;

@end
