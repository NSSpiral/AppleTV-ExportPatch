/* Runtime dump - TSDInstantAlphaBinaryBitmap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInstantAlphaBinaryBitmap : NSObject
{
    int mWidth;
    int mHeight;
    int mRowBytes;
    char * mData;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int rowBytes;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) char * data;

- (TSDInstantAlphaBinaryBitmap *)initWithWidth:(int)arg0 height:(int)arg1 rowBytes:(int)arg2;
- (TSDInstantAlphaBinaryBitmap *)initWithWidth:(int)arg0 height:(int)arg1;
- (void)unionWithBitmap:(id)arg0;
- (id)medianBitmap;
- (int)rowBytes;
- (void)dealloc;
- (char *)data;
- (int)width;
- (int)height;

@end
