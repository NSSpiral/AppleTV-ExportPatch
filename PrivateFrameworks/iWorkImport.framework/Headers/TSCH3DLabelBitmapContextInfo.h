/* Runtime dump - TSCH3DLabelBitmapContextInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying>
{
    char mIsPrinting;
    char mIsPDF;
    char mHasSuppressedBackgrounds;
}

@property (readonly, nonatomic) char isPDF;
@property (readonly, nonatomic) char isPrinting;
@property (readonly, nonatomic) char hasSuppressedBackgrounds;

+ (TSCH3DLabelBitmapContextInfo *)contextInfoWithIsPrinting:(char)arg0 isPDF:(char)arg1 hasSuppressedBackgrounds:(char)arg2;
+ (NSObject *)contextInfoForScene:(NSObject *)arg0;
+ (void)setIsPrinting:(char)arg0 isPDF:(char)arg1 hasSuppressedBackgrounds:(char)arg2 forScene:(NSObject *)arg3;
+ (NSString *)context;

- (TSCH3DLabelBitmapContextInfo *)initWithIsPrinting:(char)arg0 isPDF:(char)arg1 hasSuppressedBackgrounds:(char)arg2;
- (void)setTSDCGContextInfoForCGContext:(struct CGContext *)arg0;
- (char)hasSuppressedBackgrounds;
- (char)isPrinting;
- (char)isPDF;
- (TSCH3DLabelBitmapContextInfo *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DLabelBitmapContextInfo *)copyWithZone:(struct _NSZone *)arg0;

@end
